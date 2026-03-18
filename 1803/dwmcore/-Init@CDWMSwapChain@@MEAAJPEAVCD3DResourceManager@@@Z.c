/*
 * XREFs of ?Init@CDWMSwapChain@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x18007D6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x1800C0340 (-Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::Init(CDWMSwapChain *this, struct CD3DResourceManager *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax

  v3 = CSwapChainBase::Init(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x52u);
  }
  else
  {
    v5 = *((_QWORD *)this + 55);
    if ( v5 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 72LL))(v5, (char *)this + 464);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x56u);
    }
  }
  return v4;
}
