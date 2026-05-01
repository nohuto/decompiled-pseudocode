/*
 * XREFs of ?_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802BD66C
 * Callers:
 *     ?DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1802BC740 (-DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DIS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802BDA74 (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SurfaceHubPositioner::_ReLayoutAllApps(SurfaceHubPositioner *this, struct IImmersiveMonitor *a2)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int i; // edi
  void *v9; // rbx
  int v10; // eax
  void *v12[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v14; // [rsp+60h] [rbp+20h] BYREF
  int v15; // [rsp+70h] [rbp+30h] BYREF
  struct IApplicationView *v16; // [rsp+78h] [rbp+38h] BYREF

  v12[1] = (void *)-2LL;
  v12[0] = 0LL;
  v4 = *((_QWORD *)this + 23);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(v12);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, void **))(*(_QWORD *)v4 + 56LL))(
         v4,
         2LL,
         a2,
         v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 537LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_14;
  }
  v5 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v12[0] + 24LL))(v12[0], &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 539LL;
    goto LABEL_5;
  }
  for ( i = 0; i < v14; ++i )
  {
    v16 = 0LL;
    v9 = v12[0];
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
    if ( (*(int (__fastcall **)(void *, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v9 + 32LL))(
           v9,
           i,
           &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
           &v16) >= 0
      && (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v16 + 216LL))(v16, &v15) >= 0 )
    {
      if ( v15 )
      {
        v10 = SurfaceHubPositioner::_SetDefaultLayout(this, v16, 0);
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            551LL,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
            (const char *)(unsigned int)v10);
      }
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
  }
  v6 = 0;
LABEL_14:
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(v12);
  return v6;
}
