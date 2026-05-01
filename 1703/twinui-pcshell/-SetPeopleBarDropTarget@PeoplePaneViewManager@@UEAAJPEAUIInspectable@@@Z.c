/*
 * XREFs of ?SetPeopleBarDropTarget@PeoplePaneViewManager@@UEAAJPEAUIInspectable@@@Z @ 0x1800E9810
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PeoplePaneViewManager::SetPeopleBarDropTarget(PeoplePaneViewManager *this, struct IInspectable *a2)
{
  __int64 v4; // rcx

  if ( *((struct IInspectable **)this + 20) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IInspectable *))a2->lpVtbl->AddRef)(a2);
    v4 = *((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
