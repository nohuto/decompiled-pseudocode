/*
 * XREFs of ?GetPosition@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002AB60
 * Callers:
 *     ?_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180022368 (-_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_3793e4c891056231a19fa9236fba9f97___ @ 0x18000BD5C (ShellPositionerHelpers--PerformCallbackOnView__lambda_3793e4c891056231a19fa9236fba9f97___.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800198CC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x180092E5C (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::GetPosition(CWin32ApplicationView *this, const struct _GUID *a2, void **a3)
{
  __int64 v6; // r9
  IUnknown *v7; // rbx
  int v8; // ebx
  CWin32ApplicationView *v10; // [rsp+28h] [rbp-28h] BYREF
  __int128 v11; // [rsp+30h] [rbp-20h]
  void **v12; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  IUnknown *punk; // [rsp+80h] [rbp+30h] BYREF
  __int64 v15; // [rsp+88h] [rbp+38h] BYREF
  IUnknown *v16; // [rsp+90h] [rbp+40h] BYREF
  __int64 v17; // [rsp+98h] [rbp+48h] BYREF

  *a3 = 0LL;
  punk = 0LL;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v15);
  if ( v15 )
  {
    v6 = *(_QWORD *)(v15 + 48);
    v7 = *(IUnknown **)(v6 + 592);
    if ( v7 )
      ((void (__fastcall *)(_QWORD))v7->lpVtbl->AddRef)(*(_QWORD *)(v6 + 592));
    v17 = 0LL;
    v16 = punk;
    punk = v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v17);
  }
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v15);
  v10 = this;
  v11 = (__int128)*a2;
  v12 = a3;
  v8 = ShellPositionerHelpers::PerformCallbackOnView__lambda_3793e4c891056231a19fa9236fba9f97___(
         punk,
         this,
         (__int64)&v10);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&punk);
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A1,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)(unsigned int)v8,
    -2);
  return (unsigned int)v8;
}
