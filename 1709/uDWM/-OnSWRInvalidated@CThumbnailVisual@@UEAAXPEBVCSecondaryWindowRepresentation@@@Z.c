/*
 * XREFs of ?OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180010690
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000E800 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CThumbnailVisual::OnSWRInvalidated(
        CThumbnailVisual *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)((char *)this - 360), 128);
}
