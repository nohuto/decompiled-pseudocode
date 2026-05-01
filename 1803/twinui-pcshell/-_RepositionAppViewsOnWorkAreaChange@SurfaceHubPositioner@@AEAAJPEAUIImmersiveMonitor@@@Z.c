/*
 * XREFs of ?_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802BD7D4
 * Callers:
 *     ?DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1802BC740 (-DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DIS.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewOperation@@UIApplicationViewTabOperation@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewO.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x180132C18 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18014C46C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18014E830 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange(
        SurfaceHubPositioner *this,
        struct IImmersiveMonitor *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const char *v7; // r9
  __int64 v8; // rbx
  int v9; // eax
  void *v10; // rdi
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rdx
  unsigned int i; // r14d
  void *v16; // rdi
  int v17; // eax
  CWinRTApplicationView *v18; // [rsp+30h] [rbp-50h] BYREF
  void *v19; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+40h] [rbp-40h] BYREF
  void *v21; // [rsp+48h] [rbp-38h] BYREF
  int v22; // [rsp+50h] [rbp-30h] BYREF
  __int64 v23[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v24; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v23[1] = -2LL;
  v24 = 0uLL;
  v4 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v24);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1ED,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(v23);
  v8 = v23[0];
  if ( !v23[0] )
    wil::details::in1diag3::_Log_NullAlloc(
      retaddr,
      495LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      v7);
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v21);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
         &v21,
         &v24);
  if ( !v8 || v9 < 0 )
    goto LABEL_22;
  v10 = v21;
  if ( *(void **)(v8 + 72) != v21 )
  {
    v18 = (CWinRTApplicationView *)v21;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v18);
    v18 = *(CWinRTApplicationView **)(v8 + 72);
    *(_QWORD *)(v8 + 72) = v10;
    Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v18);
  }
  v19 = 0LL;
  v11 = *((_QWORD *)this + 23);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v19);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, void **))(*(_QWORD *)v11 + 56LL))(
          v11,
          2LL,
          a2,
          &v19);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v19 + 24LL))(v19, &v20);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 512LL;
      goto LABEL_13;
    }
    for ( i = 0; i < v20; ++i )
    {
      v18 = 0LL;
      v16 = v19;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
      if ( (*(int (__fastcall **)(void *, _QWORD, GUID *, CWinRTApplicationView **))(*(_QWORD *)v16 + 32LL))(
             v16,
             i,
             &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
             &v18) >= 0
        && (*(int (__fastcall **)(CWinRTApplicationView *, int *))(*(_QWORD *)v18 + 216LL))(v18, &v22) >= 0 )
      {
        if ( v22 )
        {
          v17 = (*(__int64 (__fastcall **)(CWinRTApplicationView *, __int64))(*(_QWORD *)v18 + 320LL))(v18, v8);
          if ( v17 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              524LL,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
              (const char *)(unsigned int)v17);
        }
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
    }
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v19);
LABEL_22:
    v13 = 0;
    goto LABEL_23;
  }
  v14 = 510LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)v12);
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v19);
LABEL_23:
  Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)&v21);
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::Release(v8);
  return v13;
}
