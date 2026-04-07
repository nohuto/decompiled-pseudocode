/*
 * XREFs of ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x18000ECFC
 * Callers:
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000E5F0 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18000E7A4 (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000EEE4 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnSWRInvalidated@CSecondaryWindowRepresentation@@UEAAXPEBV1@@Z @ 0x1800753F0 (-OnSWRInvalidated@CSecondaryWindowRepresentation@@UEAAXPEBV1@@Z.c)
 * Callees:
 *     ?OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180020E60 (-OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::SetDirtyFlags(CSecondaryWindowRepresentation *this, int a2)
{
  void (__fastcall *v2)(CTopLevelWindow3D *__hidden, const struct CSecondaryWindowRepresentation *); // rax
  CTopLevelWindow3D *v4; // rcx

  if ( (a2 & *((_DWORD *)this + 6)) != a2 )
  {
    *((_DWORD *)this + 6) |= a2;
    v2 = (void (__fastcall *)(CTopLevelWindow3D *__hidden, const struct CSecondaryWindowRepresentation *))***((_QWORD ***)this + 21);
    v4 = (CTopLevelWindow3D *)*((_QWORD *)this + 21);
    if ( v2 == CTopLevelWindow3D::OnSWRInvalidated )
      CTopLevelWindow3D::OnSWRInvalidated(v4, this);
    else
      v2(v4, this);
  }
}
