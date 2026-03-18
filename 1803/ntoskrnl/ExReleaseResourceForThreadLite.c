/*
 * XREFs of ExReleaseResourceForThreadLite @ 0x1400AA7B0
 * Callers:
 *     CcUnpinDataForThread @ 0x1406EB4A0 (CcUnpinDataForThread.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140102B20 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140103050 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpFastResourceLegacyRelease @ 0x140157EE0 (ExpFastResourceLegacyRelease.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x14024244C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

void __stdcall ExReleaseResourceForThreadLite(PERESOURCE Resource, ERESOURCE_THREAD ResourceThreadId)
{
  __int16 v4; // ax
  KSPIN_LOCK *p_SpinLock; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  char v8; // al
  __int64 v9; // rdx
  struct _KTHREAD *v10; // r8
  USHORT Flag; // cx
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *CurrentThread; // rdx
  int v14; // eax
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v16; // [rsp+70h] [rbp+18h] BYREF

  if ( (Resource->Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v4 = Resource->Flag & 1;
  if ( v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( v4 )
  {
    if ( (struct _KTHREAD *)ResourceThreadId != KeGetCurrentThread() )
      KeBugCheckEx(0x1C6u, 0x11uLL, (ULONG_PTR)Resource, ResourceThreadId, 0LL);
    ExpFastResourceLegacyRelease(Resource);
  }
  else
  {
    p_SpinLock = &Resource->SpinLock;
    v16 = 2;
    v15[1] = &Resource->SpinLock;
    v15[0] = 0LL;
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = SchedulerAssist[5];
        SchedulerAssist[5] = v14 + 1;
        if ( v14 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      v8 = KiFastAcquireQueuedSpinLockInstrumented(v15, p_SpinLock, &v16);
    }
    else
    {
      v8 = 0;
      v9 = _InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)v15);
      if ( v9 )
      {
        KxWaitForLockOwnerShipWithIrql(v15, v9, &v16);
        v8 = 1;
      }
    }
    if ( v8 )
    {
      _disable();
      __writecr8(v16);
    }
    v10 = KeGetCurrentThread();
    Flag = Resource->Flag;
    if ( ((Flag & 1) != 0 || ExpResourceEnforceOwnerTransfer)
      && (ResourceThreadId & 3) != 3
      && (struct _KTHREAD *)ResourceThreadId != v10 )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)v10, ResourceThreadId, 0LL);
    }
    if ( (Flag & 0x80u) != 0 )
      ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)Resource, ResourceThreadId);
    else
      ExpReleaseResourceSharedForThreadLite((ULONG_PTR)Resource, ResourceThreadId);
  }
}
