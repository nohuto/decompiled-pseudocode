/*
 * XREFs of ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x18005A864
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x180023A80 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 * Callees:
 *     ?GetAppUserModelId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x18001C2C0 (-GetAppUserModelId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?DoesAppHaveQuirk@ShellPositionerTelemetry@@CA_NPEAUIApplicationView@@W4__MIDL___MIDL_itf_shpriv_core_0000_0318_0005@@@Z @ 0x1800A253C (-DoesAppHaveQuirk@ShellPositionerTelemetry@@CA_NPEAUIApplicationView@@W4__MIDL___MIDL_itf_shpriv.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ShellPositionerTelemetry::PositionViewForActivation_(__int64 a1, CWinRTApplicationView *a2, int a3)
{
  _DWORD *v5; // rcx
  __int64 (__fastcall *v6)(CWinRTApplicationView *, unsigned __int16 **); // rax
  __int64 v7; // rdi
  const WCHAR *v8; // rsi
  const WCHAR *v9; // rbx
  LPWSTR FileNameW; // rax
  __int64 v11; // rcx
  bool v12; // zf
  char v13; // al
  char HaveQuirk; // [rsp+38h] [rbp-99h] BYREF
  char v15; // [rsp+39h] [rbp-98h] BYREF
  LPCWSTR pszPath; // [rsp+40h] [rbp-91h] BYREF
  __int64 v17; // [rsp+48h] [rbp-89h]
  __int64 v18; // [rsp+50h] [rbp-81h]
  WINBOOL fPending; // [rsp+58h] [rbp-79h] BYREF
  WINBOOL v20; // [rsp+5Ch] [rbp-75h] BYREF
  int v21; // [rsp+60h] [rbp-71h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-69h] BYREF
  LPVOID v23; // [rsp+70h] [rbp-61h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-59h] BYREF
  __int64 v25; // [rsp+88h] [rbp-49h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-39h] BYREF
  void *v27; // [rsp+A8h] [rbp-29h]
  int v28; // [rsp+B0h] [rbp-21h]
  int v29; // [rsp+B4h] [rbp-1Dh]
  const WCHAR *v30; // [rsp+B8h] [rbp-19h]
  int v31; // [rsp+C0h] [rbp-11h]
  int v32; // [rsp+C4h] [rbp-Dh]
  int *v33; // [rsp+C8h] [rbp-9h]
  __int64 v34; // [rsp+D0h] [rbp-1h]
  char *p_HaveQuirk; // [rsp+D8h] [rbp+7h]
  __int64 v36; // [rsp+E0h] [rbp+Fh]
  char *v37; // [rsp+E8h] [rbp+17h]
  __int64 v38; // [rsp+F0h] [rbp+1Fh]

  v25 = -2LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1804387B0;
    qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
    qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
  }
  v5 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v5 && *v5 )
  {
    pszPath = 0LL;
    v17 = -1LL;
    v18 = -1LL;
    v6 = *(__int64 (__fastcall **)(CWinRTApplicationView *, unsigned __int16 **))(*(_QWORD *)a2 + 136LL);
    if ( v6 == CWinRTApplicationView::GetAppUserModelId )
      CWinRTApplicationView::GetAppUserModelId(a2, (unsigned __int16 **)&pszPath);
    else
      v6(a2, (unsigned __int16 **)&pszPath);
    v23 = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v20, &v23) && v20 )
    {
      v23 = qword_1804387B0;
      qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
      qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
    }
    v7 = *((_QWORD *)v23 + 1);
    if ( *(_DWORD *)v7 > 5u
      && (*(_QWORD *)(v7 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(v7 + 24) & 0x400000000000LL) == *(_QWORD *)(v7 + 24) )
    {
      v8 = &word_18035ABCC;
      v9 = &word_18035ABCC;
      if ( pszPath )
        v9 = pszPath;
      FileNameW = 0LL;
      if ( v9 )
      {
        if ( PathIsFileSpecW(v9) )
          FileNameW = (LPWSTR)v9;
        else
          FileNameW = PathFindFileNameW(v9);
      }
      LODWORD(v11) = 0;
      if ( FileNameW )
      {
        v8 = FileNameW;
        v11 = -1LL;
        do
          ++v11;
        while ( FileNameW[v11] );
      }
      v30 = v8;
      v31 = 2 * v11 + 2;
      v32 = 0;
      v21 = a3;
      v33 = &v21;
      v34 = 4LL;
      HaveQuirk = ShellPositionerTelemetry::DoesAppHaveQuirk(a2);
      p_HaveQuirk = &HaveQuirk;
      v36 = 1LL;
      if ( (unsigned __int8)ShellPositionerTelemetry::DoesAppHaveQuirk(a2)
        || (v12 = (unsigned __int8)ShellPositionerTelemetry::DoesAppHaveQuirk(a2) == 0, v13 = 0, !v12) )
      {
        v13 = 1;
      }
      v15 = v13;
      v37 = &v15;
      v38 = 1LL;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18039CA3D - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0x400000000000LL;
      UserData.Ptr = *(_QWORD *)(v7 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v27 = &unk_18039CA48;
      v28 = 84;
      v29 = 1;
      EventWriteTransfer(*(_QWORD *)(v7 + 32), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
    }
    if ( pszPath )
    {
      CoTaskMemFree((LPVOID)pszPath);
      pszPath = 0LL;
    }
    v17 = 0LL;
    v18 = 0LL;
  }
}
