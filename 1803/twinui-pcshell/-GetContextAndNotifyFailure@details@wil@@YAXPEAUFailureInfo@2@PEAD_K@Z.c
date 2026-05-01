/*
 * XREFs of ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180086850
 * Callers:
 *     <none>
 * Callees:
 *     ?FallbackTelemetryCallback@ErrorHandlingHelpers@wil@@SAX_NAEBUFailureInfo@2@@Z @ 0x180086940 (-FallbackTelemetryCallback@ErrorHandlingHelpers@wil@@SAX_NAEBUFailureInfo@2@@Z.c)
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x1800869BC (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z @ 0x180086A34 (-SetLastError@ThreadLocalData@details_abi@wil@@QEAAXAEBUFailureInfo@3@@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180087200 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@Z @ 0x18009C45C (-GetThreadContext@ThreadFailureCallbackHolder@details@wil@@SA_NPEAUFailureInfo@3@PEAV123@PEAD_K@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::GetContextAndNotifyFailure(wil::details *this, struct wil::FailureInfo *a2, char *a3)
{
  char v3; // bp
  struct wil::details::ThreadFailureCallbackHolder **Local; // rbx
  DWORD CurrentThreadId; // eax
  bool v9; // dl
  wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details::ThreadFailureCallbackHolder *v11; // rbx
  char v12; // al

  v3 = 0;
  *(_BYTE *)a2 = 0;
  if ( wil::details::g_pThreadFailureCallbacks )
    Local = (struct wil::details::ThreadFailureCallbackHolder **)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                                                                   this,
                                                                   0LL);
  else
    Local = 0LL;
  if ( Local && *Local )
  {
    *(_BYTE *)a2 = 0;
    if ( wil::details::ThreadFailureCallbackHolder::GetThreadContext(this, *Local, (char *)a2, (unsigned __int64)a3) )
      *((_QWORD *)this + 8) = a2;
    v11 = *Local;
    do
    {
      v12 = (***((__int64 (__fastcall ****)(_QWORD, wil::details *))v11 + 1))(*((_QWORD *)v11 + 1), this);
      v11 = (struct wil::details::ThreadFailureCallbackHolder *)*((_QWORD *)v11 + 2);
      v3 |= v12;
    }
    while ( v11 );
  }
  if ( wil::details::g_pfnTelemetryCallback )
  {
    if ( (char *)wil::details::g_pfnTelemetryCallback == (char *)wil::ErrorHandlingHelpers::FallbackTelemetryCallback )
      wil::ErrorHandlingHelpers::FallbackTelemetryCallback(v3, this);
    else
      wil::details::g_pfnTelemetryCallback(v3, this);
  }
  CurrentThreadId = GetCurrentThreadId();
  if ( `wil::SetLastError'::`2'::lastThread != CurrentThreadId )
  {
    if ( _InterlockedIncrement(&`wil::SetLastError'::`5'::depth) < 4 )
    {
      `wil::SetLastError'::`2'::lastThread = CurrentThreadId;
      ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(0LL, v9);
      if ( ThreadLocalDataCache )
        wil::details_abi::ThreadLocalData::SetLastError(ThreadLocalDataCache, this);
      `wil::SetLastError'::`2'::lastThread = 0;
    }
    _InterlockedDecrement(&`wil::SetLastError'::`5'::depth);
  }
}
