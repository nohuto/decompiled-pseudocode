/*
 * XREFs of ?Pop@CRenderDataBuilder@@UEAAJXZ @ 0x180083E90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::Pop(CRenderDataBuilder *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx

  v2 = DynArrayImpl<0>::Grow((__int64)this + 16, 1u, 8, 0, 0LL);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x113u);
  }
  else
  {
    v4 = *((_QWORD *)this + 2) + *((unsigned int *)this + 10);
    *(_QWORD *)v4 = 8LL;
    *(_DWORD *)(v4 + 4) = 444;
    *((_DWORD *)this + 10) += 8;
    --*((_DWORD *)this + 2);
  }
  return v3;
}
