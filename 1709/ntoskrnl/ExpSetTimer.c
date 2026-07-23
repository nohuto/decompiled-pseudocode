/*
 * XREFs of ExpSetTimer @ 0x1400E1930
 * Callers:
 *     NtSetTimerEx @ 0x1400E17C0 (NtSetTimerEx.c)
 *     NtSetTimer @ 0x140286C38 (NtSetTimer.c)
 * Callees:
 *     KeInitializeApc @ 0x140025DA0 (KeInitializeApc.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     PoDestroyReasonContext @ 0x1400B0710 (PoDestroyReasonContext.c)
 *     PsInsertVirtualizedTimer @ 0x1400B2880 (PsInsertVirtualizedTimer.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     ExpCancelTimer @ 0x1400E1D98 (ExpCancelTimer.c)
 *     KeSetCoalescableTimer @ 0x1400E1E80 (KeSetCoalescableTimer.c)
 *     ObpDeferObjectDeletion @ 0x1401226B0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 *     ExpCalcDueTimeWithDelay @ 0x1402869CC (ExpCalcDueTimeWithDelay.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ExpCheckWakeTimerAccess @ 0x1405F15A0 (ExpCheckWakeTimerAccess.c)
 */

NTSTATUS __fastcall ExpSetTimer(
        void *a1,
        KPROCESSOR_MODE a2,
        PKSPIN_LOCK *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        ULONG Period,
        ULONG TolerableDelay,
        _BYTE *a10)
{
  char v11; // r15
  NTSTATUS result; // eax
  char v13; // bl
  __int64 v14; // r12
  _KPROCESS *Process; // r13
  PVOID v16; // rdi
  KSPIN_LOCK *v17; // r14
  __int64 v18; // r9
  int v19; // r14d
  ULONG v20; // r11d
  ULONG v21; // ecx
  struct _KDPC *v22; // r10
  PKSPIN_LOCK *v23; // r8
  PKSPIN_LOCK v24; // rbx
  unsigned __int64 v25; // rdx
  char *v26; // rdi
  _BYTE *v27; // r15
  _QWORD *v28; // rbx
  signed __int64 v29; // rax
  _QWORD *v30; // rax
  struct _KTHREAD *v31; // rbx
  _BYTE *v32; // rcx
  char *v33; // rax
  void **p_StackBase; // rbx
  char **v35; // rdx
  PRTL_BALANCED_NODE v36; // rax
  PRTL_BALANCED_NODE v37; // r14
  _QWORD *v38; // rdi
  _QWORD *v39; // rax
  char v40; // al
  int v41; // ebx
  PRTL_BALANCED_NODE v42; // rax
  PRTL_BALANCED_NODE v43; // rbx
  unsigned __int8 v44; // al
  KSPIN_LOCK *v45; // rax
  unsigned int v46; // edx
  unsigned int v47; // edx
  unsigned int v48; // eax
  _QWORD *v49; // rdi
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rcx
  char v53; // [rsp+40h] [rbp-88h]
  char v54; // [rsp+41h] [rbp-87h]
  PVOID Object; // [rsp+48h] [rbp-80h] BYREF
  int v56; // [rsp+50h] [rbp-78h]
  struct _KDPC *v57; // [rsp+58h] [rbp-70h]
  int v58; // [rsp+60h] [rbp-68h]
  PKSPIN_LOCK p_StackLimit; // [rsp+68h] [rbp-60h]
  __int64 CurrentIrql; // [rsp+70h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-50h]
  unsigned int ProcessTimerDelay; // [rsp+80h] [rbp-48h]
  PKSPIN_LOCK SpinLock; // [rsp+88h] [rbp-40h]

  v11 = 0;
  result = ObReferenceObjectByHandle(a1, 2u, ExTimerObjectType, a2, &Object, 0LL);
  v56 = result;
  if ( result < 0 )
    return result;
  v13 = 0;
  v53 = 0;
  CurrentThread = 0LL;
  v14 = a6;
  if ( a6 )
  {
    if ( a7 )
    {
      v41 = ExpCheckWakeTimerAccess((unsigned __int8)KeGetCurrentThread()->gap0[10]);
      v56 = v41;
      if ( v41 )
      {
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        return v41;
      }
      v13 = 0;
    }
    if ( (int)qword_140366340 >= 2 || byte_140366313 )
    {
      v13 = 1;
      v53 = 1;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v36 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0);
      v37 = v36;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, (__int64)v36, (__int16 *)&ExpWakeTimerLock);
      if ( v37 )
        BYTE2(v37[1].Left) |= 1u;
    }
    else
    {
      v56 = 1073741861;
      v14 = 0LL;
    }
  }
  v57 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v54 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( a2 && (*(_DWORD *)&Process->0 & 0x10) != 0 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)&Process[2].IdealNode[16]);
    v11 = 1;
    v54 = 1;
  }
  v16 = Object;
  v17 = (KSPIN_LOCK *)((char *)Object + 64);
  SpinLock = (PKSPIN_LOCK)((char *)Object + 64);
  KxAcquireSpinLock((PKSPIN_LOCK)Object + 8);
  if ( !v13 && *((_QWORD *)v16 + 32) )
  {
    KxReleaseSpinLock(v17);
    if ( v11 )
      KxReleaseSpinLock((PKSPIN_LOCK)&Process[2].IdealNode[16]);
    __writecr8((unsigned __int8)CurrentIrql);
    v53 = 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v42 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0);
    v43 = v42;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, (__int64)v42, (__int16 *)&ExpWakeTimerLock);
    if ( v43 )
      BYTE2(v43[1].Left) |= 1u;
    v44 = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(CurrentIrql) = v44;
    if ( v11 )
      KxAcquireSpinLock((PKSPIN_LOCK)&Process[2].IdealNode[16]);
    KxAcquireSpinLock(v17);
    v16 = Object;
  }
  v19 = ExpCancelTimer((PKTIMER)v16) + 1;
  v58 = *((_DWORD *)v16 + 1);
  v20 = Period;
  *((_DWORD *)v16 + 60) = Period;
  *((_DWORD *)v16 + 61) = 0;
  v21 = TolerableDelay;
  *((_DWORD *)v16 + 80) = TolerableDelay;
  if ( a4 )
  {
    v31 = KeGetCurrentThread();
    KeInitializeApc((__int64)Object + 72, (__int64)v31, 2, (__int64)ExpTimerApcRoutine, 0LL, a4, a2, a5);
    p_StackLimit = (PKSPIN_LOCK)&v31[1].StackLimit;
    KxAcquireSpinLock((PKSPIN_LOCK)&v31[1].StackLimit);
    v32 = Object;
    v33 = (char *)Object + 224;
    p_StackBase = &v31[1].StackBase;
    v35 = (char **)p_StackBase[1];
    if ( *v35 != (char *)p_StackBase )
      __fastfail(3u);
    *(_QWORD *)v33 = p_StackBase;
    *((_QWORD *)v33 + 1) = v35;
    *v35 = v33;
    p_StackBase[1] = v33;
    v32[304] |= 1u;
    KxReleaseSpinLock(p_StackLimit);
    v22 = (struct _KDPC *)((char *)Object + 160);
    v57 = (struct _KDPC *)((char *)Object + 160);
    --v19;
    v20 = 0;
    Period = 0;
    v21 = TolerableDelay;
  }
  else
  {
    v22 = 0LL;
  }
  LOBYTE(v18) = 0;
  v23 = a3;
  v24 = *a3;
  p_StackLimit = *a3;
  v25 = Process[1].Affinity.Bitmap[16];
  if ( v11 )
  {
    v30 = (char *)Object + 280;
    if ( !*((_QWORD *)Object + 35) )
    {
      if ( v25 )
      {
        LOBYTE(v18) = (*(_DWORD *)(v25 + 1304) & 0x40000) != 0 && *(_DWORD *)(v25 + 856);
        v30 = (char *)Object + 280;
      }
      PsInsertVirtualizedTimer((__int64)Process, (_QWORD *)Object + 36, 1, v18, v30);
      v20 = Period;
      v21 = TolerableDelay;
      v23 = a3;
      v22 = v57;
    }
    _InterlockedIncrement((volatile signed __int32 *)&Process[2].IdealNode[8]);
    if ( (*(_DWORD *)&Process->0 & 0x10) != 0 )
    {
      if ( Process->ProcessTimerDelay )
      {
        ProcessTimerDelay = Process->ProcessTimerDelay;
        v45 = (KSPIN_LOCK *)ExpCalcDueTimeWithDelay(v23);
        v24 = v45;
        p_StackLimit = v45;
        v47 = v46 / 0x2710;
        if ( v20 && v47 + v20 > v20 )
        {
          v20 += v47;
          *((_DWORD *)v16 + 60) += v47;
          *((_DWORD *)v16 + 61) = v47;
        }
        else
        {
          v48 = *((_DWORD *)v16 + 60);
          if ( v48 )
          {
            v22 = v57;
            if ( v48 + v47 > v48 )
            {
              *((_DWORD *)v16 + 60) = v48 + v47;
              *((_DWORD *)v16 + 61) = v47;
            }
            goto LABEL_75;
          }
        }
        v22 = v57;
LABEL_75:
        v21 = TolerableDelay;
      }
    }
  }
  v26 = (char *)Object;
  v27 = (char *)Object + 304;
  if ( (*((_BYTE *)Object + 304) & 2) != 0 )
  {
    *((_QWORD *)Object + 39) = v24;
    if ( SHIDWORD(p_StackLimit) >= 0 )
      v26[248] = 1;
    else
      v26[248] = (v14 != 0) + 2;
  }
  else
  {
    KeSetCoalescableTimer((PKTIMER)Object, (LARGE_INTEGER)v24, v20, v21, v22);
    if ( v14 )
    {
      _interlockedbittestandset((volatile signed __int32 *)v26, 9u);
      v26 = (char *)Object;
    }
  }
  v28 = (_QWORD *)*((_QWORD *)v26 + 32);
  *((_QWORD *)v26 + 32) = v14;
  *v27 ^= (*v27 ^ (4 * a7)) & 4;
  KxReleaseSpinLock(SpinLock);
  if ( v54 )
    KxReleaseSpinLock((PKSPIN_LOCK)&Process[2].IdealNode[16]);
  __writecr8((unsigned __int8)CurrentIrql);
  if ( v53 )
  {
    if ( v28 )
    {
      if ( !v14 )
      {
        v49 = v26 + 264;
        v50 = *v49;
        v51 = (_QWORD *)v49[1];
        if ( *(_QWORD **)(*v49 + 8LL) != v49 || (_QWORD *)*v51 != v49 )
          __fastfail(3u);
        *v51 = v50;
        *(_QWORD *)(v50 + 8) = v51;
        *v49 = 0LL;
      }
    }
    else if ( v14 )
    {
      v38 = v26 + 264;
      v39 = (_QWORD *)qword_14035B768;
      if ( *(__int64 **)qword_14035B768 != &ExpWakeTimerList )
        __fastfail(3u);
      *v38 = &ExpWakeTimerList;
      v38[1] = v39;
      *v39 = v38;
      qword_14035B768 = (__int64)v38;
    }
    v40 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v40 & 2) != 0 && (v40 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
    KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v28 )
      PoDestroyReasonContext(v28);
    v26 = (char *)Object;
  }
  if ( v19 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)v26 - 48);
    v29 = _InterlockedExchangeAdd64((volatile signed __int64 *)v26 - 6, -v19) - v19;
    if ( v29 <= 0 )
    {
      if ( v29 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 5uLL, v29);
      ObpDeferObjectDeletion(v26 - 48);
    }
  }
  if ( a10 )
  {
    if ( a2 )
    {
      v52 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a10 < 0x7FFFFFFF0000LL )
        v52 = (__int64)a10;
      *(_BYTE *)v52 = *(_BYTE *)v52;
      *a10 = v58;
    }
    else
    {
      *a10 = v58;
    }
  }
  return v56;
}
