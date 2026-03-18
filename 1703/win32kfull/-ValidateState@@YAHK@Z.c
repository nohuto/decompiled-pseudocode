/*
 * XREFs of ?ValidateState@@YAHK@Z @ 0x1C00F66A8
 * Callers:
 *     SetWindowState @ 0x1C00F65F0 (SetWindowState.c)
 *     ClearWindowState @ 0x1C00F6650 (ClearWindowState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateState(__int16 a1)
{
  return HIBYTE(a1) <= 0xFu && ((unsigned __int8)a1 & byte_1C02E5B68[HIBYTE(a1)]) == (_BYTE)a1;
}
