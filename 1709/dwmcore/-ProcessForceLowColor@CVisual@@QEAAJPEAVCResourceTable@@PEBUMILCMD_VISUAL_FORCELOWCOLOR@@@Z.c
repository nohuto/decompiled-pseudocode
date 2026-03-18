/*
 * XREFs of ?ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_FORCELOWCOLOR@@@Z @ 0x1801778D4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180177F7C (-SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessForceLowColor(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_FORCELOWCOLOR *a3)
{
  CVisual::SetColorSpace(this, (enum DXGI_COLOR_SPACE_TYPE)(*((_DWORD *)a3 + 2) == 0));
  CVisual::PropagateFlags((__int64)this, 4u, 0);
  return 0LL;
}
