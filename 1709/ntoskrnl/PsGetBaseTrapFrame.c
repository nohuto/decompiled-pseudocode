/*
 * XREFs of PsGetBaseTrapFrame @ 0x14024DE88
 * Callers:
 *     PsPicoWalkUserStack @ 0x140719DA0 (PsPicoWalkUserStack.c)
 *     PsCallEnclave @ 0x14071B2E0 (PsCallEnclave.c)
 * Callees:
 *     PspGetBaseTrapFrame @ 0x1400D9BC4 (PspGetBaseTrapFrame.c)
 */

__int64 __fastcall PsGetBaseTrapFrame(__int64 a1)
{
  return PspGetBaseTrapFrame(a1);
}
