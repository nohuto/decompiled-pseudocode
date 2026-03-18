/*
 * XREFs of ?DrawImage@CRenderDataBuilder@@UEAAJAEBUMilRectF@@I@Z @ 0x18000BA30
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawImage(CRenderDataBuilder *this, const struct MilRectF *a2, int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int128 v9; // xmm0

  v6 = DynArrayImpl<0>::Grow((int)this + 16, 1, 28, 0, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x91u);
  }
  else
  {
    v8 = *((_QWORD *)this + 2) + *((unsigned int *)this + 10);
    *(_DWORD *)v8 = 28;
    *(_QWORD *)(v8 + 4) = 0LL;
    *(_QWORD *)(v8 + 12) = 0LL;
    *(_QWORD *)(v8 + 20) = 0LL;
    *(_DWORD *)(v8 + 4) = 376;
    v9 = *(_OWORD *)a2;
    *(_DWORD *)(v8 + 8) = a3;
    *(_OWORD *)(v8 + 12) = v9;
    *((_DWORD *)this + 10) += 28;
  }
  return v7;
}
