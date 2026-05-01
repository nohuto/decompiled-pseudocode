/*
 * XREFs of ?GetRootSwitchableOwner@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUHWND__@@@Z @ 0x180006360
 * Callers:
 *     ?GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18002A520 (-GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?s_ClassicWindowFromClassicWindowExternal@CClassicWindowManager@@CA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindowExternal@@@Z @ 0x18000546C (-s_ClassicWindowFromClassicWindowExternal@CClassicWindowManager@@CA-AV-$ComPtr@UIClassicWindow@@.c)
 *     ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x180007BF4 (-GetRootOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClass.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::GetRootSwitchableOwner(
        CClassicWindowManager *this,
        __int64 (__fastcall ***a2)(__int64 a1, __int64 a2, __int64 *a3),
        HWND *a3)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0LL;
  CClassicWindowManager::s_ClassicWindowFromClassicWindowExternal(&v7, a2);
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  CClassicWindowManager::GetRootOwner(v4, &v8, v7);
  if ( v8 != v7 )
    *a3 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = *a3 == 0LL ? 0x80070490 : 0;
  Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(&v8);
  Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease(&v7);
  return v5;
}
