/*
 * XREFs of KiGetTrapFrameMode @ 0x14015AB78
 * Callers:
 *     KiSwInterruptDispatch @ 0x1401694C0 (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetTrapFrameMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 368) & 1;
}
