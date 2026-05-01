/*
 * XREFs of ?RuntimeClassInitialize@ViewEventArgsForSwitch@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ApplicationViewSwitchingOptions@ViewManagement@UI@6@PEAUIAsyncCallback@@@Z @ 0x1800F0920
 * Callers:
 *     ?SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1800F2AD4 (-SwitchAsync@ViewEventDispatcher@@QEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Win.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventArgsForSwitch::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  __int64 v6; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  *(_DWORD *)(a1 + 32) = 13;
  v6 = *(_QWORD *)(a1 + 40);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( *(_QWORD *)(a1 + 80) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v10 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = a2;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( *(_QWORD *)(a1 + 88) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
    v11 = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 88) = a3;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  *(_DWORD *)(a1 + 96) = a4;
  if ( *(_QWORD *)(a1 + 104) != a5 )
  {
    if ( a5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
    v12 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a1 + 104) = a5;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return 0LL;
}
