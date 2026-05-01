/*
 * XREFs of ?IsEqualByView@CTaskWindow@@UEBA_NPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180065410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CTaskWindow::IsEqualByView(
        CTaskWindow *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v2; // rcx
  char v3; // bl
  int (__fastcall **v5)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *); // rax
  int v6; // edi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((_QWORD *)this + 6);
  v3 = 0;
  if ( v2 && a2 )
  {
    if ( v2 == a2 )
      return 1;
    v5 = *(int (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))v2;
    v9 = 0LL;
    v8 = 0LL;
    if ( (*v5)(v2, &GUID_00000000_0000_0000_c000_000000000046, &v9) >= 0 )
    {
      v6 = (**(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))a2)(
             a2,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v8);
      if ( v6 >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      if ( v6 >= 0 && v9 == v8 )
        return 1;
    }
  }
  return v3;
}
