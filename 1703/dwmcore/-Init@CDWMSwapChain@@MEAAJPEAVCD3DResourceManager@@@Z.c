/*
 * XREFs of ?Init@CDWMSwapChain@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x18003F170
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x18003F380 (-Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::Init(CDWMSwapChain *this, struct CD3DResourceManager *a2)
{
  int v3; // eax
  int v4; // esi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax

  v3 = CSwapChainBase::Init(this, a2);
  v4 = 0;
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x72u);
  }
  else
  {
    v6 = *((_QWORD *)this + 40);
    if ( v6
      && (v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 72LL))(v6, (char *)this + 344),
          v5 = v7,
          v7 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x76u);
    }
    else
    {
      LOBYTE(v4) = *((_DWORD *)this + 36) == 10;
      *((_DWORD *)this + 88) = v4;
    }
  }
  return v5;
}
