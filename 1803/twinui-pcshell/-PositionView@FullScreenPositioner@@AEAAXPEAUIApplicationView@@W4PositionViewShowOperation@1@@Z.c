/*
 * XREFs of ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@@Z @ 0x18014DA94
 * Callers:
 *     ?OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800202B0 (-OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x1800204AC (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18014D34C (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@.c)
 *     ?DisplaySettingsChange@FullScreenPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18014D4E0 (-DisplaySettingsChange@FullScreenPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DIS.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18014D530 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?TabletModeChanged@FullScreenPositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x18014E4A0 (-TabletModeChanged@FullScreenPositioner@@UEAAJW4_TABLETMODESTATE@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewOperation@@UIApplicationViewTabOperation@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIApplicationViewO.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x180132C18 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18014C46C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18014E830 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18014E8BC (-CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApp.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall FullScreenPositioner::PositionView(__int64 a1, FullScreenPositionerHelpers *a2, int a3)
{
  __int64 result; // rax
  const char *v7; // r9
  __int64 v8; // rbx
  int v9; // eax
  void *v10; // rdi
  struct IApplicationView *v11; // rdx
  struct IApplicationViewTitlebarConfiguration **v12; // r9
  int v13; // eax
  bool v14[8]; // [rsp+28h] [rbp-39h] BYREF
  void *v15[2]; // [rsp+30h] [rbp-31h] BYREF
  __int64 v16; // [rsp+40h] [rbp-21h] BYREF
  _BYTE v17[16]; // [rsp+48h] [rbp-19h] BYREF
  __int128 v18; // [rsp+58h] [rbp-9h]
  __int64 v19; // [rsp+68h] [rbp+7h]
  __int64 v20; // [rsp+70h] [rbp+Fh]
  __int128 v21; // [rsp+78h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v20 = -2LL;
  v21 = 0uLL;
  result = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 176) + 72LL))(*(_QWORD *)(a1 + 176), &v21);
  if ( (int)result >= 0 )
  {
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v16);
    v8 = v16;
    if ( !v16 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x33D,
        (unsigned int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        v7);
    v15[0] = 0LL;
    Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)v15);
    v9 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
           v15,
           &v21);
    if ( v8 && v9 >= 0 )
    {
      v10 = v15[0];
      if ( *(void **)(v8 + 72) != v15[0] )
      {
        *(void **)v14 = v15[0];
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)v14);
        *(_QWORD *)v14 = *(_QWORD *)(v8 + 72);
        *(_QWORD *)(v8 + 72) = v10;
        Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)v14);
      }
      *(_DWORD *)(v8 + 116) = 255;
      *(_DWORD *)(v8 + 120) = 128;
      *(_DWORD *)(v8 + 168) = 8;
      *(_DWORD *)(v8 + 184) = 0;
      *(_QWORD *)(v8 + 188) = 0LL;
      *(_QWORD *)(v8 + 196) = 0LL;
      *(_BYTE *)(v8 + 220) = 1;
      *(_QWORD *)(v8 + 224) = 0LL;
      v15[1] = (void *)0x100000001LL;
      *(_QWORD *)(v8 + 204) = 0x100000001LL;
      *(_QWORD *)(v8 + 212) = 0LL;
      memset_0(v17, 0, 0x28uLL);
      v18 = 0uLL;
      LODWORD(v19) = 3;
      *(_OWORD *)(v8 + 128) = 0LL;
      *(_OWORD *)(v8 + 144) = v18;
      *(_QWORD *)(v8 + 160) = v19;
      *(_BYTE *)(v8 + 124) = 1;
      *(_QWORD *)v14 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
      LOBYTE(v11) = *(_BYTE *)(a1 + 280);
      FullScreenPositionerHelpers::CreateTitlebarConfiguration(a2, v11, (bool)v14, v12);
      Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v8 + 176), *(__int64 *)v14);
      if ( a3 )
      {
        *(_BYTE *)(v8 + 112) = 1;
        *(_BYTE *)(v8 + 113) = a3 == 1;
      }
      v13 = (*(__int64 (__fastcall **)(FullScreenPositionerHelpers *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v8);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          872LL,
          (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
          (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
    }
    result = Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease((__int64 *)v15);
    if ( v8 )
    {
      v16 = 0LL;
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IApplicationViewOperation,Windows::Internal::ComposableShell::Tabs::IApplicationViewTabOperation,Microsoft::WRL::FtmBase>::Release(v8);
    }
  }
  return result;
}
