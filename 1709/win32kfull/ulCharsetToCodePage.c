/*
 * XREFs of ulCharsetToCodePage @ 0x1C02B2204
 * Callers:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C00AC790 (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C02707E0 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C0270990 (-vEmergency@MAPPER@@QEAAXXZ.c)
 *     pcpComputeGlyphset @ 0x1C02B2044 (pcpComputeGlyphset.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ulCharsetToCodePage(int a1)
{
  int v1; // edx
  _DWORD *v2; // rax

  if ( a1 == 255 )
    return 1LL;
  v1 = 0;
  v2 = charsets;
  while ( *v2 != a1 )
  {
    ++v1;
    if ( (__int64)++v2 >= (__int64)codepages )
      return gbDBCSCodePage != 0 ? 0x4E4 : 0;
  }
  return (unsigned int)codepages[v1];
}
