/*
 * XREFs of ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x18007B60C
 * Callers:
 *     ?RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ @ 0x18007B464 (-RuntimeClassInitialize@CWin32ApplicationView@@QEAAJXZ.c)
 *     ?HandleRecycle@CWin32ApplicationView@@UEAAJXZ @ 0x18007B8F0 (-HandleRecycle@CWin32ApplicationView@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800759F0 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x18007B850 (-GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18007E574 (--$CloakTypeChange@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@.c)
 *     ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x1800816B8 (-_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::InitializeCloakType(__int64 a1, int a2)
{
  HRESULT ViewId; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rdi
  __int64 v8; // rdx
  HWND v9; // rax
  HWND v10; // rax
  HWND Window; // rax
  HRESULT WindowAttribute; // eax
  _DWORD v14[2]; // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+38h] [rbp-28h]
  LPVOID pv[4]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  volatile signed __int32 *v18; // [rsp+80h] [rbp+20h] BYREF
  int pvAttribute; // [rsp+90h] [rbp+30h] BYREF

  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  ViewId = CWin32ApplicationView::GetViewId((CWin32ApplicationView *)(a1 + 8), (unsigned __int16 **)pv);
  v5 = ViewId;
  if ( ViewId < 0 )
  {
    v6 = 47LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)ViewId);
    goto LABEL_24;
  }
  if ( !a2 )
  {
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v18);
    v7 = v18;
    if ( v18 )
    {
      v15 = 0;
      if ( ApplicationViewManagement::CPersistence::_ReadPersistedData(
             (ApplicationViewManagement::CPersistence *)(v18 + 8),
             (const unsigned __int16 *)pv[0],
             L"CloakType",
             v14,
             0xCu) >= 0 )
      {
        if ( v14[0] == 4 )
        {
          if ( v14[1] == 1129590832 )
          {
            *(_DWORD *)(a1 + 216) = v15 & 3;
            ApplicationViewManagement::ApplicationViewTraceLogging::CloakTypeChange<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,enum APPLICATION_VIEW_CLOAK_TYPE &>(pv);
            goto LABEL_12;
          }
          v8 = 62LL;
        }
        else
        {
          v8 = 61LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\Persistence.h",
          (const char *)0x8007000DLL);
      }
LABEL_12:
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v7);
    }
  }
  v9 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 24LL))(*(_QWORD *)(a1 + 168));
  ViewId = DwmGetWindowAttribute(v9, 0xEu, &pvAttribute, 4u);
  v5 = ViewId;
  if ( ViewId < 0 )
  {
    v6 = 76LL;
    goto LABEL_15;
  }
  if ( (pvAttribute & 2) != 0 && !*(_DWORD *)(a1 + 216) )
  {
    v10 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 24LL))(*(_QWORD *)(a1 + 168));
    Window = GetWindow(v10, 4u);
    if ( !Window )
    {
LABEL_22:
      *(_DWORD *)(a1 + 216) |= 1u;
      ApplicationViewManagement::ApplicationViewTraceLogging::CloakTypeChange<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,enum APPLICATION_VIEW_CLOAK_TYPE &>(pv);
      goto LABEL_23;
    }
    WindowAttribute = DwmGetWindowAttribute(Window, 0xEu, &pvAttribute, 4u);
    if ( WindowAttribute < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)WindowAttribute);
      goto LABEL_22;
    }
    if ( (pvAttribute & 2) == 0 )
      goto LABEL_22;
  }
LABEL_23:
  v5 = 0;
LABEL_24:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v5;
}
