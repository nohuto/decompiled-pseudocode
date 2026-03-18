/*
 * XREFs of ExReleaseResourceAndLeaveCriticalRegion @ 0x1401027C0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x140102960 (ExpResourceEnforcesOwnershipTransfer.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140102B20 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140103050 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpFastResourceLegacyRelease @ 0x140157EE0 (ExpFastResourceLegacyRelease.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x14024244C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

void __stdcall ExReleaseResourceAndLeaveCriticalRegion(PERESOURCE Resource)
{
  __int16 v2; // ax
  ULONG_PTR v3; // rsi
  KSPIN_LOCK *p_SpinLock; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  char v7; // al
  _QWORD *v8; // rdx
  ULONG_PTR v9; // rcx
  ULONG_PTR v10; // r8
  struct _KTHREAD *v11; // rcx
  bool v12; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rdx
  int v15; // eax
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v17; // [rsp+68h] [rbp+10h] BYREF

  if ( (Resource->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v2 = Resource->Flag & 1;
  if ( v2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( v2 )
  {
    ExpFastResourceLegacyRelease(Resource);
  }
  else
  {
    v3 = (ULONG_PTR)KeGetCurrentThread();
    p_SpinLock = &Resource->SpinLock;
    v16[1] = &Resource->SpinLock;
    v16[0] = 0LL;
    v17 = 2;
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = SchedulerAssist[5];
        SchedulerAssist[5] = v15 + 1;
        if ( v15 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      v7 = KiFastAcquireQueuedSpinLockInstrumented(v16, p_SpinLock, &v17);
    }
    else
    {
      v7 = 0;
      v8 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)v16);
      if ( v8 )
      {
        KxWaitForLockOwnerShipWithIrql((__int64)v16, v8, &v17);
        v7 = 1;
      }
    }
    if ( v7 )
    {
      _disable();
      __writecr8(v17);
    }
    if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource) && (v3 & 3) != 3 && v3 != v10 )
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, v10, v3, 0LL);
    if ( (Resource->ReservedLowFlags & 0x80u) == 0 )
      ExpReleaseResourceSharedForThreadLite(v9, v3);
    else
      ExpReleaseResourceExclusiveForThreadLite(v9, v3);
  }
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable++ == -1;
  if ( v12
    && ($005F0E83B22994B61E86C72E0CE43C71 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
