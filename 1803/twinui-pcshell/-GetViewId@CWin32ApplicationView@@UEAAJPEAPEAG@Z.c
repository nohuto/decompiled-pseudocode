/*
 * XREFs of ?GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x18002B130
 * Callers:
 *     ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x180024B30 (-SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z.c)
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x1800250F4 (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x18002ADA0 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 *     ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x18002B1C8 (-InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z.c)
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18002CE80 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 * Callees:
 *     ?GetWindow@CClassicWindowExternal@@UEAAPEAUHWND__@@XZ @ 0x180005770 (-GetWindow@CClassicWindowExternal@@UEAAPEAUHWND__@@XZ.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001D0C0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::GetViewId(CWin32ApplicationView *this, unsigned __int16 **a2)
{
  CClassicWindowExternal *v3; // rcx
  __int64 (__fastcall *v4)(CClassicWindowExternal *); // rax
  __int64 Window; // rax
  int v6; // eax
  unsigned int v7; // ebx
  wchar_t *v8; // rcx
  wchar_t *v10[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  memset(v10, 0, 24);
  v3 = (CClassicWindowExternal *)*((_QWORD *)this + 24);
  v4 = *(__int64 (__fastcall **)(CClassicWindowExternal *))(*(_QWORD *)v3 + 24LL);
  if ( v4 == CClassicWindowExternal::GetWindow )
    Window = CClassicWindowExternal::GetWindow(v3);
  else
    Window = v4(v3);
  v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         v10,
         L"W32:%p",
         Window);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v6,
      -2);
    v8 = v10[0];
  }
  else
  {
    v8 = 0LL;
    *a2 = v10[0];
    v7 = 0;
  }
  if ( v8 )
    CoTaskMemFree(v8);
  return v7;
}
