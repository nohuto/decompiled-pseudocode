/*
 * XREFs of KiReleaseThreadStateLock @ 0x1400EDBF0
 * Callers:
 *     KeTryToFreezeThreadStack @ 0x1400025D8 (KeTryToFreezeThreadStack.c)
 *     MiSwapStackPage @ 0x140002818 (MiSwapStackPage.c)
 *     KeSetIdealProcessorThreadEx @ 0x14003ABC0 (KeSetIdealProcessorThreadEx.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400607C0 (KeQueryTotalCycleTimeThread.c)
 *     KiApplyForegroundBoostThread @ 0x14006B508 (KiApplyForegroundBoostThread.c)
 *     KiSetThreadSchedulingGroup @ 0x1400C2454 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400C2518 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiSetPriorityThread @ 0x1400ED840 (KiSetPriorityThread.c)
 *     KiSetAffinityThread @ 0x140135C70 (KiSetAffinityThread.c)
 *     KeUpdateThreadTag @ 0x140143DE0 (KeUpdateThreadTag.c)
 *     KiUpdateThreadCpuSets @ 0x140181670 (KiUpdateThreadCpuSets.c)
 *     KeSetThreadSchedulerAssist @ 0x140247B84 (KeSetThreadSchedulerAssist.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402488A8 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x140248B08 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall KiReleaseThreadStateLock(__int64 a1, __int64 a2, volatile signed __int64 *a3)
{
  volatile signed __int64 *v3; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 result; // rax

  v3 = a3;
  if ( a2 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        result = (unsigned int)(SchedulerAssist[5] - 1);
        SchedulerAssist[5] = result;
        if ( !(_DWORD)result )
        {
          result = *((unsigned __int8 *)SchedulerAssist + 25);
          if ( !(_BYTE)result && !*((_BYTE *)SchedulerAssist + 27) )
            result = KiPerformUnboostKick(CurrentPrcb);
        }
      }
    }
  }
  if ( v3 )
  {
    _InterlockedAnd64(v3, 0LL);
    return KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  }
  return result;
}
