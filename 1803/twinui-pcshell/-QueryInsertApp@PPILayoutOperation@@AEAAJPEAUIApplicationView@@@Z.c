/*
 * XREFs of ?QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z @ 0x1802D9594
 * Callers:
 *     ?InsertApp@PPILayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z @ 0x1802D9370 (-InsertApp@PPILayoutOperation@@UEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002BF80 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802C98E4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch@@@wil@@C.c)
 *     ?FindLeastRecentlyActivatedItem@PPILayoutOperation@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x1802D9230 (-FindLeastRecentlyActivatedItem@PPILayoutOperation@@AEAAJPEAPEAUIApplicationView@@@Z.c)
 *     ?IsPPIAppLaunchHwndCheckEnabled@@YA_NXZ @ 0x1802D9488 (-IsPPIAppLaunchHwndCheckEnabled@@YA_NXZ.c)
 */

__int64 __fastcall PPILayoutOperation::QueryInsertApp(
        PPILayoutOperation *this,
        __int64 (__fastcall ***a2)(CWin32ApplicationView *this, struct _GUID *a2, void **a3))
{
  struct IApplicationView *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v8; // eax
  __int64 *v9; // rcx
  __int64 v10; // r10
  int v11; // ebx
  __int64 v12; // rdx
  int LeastRecentlyActivatedItem; // eax
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v16; // [rsp+50h] [rbp+18h] BYREF
  struct IApplicationView *v17; // [rsp+58h] [rbp+20h] BYREF

  if ( IsPPIAppLaunchHwndCheckEnabled() && !ApplicationViewHelpers::GetWindowForView(a2, v4) )
    return 2147943800LL;
  wil::Feature<__WilFeatureTraits_Feature_SurfaceHubProximalAppLaunch>::ReportUsageToService(v5, (__int64)v4, v6);
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **)))(**((_QWORD **)this + 8) + 184LL))(
         *((_QWORD *)this + 8),
         a2) )
  {
    return 0LL;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 8) + 168LL))(
         *((_QWORD *)this + 8),
         0LL,
         &v16);
  v9 = (__int64 *)*((_QWORD *)this + 8);
  v10 = *v9;
  if ( v8 < 0 )
  {
    if ( (*(unsigned int (**)(void))(v10 + 72))() <= 1 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 8) + 232LL))(
              *((_QWORD *)this + 8),
              a2,
              1LL);
      if ( v11 < 0 )
      {
        v12 = 227LL;
        goto LABEL_9;
      }
      return 0LL;
    }
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
    LeastRecentlyActivatedItem = PPILayoutOperation::FindLeastRecentlyActivatedItem(this, &v17);
    v11 = LeastRecentlyActivatedItem;
    if ( LeastRecentlyActivatedItem >= 0 )
    {
      LeastRecentlyActivatedItem = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **), __int64))(**((_QWORD **)this + 8) + 248LL))(
                                     *((_QWORD *)this + 8),
                                     v17,
                                     a2,
                                     1LL);
      v11 = LeastRecentlyActivatedItem;
      if ( LeastRecentlyActivatedItem >= 0 )
      {
        v11 = 0;
        goto LABEL_19;
      }
      v14 = 235LL;
    }
    else
    {
      v14 = 234LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppilayoutoperation.cpp",
      (const char *)(unsigned int)LeastRecentlyActivatedItem);
LABEL_19:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
    return (unsigned int)v11;
  }
  v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **), __int64))(v10 + 248))(
          v9,
          0LL,
          a2,
          1LL);
  if ( v11 >= 0 )
    return 0LL;
  v12 = 220LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppilayoutoperation.cpp",
    (const char *)(unsigned int)v11);
  return (unsigned int)v11;
}
