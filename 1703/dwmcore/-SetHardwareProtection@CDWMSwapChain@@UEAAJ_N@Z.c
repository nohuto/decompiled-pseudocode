/*
 * XREFs of ?SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z @ 0x18019D690
 * Callers:
 *     <none>
 * Callees:
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x18003F25C (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::SetHardwareProtection(CDWMSwapChain *this, unsigned __int8 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v6; // eax
  __int64 v7; // rbx
  int v8; // r9d
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v3 = 0;
  v4 = *((_QWORD *)this + 38);
  if ( !v4 )
  {
    v3 = -2003292404;
    v10 = 1524;
    v8 = -2003292404;
    goto LABEL_11;
  }
  if ( a2 != *((_BYTE *)this + 456) )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 208LL))(v4, a2);
    v3 = v6;
    if ( v6 < 0 )
    {
      v10 = 1501;
      goto LABEL_8;
    }
    v7 = 0LL;
    for ( *((_BYTE *)this + 456) = a2; (unsigned int)v7 < *((_DWORD *)this + 72); v7 = (unsigned int)(v7 + 1) )
      ReleaseInterface<ID2D1Geometry>((__int64 *)(*(_QWORD *)(*((_QWORD *)this + 33) + 8 * v7) + 216LL));
    v6 = CSwapChainBase::SetupDepthBuffer(this);
    v3 = v6;
    if ( v6 < 0 )
    {
      v10 = 1515;
LABEL_8:
      v8 = v6;
LABEL_11:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v10);
    }
  }
  return v3;
}
