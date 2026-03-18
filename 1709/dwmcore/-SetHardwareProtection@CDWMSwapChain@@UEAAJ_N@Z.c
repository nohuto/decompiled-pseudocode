/*
 * XREFs of ?SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z @ 0x1801B0910
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x1801B31CC (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 */

__int64 __fastcall CDWMSwapChain::SetHardwareProtection(CDWMSwapChain *this, unsigned __int8 a2)
{
  unsigned int v2; // ebx
  signed int v5; // eax
  __int64 v6; // rbx
  signed int v7; // eax

  v2 = 0;
  if ( a2 != *((_BYTE *)this + 576) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 52) + 208LL))(*((_QWORD *)this + 52), a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x4D2u);
    }
    else
    {
      v6 = 0LL;
      for ( *((_BYTE *)this + 576) = a2; (unsigned int)v6 < *((_DWORD *)this + 100); v6 = (unsigned int)(v6 + 1) )
        ReleaseInterface<ID2D1Geometry>((__int64 *)(*(_QWORD *)(*((_QWORD *)this + 47) + 8 * v6) + 216LL));
      v7 = CSwapChainBase::SetupDepthBuffer(this);
      v2 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x4DCu);
    }
  }
  return v2;
}
