/*
 * XREFs of ?SetTargetView@ViewEventArgsForSelectTargetView@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18011B7A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventArgsForSelectTargetView::SetTargetView(
        ViewEventArgsForSelectTargetView *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  __int64 v4; // rcx

  *((_BYTE *)this + 24) = 1;
  if ( *((struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **)this + 4) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
