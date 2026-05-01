/*
 * XREFs of ?GetRootSwitchableOwner@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUHWND__@@@Z @ 0x180038580
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x180036078 (-GetRootOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClass.c)
 *     ?s_ClassicWindowFromClassicWindowExternal@CClassicWindowManager@@CA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindowExternal@@@Z @ 0x18003745C (-s_ClassicWindowFromClassicWindowExternal@CClassicWindowManager@@CA-AV-$ComPtr@UIClassicWindow@@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::GetRootSwitchableOwner(
        CClassicWindowManager *this,
        struct IClassicWindowExternal *a2,
        HWND *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned int v7; // esi
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0LL;
  CClassicWindowManager::s_ClassicWindowFromClassicWindowExternal(
    &v9,
    (void (__fastcall ***)(_QWORD, GUID *, __int64 *))a2);
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = v9;
  CClassicWindowManager::GetRootOwner(v5, &v10, v9);
  v6 = v10;
  if ( v10 != v4 )
    *a3 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = *a3 == 0LL ? 0x80070490 : 0;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v7;
}
