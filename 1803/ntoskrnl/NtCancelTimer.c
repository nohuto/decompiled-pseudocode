/*
 * XREFs of NtCancelTimer @ 0x14005A790
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExpSetTimerObject2 @ 0x140038A8C (ExpSetTimerObject2.c)
 *     ExpCancelTimer @ 0x14005AA70 (ExpCancelTimer.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140069440 (KxWaitForSpinLockAndAcquire.c)
 *     PoDestroyReasonContext @ 0x14007624C (PoDestroyReasonContext.c)
 *     ObpDeferObjectDeletion @ 0x1400BD920 (ObpDeferObjectDeletion.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140242718 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402427F0 (KiReleaseSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  KPROCESSOR_MODE PreviousMode; // dl
  NTSTATUS result; // eax
  NTSTATUS v6; // r14d
  struct _KTIMER *v7; // rbx
  char *v8; // r15
  struct _OBJECT_TYPE *v9; // rax
  volatile signed __int32 *v10; // rdi
  KIRQL CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  void *v14; // rsi
  int v15; // ebx
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  int v18; // edi
  signed __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  char v25; // al
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-50h]
  void *v31; // [rsp+40h] [rbp-48h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v33; // [rsp+98h] [rbp+10h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( CurrentState && PreviousMode )
  {
    v26 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)CurrentState < 0x7FFFFFFF0000LL )
      v26 = (__int64)CurrentState;
    *(_BYTE *)v26 = *(_BYTE *)v26;
  }
  result = ObReferenceObjectByHandle(TimerHandle, 2u, 0LL, PreviousMode, &Object, 0LL);
  v6 = result;
  if ( result >= 0 )
  {
    v7 = (struct _KTIMER *)Object;
    v8 = (char *)Object - 48;
    v9 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v9 == ExpIRTimerObjectType )
    {
      if ( CurrentState )
      {
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        return -1073741811;
      }
      else
      {
        return ExpSetTimerObject2(Object, 0LL, 0LL);
      }
    }
    else if ( v9 == ExTimerObjectType )
    {
      CurrentThread = 0LL;
      v33 = 0;
      v10 = (volatile signed __int32 *)((char *)Object + 64);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented((char *)Object + 64);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v27 = SchedulerAssist[5];
            SchedulerAssist[5] = v27 + 1;
            if ( v27 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
              KiPerformUnboostKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset64(v10, 0LL) )
        {
          KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
          KxWaitForSpinLockAndAcquire(&v7[1]);
        }
        v7 = (struct _KTIMER *)Object;
      }
      v14 = *(void **)&v7[4].Header.Lock;
      v31 = v14;
      if ( v14 )
      {
        KxReleaseSpinLock((PKSPIN_LOCK)v10);
        __writecr8(CurrentIrql);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v20 = KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL, 0);
        v21 = v20;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v20, (ULONG_PTR)&ExpWakeTimerLock);
        if ( v21 )
          *(_BYTE *)(v21 + 26) |= 1u;
        v33 = 1;
        CurrentIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10);
        v14 = *(void **)&v7[4].Header.Lock;
        v31 = v14;
        *(_QWORD *)&v7[4].Header.Lock = 0LL;
        v7 = (struct _KTIMER *)Object;
      }
      v15 = ExpCancelTimer(v7) + 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v10, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      if ( v17 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v28 = v17[5] - 1;
          v17[5] = v28;
          if ( !v28 && !*((_BYTE *)v17 + 25) && !*((_BYTE *)v17 + 27) )
            KiPerformUnboostKick(v16);
        }
      }
      __writecr8(CurrentIrql);
      if ( v33 )
      {
        if ( v14 )
        {
          v22 = (char *)Object + 264;
          v23 = *((_QWORD *)Object + 33);
          v24 = (_QWORD *)*((_QWORD *)Object + 34);
          if ( *(PVOID *)(v23 + 8) != (char *)Object + 264 || (_QWORD *)*v24 != v22 )
            __fastfail(3u);
          *v24 = v23;
          *(_QWORD *)(v23 + 8) = v24;
          *v22 = 0LL;
        }
        v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v25 & 2) != 0 && (v25 & 4) == 0 )
          ExfTryToWakePushLock(&ExpWakeTimerLock);
        KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
        KeLeaveCriticalRegionThread(CurrentThread);
      }
      v18 = *((_DWORD *)Object + 1);
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)v8);
      v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)v8, -v15) - v15;
      if ( v19 <= 0 )
      {
        if ( *((_QWORD *)v8 + 1) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v8[24] ^ (unsigned __int64)BYTE1(v8)],
            (ULONG_PTR)Object,
            6uLL,
            *((_QWORD *)v8 + 1));
        if ( v19 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 5uLL, v19);
        ObpDeferObjectDeletion(v8);
      }
      if ( CurrentState )
        *CurrentState = v18;
      if ( v14 )
        PoDestroyReasonContext(v14);
      return v6;
    }
    else
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return -1073741788;
    }
  }
  return result;
}
