/*
 * XREFs of HvpGetBinContextInTempBin @ 0x1401E559C
 * Callers:
 *     HvpSetRangeProtection @ 0x14047CF98 (HvpSetRangeProtection.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvpGetBinContextInTempBin(_BYTE *a1)
{
  return (*a1 & 2) != 0;
}
