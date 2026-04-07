/*
 * XREFs of ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x18002EEDC
 * Callers:
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002E830 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18002E920 (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002F0C4 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnSWRInvalidated@CSecondaryWindowRepresentation@@UEAAXPEBV1@@Z @ 0x18007FDA0 (-OnSWRInvalidated@CSecondaryWindowRepresentation@@UEAAXPEBV1@@Z.c)
 * Callees:
 *     ?OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180021160 (-OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::SetDirtyFlags(CSecondaryWindowRepresentation *this, int a2)
{
  void (__fastcall *v2)(CTopLevelWindow3D *, const struct CSecondaryWindowRepresentation *); // rax
  CTopLevelWindow3D *v4; // rcx

  if ( (a2 & *((_DWORD *)this + 6)) != a2 )
  {
    *((_DWORD *)this + 6) |= a2;
    v2 = (void (__fastcall *)(CTopLevelWindow3D *, const struct CSecondaryWindowRepresentation *))***((_QWORD ***)this + 21);
    v4 = (CTopLevelWindow3D *)*((_QWORD *)this + 21);
    if ( v2 == CTopLevelWindow3D::OnSWRInvalidated )
      CTopLevelWindow3D::OnSWRInvalidated(v4, this);
    else
      v2(v4, this);
  }
}
