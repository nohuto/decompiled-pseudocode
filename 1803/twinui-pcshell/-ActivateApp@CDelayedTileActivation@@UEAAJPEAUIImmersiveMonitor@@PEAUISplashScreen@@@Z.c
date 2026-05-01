/*
 * XREFs of ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x1802B4540
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18018D5D8 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?PopulateViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@0@Z @ 0x1802B4D8C (-PopulateViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@0@Z.c)
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x180305FE4 (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDelayedTileActivation::ActivateApp(
        CDelayedTileActivation *this,
        struct IImmersiveMonitor *a2,
        struct ISplashScreen *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  HRESULT Instance; // eax
  struct IUnknown *v8; // r8
  int v9; // eax
  IUnknown *punk; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v12[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  char v14; // [rsp+88h] [rbp+28h] BYREF
  struct IUnknown *ppv; // [rsp+98h] [rbp+38h] BYREF

  v12[1] = -2LL;
  v12[0] = 0LL;
  if ( a2
    && (v5 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, _QWORD *))(*(_QWORD *)a2 + 40LL))(a2, v12),
        v6 = v5,
        v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    Instance = CoCreateInstance(
                 &CLSID_ApplicationActivationManager,
                 0LL,
                 1u,
                 &GUID_998d66a2_4a54_496c_9e18_268890860004,
                 (LPVOID *)&ppv);
    v6 = Instance;
    if ( Instance >= 0 )
    {
      punk = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
      if ( (int)Microsoft::WRL::AgileRef::InternalResolve(
                  (CDelayedTileActivation *)((char *)this + 128),
                  &GUID_00000000_0000_0000_c000_000000000046,
                  (void **)&punk) >= 0
        && punk )
      {
        ViewSizePreferenceHelpers::PopulateViewValueSetFromSite(punk, ppv, v8);
      }
      v9 = ActivateApplicationForLaunchWithManager(
             ppv,
             *((_QWORD *)this + 7),
             *((_QWORD *)this + 10),
             *((_QWORD *)this + 13),
             *((_DWORD *)this + 12),
             a3,
             v12[0],
             &v14);
      v6 = v9;
      if ( v9 >= 0 )
        v6 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x38,
          (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
          (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D,
        (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
        (const char *)(unsigned int)Instance);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  }
  return v6;
}
