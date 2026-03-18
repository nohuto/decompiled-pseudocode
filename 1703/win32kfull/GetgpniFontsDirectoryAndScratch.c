/*
 * XREFs of GetgpniFontsDirectoryAndScratch @ 0x1C011CC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall GetgpniFontsDirectoryAndScratch(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int16 *result; // rax

  *a1 = &gpniFontsDirectory;
  *a2 = &gpniScratch;
  result = gpwszFontsDirectory;
  *a3 = gpwszFontsDirectory;
  return result;
}
