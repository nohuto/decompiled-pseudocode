/*
 * XREFs of ?ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_RESAMPLEMODE@@@Z @ 0x18017790C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x180054B94 (-SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessResampleMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_RESAMPLEMODE *a3)
{
  CVisual::SetResampleMode((__int64)this, *((_DWORD *)a3 + 2));
  CVisual::PropagateFlags((__int64)this, 4u, 0);
  return 0LL;
}
