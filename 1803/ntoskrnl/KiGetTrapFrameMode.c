/*
 * XREFs of KiGetTrapFrameMode @ 0x14015EB5C
 * Callers:
 *     KiSwInterruptDispatch @ 0x140193570 (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetTrapFrameMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 368) & 1;
}
