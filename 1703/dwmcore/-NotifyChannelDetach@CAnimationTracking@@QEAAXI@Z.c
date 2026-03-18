/*
 * XREFs of ?NotifyChannelDetach@CAnimationTracking@@QEAAXI@Z @ 0x1800BAB14
 * Callers:
 *     ?TelemetryNotifyChannelDetach@CPartitionVerticalBlankScheduler@@UEAAXI@Z @ 0x180065980 (-TelemetryNotifyChannelDetach@CPartitionVerticalBlankScheduler@@UEAAXI@Z.c)
 * Callees:
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x1800BA214 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 */

void __fastcall CAnimationTracking::NotifyChannelDetach(CAnimationTracking *this, int a2)
{
  __int64 v2; // rbx

  v2 = 0LL;
  while ( (unsigned int)v2 < *((_DWORD *)this + 6) )
  {
    if ( **(_DWORD **)(*(_QWORD *)this + 8 * v2) == a2 )
      CAnimationTracking::DeleteScenario(this, v2);
    else
      v2 = (unsigned int)(v2 + 1);
  }
}
