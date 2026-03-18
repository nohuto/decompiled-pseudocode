/*
 * XREFs of _IsWindowVisible @ 0x1C010838C
 * Callers:
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     xxxSetWindowStyle @ 0x1C0050000 (xxxSetWindowStyle.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F72F0 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
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
