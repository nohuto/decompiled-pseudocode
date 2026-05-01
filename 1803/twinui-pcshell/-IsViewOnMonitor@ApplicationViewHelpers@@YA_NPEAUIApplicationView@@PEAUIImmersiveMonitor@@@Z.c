/*
 * XREFs of ?IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180305810
 * Callers:
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18014D530 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1802B94E0 (-GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall ApplicationViewHelpers::IsViewOnMonitor(
        ApplicationViewHelpers *this,
        struct IApplicationView *a2,
        struct IImmersiveMonitor *a3)
{
  bool v4; // di
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v11);
  v6 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, __int64 *))(*(_QWORD *)this + 80LL))(this, &v11);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, int *))(*(_QWORD *)a2 + 96LL))(a2, v11, &v10);
    if ( v6 >= 0 )
    {
      v4 = v10 != 0;
      goto LABEL_7;
    }
    v7 = 164LL;
  }
  else
  {
    v7 = 163LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    v7,
    (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
    (const char *)(unsigned int)v6);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v11);
  return v4;
}
