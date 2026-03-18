/*
 * XREFs of ?NotifyTreeDirtyRegion@CRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180079240
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
  (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 9) + 64LL))((char *)this - 72, 0LL, 0LL);
}
