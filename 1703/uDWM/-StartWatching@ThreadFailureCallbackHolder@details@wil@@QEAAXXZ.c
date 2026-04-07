/*
 * XREFs of ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18000C3E0
 * Callers:
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x18000C194 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x18007AEC8 (-StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x18007BCEC (-StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x18000C470 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::StartWatching(
        wil::details::ThreadFailureCallbackHolder *this,
        __int64 a2)
{
  _QWORD *Local; // rcx

  if ( *((_DWORD *)this + 6) )
    __fastfail(7u);
  if ( wil::details::g_pThreadFailureCallbacks )
  {
    LOBYTE(a2) = 1;
    Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                        this,
                        a2);
  }
  else
  {
    Local = 0LL;
  }
  *(_QWORD *)this = Local;
  if ( Local )
  {
    *((_QWORD *)this + 2) = *Local;
    *Local = this;
    *((_DWORD *)this + 6) = GetCurrentThreadId();
  }
}
