/*
 * XREFs of ExpSetTimer @ 0x140049460
 * Callers:
 *     NtSetTimerEx @ 0x1400479E0 (NtSetTimerEx.c)
 *     NtSetTimer @ 0x140134C70 (NtSetTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     ObpDeferObjectDeletion @ 0x140024BAC (ObpDeferObjectDeletion.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     ExpCancelTimer @ 0x140049910 (ExpCancelTimer.c)
 *     PsIsProcessTimerDelayActive @ 0x140051ED4 (PsIsProcessTimerDelayActive.c)
 *     PoDestroyReasonContext @ 0x14007227C (PoDestroyReasonContext.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     KeInitializeApc @ 0x14010F400 (KeInitializeApc.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     PsInsertVirtualizedTimer @ 0x14012AA9C (PsInsertVirtualizedTimer.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401FECBC (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 *     ExpCalcDueTimeWithDelay @ 0x14025CF98 (ExpCalcDueTimeWithDelay.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExpCheckWakeTimerAccess @ 0x140586274 (ExpCheckWakeTimerAccess.c)
 */

__int64 __fastcall ExpSetTimer(
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
  NTSTATUS v12; // ebx
  char v13; // bl
  __int64 v14; // r13
  _KPROCESS *Process; // r14
  PVOID v16; // rdi
  KSPIN_LOCK *v17; // r12
  int v18; // r14d
  ULONG v19; // r11d
  ULONG v20; // r8d
  struct _KDPC *v21; // r10
  bool v22; // al
  PKSPIN_LOCK v23; // rbx
  _KPROCESS *v24; // rcx
  unsigned __int64 v25; // rdx
  char *v26; // rdi
  _BYTE *v27; // r15
  __int64 v28; // rbx
  signed __int64 v29; // rax
  __int64 v31; // r9
  struct _KTHREAD *v32; // rbx
  _BYTE *v33; // rcx
  char *v34; // rax
  unsigned __int64 *p_ThreadLock; // rbx
  char **v36; // rdx
  __int64 v37; // r14
  _QWORD *v38; // rdi
  _QWORD *v39; // rax
  __int64 v40; // rbx
  unsigned __int8 v41; // al
  int v42; // r8d
  KSPIN_LOCK *v43; // rax
  unsigned int v44; // edx
  unsigned int v45; // edx
  unsigned int v46; // eax
  _QWORD *v47; // rdi
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rcx
  char v51; // [rsp+40h] [rbp-98h]
  char v52; // [rsp+41h] [rbp-97h]
  PVOID Object; // [rsp+48h] [rbp-90h] BYREF
  unsigned int v54; // [rsp+50h] [rbp-88h]
  _KPROCESS *v55; // [rsp+58h] [rbp-80h]
  int v56; // [rsp+60h] [rbp-78h]
  struct _KDPC *v57; // [rsp+68h] [rbp-70h]
  int v58; // [rsp+70h] [rbp-68h]
  PKSPIN_LOCK SpinLock; // [rsp+78h] [rbp-60h]
  unsigned int v60; // [rsp+80h] [rbp-58h] BYREF
  __int64 CurrentIrql; // [rsp+88h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-48h]
  PVOID v63; // [rsp+98h] [rbp-40h]
  void *retaddr; // [rsp+D8h] [rbp+0h]

  v11 = 0;
  v12 = ObReferenceObjectByHandle(a1, 2u, ExTimerObjectType, a2, &Object, 0LL);
  v54 = v12;
  v63 = Object;
  v56 = v12;
  if ( v12 < 0 )
    return (unsigned int)v12;
  v13 = 0;
  v51 = 0;
  CurrentThread = 0LL;
  v14 = a6;
  if ( !a6 )
    goto LABEL_3;
  if ( a7 )
  {
    v12 = ExpCheckWakeTimerAccess((unsigned __int8)KeGetCurrentThread()->gap0[10]);
    v54 = v12;
    v56 = v12;
    if ( !v12 )
    {
      v13 = 0;
      goto LABEL_31;
    }
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    return (unsigned int)v12;
  }
LABEL_31:
  if ( (int)qword_14034BCC0 >= 2 || byte_14034BC93 )
  {
    v13 = 1;
    v51 = 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v37 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL);
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock);
    if ( v37 )
      *(_BYTE *)(v37 + 26) |= 1u;
  }
  else
  {
    v54 = 1073741861;
    v56 = 1073741861;
    v14 = 0LL;
  }
