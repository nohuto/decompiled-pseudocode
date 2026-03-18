/*
 * XREFs of BcpCursorLessThan @ 0x140266688
 * Callers:
 *     BcpDisplayProgress @ 0x140266DD0 (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(_QWORD *a1)
{
  return *a1 < (unsigned __int64)BcpProgressEnd;
}
