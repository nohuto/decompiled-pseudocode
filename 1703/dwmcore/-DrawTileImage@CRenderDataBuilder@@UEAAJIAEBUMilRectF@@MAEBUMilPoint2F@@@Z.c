/*
 * XREFs of ?DrawTileImage@CRenderDataBuilder@@UEAAJIAEBUMilRectF@@MAEBUMilPoint2F@@@Z @ 0x1800C2850
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
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

  v8 = DynArrayImpl<0>::Grow((__int64)this + 16, 1u, 40, 0, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xE9u);
  }
  else
  {
    v10 = (_DWORD *)(*((_QWORD *)this + 2) + *((unsigned int *)this + 10));
    v11 = v10 + 1;
    *v10 = 40;
    memset_0(v10 + 1, 0, 0x24uLL);
    *v11 = 340;
    v11[1] = a2;
    v12 = *(_OWORD *)a3;
    *((float *)v11 + 6) = a4;
    *(_OWORD *)(v11 + 2) = v12;
    *(_QWORD *)(v11 + 7) = *(_QWORD *)a5;
    *((_DWORD *)this + 10) += 40;
  }
  return v9;
}
