/*
 * XREFs of ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x18007E35C
 * Callers:
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x18007E124 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 *     ?HandleRecycle@CWin32ApplicationView@@UEAAJXZ @ 0x18007E580 (-HandleRecycle@CWin32ApplicationView@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x18007E4E0 (-GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x180081560 (--$CloakTypeChange@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_75666d3f525b2f2bac154c43ea5df633___ @ 0x180081628 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_75666d3f525b2f2bac154.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::InitializeCloakType(__int64 a1, int a2)
{
  HRESULT ViewId; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  HWND v7; // rax
  HWND v8; // rax
  HWND Window; // rax
  HRESULT WindowAttribute; // eax
  _QWORD v12[2]; // [rsp+20h] [rbp-30h] BYREF
  LPVOID pv[4]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int pvAttribute; // [rsp+80h] [rbp+30h] BYREF

  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  ViewId = CWin32ApplicationView::GetViewId((CWin32ApplicationView *)(a1 + 8), (unsigned __int16 **)pv);
  v5 = ViewId;
  if ( ViewId < 0 )
  {
    v6 = 47LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)ViewId);
    goto LABEL_16;
  }
  if ( !a2 )
  {
    v12[1] = a1;
    v12[0] = pv;
    GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_75666d3f525b2f2bac154c43ea5df633___(v12);
  }
  v7 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 24LL))(*(_QWORD *)(a1 + 192));
  ViewId = DwmGetWindowAttribute(v7, 0xEu, &pvAttribute, 4u);
  v5 = ViewId;
  if ( ViewId < 0 )
  {
    v6 = 76LL;
    goto LABEL_7;
  }
  if ( (pvAttribute & 2) != 0 && !*(_DWORD *)(a1 + 240) )
  {
    v8 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 192) + 24LL))(*(_QWORD *)(a1 + 192));
    Window = GetWindow(v8, 4u);
    if ( !Window )
    {
LABEL_14:
      *(_DWORD *)(a1 + 240) |= 1u;
      ApplicationViewManagement::ApplicationViewTraceLogging::CloakTypeChange<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,enum APPLICATION_VIEW_CLOAK_TYPE &>(
        pv,
        a1 + 240);
      goto LABEL_15;
    }
    WindowAttribute = DwmGetWindowAttribute(Window, 0xEu, &pvAttribute, 4u);
    if ( WindowAttribute < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)WindowAttribute);
      goto LABEL_14;
    }
    if ( (pvAttribute & 2) == 0 )
      goto LABEL_14;
  }
LABEL_15:
  v5 = 0;
LABEL_16:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v5;
}
