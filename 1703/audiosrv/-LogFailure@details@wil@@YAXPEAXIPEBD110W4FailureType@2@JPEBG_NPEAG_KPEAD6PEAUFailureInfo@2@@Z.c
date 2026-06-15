/*
 * XREFs of ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x18007E148
 * Callers:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x18007E76C (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 * Callees:
 *     ?RecordFailFast@details@wil@@YAHJ@Z @ 0x18002FB20 (-RecordFailFast@details@wil@@YAHJ@Z.c)
 *     memset @ 0x180049B8A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x18007DBDC (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?RecordException@details@wil@@YAHJ@Z @ 0x18007E6A0 (-RecordException@details@wil@@YAHJ@Z.c)
 *     ?RecordLog@details@wil@@YAHJ@Z @ 0x18007E6B8 (-RecordLog@details@wil@@YAHJ@Z.c)
 *     ?RecordReturn@details@wil@@YAHJ@Z @ 0x18007E6D0 (-RecordReturn@details@wil@@YAHJ@Z.c)
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x18007EA0C (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18007F310 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
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
        wil *lpOutputString,
        __int64 a12,
        char *a13,
        __int64 a14,
        unsigned __int64 a15)
{
  int v16; // edx
  unsigned int v18; // edi
  int v20; // ebp
  int v21; // eax
  char v22; // di
  _WORD *v23; // rax
  DWORD CurrentThreadId; // eax
  wil::details::in1diag3 *v25; // rcx
  const struct wil::FailureInfo *v26; // r9
  const char *ModuleName; // rax
  void (__fastcall *v28)(unsigned __int64, wil *, __int64); // rax

  v16 = 0;
  v18 = a8;
  v20 = 0;
  *(_WORD *)lpOutputString = 0;
  *a13 = 0;
  switch ( a7 )
  {
    case 0:
      v21 = wil::details::RecordException((wil::details *)a8, 0);
      goto LABEL_11;
    case 1:
      v21 = wil::details::RecordReturn((wil::details *)a8, 0);
      goto LABEL_11;
    case 2:
      if ( (a8 & 0x80000000) == 0 )
      {
        v18 = -2147024228;
        wil::details::ReportFailure_Hr(a1, a2, a3, a4, a5, a6, 2, -2147024228);
      }
      v21 = wil::details::RecordLog((wil::details *)v18, v16);
      goto LABEL_11;
    case 3:
      v21 = wil::details::RecordFailFast((wil::details *)a8);
LABEL_11:
      v20 = v21;
      break;
  }
  *(_DWORD *)(a15 + 4) = v18;
  v22 = 1;
  *(_DWORD *)a15 = a7;
  *(_DWORD *)(a15 + 8) = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  v23 = a9;
  if ( !a9 || !*a9 )
    v23 = 0LL;
  *(_QWORD *)(a15 + 16) = v23;
  CurrentThreadId = GetCurrentThreadId();
  *(_DWORD *)(a15 + 60) = v20;
  *(_DWORD *)(a15 + 24) = CurrentThreadId;
  *(_QWORD *)(a15 + 32) = a5;
  *(_QWORD *)(a15 + 128) = a6;
  *(_QWORD *)(a15 + 136) = a1;
  *(_QWORD *)(a15 + 48) = a3;
  *(_DWORD *)(a15 + 56) = a2;
  *(_QWORD *)(a15 + 40) = a4;
  *(_QWORD *)(a15 + 64) = 0LL;
  memset((void *)(a15 + 72), 0, 0x30uLL);
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName();
  else
    ModuleName = 0LL;
  *(_QWORD *)(a15 + 120) = ModuleName;
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure((struct wil::FailureInfo *)a15, a13, 0x400uLL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback((const struct wil::FailureInfo *)a15);
  if ( *(int *)(a15 + 4) >= 0 )
  {
    if ( a7 != 3 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v25);
    *(_DWORD *)(a15 + 4) = -2147418113;
  }
  if ( wil::g_fResultOutputDebugString )
    goto LABEL_33;
  v28 = (void (__fastcall *)(unsigned __int64, wil *, __int64))g_pfnResultLoggingCallback;
  if ( wil::details::g_pfnTelemetryCallback || g_pfnResultLoggingCallback )
  {
    if ( !wil::g_pfnShouldOutputDebugString )
    {
LABEL_32:
      v22 = 0;
      goto LABEL_34;
    }
    if ( !wil::g_pfnShouldOutputDebugString() )
    {
      v28 = (void (__fastcall *)(unsigned __int64, wil *, __int64))g_pfnResultLoggingCallback;
      goto LABEL_32;
    }
LABEL_33:
    v28 = (void (__fastcall *)(unsigned __int64, wil *, __int64))g_pfnResultLoggingCallback;
  }
LABEL_34:
  if ( a10 || v22 )
  {
    if ( v28 && !wil::details::g_resultMessageCallbackSet )
      v28(a15, lpOutputString, 2048LL);
    if ( !*(_WORD *)lpOutputString )
      wil::GetFailureLogString(lpOutputString, (unsigned __int16 *)0x800, a15, v26);
    if ( v22 )
      OutputDebugStringW((LPCWSTR)lpOutputString);
  }
  else if ( v28 )
  {
    if ( !wil::details::g_resultMessageCallbackSet )
      v28(a15, 0LL, 0LL);
  }
}
