/*
 * XREFs of ?DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1802BC740
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802BD66C (-_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802BD7D4 (-_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SurfaceHubPositioner::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  SurfaceHubPositioner *v14; // rdi
  struct IImmersiveMonitor *v15[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v17; // [rsp+60h] [rbp+20h] BYREF
  struct IImmersiveMonitor *v18; // [rsp+78h] [rbp+38h] BYREF

  v15[1] = (struct IImmersiveMonitor *)-2LL;
  if ( *(_BYTE *)(a1 + 432) )
  {
    if ( (a3 & 0x10) != 0 )
    {
      v5 = SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange((SurfaceHubPositioner *)(a1 - 120), a2);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AA,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v5);
        return v6;
      }
    }
    if ( (a3 & 0x28) != 0 )
    {
      v18 = 0LL;
      v8 = *(_QWORD *)(a1 + 40);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v18);
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v8 + 72LL))(
             v8,
             0LL,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &v18);
      v6 = v9;
      if ( v9 < 0 )
      {
        v10 = 433LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v9);
        goto LABEL_22;
      }
      v17 = 1;
      v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 40) + 32LL))(
             *(_QWORD *)(a1 + 40),
             &v17);
      v6 = v9;
      if ( v9 < 0 )
      {
        v10 = 435LL;
        goto LABEL_21;
      }
      if ( v17 <= 1 )
      {
        v14 = (SurfaceHubPositioner *)(a1 - 120);
      }
      else
      {
        v15[0] = 0LL;
        v11 = *(_QWORD *)(a1 + 40);
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v15);
        v12 = (*(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, struct IImmersiveMonitor **))(*(_QWORD *)v11 + 104LL))(
                v11,
                1LL,
                v18,
                v15);
        v6 = v12;
        if ( v12 < 0 )
        {
          v13 = 439LL;
LABEL_16:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
            (const char *)(unsigned int)v12);
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v15);
LABEL_22:
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v18);
          return v6;
        }
        v14 = (SurfaceHubPositioner *)(a1 - 120);
        v12 = SurfaceHubPositioner::_ReLayoutAllApps(v14, v15[0]);
        v6 = v12;
        if ( v12 < 0 )
        {
          v13 = 440LL;
          goto LABEL_16;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)v15);
      }
      v9 = SurfaceHubPositioner::_ReLayoutAllApps(v14, v18);
      v6 = v9;
      if ( v9 < 0 )
      {
        v10 = 442LL;
        goto LABEL_21;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v18);
    }
  }
  return 0LL;
}
