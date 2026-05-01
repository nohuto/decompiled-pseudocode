/*
 * XREFs of ?SetFocusState@ViewWrapperBase@@UEAAXW4FocusState@@@Z @ 0x180114630
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x180116F48 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 */

void __fastcall ViewWrapperBase::SetFocusState(__int64 a1, int a2)
{
  ViewWrapperBase *v3; // rcx

  if ( a2 == 1 )
    *(_DWORD *)(a1 + 72) |= 0x100u;
  else
    *(_DWORD *)(a1 + 72) &= ~0x100u;
  if ( (~(*(_DWORD *)(a1 + 72) >> 6) & 1) != 0 )
  {
    *(_WORD *)(a1 + 316) &= ~0x40u;
    *(_WORD *)(a1 + 316) |= (a2 == 1) << 6;
    v3 = (ViewWrapperBase *)(a1 - 8);
  }
  else
  {
    if ( a2 )
      return;
    *(_WORD *)(a1 + 316) &= ~0x80u;
    ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(a1 - 8));
    v3 = (ViewWrapperBase *)(a1 - 8);
    *(_WORD *)(a1 + 316) |= 0x80u;
  }
  ViewWrapperBase::CommitImportanceVector(v3);
}
