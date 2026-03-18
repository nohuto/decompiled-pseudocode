/*
 * XREFs of ExpReleaseResourceForThreadLite @ 0x14005E960
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140102B20 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140103050 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x14024244C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall ExpReleaseResourceForThreadLite(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter3)
{
  volatile __int64 *v2; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  char v7; // al
  __int64 v8; // rdx
  struct _KTHREAD *CurrentThread; // r8
  __int16 v10; // ax
  int v12; // eax
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 v14; // [rsp+60h] [rbp+8h] BYREF

  v2 = (volatile __int64 *)(BugCheckParameter1 + 96);
  v14 = 2;
  v13[1] = BugCheckParameter1 + 96;
  v13[0] = 0LL;
  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v12 = SchedulerAssist[5];
      SchedulerAssist[5] = v12 + 1;
      if ( v12 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v7 = KiFastAcquireQueuedSpinLockInstrumented(v13, v2, &v14);
  }
  else
  {
    v7 = 0;
    v8 = _InterlockedExchange64(v2, (__int64)v13);
    if ( v8 )
    {
      KxWaitForLockOwnerShipWithIrql(v13, v8, &v14);
      v7 = 1;
    }
  }
  if ( v7 )
  {
    _disable();
    __writecr8(v14);
  }
  CurrentThread = KeGetCurrentThread();
  v10 = *(_WORD *)(BugCheckParameter1 + 26);
  if ( ((v10 & 1) != 0 || ExpResourceEnforceOwnerTransfer)
    && (BugCheckParameter3 & 3) != 3
    && (struct _KTHREAD *)BugCheckParameter3 != CurrentThread )
  {
    KeBugCheckEx(0x16Eu, BugCheckParameter1, (ULONG_PTR)CurrentThread, BugCheckParameter3, 0LL);
  }
  if ( (v10 & 0x80u) != 0 )
    return ExpReleaseResourceExclusiveForThreadLite(BugCheckParameter1, BugCheckParameter3);
  else
    return ExpReleaseResourceSharedForThreadLite(BugCheckParameter1, BugCheckParameter3);
}
