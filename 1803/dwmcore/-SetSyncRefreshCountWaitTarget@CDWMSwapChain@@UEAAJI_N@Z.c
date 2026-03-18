/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CDWMSwapChain@@UEAAJI_N@Z @ 0x18007CF50
 * Callers:
 *     ?SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI_N@Z @ 0x1800467F0 (-SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::SetSyncRefreshCountWaitTarget(CDWMSwapChain *this, __int64 a2, char a3)
{
  int v5; // eax
  int v6; // ebx

  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 55) + 56LL))(*((_QWORD *)this + 55));
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x2BAu);
  if ( v6 < 0 )
  {
    v6 = -2003304307;
    a3 = 0;
  }
  *((_BYTE *)this + 569) = a3;
  return (unsigned int)v6;
}
