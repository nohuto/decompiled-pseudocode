/*
 * XREFs of ?OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180021750
 * Callers:
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::operator() @ 0x18001E090 (_lambda_4181134c5161f261fff3e61f273c9fd8_--operator().c)
 *     ?OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18001EBC0 (-OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1802BD160 (-_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@.c)
 *     ?_IsViewManaged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1802BD3C8 (-_IsViewManaged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_OnSizeConstraintsChanged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802BD488 (-_OnSizeConstraintsChanged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802BDA74 (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SurfaceHubPositioner::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  int v5; // r8d
  int v6; // r8d
  SurfaceHubPositioner *v7; // rsi
  int IsViewManaged; // edi
  __int64 v9; // rdx
  SurfaceHubPositioner *v10; // rsi
  __int64 v11; // rdx
  int MonitorForLaunch; // eax
  struct IUnknown *v13[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  struct IUnknown *v15; // [rsp+40h] [rbp+10h] BYREF

  v13[1] = (struct IUnknown *)-2LL;
  if ( !*(_BYTE *)(a1 + 424) )
    return 0LL;
  v5 = a3 - 7;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 7 )
      {
        v7 = (SurfaceHubPositioner *)(a1 - 128);
        IsViewManaged = SurfaceHubPositioner::_IsViewManaged((SurfaceHubPositioner *)(a1 - 128), a2, (bool *)&v15);
        if ( IsViewManaged < 0 )
        {
          v9 = 388LL;
LABEL_12:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v9,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
            (const char *)(unsigned int)IsViewManaged,
            (int)v13[0]);
          return (unsigned int)IsViewManaged;
        }
        if ( (_BYTE)v15 )
          SurfaceHubPositioner::_OnSizeConstraintsChanged(v7, a2);
      }
      return 0LL;
    }
  }
  v10 = (SurfaceHubPositioner *)(a1 - 128);
  IsViewManaged = SurfaceHubPositioner::_IsViewManaged((SurfaceHubPositioner *)(a1 - 128), a2, (bool *)&v15);
  if ( IsViewManaged < 0 )
  {
    v9 = 367LL;
    goto LABEL_12;
  }
  if ( !(_BYTE)v15 )
    return 0LL;
  v13[0] = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v13);
  MonitorForLaunch = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IUnknown **))(*(_QWORD *)a2 + 80LL))(
                       a2,
                       v13);
  IsViewManaged = MonitorForLaunch;
  if ( MonitorForLaunch >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v15);
    MonitorForLaunch = SurfaceHubPositioner::_GetMonitorForLaunch(v10, a2, (struct IImmersiveMonitor **)&v15);
    IsViewManaged = MonitorForLaunch;
    if ( MonitorForLaunch >= 0 )
    {
      if ( !(unsigned int)SHIsSameObject(v13[0], v15) )
        SurfaceHubPositioner::_SetDefaultLayout(v10, a2, 0);
      (*(void (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v13);
      return 0LL;
    }
    v11 = 373LL;
  }
  else
  {
    v11 = 372LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)MonitorForLaunch,
    (int)v13[0]);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v15);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v13);
  return (unsigned int)IsViewManaged;
}
