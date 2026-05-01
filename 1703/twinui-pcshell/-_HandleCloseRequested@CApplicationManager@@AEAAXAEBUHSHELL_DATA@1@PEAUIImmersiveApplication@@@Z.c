/*
 * XREFs of ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x180013EAC
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180008380 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ??$Start@$$V@AltF4CloseRequested@CAppManagerTelemetry@@SA?AV01@XZ @ 0x180019144 (--$Start@$$V@AltF4CloseRequested@CAppManagerTelemetry@@SA-AV01@XZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18001F58C (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180020038 (--1-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180020270 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_HandleCloseRequested(
        CApplicationManager *this,
        HWND *a2,
        struct IImmersiveApplication *a3)
{
  HWND LastActivePopup; // rdi
  HWND v7; // rcx
  bool v8; // bl
  HMENU SystemMenu; // rsi
  IUnknown **GITSitePtr; // rbx
  HRESULT v11; // eax
  HRESULT v12; // ebx
  bool v13; // bl
  __int64 v14; // rcx
  int v15; // eax
  void *v16; // rcx
  int v17; // [rsp+20h] [rbp-E0h]
  void *ppvOut; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v19[3]; // [rsp+58h] [rbp-A8h] BYREF
  tagMENUITEMINFOW mii; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v21[40]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  v19[1] = -2LL;
  CAppManagerTelemetry::AltF4CloseRequested::Start<>((CAppManagerTelemetry::AltF4CloseRequested *)v21);
  LastActivePopup = GetLastActivePopup(a2[1]);
  v7 = a2[1];
  if ( LastActivePopup == v7 || IsWindowEnabled(v7) )
  {
    v8 = 0;
  }
  else
  {
    v8 = 0;
    SystemMenu = GetSystemMenu(LastActivePopup, 0);
    if ( SystemMenu )
    {
      mii.cbSize = 80;
      memset(&mii.fMask, 0, 0x4CuLL);
      if ( GetMenuItemInfoW(SystemMenu, 0xF060u, 0, &mii) )
      {
        v8 = (mii.fState & 3) == 0;
        if ( (mii.fState & 3) == 0 )
        {
LABEL_11:
          PostMessageW(LastActivePopup, 0x112u, 0xF060uLL, 0LL);
          goto LABEL_22;
        }
      }
    }
  }
  if ( !a3 )
  {
    if ( !v8 )
      LastActivePopup = a2[1];
    goto LABEL_11;
  }
  ppvOut = 0LL;
  GITSitePtr = (IUnknown **)CWRLObjectWithGITSite::_GetGITSitePtr((char *)this + 40, v19);
  v11 = IUnknown_QueryService(
          *GITSitePtr,
          (const GUID *const)&SID_AppCrusher,
          &GUID_336a4a4c_8525_42e5_8c56_4c47412576b8,
          &ppvOut);
  v12 = v11;
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1914,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v11,
      v17);
  v13 = v12 >= 0;
  v14 = v19[0];
  if ( v19[0] )
  {
    v19[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( v13
    && (*(int (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[19].Ptr) >= 0 )
  {
    v15 = (*(__int64 (__fastcall **)(void *, struct IImmersiveApplication *, _QWORD, _QWORD))(*(_QWORD *)ppvOut + 24LL))(
            ppvOut,
            a3,
            0LL,
            0LL);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x191D,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v15,
        0);
  }
  v16 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
  }
LABEL_22:
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v21, 0LL);
  v21[0] = &CAppManagerTelemetry::AltF4CloseRequested::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v21);
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(v21);
}
