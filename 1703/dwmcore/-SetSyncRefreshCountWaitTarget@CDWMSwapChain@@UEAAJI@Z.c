/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CDWMSwapChain@@UEAAJI@Z @ 0x18003E010
 * Callers:
 *     ?SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI@Z @ 0x18003A270 (-SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::SetSyncRefreshCountWaitTarget(CDWMSwapChain *this)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 56LL))(*((_QWORD *)this + 40));
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0x35Bu);
    return 2291662989LL;
  }
  return result;
}
