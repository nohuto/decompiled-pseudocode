/*
 * XREFs of FBadWindow @ 0x1C00CB910
 * Callers:
 *     xxxActivateWindow @ 0x1C00CB624 (xxxActivateWindow.c)
 *     ?GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00CB944 (-GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     IsWindowEffectivelyCloaked @ 0x1C00CB5D4 (IsWindowEffectivelyCloaked.c)
 */

__int64 __fastcall FBadWindow(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !a1 || (*(_BYTE *)(a1 + 71) & 0x18) != 0x10 || (unsigned int)IsWindowEffectivelyCloaked((struct tagWND *)a1) )
    return 1;
  return v1;
}
