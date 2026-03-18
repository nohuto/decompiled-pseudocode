/*
 * XREFs of FBadWindow @ 0x1C00B3C74
 * Callers:
 *     xxxActivateWindow @ 0x1C00B3994 (xxxActivateWindow.c)
 *     ?GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00B3CA8 (-GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     IsWindowEffectivelyCloaked @ 0x1C00B4684 (IsWindowEffectivelyCloaked.c)
 */

__int64 __fastcall FBadWindow(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !a1 || (*(_BYTE *)(a1 + 71) & 0x18) != 0x10 || (unsigned int)IsWindowEffectivelyCloaked() )
    return 1;
  return v1;
}
