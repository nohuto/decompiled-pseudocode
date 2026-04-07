/*
 * XREFs of ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x18003A80C
 * Callers:
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003A138 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18003A2EC (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003A9F8 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnSWRInvalidated@CSecondaryWindowRepresentation@@UEAAXPEBV1@@Z @ 0x18007F6A0 (-OnSWRInvalidated@CSecondaryWindowRepresentation@@UEAAXPEBV1@@Z.c)
 * Callees:
 *     ?OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18002C940 (-OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
