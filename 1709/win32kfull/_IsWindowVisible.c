/*
 * XREFs of _IsWindowVisible @ 0x1C0112B5C
 * Callers:
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00813A0 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C00A55A0 (xxxSetWindowStyle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowVisible(__int64 a1)
{
  if ( !a1 )
    return 1LL;
  while ( (*(_BYTE *)(a1 + 71) & 0x10) != 0 || (*(_BYTE *)(a1 + 65) & 8) != 0 )
  {
    if ( (*(_WORD *)(a1 + 82) & 0x3FFF) == 0x29D )
      return 1LL;
    a1 = *(_QWORD *)(a1 + 104);
  }
  return 0LL;
}
