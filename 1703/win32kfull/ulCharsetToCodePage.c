/*
 * XREFs of ulCharsetToCodePage @ 0x1C00F7124
 * Callers:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C0056340 (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C00563D0 (-vEmergency@MAPPER@@QEAAXXZ.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C0273F98 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     pcpComputeGlyphset @ 0x1C02B8298 (pcpComputeGlyphset.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ulCharsetToCodePage(int a1)
{
  int v2; // edx
  _DWORD *v3; // rax

  if ( a1 == 255 )
    return 1LL;
  v2 = 0;
  v3 = &charsets;
  do
  {
    if ( *v3 == a1 )
      return (unsigned int)codepages[v2];
    ++v2;
    ++v3;
  }
  while ( (__int64)v3 < (__int64)&_xmm );
  return gbDBCSCodePage != 0 ? 0x4E4 : 0;
}