LABEL_3:
  v57 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v55 = Process;
  v52 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( a2 && (*(_DWORD *)&Process->0 & 0x10) != 0 )
  {
    KxAcquireSpinLock((PKSPIN_LOCK)&Process[2].IdealNode[4]);
    v11 = 1;
    v52 = 1;
  }
  v16 = Object;
  v17 = (KSPIN_LOCK *)((char *)Object + 64);
  KxAcquireSpinLock((PKSPIN_LOCK)Object + 8);
  if ( !v13 && *((_QWORD *)v16 + 32) )
  {
    KxReleaseSpinLock(v17);
    if ( v11 )
      KxReleaseSpinLock((PKSPIN_LOCK)&Process[2].IdealNode[4]);
    __writecr8((unsigned __int8)CurrentIrql);
    v51 = 1;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v40 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL);
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock);
    if ( v40 )
      *(_BYTE *)(v40 + 26) |= 1u;
    v41 = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(CurrentIrql) = v41;
    if ( v11 )
      KxAcquireSpinLock((PKSPIN_LOCK)&Process[2].IdealNode[4]);
    KxAcquireSpinLock(v17);
    v16 = Object;
  }
  v18 = ExpCancelTimer((PKTIMER)v16) + 1;
  v58 = *((_DWORD *)v16 + 1);
  v19 = Period;
  *((_DWORD *)v16 + 60) = Period;
  *((_DWORD *)v16 + 61) = 0;
  v20 = TolerableDelay;
  *((_DWORD *)v16 + 80) = TolerableDelay;
  if ( a4 )
  {
    v32 = KeGetCurrentThread();
    KeInitializeApc((_DWORD)Object + 72, (_DWORD)v32, 2, (unsigned int)ExpTimerApcRoutine, 0LL, a4, a2, a5);
    SpinLock = (PKSPIN_LOCK)&v32[1].StackBase;
    KxAcquireSpinLock((PKSPIN_LOCK)&v32[1].StackBase);
    v33 = Object;
    v34 = (char *)Object + 224;
    p_ThreadLock = &v32[1].ThreadLock;
    v36 = (char **)p_ThreadLock[1];
    if ( *v36 != (char *)p_ThreadLock )
      __fastfail(3u);
    *(_QWORD *)v34 = p_ThreadLock;
    *((_QWORD *)v34 + 1) = v36;
    *v36 = v34;
    p_ThreadLock[1] = (unsigned __int64)v34;
    v33[304] |= 1u;
    KxReleaseSpinLock(SpinLock);
    v21 = (struct _KDPC *)((char *)Object + 160);
    v57 = (struct _KDPC *)((char *)Object + 160);
    --v18;
    v19 = 0;
    v20 = TolerableDelay;
  }
  else
  {
    v21 = 0LL;
  }
  v22 = 0;
  v23 = *a3;
  SpinLock = *a3;
  v24 = v55;
  v25 = v55[1].Affinity.Bitmap[16];
  if ( !v11 )
    goto LABEL_11;
  if ( !*((_QWORD *)Object + 35) )
  {
    if ( v25 )
      v22 = (*(_DWORD *)(v25 + 1304) & 0x40000) != 0 && *(_DWORD *)(v25 + 856);
    v42 = (_DWORD)Object + 280;
    LOBYTE(v42) = 1;
    PsInsertVirtualizedTimer((_DWORD)v55, (_DWORD)Object + 288, v42, v22, (__int64)Object + 280);
    v24 = v55;
  }
  _InterlockedIncrement((volatile signed __int32 *)&v24[2].ThreadSeed[18]);
  if ( !(unsigned __int8)PsIsProcessTimerDelayActive(v24, &v60) )
    goto LABEL_11;
  v43 = (KSPIN_LOCK *)ExpCalcDueTimeWithDelay(v31, v60);
  v23 = v43;
  SpinLock = v43;
  v45 = v44 / 0x2710;
  if ( v19 && v45 + v19 > v19 )
  {
    v19 += v45;
    *((_DWORD *)v16 + 60) += v45;
    *((_DWORD *)v16 + 61) = v45;
  }
  else
  {
    v46 = *((_DWORD *)v16 + 60);
    if ( v46 )
    {
      v20 = TolerableDelay;
      v21 = v57;
      if ( v46 + v45 > v46 )
      {
        *((_DWORD *)v16 + 60) = v46 + v45;
        *((_DWORD *)v16 + 61) = v45;
      }
      goto LABEL_74;
    }
  }
  v21 = v57;
  v20 = TolerableDelay;
