/*
 * XREFs of ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180036344
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F800 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030490 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180033A94 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180036418 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 * Callees:
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003A2A4 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CWindowData::UpdateOwnerLists(CWindowData *this, char a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v6; // rcx

  *((_BYTE *)this + 593) &= ~0x80u;
  v2 = *((_QWORD *)this + 68);
  v3 = 0LL;
  *((_BYTE *)this + 593) |= a2 << 7;
  if ( *(_DWORD *)(v2 + 464) )
  {
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 68) + 440LL) + 8 * v3);
      if ( *(_QWORD *)(v6 + 64) == v2 && *(_DWORD *)(v6 + 72) == 1 )
        CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(
          (CSecondaryWindowRepresentation *)v6,
          this,
          a2);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(*((_QWORD *)this + 68) + 464LL) );
  }
}
