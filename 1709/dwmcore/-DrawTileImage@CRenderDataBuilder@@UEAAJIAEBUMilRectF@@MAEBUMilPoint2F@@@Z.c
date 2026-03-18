/*
 * XREFs of ?DrawTileImage@CRenderDataBuilder@@UEAAJIAEBUMilRectF@@MAEBUMilPoint2F@@@Z @ 0x18000B840
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawTileImage(
        CRenderDataBuilder *this,
        int a2,
        const struct MilRectF *a3,
        float a4,
        const struct MilPoint2F *a5)
{
  int v8; // eax
  unsigned int v9; // edi
  _DWORD *v10; // rcx
  _DWORD *v11; // rbx
  __int128 v12; // xmm0

  v8 = DynArrayImpl<0>::Grow((int)this + 16, 1, 40, 0, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xE9u);
  }
  else
  {
    v10 = (_DWORD *)(*((_QWORD *)this + 2) + *((unsigned int *)this + 10));
    v11 = v10 + 1;
    *v10 = 40;
    memset_0(v10 + 1, 0, 0x24uLL);
    *v11 = 381;
    v11[1] = a2;
    v12 = *(_OWORD *)a3;
    *((float *)v11 + 6) = a4;
    *(_OWORD *)(v11 + 2) = v12;
    *(_QWORD *)(v11 + 7) = *(_QWORD *)a5;
    *((_DWORD *)this + 10) += 40;
  }
  return v9;
}
