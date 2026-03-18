/*
 * XREFs of KiGetTrapFrameMode @ 0x1401FDD00
 * Callers:
 *     KiSwInterruptDispatch @ 0x140174B80 (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetTrapFrameMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 368) & 1;
}
