/*
 * XREFs of RtlGetDefaultCodePage @ 0x1405F0610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlGetDefaultCodePage(PUSHORT AnsiCodePage, PUSHORT OemCodePage)
{
  *AnsiCodePage = NlsAnsiCodePage;
  *OemCodePage = NlsOemCodePage;
}