LABEL_74:
  v24 = v55;
LABEL_11:
  v26 = (char *)Object;
  v27 = (char *)Object + 304;
  if ( (*((_BYTE *)Object + 304) & 2) != 0 )
  {
    *((_QWORD *)Object + 39) = v23;
    if ( SHIDWORD(SpinLock) >= 0 )
      v26[248] = 1;
    else
      v26[248] = (v14 != 0) + 2;
  }
  else
  {
    KeSetCoalescableTimer((PKTIMER)Object, (LARGE_INTEGER)v23, v19, v20, v21);
    v24 = v55;
    if ( v14 )
    {
      _interlockedbittestandset((volatile signed __int32 *)v26, 9u);
      v26 = (char *)Object;
    }
  }
  v28 = *((_QWORD *)v26 + 32);
  *((_QWORD *)v26 + 32) = v14;
  *v27 ^= (*v27 ^ (4 * a7)) & 4;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(v17, retaddr);
    v24 = v55;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)v17, 0LL);
    v26 = (char *)Object;
  }
  if ( v52 )
    KxReleaseSpinLock((PKSPIN_LOCK)&v24[2].IdealNode[4]);
  __writecr8((unsigned __int8)CurrentIrql);
  if ( v51 )
  {
    if ( v28 )
    {
      if ( !v14 )
      {
        v47 = v26 + 264;
        v48 = *v47;
        v49 = (_QWORD *)v47[1];
        if ( *(_QWORD **)(*v47 + 8LL) != v47 || (_QWORD *)*v49 != v47 )
          __fastfail(3u);
        *v49 = v48;
        *(_QWORD *)(v48 + 8) = v49;
        *v47 = 0LL;
      }
    }
    else if ( v14 )
    {
      v38 = v26 + 264;
      v39 = (_QWORD *)qword_140343028;
      if ( *(__int64 **)qword_140343028 != &ExpWakeTimerList )
        __fastfail(3u);
      *v38 = &ExpWakeTimerList;
      v38[1] = v39;
      *v39 = v38;
      qword_140343028 = (__int64)v38;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ExpWakeTimerLock);
    KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
    KiLeaveCriticalRegionUnsafe(CurrentThread);
    if ( v28 )
      PoDestroyReasonContext(v28);
    v26 = (char *)Object;
  }
  if ( v18 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)v26 - 48);
    v29 = _InterlockedExchangeAdd64((volatile signed __int64 *)v26 - 6, -v18) - v18;
    if ( v29 <= 0 )
    {
      if ( v29 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 5uLL, v29);
      ObpDeferObjectDeletion((signed __int64)(v26 - 48));
    }
  }
  if ( !a10 )
    return v54;
  if ( !a2 )
  {
    *a10 = v58;
    return v54;
  }
  v50 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a10 < 0x7FFFFFFF0000LL )
    v50 = (__int64)a10;
  *(_BYTE *)v50 = *(_BYTE *)v50;
  *a10 = v58;
  return v54;
}
