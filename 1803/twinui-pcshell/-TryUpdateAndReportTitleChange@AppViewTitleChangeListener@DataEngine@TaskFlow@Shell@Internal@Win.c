/*
 * XREFs of ?TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_K@Z @ 0x180019AD0
 * Callers:
 *     ?OnShellHookMessage@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_K_J@Z @ 0x180019EA0 (-OnShellHookMessage@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     ?GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@MEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@Z @ 0x180019990 (-GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@MEAA-AV-.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18001A210 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??$GetActivationFactory@UIAppViewTitleChangeDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIAppViewTitleChangeDataFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18009E9B4 (--$GetActivationFactory@UIAppViewTitleChangeDataFactory@DataEngine@TaskFlow@Shell@Internal@Windo.c)
 *     memcpy_0 @ 0x1800A2789 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
void __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::TryUpdateAndReportTitleChange(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *this,
        HSTRING a2)
{
  HSTRING v2; // rbx
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *v3; // r15
  char *(__fastcall *v4)(__int64, char *, HWND); // rax
  unsigned __int64 *v5; // rdi
  char *v6; // rax
  unsigned __int64 v7; // r8
  char *v8; // r9
  char *v9; // rdx
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  char *v14; // r13
  unsigned __int64 v15; // rsi
  __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  void *v18; // r12
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  char *v21; // rax
  int v22; // eax
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  const struct _TlgProvider_t *v25; // rcx
  int v26; // eax
  unsigned __int64 v27; // rcx
  void *v28; // r12
  unsigned __int64 v29; // rax
  int cData; // [rsp+20h] [rbp-F8h]
  int *cDataa; // [rsp+20h] [rbp-F8h]
  HSTRING string; // [rsp+38h] [rbp-E0h] BYREF
  _FILETIME SystemTimeAsFileTime; // [rsp+40h] [rbp-D8h] BYREF
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *v34; // [rsp+48h] [rbp-D0h] BYREF
  HSTRING v35; // [rsp+50h] [rbp-C8h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-C0h] BYREF
  int v37[2]; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD v38[2]; // [rsp+68h] [rbp-B0h] BYREF
  char Src[16]; // [rsp+78h] [rbp-A0h] BYREF
  unsigned __int64 v40; // [rsp+88h] [rbp-90h]
  unsigned __int64 v41; // [rsp+90h] [rbp-88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-78h] BYREF
  Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener **v43; // [rsp+C0h] [rbp-58h]
  __int64 v44; // [rsp+C8h] [rbp-50h]
  _QWORD *v45; // [rsp+D0h] [rbp-48h]
  __int64 v46; // [rsp+D8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  v38[1] = -2LL;
  v2 = a2;
  string = a2;
  v3 = this;
  v34 = this;
  v35 = a2;
  v4 = *(char *(__fastcall **)(__int64, char *, HWND))(*(_QWORD *)this + 72LL);
  if ( v4 == Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle )
    Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle(
      (__int64)this,
      Src,
      (HWND)a2);
  else
    v4((__int64)this, Src, (HWND)a2);
  v5 = (unsigned __int64 *)((char *)v3 + 112);
  v6 = Src;
  v7 = v41;
  v8 = *(char **)Src;
  if ( v41 >= 8 )
    v6 = *(char **)Src;
  v9 = (char *)v3 + 112;
  if ( *((_QWORD *)v3 + 17) >= 8uLL )
    v9 = (char *)*v5;
  v10 = *((_QWORD *)v3 + 16);
  v11 = v10;
  v12 = v40;
  if ( v40 < v10 )
    v11 = v40;
  if ( v11 )
  {
    v13 = v9 - v6;
    while ( *(_WORD *)&v6[v13] == *(_WORD *)v6 )
    {
      v6 += 2;
      if ( !--v11 )
        goto LABEL_49;
    }
  }
  else
  {
LABEL_49:
    if ( v10 >= v40 && v10 <= v40 )
      goto LABEL_41;
  }
  try
  {
    if ( v5 != (unsigned __int64 *)Src )
    {
      v14 = Src;
      if ( v41 >= 8 )
        v14 = *(char **)Src;
      v15 = *((_QWORD *)v3 + 17);
      if ( v40 <= v15 )
      {
        v28 = (char *)v3 + 112;
        if ( v15 >= 8 )
          v28 = (void *)*v5;
        *((_QWORD *)v3 + 16) = v40;
        memmove(v28, v14, 2 * v12);
        *((_WORD *)v28 + v12) = 0;
        v2 = string;
      }
      else
      {
        v16 = 0x7FFFFFFFFFFFFFFELL;
        if ( v40 > 0x7FFFFFFFFFFFFFFELL )
          std::_Xlength_error("string too long");
        if ( (v40 | 7) <= 0x7FFFFFFFFFFFFFFELL )
        {
          v17 = v15 >> 1;
          if ( v15 <= 0x7FFFFFFFFFFFFFFELL - (v15 >> 1) )
          {
            v16 = v40 | 7;
            if ( (v40 | 7) < v17 + v15 )
              v16 = v17 + v15;
          }
        }
        v18 = (void *)std::_Allocate<std::_Default_allocate_traits<1>>(v16 + 1, 2LL);
        *((_QWORD *)v3 + 16) = v12;
        *((_QWORD *)v3 + 17) = v16;
        memcpy_0(v18, v14, 2 * v12);
        *((_WORD *)v18 + v12) = 0;
        if ( v15 >= 8 )
        {
          v19 = *v5;
          if ( v15 + 1 <= 0x7FFFFFFFFFFFFFFFLL )
          {
            if ( 2 * (v15 + 1) < 0x1000 )
            {
LABEL_26:
              operator delete((void *)v19);
              *v5 = (unsigned __int64)v18;
              v2 = string;
              goto LABEL_70;
            }
            if ( (v19 & 0x1F) == 0 )
            {
              v29 = *(_QWORD *)(v19 - 8);
              if ( v29 < v19 )
              {
                v19 = v19 - v29 - 8;
                if ( v19 <= 0x1F )
                {
                  v19 = v29;
                  goto LABEL_26;
                }
              }
            }
          }
          _o__invalid_parameter_noinfo_noreturn(v19);
        }
        *v5 = (unsigned __int64)v18;
        v2 = string;
      }
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xA4,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
      v8);
    v2 = v35;
    v3 = v34;
  }
LABEL_70:
  v34 = (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *)v2;
  wil::GetActivationFactory<Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeDataFactory>(&v35);
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v20 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  *(_QWORD *)v37 = 0LL;
  string = 0LL;
  v21 = Src;
  if ( v41 >= 8 )
    v21 = *(char **)Src;
  SystemTimeAsFileTime = (_FILETIME)v21;
  v22 = Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(&string);
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x76,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
      (const char *)(unsigned int)v22,
      cData);
  }
  else
  {
    cDataa = v37;
    v23 = (*(__int64 (__fastcall **)(HSTRING, Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *, HSTRING, unsigned __int64))(*(_QWORD *)v35 + 48LL))(
            v35,
            v34,
            string,
            v20);
    v24 = retaddr;
    if ( v23 >= 0 )
    {
      SystemTimeAsFileTime = 0LL;
      if ( !InitOnceBeginInitialize(
              &`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper,
              0,
              &fPending,
              (LPVOID *)&SystemTimeAsFileTime)
        || !fPending )
      {
        goto LABEL_33;
      }
      goto LABEL_61;
    }
  }
  wil::details::in1diag3::Throw_Hr(
    v24,
    (void *)0x7B,
    (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
    (const char *)(unsigned int)v23,
    (int)cDataa);
LABEL_61:
  SystemTimeAsFileTime = (_FILETIME)qword_1804388F0;
  qword_1804388F0[0] = &LockScreenServiceLogging::`vftable';
  qword_180438908 = (struct _TlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
  atexit(lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
  wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804388F0, qword_180438908);
  InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_1804388F0);
LABEL_33:
  v25 = *(const struct _TlgProvider_t **)(*(_QWORD *)&SystemTimeAsFileTime + 8LL);
  if ( *(_DWORD *)v25 > 5u )
  {
    v43 = &v34;
    v44 = 8LL;
    v38[0] = v20;
    v45 = v38;
    v46 = 8LL;
    TlgWrite(v25, &unk_180391F75, 0LL, 0LL, 4u, &pData);
  }
  v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v3 + 10) + 64LL))(
          *((_QWORD *)v3 + 10),
          *(_QWORD *)v37);
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7F,
      (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
      (const char *)(unsigned int)v26,
      (int)cDataa);
    goto LABEL_63;
  }
  WindowsDeleteString(string);
  string = 0LL;
  if ( *(_QWORD *)v37 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v37 + 16LL))(*(_QWORD *)v37);
  if ( v35 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v35 + 16LL))(v35);
  v7 = v41;
  v8 = *(char **)Src;
LABEL_41:
  if ( v7 < 8 )
    return;
  v27 = (unsigned __int64)v8;
  if ( v7 + 1 > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_66;
  if ( 2 * (v7 + 1) >= 0x1000 )
  {
LABEL_63:
    if ( (v27 & 0x1F) == 0 )
    {
      v8 = (char *)*((_QWORD *)v8 - 1);
      if ( (unsigned __int64)v8 < v27 )
      {
        v27 = v27 - (_QWORD)v8 - 8;
        if ( v27 <= 0x1F )
          goto LABEL_44;
      }
    }
LABEL_66:
    _o__invalid_parameter_noinfo_noreturn(v27);
    __debugbreak();
    JUMPOUT(0x1800BFC18LL);
  }
LABEL_44:
  operator delete(v8);
}
