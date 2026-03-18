/*
 * XREFs of ?GetMultiplaneOverlayCaps@CDWMSwapChain@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18003DFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::GetMultiplaneOverlayCaps(
        CDWMSwapChain *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  int v4; // ebx

  *((_BYTE *)this + 463) = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 38) + 168LL))(*((_QWORD *)this + 38));
  if ( v4 == -2147024809 )
    RaiseFailFastException(0LL, 0LL, 0);
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x4D5u);
  else
    *((_BYTE *)this + 463) = (*((_DWORD *)a2 + 3) & 0x40000) != 0;
  return (unsigned int)v4;
}
