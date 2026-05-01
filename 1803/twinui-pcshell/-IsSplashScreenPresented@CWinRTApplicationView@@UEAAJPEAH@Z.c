/*
 * XREFs of ?IsSplashScreenPresented@CWinRTApplicationView@@UEAAJPEAH@Z @ 0x18001BB00
 * Callers:
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAJW4AppViewExecutionState@23456@PEAUIApplicationView@@PEAPEAUIAppViewExecutionData@23456@@Z @ 0x18001F6E0 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 * Callees:
 *     ?IsSplashScreenPresented@CImmersiveApp@@UEAAJPEAH@Z @ 0x18004C3D0 (-IsSplashScreenPresented@CImmersiveApp@@UEAAJPEAH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWinRTApplicationView::IsSplashScreenPresented(CWinRTApplicationView *this, int *a2)
{
  CImmersiveApp *v2; // rcx
  __int64 (*v3)(void); // rax
  int IsSplashScreenPresented; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0;
  v2 = (CImmersiveApp *)*((_QWORD *)this + 25);
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 320LL);
  if ( (char *)v3 == (char *)CImmersiveApp::IsSplashScreenPresented )
    IsSplashScreenPresented = CImmersiveApp::IsSplashScreenPresented(v2, a2);
  else
    IsSplashScreenPresented = v3();
  v5 = IsSplashScreenPresented;
  if ( IsSplashScreenPresented >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x215,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)IsSplashScreenPresented,
    v7);
  return v5;
}
