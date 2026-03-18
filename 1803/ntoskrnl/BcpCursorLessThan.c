/*
 * XREFs of BcpCursorLessThan @ 0x1402C64D0
 * Callers:
 *     BcpDisplayProgress @ 0x1402C6B94 (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(_QWORD *a1)
{
  return *a1 < (unsigned __int64)BcpProgressEnd;
}
