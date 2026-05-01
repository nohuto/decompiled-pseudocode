/*
 * XREFs of ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x180014958
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180008450 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?StartActivity@AltF4CloseRequested@CAppManagerTelemetry@@QEAAXXZ @ 0x18001DDB0 (-StartActivity@AltF4CloseRequested@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002026C (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180020D0C (--1-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180020F30 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CApplicationManager::_HandleCloseRequested(
        CApplicationManager *this,
        HWND *a2,
        struct IImmersiveApplication *a3)
{
  HWND LastActivePopup; // rdi
  HWND v7; // rcx
  bool v8; // bl
  HMENU SystemMenu; // rsi
  HRESULT v10; // eax
  HRESULT v11; // ebx
  bool v12; // bl
  IUnknown *v13; // rcx
  int v14; // eax
  void *v15; // rcx
  int v16; // [rsp+28h] [rbp-E0h]
  void *ppvOut; // [rsp+58h] [rbp-B0h] BYREF
  IUnknown *punk; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-A0h]
  __int64 v20; // [rsp+70h] [rbp-98h]
  tagMENUITEMINFOW mii; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v22[4]; // [rsp+C8h] [rbp-40h] BYREF
  int v23; // [rsp+E8h] [rbp-20h]
  int *v24; // [rsp+F0h] [rbp-18h]
  int *v25; // [rsp+F8h] [rbp-10h]
  int v26; // [rsp+100h] [rbp-8h] BYREF
  char v27; // [rsp+104h] [rbp-4h]
  int v28; // [rsp+128h] [rbp+20h] BYREF
  const char *v29; // [rsp+130h] [rbp+28h]
  __int64 v30; // [rsp+138h] [rbp+30h]
  char v31; // [rsp+140h] [rbp+38h]
  __int64 v32; // [rsp+148h] [rbp+40h]
  _BYTE v33[144]; // [rsp+150h] [rbp+48h] BYREF
  __int64 v34; // [rsp+1E0h] [rbp+D8h]
  __int64 v35; // [rsp+1E8h] [rbp+E0h]
  __int64 v36; // [rsp+1F0h] [rbp+E8h]
  __int64 v37; // [rsp+1F8h] [rbp+F0h]
  wil::details::in1diag3 *retaddr; // [rsp+250h] [rbp+148h]

  v20 = -2LL;
  LODWORD(v19) = 0;
  v22[1] = 0LL;
  v22[2] = v22;
  v22[3] = 0LL;
  v23 = 0;
  v24 = &v28;
  v25 = &v26;
  v26 = 0;
  v27 = 0;
  v31 = 0;
  v28 = 0;
  v29 = "AltF4CloseRequested";
  v30 = 0LL;
  v32 = 1LL;
  v34 = 0LL;
  v35 = 0LL;
  memset(v33, 0, sizeof(v33));
  v36 = 0LL;
  v37 = 0LL;
  v22[0] = &CAppManagerTelemetry::AltF4CloseRequested::`vftable';
  CAppManagerTelemetry::AltF4CloseRequested::StartActivity((CAppManagerTelemetry::AltF4CloseRequested *)v22);
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
  punk = 0LL;
  LODWORD(v19) = 1;
  (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 7) + 32LL))(
    (char *)this + 56,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  v10 = IUnknown_QueryService(
          punk,
          (const GUID *const)&SID_AppCrusher,
          &GUID_336a4a4c_8525_42e5_8c56_4c47412576b8,
          &ppvOut);
  v11 = v10;
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x197C,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v10,
      v16);
  v12 = v11 >= 0;
  v13 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v13->lpVtbl->Release)(v13);
  }
  if ( v12
    && (*(int (__fastcall **)(PVOID))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr + 24LL))(CApplicationManagerUtility::g_pIAMGlobals[19].Ptr) >= 0 )
  {
    v14 = (*(__int64 (__fastcall **)(void *, struct IImmersiveApplication *, _QWORD, _QWORD))(*(_QWORD *)ppvOut + 24LL))(
            ppvOut,
            a3,
            0LL,
            0LL);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1985,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v14,
        0);
  }
  v15 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 16LL))(v15);
  }
LABEL_22:
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v22, 0LL);
  v22[0] = &CAppManagerTelemetry::AltF4CloseRequested::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v22);
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(v22);
}
