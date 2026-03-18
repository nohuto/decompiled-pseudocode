/*
 * XREFs of HvcallFastExtended @ 0x140127C00
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpExtendedFastHypercall @ 0x14018AA70 (HvcallpExtendedFastHypercall.c)
 *     HvcallpExtendedFastHypercallWithOutput @ 0x14018AAD0 (HvcallpExtendedFastHypercallWithOutput.c)
 */

__int64 __fastcall HvcallFastExtended(int a1, int a2, int a3, int a4, unsigned int a5)
{
  if ( a5 )
    return HvcallpExtendedFastHypercallWithOutput(a1, a2, (unsigned int)(a3 + 15) >> 4, a4, a5 >> 4);
  else
    return HvcallpExtendedFastHypercall();
}
