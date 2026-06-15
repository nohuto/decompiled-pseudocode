/*
 * XREFs of ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x18005D988
 * Callers:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x18005D8B8 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 * Callees:
 *     ?RecordReturn@details@wil@@YAHJ@Z @ 0x1800183D4 (-RecordReturn@details@wil@@YAHJ@Z.c)
 *     ?RecordFailFast@details@wil@@YAHJ@Z @ 0x180040390 (-RecordFailFast@details@wil@@YAHJ@Z.c)
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x18005D86C (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x18005DB90 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 *     ?GetCurrentModuleName@details@wil@@YAPEBDXZ @ 0x18005DC70 (-GetCurrentModuleName@details@wil@@YAPEBDXZ.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x18009A710 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?RecordException@details@wil@@YAHJ@Z @ 0x18009AC60 (-RecordException@details@wil@@YAHJ@Z.c)
 *     ?RecordLog@details@wil@@YAHJ@Z @ 0x18009AC78 (-RecordLog@details@wil@@YAHJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18009B6C8 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

void __fastcall wil::details::LogFailure(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        _WORD *a9,
        char a10,
        wil *lpOutputString,
        __int64 a12,
        struct wil::FailureInfo *a13,
        __int64 a14,
        wil::details *a15)
{
  unsigned int v17; // edi
  int v18; // esi
  int v19; // eax
  char v20; // di
  _WORD *v21; // rax
  DWORD CurrentThreadId; // eax
  wil::details::in1diag3 *v23; // rcx
  const struct wil::FailureInfo *v24; // r9
  const char *CurrentModuleName; // rax
  int v28; // [rsp+88h] [rbp+10h]

  v28 = a2;
  v17 = a8;
  v18 = 0;
  *(_WORD *)lpOutputString = 0;
  *(_BYTE *)a13 = 0;
  if ( a7 )
  {
    switch ( a7 )
    {
      case 1:
        v19 = wil::details::RecordReturn((wil::details *)a8);
        break;
      case 2:
        if ( (a8 & 0x80000000) == 0 )
        {
          v17 = -2147024228;
          wil::details::ReportFailure_Hr(a1, a2, a3, a4, a5, a6);
        }
        v19 = wil::details::RecordLog((wil::details *)v17, a2);
        break;
      case 3:
        v19 = wil::details::RecordFailFast((wil::details *)a8);
        break;
      default:
        goto LABEL_5;
    }
  }
  else
  {
    v19 = wil::details::RecordException((wil::details *)a8, a2);
  }
  v18 = v19;
LABEL_5:
  *((_DWORD *)a15 + 1) = v17;
  v20 = 1;
  *(_DWORD *)a15 = a7;
  *((_DWORD *)a15 + 2) = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  v21 = a9;
  if ( !a9 || !*a9 )
    v21 = 0LL;
  *((_QWORD *)a15 + 2) = v21;
  CurrentThreadId = GetCurrentThreadId();
  *((_DWORD *)a15 + 15) = v18;
  *((_DWORD *)a15 + 6) = CurrentThreadId;
  *((_DWORD *)a15 + 14) = v28;
  *((_QWORD *)a15 + 4) = a5;
  *((_QWORD *)a15 + 16) = a6;
  *((_QWORD *)a15 + 17) = a1;
  *((_QWORD *)a15 + 6) = a3;
  *((_QWORD *)a15 + 5) = a4;
  *((_QWORD *)a15 + 8) = 0LL;
  memset_0((char *)a15 + 72, 0, 0x30uLL);
  if ( wil::details::g_pfnGetModuleName )
  {
    if ( (char *)wil::details::g_pfnGetModuleName == (char *)wil::details::GetCurrentModuleName )
      CurrentModuleName = wil::details::GetCurrentModuleName((wil::details *)wil::details::GetCurrentModuleName);
    else
      CurrentModuleName = wil::details::g_pfnGetModuleName();
  }
  else
  {
    CurrentModuleName = 0LL;
  }
  *((_QWORD *)a15 + 15) = CurrentModuleName;
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
  {
    if ( (char *)wil::details::g_pfnGetContextAndNotifyFailure == (char *)wil::details::GetContextAndNotifyFailure )
      wil::details::GetContextAndNotifyFailure(a15, a13, (char *)0x400, (unsigned __int64)v24);
    else
      wil::details::g_pfnGetContextAndNotifyFailure(a15, (char *)a13, 0x400uLL);
  }
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(a15);
  if ( wil::details::g_pfnOriginateCallback )
    wil::details::g_pfnOriginateCallback(a15);
  if ( *((int *)a15 + 1) >= 0 )
  {
    if ( a7 != 3 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v23);
    *((_DWORD *)a15 + 1) = -2147418113;
  }
  if ( !wil::g_fIsDebuggerPresent
    && !(wil::g_pfnIsDebuggerPresent ? wil::g_pfnIsDebuggerPresent() : IsDebuggerPresent()) )
  {
    v20 = 0;
  }
  if ( a10 || v20 )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(a15, lpOutputString, 2048LL);
    if ( !*(_WORD *)lpOutputString )
      wil::GetFailureLogString(lpOutputString, (unsigned __int16 *)0x800, (unsigned __int64)a15, v24);
    if ( v20 )
      OutputDebugStringW((LPCWSTR)lpOutputString);
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
