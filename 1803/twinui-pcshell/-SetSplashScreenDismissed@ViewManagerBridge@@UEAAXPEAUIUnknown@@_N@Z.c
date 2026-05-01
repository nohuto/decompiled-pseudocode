/*
 * XREFs of ?SetSplashScreenDismissed@ViewManagerBridge@@UEAAXPEAUIUnknown@@_N@Z @ 0x180056560
 * Callers:
 *     ?SetIsDismissed@UAPViewWrapper@@UEAAJE@Z @ 0x18005B430 (-SetIsDismissed@UAPViewWrapper@@UEAAJE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetSplashScreenDismissed(ViewManagerBridge *this, struct IUnknown *a2, char a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r10
  int v6; // eax
  __int64 v7; // rcx
  int UserDataCount; // [rsp+28h] [rbp-49h]
  char v9; // [rsp+38h] [rbp-39h] BYREF
  __int64 v10; // [rsp+40h] [rbp-31h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-29h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-21h] BYREF
  __int64 v13; // [rsp+58h] [rbp-19h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-11h] BYREF
  __int64 v15; // [rsp+70h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp+7h] BYREF
  void *v17; // [rsp+88h] [rbp+17h]
  int v18; // [rsp+90h] [rbp+1Fh]
  int v19; // [rsp+94h] [rbp+23h]
  __int64 *v20; // [rsp+98h] [rbp+27h]
  int v21; // [rsp+A0h] [rbp+2Fh]
  int v22; // [rsp+A4h] [rbp+33h]
  char *v23; // [rsp+A8h] [rbp+37h]
  int v24; // [rsp+B0h] [rbp+3Fh]
  int v25; // [rsp+B4h] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v15 = -2LL;
  v9 = a3;
  if ( !*((_BYTE *)this + 145) )
  {
    v10 = 0LL;
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      &v10);
    v3 = v10;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_180438940;
      qword_180438940[0] = &LockScreenServiceLogging::`vftable';
      qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
    }
    v5 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 5u )
    {
      v13 = v3;
      v20 = &v13;
      v21 = 8;
      v22 = 0;
      v23 = &v9;
      v24 = 1;
      v25 = 0;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180394ADF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v5 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v17 = &unk_180394AEA;
      v18 = 51;
      v19 = 1;
      EventWriteTransfer(*(_QWORD *)(v5 + 32), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
    LOBYTE(v4) = v9;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 696LL))(v10, v4);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1D8,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v6,
        UserDataCount);
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
}
