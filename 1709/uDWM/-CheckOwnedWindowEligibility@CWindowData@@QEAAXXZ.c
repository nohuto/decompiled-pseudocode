/*
 * XREFs of ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180011520
 * Callers:
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x1800114DC (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x180011798 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180026264 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800296D0 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18001144C (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x180011570 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 */

void __fastcall CWindowData::CheckOwnedWindowEligibility(CWindowData *this)
{
  __int64 v1; // rax
  char ShouldBeIncludedInOwnerSWR; // bl

  v1 = *((_QWORD *)this + 68);
  ShouldBeIncludedInOwnerSWR = 0;
  if ( v1 && (*(_BYTE *)(v1 + 593) & 0x40) != 0 )
    ShouldBeIncludedInOwnerSWR = CWindowData::ShouldBeIncludedInOwnerSWR(this);
  if ( *((_BYTE *)this + 593) >> 7 != ShouldBeIncludedInOwnerSWR )
    CWindowData::UpdateOwnerLists(this, !(*((_BYTE *)this + 593) >> 7));
}
