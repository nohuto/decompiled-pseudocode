/*
 * XREFs of ?IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z @ 0x180035F94
 * Callers:
 *     ?EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHWND__@@@Z @ 0x180038650 (-EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHW.c)
 *     CClassicWindowManager::ForEachOwnee__lambda_858344172df6f9bddab2a469aab627e9___ @ 0x180039E20 (CClassicWindowManager--ForEachOwnee__lambda_858344172df6f9bddab2a469aab627e9___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CClassicWindowManager::IsWindowOwnedBy(
        CClassicWindowManager *this,
        struct IClassicWindow *a2,
        struct IClassicWindow *a3)
{
  struct IClassicWindow **v5; // rax
  struct IClassicWindow *v6; // rbx
  struct IClassicWindow **v7; // rax
  struct IClassicWindow *v8; // rdi
  struct IClassicWindow *v9; // rcx

  v5 = (struct IClassicWindow **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL))(a2);
  v6 = *v5;
  if ( *v5 )
  {
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v6 + 8LL))(*v5);
    while ( a2 != v6 )
    {
      if ( v6 == a3 )
      {
        if ( v6 )
          (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v6 + 16LL))(v6);
        return 1;
      }
      v7 = (struct IClassicWindow **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v6 + 96LL))(v6);
      v8 = *v7;
      if ( v6 != *v7 )
      {
        if ( v8 )
          (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v8 + 8LL))(*v7);
        v9 = v6;
        v6 = v8;
        if ( v9 )
          (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v9 + 16LL))(v9);
      }
      if ( !v6 )
        return 0;
    }
    if ( v6 )
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return 0;
}
