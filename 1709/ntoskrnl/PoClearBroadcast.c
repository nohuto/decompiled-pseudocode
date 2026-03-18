/*
 * XREFs of PoClearBroadcast @ 0x140700A3C
 * Callers:
 *     PnprWakeDevices @ 0x14042D700 (PnprWakeDevices.c)
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14015B7B4 (PpmEndHighPerfRequest.c)
 *     PopResumeDeviceIdle @ 0x14023D55C (PopResumeDeviceIdle.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IoFreePoDeviceNotifyList @ 0x14042DDC4 (IoFreePoDeviceNotifyList.c)
 */

void PoClearBroadcast()
{
  _BYTE *v0; // rbx

  v0 = qword_140365770;
  if ( qword_140365770 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140365768 = 0LL;
    qword_140365770 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
