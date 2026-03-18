/*
 * XREFs of BcpCursorLessThan @ 0x1402909B4
 * Callers:
 *     BcpDisplayProgress @ 0x1402910E0 (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(_QWORD *a1)
{
  return *a1 < (unsigned __int64)BcpProgressEnd;
}
