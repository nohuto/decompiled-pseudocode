/*
 * XREFs of ?GetMultiplaneOverlayCaps@CDWMSwapChain@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18007CEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::GetMultiplaneOverlayCaps(
        CDWMSwapChain *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  int v4; // eax
  unsigned int v5; // esi

  *((_DWORD *)this + 145) = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 53) + 168LL))(*((_QWORD *)this + 53));
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x3D7u);
  }
  else if ( (*((_DWORD *)a2 + 3) & 0x40000) != 0 )
  {
    *((_DWORD *)this + 145) = 2;
  }
  else if ( *(_DWORD *)a2 > 1u && (*((_DWORD *)a2 + 1) || *((_DWORD *)a2 + 2)) )
  {
    *((_DWORD *)this + 145) = 1;
  }
  return v5;
}
