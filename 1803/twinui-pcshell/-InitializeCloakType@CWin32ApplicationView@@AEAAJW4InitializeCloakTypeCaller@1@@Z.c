/*
 * XREFs of ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x18002B1C8
 * Callers:
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x18002E290 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 *     ?HandleRecycle@CWin32ApplicationView@@UEAAJXZ @ 0x180140570 (-HandleRecycle@CWin32ApplicationView@@UEAAJXZ.c)
 * Callees:
 *     ?GetWindow@CClassicWindowExternal@@UEAAPEAUHWND__@@XZ @ 0x180005770 (-GetWindow@CClassicWindowExternal@@UEAAPEAUHWND__@@XZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x18002B130 (-GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_75666d3f525b2f2bac154c43ea5df633___ @ 0x18008E794 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_75666d3f525b2f2bac154.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18013E708 (--$CloakTypeChange@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@.c)
 */

__int64 __fastcall CWin32ApplicationView::InitializeCloakType(__int64 a1, int a2)
{
  HRESULT ViewId; // eax
  unsigned int v5; // ebx
  CClassicWindowExternal *v6; // rcx
  __int64 (*v7)(void); // rax
  HWND Window; // rax
  __int64 v10; // rdx
  HWND v11; // rax
  HWND v12; // rax
  HRESULT WindowAttribute; // eax
  _QWORD v14[2]; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int16 *v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  char pvAttribute; // [rsp+60h] [rbp+10h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v15);
  v16 = -1LL;
  v17 = -1LL;
  ViewId = CWin32ApplicationView::GetViewId((CWin32ApplicationView *)(a1 + 16), &v15);
  v5 = ViewId;
  if ( ViewId < 0 )
  {
    v10 = 47LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)ViewId,
      v14[0]);
    goto LABEL_9;
  }
  if ( !a2 )
  {
    v14[1] = a1;
    v14[0] = &v15;
    GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_75666d3f525b2f2bac154c43ea5df633___(v14);
  }
  v6 = *(CClassicWindowExternal **)(a1 + 208);
  v7 = *(__int64 (**)(void))(*(_QWORD *)v6 + 24LL);
  if ( (char *)v7 == (char *)CClassicWindowExternal::GetWindow )
    Window = (HWND)CClassicWindowExternal::GetWindow(v6);
  else
    Window = (HWND)v7();
  ViewId = DwmGetWindowAttribute(Window, 0xEu, &pvAttribute, 4u);
  v5 = ViewId;
  if ( ViewId < 0 )
  {
    v10 = 76LL;
    goto LABEL_13;
  }
  if ( (pvAttribute & 2) == 0 || *(_DWORD *)(a1 + 256) )
    goto LABEL_8;
  v11 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 208) + 24LL))(*(_QWORD *)(a1 + 208));
  v12 = GetWindow(v11, 4u);
  if ( !v12 )
    goto LABEL_19;
  WindowAttribute = DwmGetWindowAttribute(v12, 0xEu, &pvAttribute, 4u);
  if ( WindowAttribute < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5E,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)WindowAttribute,
      v14[0]);
LABEL_19:
    *(_DWORD *)(a1 + 256) |= 1u;
    ApplicationViewManagement::ApplicationViewTraceLogging::CloakTypeChange<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,enum APPLICATION_VIEW_CLOAK_TYPE &>(
      &v15,
      a1 + 256);
    goto LABEL_8;
  }
  if ( (pvAttribute & 2) == 0 )
    goto LABEL_19;
LABEL_8:
  v5 = 0;
LABEL_9:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v15);
  return v5;
}
