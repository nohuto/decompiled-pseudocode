/*
 * XREFs of ?DrawMesh2D@CRenderDataBuilder@@UEAAJII@Z @ 0x180127090
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawMesh2D(CRenderDataBuilder *this, int a2, int a3)
{
  signed int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx

  v6 = DynArrayImpl<0>::Grow((__int64)this + 16, 1u, 16, 0, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xA7u);
  }
  else
  {
    v8 = *((_QWORD *)this + 2) + *((unsigned int *)this + 10);
    *(_DWORD *)v8 = 16;
    *(_QWORD *)(v8 + 4) = 0LL;
    *(_DWORD *)(v8 + 4) = 377;
    *(_DWORD *)(v8 + 8) = a2;
    *(_DWORD *)(v8 + 12) = a3;
    *((_DWORD *)this + 10) += 16;
  }
  return v7;
}
