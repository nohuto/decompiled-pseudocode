/*
 * XREFs of ?Init@CDWMSwapChain@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x1801B06A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x1801B2AB0 (-Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 */

__int64 __fastcall CDWMSwapChain::Init(CDWMSwapChain *this, struct CD3DResourceManager *a2)
{
  signed int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  signed int v6; // eax

  v3 = CSwapChainBase::Init(this, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x52u);
  }
  else
  {
    v5 = *((_QWORD *)this + 54);
    if ( v5 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 72LL))(v5, (char *)this + 456);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x56u);
    }
  }
  return v4;
}
