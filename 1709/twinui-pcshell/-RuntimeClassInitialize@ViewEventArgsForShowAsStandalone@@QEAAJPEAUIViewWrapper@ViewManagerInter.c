/*
 * XREFs of ?RuntimeClassInitialize@ViewEventArgsForShowAsStandalone@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0W4ViewSizePreference@ViewManagement@UI@6@1_KPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18011B108
 * Callers:
 *     ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x18011D36C (-TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Win.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventArgsForShowAsStandalone::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx

  *(_DWORD *)(a1 + 56) = 12;
  if ( *(_QWORD *)(a1 + 64) != a8 )
  {
    if ( a8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a8 + 8LL))(a8);
    v12 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = a8;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( *(_QWORD *)(a1 + 104) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v13 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a1 + 104) = a2;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( *(_QWORD *)(a1 + 112) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
    v14 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = a3;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  *(_DWORD *)(a1 + 124) = a5;
  *(_QWORD *)(a1 + 128) = a6;
  *(_DWORD *)(a1 + 120) = a4;
  if ( *(_QWORD *)(a1 + 136) != a7 )
  {
    if ( a7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 8LL))(a7);
    v15 = *(_QWORD *)(a1 + 136);
    *(_QWORD *)(a1 + 136) = a7;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return 0LL;
}
