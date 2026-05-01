/*
 * XREFs of ?GetPeopleBarDropTarget@PeoplePaneViewManager@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180112760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PeoplePaneViewManager::GetPeopleBarDropTarget(PeoplePaneViewManager *this, struct IInspectable **a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 52);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = (struct IInspectable *)*((_QWORD *)this + 52);
  return 0LL;
}
