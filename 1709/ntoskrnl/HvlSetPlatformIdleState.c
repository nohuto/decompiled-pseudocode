/*
 * XREFs of HvlSetPlatformIdleState @ 0x1401EE924
 * Callers:
 *     PpmIdleGuestPreExecute @ 0x1401414F0 (PpmIdleGuestPreExecute.c)
 *     PpmIdleGuestComplete @ 0x140141580 (PpmIdleGuestComplete.c)
 * Callees:
 *     HvlpGetLpIndexFromProcessorIndex @ 0x1401EA7F0 (HvlpGetLpIndexFromProcessorIndex.c)
 *     HvlpSetPowerProperty @ 0x1401EECC4 (HvlpSetPowerProperty.c)
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
