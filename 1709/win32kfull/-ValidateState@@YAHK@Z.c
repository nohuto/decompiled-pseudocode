/*
 * XREFs of ?ValidateState@@YAHK@Z @ 0x1C00D61F8
 * Callers:
 *     SetWindowState @ 0x1C00D6140 (SetWindowState.c)
 *     ClearWindowState @ 0x1C00D61A0 (ClearWindowState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateState(__int16 a1)
{
  return HIBYTE(a1) <= 0xFu && ((unsigned __int8)a1 & byte_1C02E2E50[HIBYTE(a1)]) == (_BYTE)a1;
}
