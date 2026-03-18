/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CDWMSwapChain@@UEAAJI_N@Z @ 0x18002E5F0
 * Callers:
 *     ?SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI_N@Z @ 0x18002BDC0 (-SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::SetSyncRefreshCountWaitTarget(CDWMSwapChain *this, __int64 a2, char a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 56LL))(*((_QWORD *)this + 54));
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x2E4u);
    result = 2291662989LL;
    *((_BYTE *)this + 577) = 0;
  }
  else
  {
    *((_BYTE *)this + 577) = a3;
  }
  return result;
}
