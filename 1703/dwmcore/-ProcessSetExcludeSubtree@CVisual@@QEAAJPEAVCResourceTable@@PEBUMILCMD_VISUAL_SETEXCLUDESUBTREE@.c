/*
 * XREFs of ?ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETEXCLUDESUBTREE@@@Z @ 0x180085EEC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetExcludeSubtree(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETEXCLUDESUBTREE *a3)
{
  bool v3; // zf
  bool v4; // r9

  v3 = *((_DWORD *)a3 + 2) == 0;
  v4 = (*((_BYTE *)this + 90) & 0x20) != 0;
  *((_BYTE *)this + 90) = *((_BYTE *)this + 90) & 0xDF | (32 * (*((_DWORD *)a3 + 2) != 0));
  if ( v4 != !v3 )
    CVisual::PropagateFlags(this, 0, 1, 0, 0, 0, 0, 0);
  return 0LL;
}
