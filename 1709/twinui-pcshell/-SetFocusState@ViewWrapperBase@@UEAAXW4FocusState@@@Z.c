/*
 * XREFs of ?SetFocusState@ViewWrapperBase@@UEAAXW4FocusState@@@Z @ 0x18013EB40
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x1801419D0 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 */

void __fastcall ViewWrapperBase::SetFocusState(__int64 a1, int a2)
{
  __int16 v3; // ax

  if ( a2 == 1 )
    *(_DWORD *)(a1 + 96) |= 0x100u;
  else
    *(_DWORD *)(a1 + 96) &= ~0x100u;
  if ( (~(*(_DWORD *)(a1 + 96) >> 6) & 1) != 0 )
  {
    *(_WORD *)(a1 + 340) &= ~0x40u;
    v3 = 0;
    if ( a2 == 1 )
      v3 = 64;
  }
  else
  {
    if ( a2 )
      return;
    *(_WORD *)(a1 + 340) &= ~0x80u;
    ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(a1 - 8));
    v3 = 128;
  }
  *(_WORD *)(a1 + 340) |= v3;
  ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(a1 - 8));
}
