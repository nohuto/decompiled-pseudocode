/*
 * XREFs of ?OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180021160
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002E97C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x18002EEDC (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow3D::OnSWRInvalidated(
        CTopLevelWindow3D *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  CVisual::SetDirtyFlags((CTopLevelWindow3D *)((char *)this - 280), 0x80u);
}
