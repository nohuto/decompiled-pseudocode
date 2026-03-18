/*
 * XREFs of ?ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETEXCLUDESUBTREE@@@Z @ 0x1800517CC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetExcludeSubtree(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETEXCLUDESUBTREE *a3)
{
  char v3; // r9
  char v4; // r8

  v3 = *((_DWORD *)a3 + 2) != 0;
  v4 = (*((_BYTE *)this + 93) & 0x20) != 0;
  *((_BYTE *)this + 93) = *((_BYTE *)this + 93) & 0xDF | (32 * v3);
  if ( v4 != v3 )
    CVisual::PropagateFlags((__int64)this, 4u, 0);
  return 0LL;
}
