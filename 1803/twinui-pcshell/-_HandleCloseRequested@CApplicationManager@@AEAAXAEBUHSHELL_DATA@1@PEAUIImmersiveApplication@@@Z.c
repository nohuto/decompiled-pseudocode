/*
 * XREFs of ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x18010FDD0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180045430 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180010768 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010804 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180096150 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIUnknown@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@UI.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F6244 (--1-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800F62AC (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param_ea_1800F62AC.c)
 *     ?StartActivity@AltF4CloseRequested@CAppManagerTelemetry@@QEAAXXZ @ 0x18010BA20 (-StartActivity@AltF4CloseRequested@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?TryClosePopupForWindow@CApplicationManager@@AEAA_NQEAUHWND__@@@Z @ 0x18010E234 (-TryClosePopupForWindow@CApplicationManager@@AEAA_NQEAUHWND__@@@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180110E88 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplicationManager::_HandleCloseRequested(
        CApplicationManager *this,
        HWND *a2,
        struct IImmersiveApplication *a3)
{
  CApplicationManager *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  CWinRTApplicationView **v9; // rax
  HRESULT v10; // eax
  char v11; // bl
  int v12; // eax
  const char *v13; // r9
  void *ppvOut; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h]
  IUnknown *punk; // [rsp+48h] [rbp-C0h] BYREF
  struct IImmersiveApplication *v17; // [rsp+50h] [rbp-B8h]
  __int64 v18; // [rsp+58h] [rbp-B0h]
  _QWORD v19[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v18 = -2LL;
  v17 = a3;
  LODWORD(v15) = 0;
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v19,
    (__int64)"AltF4CloseRequested");
  v19[0] = &CAppManagerTelemetry::AltF4CloseRequested::`vftable';
  CAppManagerTelemetry::AltF4CloseRequested::StartActivity((CAppManagerTelemetry::AltF4CloseRequested *)v19);
  if ( !CApplicationManager::TryClosePopupForWindow(v5, a2[1]) )
  {
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v6, 3u, v7);
    if ( v17 )
    {
      ppvOut = 0LL;
      punk = 0LL;
      LODWORD(v15) = 2;
      v8 = *((_QWORD *)this + 6);
      v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IUnknown>>((CWinRTApplicationView **)&punk);
      (*(void (__fastcall **)(char *, GUID *, CWinRTApplicationView **))(v8 + 32))(
        (char *)this + 48,
        &GUID_00000000_0000_0000_c000_000000000046,
        v9);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v10 = IUnknown_QueryService(punk, &guidService, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut);
      if ( v10 >= 0 )
      {
        v11 = 1;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          6766LL,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v10);
        v11 = 0;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
      if ( v11 )
      {
        if ( (*(int (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[21].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[21].Ptr) >= 0 )
        {
          v12 = (*(__int64 (__fastcall **)(void *, struct IImmersiveApplication *, __int64))(*(_QWORD *)ppvOut + 32LL))(
                  ppvOut,
                  v17,
                  2LL);
          if ( v12 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              6775LL,
              (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v12);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
    else if ( !PostMessageW(a2[1], 0x112u, 0xF060uLL, 0LL) )
    {
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x1A80,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        v13);
    }
  }
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop((CFramePresentationTelemetry::SetSystemVisual *)v19);
  v19[0] = &CAppManagerTelemetry::AltF4CloseRequested::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((CFramePresentationTelemetry::SetSystemVisual *)v19);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v19);
}
