/*
 * XREFs of ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180036418
 * Callers:
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180033A94 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x1800363D4 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x180036690 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180036344 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x180036468 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
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
    CWindowData::UpdateOwnerLists(this, *((_BYTE *)this + 593) < 0x80u);
}
