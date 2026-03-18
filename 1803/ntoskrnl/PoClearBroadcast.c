/*
 * XREFs of PoClearBroadcast @ 0x1405ECC28
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PnprWakeDevices @ 0x1404842A0 (PnprWakeDevices.c)
 *     PopDirectedDripsNotifyDrivers @ 0x1407619C4 (PopDirectedDripsNotifyDrivers.c)
 * Callees:
 *     PopResumeDeviceIdle @ 0x140153B58 (PopResumeDeviceIdle.c)
 *     PpmEndHighPerfRequest @ 0x14016DFB4 (PpmEndHighPerfRequest.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IoFreePoDeviceNotifyList @ 0x14047632C (IoFreePoDeviceNotifyList.c)
 */

void PoClearBroadcast()
{
  PVOID v0; // rbx

  v0 = qword_1403A9FF0;
  if ( qword_1403A9FF0 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_1403A9FE8 = 0LL;
    qword_1403A9FF0 = 0LL;
    IoFreePoDeviceNotifyList((__int64)v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
