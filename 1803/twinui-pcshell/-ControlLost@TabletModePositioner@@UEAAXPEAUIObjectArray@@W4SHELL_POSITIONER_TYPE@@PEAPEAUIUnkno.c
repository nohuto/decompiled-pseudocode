/*
 * XREFs of ?ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1802C58F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18028C50C (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??1?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18028C5A0 (--1-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18028C828 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18028CEFC (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1802C6270 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x1802CA070 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 *     ?StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1802CBE7C (-StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_.c)
 *     ?SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x1802CE7AC (-SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z @ 0x1802D3E08 (-TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z.c)
 */

void __fastcall TabletModePositioner::ControlLost(__int64 a1, __int64 a2, unsigned int a3, void **a4)
{
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  const struct _GUID *v13; // r8
  int Instance; // eax
  HRESULT v15; // eax
  __int64 v16; // rdx
  CWinRTApplicationView *v17; // [rsp+30h] [rbp-D0h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v19[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  *a4 = 0LL;
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v19,
    (__int64)"TMPControlLost");
  v19[0] = &TabletModeTraceLogging::TMPControlLost::`vftable';
  TabletModeTraceLogging::TMPControlLost::StartActivity(v19, a2, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 136));
  if ( a3 != 3 )
  {
    if ( a3 == 5 )
    {
      v17 = 0LL;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, CWinRTApplicationView **))(*(_QWORD *)a2 + 32LL))(
              a2,
              0LL,
              &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
              &v17);
      if ( v11 >= 0 )
      {
        if ( !(*(unsigned int (__fastcall **)(_QWORD, CWinRTApplicationView *))(**(_QWORD **)(a1 + 120) + 184LL))(
                *(_QWORD *)(a1 + 120),
                v17) )
          goto LABEL_18;
        v11 = TabletModePositioner::EvictAppHelper(a1 - 128, v17, 8LL);
        if ( v11 >= 0 )
          goto LABEL_18;
        v12 = 830LL;
      }
      else
      {
        v12 = 828LL;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        v12,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v11);
LABEL_18:
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v17);
      goto LABEL_30;
    }
    (*(void (__fastcall **)(_QWORD, CWinRTApplicationView **))(**(_QWORD **)(a1 + 224) + 24LL))(
      *(_QWORD *)(a1 + 224),
      &v17);
    if ( (_DWORD)v17 == *(_DWORD *)(a1 + 108) )
      goto LABEL_30;
    if ( (int)DwmpBeginTransitionRequest(91LL) >= 0 )
      DwmpEndTransitionRequest(91LL);
    Instance = TabletModePositionerHandoffContext_CreateInstance(
                 *(struct IAppLayout **)(a1 + 120),
                 *(_BYTE *)(a1 + 112),
                 v13,
                 a4);
    if ( Instance < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        852LL,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)Instance);
    TabletModePositioner::SetTabletMode(a1 - 128, (unsigned int)v17);
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v15 = IUnknown_QueryService(
            *(IUnknown **)(a1 - 112),
            (const GUID *const)&SID_VirtualDesktopTabletModePolicyService,
            &GUID_56b32065_0bb3_42e2_975d_a559de1316e8,
            &ppvOut);
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 24LL))(ppvOut, *(_QWORD *)(a1 + 120));
      if ( v15 >= 0 )
      {
LABEL_29:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_30;
      }
      v16 = 859LL;
    }
    else
    {
      v16 = 857LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      v16,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_29;
  }
  v17 = 0LL;
  v8 = *(_QWORD *)(a1 + 120);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  v9 = (*(__int64 (__fastcall **)(__int64, GUID *, CWinRTApplicationView **))(*(_QWORD *)v8 + 192LL))(
         v8,
         &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
         &v17);
  if ( v9 >= 0 )
  {
    TabletModePositioner::SwitchToEmptyLayoutHelper(a1 - 128);
    if ( (*(unsigned int (__fastcall **)(CWinRTApplicationView *, __int64))(*(_QWORD *)v17 + 80LL))(v17, 5LL) > 1 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&ppvOut);
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, void **))(*(_QWORD *)a2 + 32LL))(
              a2,
              0LL,
              &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
              &ppvOut);
      if ( v10 >= 0 )
      {
        if ( (*(unsigned int (__fastcall **)(CWinRTApplicationView *, void *))(*(_QWORD *)v17 + 184LL))(v17, ppvOut) )
          Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)(a1 + 136), (__int64 *)&v17);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          814LL,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
          (const char *)(unsigned int)v10);
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&ppvOut);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      802LL,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v9);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
LABEL_30:
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v19);
  v19[0] = &TabletModeTraceLogging::TMPControlLost::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v19);
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v19);
}
