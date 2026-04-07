/*
 * XREFs of ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18002E920
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180026D8C (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180027B00 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002F0C4 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?GetOffsetToOwner@CWindowData@@QEAA?AUtagPOINT@@XZ @ 0x180015924 (-GetOffsetToOwner@CWindowData@@QEAA-AUtagPOINT@@XZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180025D68 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x18002EEDC (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::OnWindowOffsetUpdated(CSecondaryWindowRepresentation *this)
{
  __int64 i; // rdi
  const struct tagPOINT *v3; // rax
  __int64 v4; // rcx
  const struct tagPOINT *OffsetToOwner; // rax
  struct tagPOINT *v6; // r9
  char v7; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 4) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 38); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 16) + 8 * i);
      if ( *(_QWORD *)(v4 + 48) )
      {
        OffsetToOwner = (const struct tagPOINT *)CWindowData::GetOffsetToOwner(*(CWindowData **)(v4 + 32), (__int64)&v7);
        CVisual::SetOffset(v6, OffsetToOwner);
      }
    }
    if ( *((_QWORD *)this + 6) )
    {
      v3 = (const struct tagPOINT *)CWindowData::GetOffsetToOwner(*((CWindowData **)this + 4), (__int64)&v7);
      CVisual::SetOffset(*((struct tagPOINT **)this + 6), v3);
      if ( *(_DWORD *)(*((_QWORD *)this + 6) + 80LL) )
        CSecondaryWindowRepresentation::SetDirtyFlags(this, 8u);
    }
  }
}
