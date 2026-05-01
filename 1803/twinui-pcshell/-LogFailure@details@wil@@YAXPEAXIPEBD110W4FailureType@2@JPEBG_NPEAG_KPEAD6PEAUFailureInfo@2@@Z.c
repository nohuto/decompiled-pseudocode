/*
 * XREFs of ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180082FD0
 * Callers:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180082EF4 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180082EA8 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?RaiseRoOriginateOnWilExceptions@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180083400 (-RaiseRoOriginateOnWilExceptions@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?RecordReturn@details@wil@@YAHJ@Z @ 0x180083494 (-RecordReturn@details@wil@@YAHJ@Z.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x1800869BC (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180086A34 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180087200 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?RecordFailFast@details@wil@@YAHJ@Z @ 0x180097450 (-RecordFailFast@details@wil@@YAHJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x18009C380 (-GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x18009C45C (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18009CCF4 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x1800FCED8 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?RecordException@details@wil@@YAHJ@Z @ 0x1800FDF6C (-RecordException@details@wil@@YAHJ@Z.c)
 *     ?RecordLog@details@wil@@YAHJ@Z @ 0x1800FE35C (-RecordLog@details@wil@@YAHJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1801469C4 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

void __fastcall wil::details::LogFailure(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        _WORD *a9,
        char a10,
        const WCHAR *a11,
        __int64 a12,
        char *a13,
        __int64 a14,
        struct wil::FailureInfo *a15)
{
  int v16; // r8d
  int v18; // edx
  int v20; // esi
  unsigned int v21; // edi
  int v22; // eax
  _WORD *v23; // r10
  _WORD *v24; // rax
  DWORD CurrentThreadId; // eax
  const struct wil::FailureInfo *v26; // rdx
  unsigned __int64 v27; // rcx
  const struct wil::FailureInfo *v28; // r9
  unsigned int *ModuleName; // rdi
  void (*v30)(struct wil::FailureInfo *, char *, unsigned __int64); // rax
  char v31; // si
  struct wil::details::ThreadFailureCallbackHolder **Local; // rax
  struct wil::details::ThreadFailureCallbackHolder **v33; // rdi
  void (__fastcall *v34)(TraceLoggingHProvider *, char, const struct wil::FailureInfo *); // rax
  int v35; // eax
  DWORD v36; // eax
  wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  const CHAR *v38; // rdx
  const CHAR *v39; // rdx
  char v40; // di
  struct wil::details::ThreadFailureCallbackHolder *v41; // rdi
  char v42; // al
  const CHAR *v43; // rdx
  const CHAR *v44; // rdx
  const WCHAR *v45; // rdx
  const CHAR *v46; // rdx
  const CHAR *v47; // rdx
  const CHAR *v48; // rdx
  TraceLoggingHProvider v49; // r10
  wil *v50; // rsi
  unsigned __int64 UserDataCount; // [rsp+20h] [rbp-E0h]
  WINBOOL fPending; // [rsp+44h] [rbp-BCh] BYREF
  int v53; // [rsp+48h] [rbp-B8h] BYREF
  int v54; // [rsp+4Ch] [rbp-B4h] BYREF
  int v55; // [rsp+50h] [rbp-B0h] BYREF
  int v56; // [rsp+54h] [rbp-ACh] BYREF
  int v57; // [rsp+58h] [rbp-A8h] BYREF
  int v58; // [rsp+5Ch] [rbp-A4h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-A0h] BYREF
  LPCWSTR lpOutputString; // [rsp+68h] [rbp-98h]
  __int64 v61; // [rsp+70h] [rbp-90h]
  __int64 v62; // [rsp+78h] [rbp-88h]
  __int64 v63; // [rsp+80h] [rbp-80h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v66; // [rsp+B0h] [rbp-50h]
  int v67; // [rsp+B8h] [rbp-48h]
  int v68; // [rsp+BCh] [rbp-44h]
  int *v69; // [rsp+C0h] [rbp-40h]
  __int64 v70; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  char *v72; // [rsp+E0h] [rbp-20h]
  __int64 v73; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  int *v77; // [rsp+130h] [rbp+30h]
  __int64 v78; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+140h] [rbp+40h] BYREF
  char *v80; // [rsp+150h] [rbp+50h]
  __int64 v81; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+160h] [rbp+60h] BYREF
  int *v83; // [rsp+170h] [rbp+70h]
  __int64 v84; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+180h] [rbp+80h] BYREF
  int *v86; // [rsp+190h] [rbp+90h]
  __int64 v87; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v89; // [rsp+1B0h] [rbp+B0h]
  __int64 v90; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v92; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v93; // [rsp+1E0h] [rbp+E0h]
  __int64 v94; // [rsp+1E8h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v95; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v96; // [rsp+200h] [rbp+100h] BYREF

  v16 = a7;
  v18 = a6;
  v20 = 0;
  v21 = a8;
  *a11 = 0;
  *a13 = 0;
  v62 = a4;
  v61 = a5;
  v63 = a6;
  lpOutputString = a11;
  if ( a7 == 1 )
  {
    v22 = wil::details::RecordReturn((wil::details *)a8, a6);
  }
  else if ( a7 )
  {
    if ( a7 == 2 )
    {
      if ( (a8 & 0x80000000) == 0 )
      {
        v21 = -2147024228;
        wil::details::ReportFailure_Hr(a1, a2, a3, a4, a5, a6);
      }
      v22 = wil::details::RecordLog((wil::details *)v21, v18);
      v23 = 0LL;
    }
    else
    {
      if ( a7 != 3 )
      {
        v23 = 0LL;
        goto LABEL_4;
      }
      v22 = wil::details::RecordFailFast((wil::details *)a8, a6);
      v16 = 3;
      v23 = 0LL;
    }
  }
  else
  {
    v22 = wil::details::RecordException((wil::details *)a8, a6);
    v23 = 0LL;
  }
  v20 = v22;
LABEL_4:
  *(_DWORD *)a15 = v16;
  *((_DWORD *)a15 + 1) = v21;
  *((_DWORD *)a15 + 2) = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  v24 = a9;
  if ( !a9 || !*a9 )
    v24 = v23;
  *((_QWORD *)a15 + 2) = v24;
  CurrentThreadId = GetCurrentThreadId();
  *((_QWORD *)a15 + 6) = a3;
  *((_DWORD *)a15 + 6) = CurrentThreadId;
  *((_QWORD *)a15 + 4) = v61;
  *((_QWORD *)a15 + 5) = v62;
  *((_QWORD *)a15 + 16) = v63;
  *((_QWORD *)a15 + 17) = a1;
  *((_DWORD *)a15 + 14) = a2;
  *((_DWORD *)a15 + 15) = v20;
  *((_QWORD *)a15 + 8) = 0LL;
  *((_QWORD *)a15 + 12) = 0LL;
  *((_QWORD *)a15 + 13) = 0LL;
  *((_QWORD *)a15 + 14) = 0LL;
  *((_QWORD *)a15 + 9) = 0LL;
  *((_QWORD *)a15 + 10) = 0LL;
  *((_QWORD *)a15 + 11) = 0LL;
  if ( wil::details::g_pfnGetModuleName )
  {
    v27 = (unsigned __int64)wil::details::GetCurrentModuleName;
    if ( (char *)wil::details::g_pfnGetModuleName == (char *)wil::details::GetCurrentModuleName )
    {
      ModuleName = &`wil::details::GetCurrentModuleName'::`2'::s_szModule;
      if ( !`wil::details::GetCurrentModuleName'::`2'::s_fModuleValid )
      {
        wil::details::GetModuleInformation(
          (LPCWSTR)wil::details::RecordFailFast,
          0LL,
          &`wil::details::GetCurrentModuleName'::`2'::s_szModule,
          (char *)0x40,
          UserDataCount);
        `wil::details::GetCurrentModuleName'::`2'::s_fModuleValid = 1;
      }
    }
    else
    {
      ModuleName = (unsigned int *)wil::details::g_pfnGetModuleName();
    }
  }
  else
  {
    ModuleName = 0LL;
  }
  v30 = wil::details::g_pfnGetContextAndNotifyFailure;
  *((_QWORD *)a15 + 15) = ModuleName;
  if ( v30 )
  {
    if ( (char *)v30 == (char *)wil::details::GetContextAndNotifyFailure )
    {
      v31 = 0;
      *a13 = 0;
      if ( wil::details::g_pThreadFailureCallbacks )
      {
        Local = (struct wil::details::ThreadFailureCallbackHolder **)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                                                                       wil::details::GetContextAndNotifyFailure,
                                                                       0LL);
        v33 = Local;
        if ( Local )
        {
          if ( *Local )
          {
            *a13 = 0;
            if ( wil::details::ThreadFailureCallbackHolder::GetThreadContext(a15, *Local, a13, 0x400uLL) )
              *((_QWORD *)a15 + 8) = a13;
            v41 = *v33;
            do
            {
              v42 = (***((__int64 (__fastcall ****)(_QWORD, struct wil::FailureInfo *))v41 + 1))(
                      *((_QWORD *)v41 + 1),
                      a15);
              v41 = (struct wil::details::ThreadFailureCallbackHolder *)*((_QWORD *)v41 + 2);
              v31 |= v42;
            }
            while ( v41 );
          }
        }
      }
      if ( wil::details::g_pfnTelemetryCallback )
      {
        if ( (char *)wil::details::g_pfnTelemetryCallback == (char *)wil::ErrorHandlingHelpers::FallbackTelemetryCallback )
        {
          Context = 0LL;
          if ( InitOnceBeginInitialize(&`wil::ErrorHandlingHelpers::Instance'::`2'::wrapper, 0, &fPending, &Context)
            && fPending )
          {
            Context = qword_1804388A0;
            qword_1804388A0[0] = &LockScreenServiceLogging::`vftable';
            qword_1804388B8 = (struct _TlgProvider_t *)&`wil::ErrorHandlingHelpers::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(lambda_8d5ca15cf69e69dee1fdb0dcddeb1e66_::_lambda_invoker_cdecl_);
            wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804388A0, qword_1804388B8);
            InitOnceComplete(&`wil::ErrorHandlingHelpers::Instance'::`2'::wrapper, 0, qword_1804388A0);
          }
          v34 = *(void (__fastcall **)(TraceLoggingHProvider *, char, const struct wil::FailureInfo *))(*(_QWORD *)Context + 16LL);
          if ( v34 == wil::TraceLoggingProvider::OnErrorReported )
          {
            if ( !v31 )
            {
              v35 = *((_DWORD *)Context + 5);
              if ( v35 == 1 )
              {
                if ( **((_DWORD **)Context + 1) > 5u
                  && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL) )
                {
                  v43 = (const CHAR *)*((_QWORD *)a15 + 6);
                  v53 = *((_DWORD *)a15 + 1);
                  v77 = &v53;
                  v78 = 4LL;
                  TlgCreateSz(&v79, v43);
                  v44 = (const CHAR *)*((_QWORD *)a15 + 15);
                  v80 = (char *)a15 + 56;
                  v81 = 4LL;
                  TlgCreateSz(&v82, v44);
                  v45 = (const WCHAR *)*((_QWORD *)a15 + 2);
                  v54 = *(_DWORD *)a15;
                  v83 = &v54;
                  v84 = 4LL;
                  TlgCreateWsz(&v85, v45);
                  v46 = (const CHAR *)*((_QWORD *)a15 + 8);
                  v55 = *((_DWORD *)a15 + 6);
                  v86 = &v55;
                  v87 = 4LL;
                  TlgCreateSz(&v88, v46);
                  v47 = (const CHAR *)*((_QWORD *)a15 + 10);
                  v56 = *((_DWORD *)a15 + 18);
                  v89 = &v56;
                  v90 = 4LL;
                  TlgCreateSz(&v91, v47);
                  TlgCreateWsz(&v92, *((LPCWSTR *)a15 + 11));
                  v48 = (const CHAR *)*((_QWORD *)a15 + 13);
                  v57 = *((_DWORD *)a15 + 24);
                  v93 = &v57;
                  v94 = 4LL;
                  TlgCreateSz(&v95, v48);
                  TlgCreateWsz(&v96, *((LPCWSTR *)a15 + 14));
                  TlgWrite(v49, &unk_180385B6D, 0LL, 0LL, 0x10u, &pData);
                }
              }
              else if ( v35 == 2 )
              {
                wil::TraceLoggingProvider::ReportTraceLoggingFailure((wil::TraceLoggingProvider *)Context, a15);
              }
            }
          }
          else
          {
            v34((TraceLoggingHProvider *)Context, v31, a15);
          }
        }
        else
        {
          wil::details::g_pfnTelemetryCallback(v31, a15);
        }
      }
      v36 = GetCurrentThreadId();
      v27 = (unsigned int)`wil::SetLastError'::`2'::lastThread;
      if ( `wil::SetLastError'::`2'::lastThread != v36 )
      {
        v27 = (unsigned int)_InterlockedIncrement(&`wil::SetLastError'::`5'::depth);
        if ( (int)v27 < 4 )
        {
          `wil::SetLastError'::`2'::lastThread = v36;
          ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(0LL, (bool)v26);
          if ( ThreadLocalDataCache )
            wil::details_abi::ThreadLocalData::SetLastError(ThreadLocalDataCache, a15);
          `wil::SetLastError'::`2'::lastThread = 0;
        }
        _InterlockedDecrement(&`wil::SetLastError'::`5'::depth);
      }
    }
    else
    {
      ((void (__fastcall *)(struct wil::FailureInfo *, char *, __int64))v30)(a15, a13, 1024LL);
    }
  }
  if ( wil::details::g_pfnLoggingCallback )
  {
    v27 = (unsigned __int64)lambda_eccc1875da2115ade755cfcef89d88c7_::_lambda_invoker_cdecl_;
    if ( (char *)wil::details::g_pfnLoggingCallback == (char *)lambda_eccc1875da2115ade755cfcef89d88c7_::_lambda_invoker_cdecl_ )
    {
      if ( hProvider > 5u )
      {
        v38 = (const CHAR *)*((_QWORD *)a15 + 6);
        v58 = *((_DWORD *)a15 + 1);
        v69 = &v58;
        v70 = 4LL;
        TlgCreateSz(&pDesc, v38);
        v39 = (const CHAR *)*((_QWORD *)a15 + 5);
        v72 = (char *)a15 + 56;
        v73 = 4LL;
        TlgCreateSz(&v74, v39);
        TlgCreateWsz(&v75, *((LPCWSTR *)a15 + 2));
        *(_DWORD *)&EventDescriptor.Level = 5;
        UserData.Ptr = (ULONGLONG)off_18042FE38;
        *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180385821 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        EventDescriptor.Keyword = 0LL;
        UserData.Size = *(unsigned __int16 *)off_18042FE38;
        v66 = &unk_18038582C;
        UserData.Reserved = 2;
        v67 = 64;
        v68 = 1;
        EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
      }
    }
    else
    {
      wil::details::g_pfnLoggingCallback(a15);
    }
  }
  if ( wil::details::g_pfnOriginateCallback )
  {
    if ( (char *)wil::details::g_pfnOriginateCallback == (char *)wil::details::RaiseRoOriginateOnWilExceptions )
      wil::details::RaiseRoOriginateOnWilExceptions(a15, v26);
    else
      wil::details::g_pfnOriginateCallback(a15);
  }
  if ( *((int *)a15 + 1) >= 0 )
  {
    if ( a7 != 3 )
      wil::details::in1diag3::FailFastImmediate_Unexpected((wil::details::in1diag3 *)v27);
    *((_DWORD *)a15 + 1) = -2147418113;
  }
  if ( wil::g_fIsDebuggerPresent )
    goto LABEL_47;
  if ( wil::g_pfnIsDebuggerPresent )
  {
    if ( !wil::g_pfnIsDebuggerPresent() )
      goto LABEL_41;
LABEL_47:
    v40 = 1;
    goto LABEL_42;
  }
  if ( IsDebuggerPresent() )
    goto LABEL_47;
LABEL_41:
  v40 = 0;
LABEL_42:
  if ( a10 || v40 )
  {
    v50 = (wil *)lpOutputString;
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(a15, lpOutputString, 2048LL);
    if ( !*(_WORD *)v50 )
      wil::GetFailureLogString(v50, (unsigned __int16 *)0x800, (unsigned __int64)a15, v28);
    if ( v40 )
      OutputDebugStringW((LPCWSTR)v50);
  }
  else if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
  {
    g_pfnResultLoggingCallback(a15, 0LL, 0LL);
  }
  if ( wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak();
  }
}
