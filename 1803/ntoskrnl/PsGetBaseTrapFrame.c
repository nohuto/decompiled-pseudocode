/*
 * XREFs of PsGetBaseTrapFrame @ 0x140284230
 * Callers:
 *     PsPicoWalkUserStack @ 0x14077D830 (PsPicoWalkUserStack.c)
 *     PsCallEnclave @ 0x14077EDB0 (PsCallEnclave.c)
 * Callees:
 *     PspGetBaseTrapFrame @ 0x14012B834 (PspGetBaseTrapFrame.c)
 */

__int64 __fastcall PsGetBaseTrapFrame(__int64 a1)
{
  return PspGetBaseTrapFrame(a1);
}
