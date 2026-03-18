/*
 * XREFs of ?Push@CMatrixStack2D@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180222664
 * Callers:
 *     ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x180210840 (-PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180095264 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 */

__int64 __fastcall CMatrixStack2D::Push(CMatrixStack2D *this, const struct D2D_MATRIX_3X2_F *a2)
{
  __int64 v2; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = *((unsigned int *)this + 6);
  v5 = DynArrayImpl<0>::Grow((__int64)this, 0x18u, (int)v2 + 1, 0, 0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x22u);
  }
  else
  {
    v7 = 3LL * (unsigned int)(*((_DWORD *)this + 6) - 1);
    v8 = *(_QWORD *)this;
    *((_DWORD *)this + 6) = v2 + 1;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)(*(_QWORD *)this + 24 * v2),
      (const struct D2D1::Matrix3x2F *)a2,
      (const struct D2D1::Matrix3x2F *)(v8 + 8 * v7));
  }
  return v6;
}
