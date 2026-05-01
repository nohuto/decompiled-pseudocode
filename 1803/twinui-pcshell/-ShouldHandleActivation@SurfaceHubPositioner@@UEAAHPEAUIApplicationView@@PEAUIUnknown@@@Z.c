/*
 * XREFs of ?ShouldHandleActivation@SurfaceHubPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800217A0
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x180023A80 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 * Callees:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18007C640 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SurfaceHubPositioner::ShouldHandleActivation(
        SurfaceHubPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  int DetailsForActivation; // eax
  struct PositionerPropertySetHelpers::ViewSizePreferences *v6; // [rsp+20h] [rbp-8h]
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IUnknown v9; // [rsp+48h] [rbp+20h] BYREF

  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           this,
                           (struct IApplicationView *)a3,
                           &v9,
                           0LL,
                           v6);
  if ( DetailsForActivation < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xEA,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation,
      v7);
  if ( ((__int64)v9.lpVtbl & 0x10) != 0 )
    return 0LL;
  else
    return *((unsigned __int8 *)this + 440);
}
