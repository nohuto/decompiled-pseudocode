/*
 * XREFs of ?SetPeopleBarDropTarget@PeoplePaneViewManager@@UEAAJPEAUIInspectable@@@Z @ 0x1801127A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PeoplePaneViewManager::SetPeopleBarDropTarget(PeoplePaneViewManager *this, struct IInspectable *a2)
{
  __int64 v4; // rcx

  if ( *((struct IInspectable **)this + 52) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IInspectable *))a2->lpVtbl->AddRef)(a2);
    v4 = *((_QWORD *)this + 52);
    *((_QWORD *)this + 52) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
