/*
 * XREFs of ?GetChromeConfigurationForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1801AE500
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1801B15B4 (-_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigu.c)
 */

__int64 __fastcall HolographicPositioner::GetChromeConfigurationForView(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        int *a3,
        struct IApplicationViewTitlebarConfiguration **a4)
{
  int TitleBarConfiguration; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  *a3 = 0;
  TitleBarConfiguration = HolographicPositioner::_CreateTitleBarConfiguration(this, a4);
  v5 = TitleBarConfiguration;
  if ( TitleBarConfiguration >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x23A,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)TitleBarConfiguration);
  return v5;
}
