/*
 * XREFs of PoClearBroadcast @ 0x140577BB0
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PnprWakeDevices @ 0x1404186F0 (PnprWakeDevices.c)
 * Callees:
 *     PopResumeDeviceIdle @ 0x1401388B4 (PopResumeDeviceIdle.c)
 *     PpmEndHighPerfRequest @ 0x14014AF90 (PpmEndHighPerfRequest.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IoFreePoDeviceNotifyList @ 0x14040A4B4 (IoFreePoDeviceNotifyList.c)
 */

void PoClearBroadcast()
{
  _BYTE *v0; // rbx
  __int64 v1; // rdx

  v0 = qword_14034B110;
  if ( qword_14034B110 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_14034B108 = 0LL;
    qword_14034B110 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2, v1);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
