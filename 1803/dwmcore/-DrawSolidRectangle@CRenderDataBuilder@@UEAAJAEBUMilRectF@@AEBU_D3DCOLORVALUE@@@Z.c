/*
 * XREFs of ?DrawSolidRectangle@CRenderDataBuilder@@UEAAJAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x18001C1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CRenderDataBuilder::DrawSolidRectangle(
        CRenderDataBuilder *this,
        const struct MilRectF *a2,
        const struct _D3DCOLORVALUE *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  _DWORD *v8; // rcx
  _DWORD *v9; // rbx

  v6 = DynArrayImpl<0>::Grow((int)this + 16, 1, 40, 0, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x141u);
  }
  else
  {
    v8 = (_DWORD *)(*((_QWORD *)this + 2) + *((unsigned int *)this + 10));
    v9 = v8 + 1;
    *v8 = 40;
    memset_0(v8 + 1, 0, 0x24uLL);
    *v9 = 441;
    *(_OWORD *)(v9 + 1) = *(_OWORD *)a2;
    *(struct _D3DCOLORVALUE *)(v9 + 5) = *(const struct _D3DCOLORVALUE *)&a3->r;
    *((_DWORD *)this + 10) += 40;
  }
  return v7;
}
