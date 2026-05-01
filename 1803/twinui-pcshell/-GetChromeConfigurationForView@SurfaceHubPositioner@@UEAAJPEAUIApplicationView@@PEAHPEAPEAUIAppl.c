/*
 * XREFs of ?GetChromeConfigurationForView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1802BC910
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1802BCFD4 (-_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigur.c)
 */

__int64 __fastcall SurfaceHubPositioner::GetChromeConfigurationForView(
        SurfaceHubPositioner *this,
        struct IApplicationView *a2,
        int *a3,
        struct IApplicationViewTitlebarConfiguration **a4)
{
  int TitlebarConfiguration; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 448) )
  {
    TitlebarConfiguration = -2147418113;
    v5 = 191LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)TitlebarConfiguration);
    return (unsigned int)TitlebarConfiguration;
  }
  *a4 = 0LL;
  *a3 = 1;
  TitlebarConfiguration = SurfaceHubPositioner::_CreateTitlebarConfiguration(this, a4);
  if ( TitlebarConfiguration < 0 )
  {
    v5 = 195LL;
    goto LABEL_3;
  }
  return 0LL;
}
