/*
 * XREFs of ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000FF0C
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800091E8 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180003538 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180003768 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?GetLastError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@J@Z @ 0x18000FC18 (-GetLastError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@J@Z.c)
 *     ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18000FD20 (-RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     memset @ 0x18004207E (memset.c)
 */

void __fastcall wil::details::ReportFeatureError(
        unsigned __int64 this,
        wil::ThreadErrorContext *a2,
        struct wil::ThreadErrorContext *a3,
        __int64 a4)
{
  int v6; // esi
  char LastError; // al
  DWORD CurrentThreadId; // eax
  wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  unsigned int v10[36]; // [rsp+20h] [rbp-98h] BYREF

  v6 = this;
  if ( *(_QWORD *)a2 )
    LastError = wil::ThreadErrorContext::GetLastError(a2, (struct wil::FailureInfo *)v10, this);
  else
    LastError = 0;
  if ( !LastError )
  {
    memset(v10, 0, sizeof(v10));
    v10[14] = *(unsigned __int16 *)(a4 + 24);
    *(_QWORD *)&v10[12] = *(_QWORD *)(a4 + 8);
    *(_QWORD *)&v10[32] = *(_QWORD *)a4;
    v10[1] = v6;
    CurrentThreadId = GetCurrentThreadId();
    this = (unsigned int)`wil::SetLastError'::`2'::lastThread;
    if ( `wil::SetLastError'::`2'::lastThread != CurrentThreadId )
    {
      this = (unsigned int)_InterlockedIncrement(&`wil::SetLastError'::`5'::depth);
      if ( (int)this < 4 )
      {
        `wil::SetLastError'::`2'::lastThread = CurrentThreadId;
        ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(0LL);
        if ( ThreadLocalDataCache )
          wil::details_abi::ThreadLocalData::SetLastError(ThreadLocalDataCache, (const struct wil::FailureInfo *)v10);
        `wil::SetLastError'::`2'::lastThread = 0;
      }
      _InterlockedDecrement(&`wil::SetLastError'::`5'::depth);
    }
    if ( *(_QWORD *)a2 )
      wil::ThreadErrorContext::GetLastError(a2, (struct wil::FailureInfo *)v10, v6);
  }
  wil::details::RecordFeatureError(
    (wil::details *)this,
    (__int64)v10,
    (const struct wil::FailureInfo *)a4,
    (const struct DiagnosticsInfo *)a4);
}
