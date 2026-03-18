/*
 * XREFs of HvlSetPlatformIdleState @ 0x14022C1C0
 * Callers:
 *     PpmIdleGuestPreExecute @ 0x14015A1D0 (PpmIdleGuestPreExecute.c)
 *     PpmIdleGuestComplete @ 0x14015A240 (PpmIdleGuestComplete.c)
 * Callees:
 *     HvlpGetLpIndexFromProcessorIndex @ 0x140227898 (HvlpGetLpIndexFromProcessorIndex.c)
 *     HvlpSetPowerProperty @ 0x14022C564 (HvlpSetPowerProperty.c)
 */

__int64 HvlSetPlatformIdleState()
{
  int v0; // r9d
  _DWORD v2[106]; // [rsp+20h] [rbp-1A8h] BYREF

  v2[0] = 3;
  v2[2] = HvlpGetLpIndexFromProcessorIndex(KeGetPcr()->Prcb.Number);
  v2[4] = v0;
  return HvlpSetPowerProperty(v2);
}
