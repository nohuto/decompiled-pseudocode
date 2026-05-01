/*
 * XREFs of ?InitializePosition@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1802BCAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18007C640 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802BDA74 (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x1803055C4 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SurfaceHubPositioner::InitializePosition(
        SurfaceHubPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  unsigned int DetailsForActivation; // ebx
  __int64 v6; // rdx
  bool v7; // di
  struct IImmersiveApplication **v8; // r8
  int ApplicationFromView; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IUnknown v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  if ( *((_BYTE *)this + 440) )
  {
    DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                             this,
                             (struct IApplicationView *)a3,
                             &v13,
                             0LL);
    if ( (DetailsForActivation & 0x80000000) != 0 )
    {
      v6 = 257LL;
      goto LABEL_3;
    }
    v7 = 1;
    if ( ((__int64)v13.lpVtbl & 1) != 0 || ((__int64)v13.lpVtbl & 2) != 0 )
      v7 = 0;
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, (struct IApplicationView *)&v14, v8);
    DetailsForActivation = ApplicationFromView;
    if ( ApplicationFromView >= 0 )
    {
      ApplicationFromView = SurfaceHubPositioner::_SetDefaultLayout(
                              (SurfaceHubPositioner *)((char *)this - 112),
                              a2,
                              v7);
      DetailsForActivation = ApplicationFromView;
      if ( ApplicationFromView >= 0 )
      {
        DetailsForActivation = 0;
        goto LABEL_15;
      }
      v10 = 265LL;
    }
    else
    {
      v10 = 263LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)ApplicationFromView);
LABEL_15:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    return DetailsForActivation;
  }
  DetailsForActivation = -2147418113;
  v6 = 255LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)DetailsForActivation);
  return DetailsForActivation;
}
