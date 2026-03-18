/*
 * XREFs of ?NotifyTreeDirtyRegion@CRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180024070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTarget::NotifyTreeDirtyRegion(
        CRenderTarget *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  CResource::NotifyOnChanged((char *)this - 72, 0LL, 0LL);
}
