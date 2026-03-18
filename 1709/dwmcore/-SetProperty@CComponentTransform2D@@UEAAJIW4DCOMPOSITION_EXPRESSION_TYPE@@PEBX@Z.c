/*
 * XREFs of ?SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800955E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetTransformMatrix@CComponentTransform2D@@AEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800953C0 (-SetTransformMatrix@CComponentTransform2D@@AEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJM@Z @ 0x18009541C (-SetRotationAngle@CComponentTransform2D@@AEAAJM@Z.c)
 *     ?SetScale@CComponentTransform2D@@AEAAJMM@Z @ 0x18009545C (-SetScale@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?SetOffset@CComponentTransform2D@@AEAAJMM@Z @ 0x1800954BC (-SetOffset@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?SetCenter@CComponentTransform2D@@AEAAJMM@Z @ 0x18009551C (-SetCenter@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?SetAnchor@CComponentTransform2D@@AEAAJMM@Z @ 0x18009557C (-SetAnchor@CComponentTransform2D@@AEAAJMM@Z.c)
 */

__int64 __fastcall CComponentTransform2D::SetProperty(CComponentTransform2D *a1, int a2, int a3, __int64 a4)
{
  signed int v4; // eax
  unsigned int v5; // ebx
  int v7; // edx
  int v8; // edx
  float v9; // xmm1_4
  int v10; // edx
  unsigned int v11; // [rsp+20h] [rbp-18h]

  if ( a3 == 18 )
  {
    v9 = *(float *)a4;
    v10 = a2 - 3;
    if ( !v10 )
    {
      v4 = CComponentTransform2D::SetRotationAngle(a1, v9);
      v5 = v4;
      if ( v4 >= 0 )
        return v5;
      v11 = 154;
      goto LABEL_27;
    }
    if ( v10 == 1 )
    {
      v4 = CComponentTransform2D::SetRotationAngle(a1, v9 * 0.017453292);
      v5 = v4;
      if ( v4 >= 0 )
        return v5;
      v11 = 158;
      goto LABEL_27;
    }
    goto LABEL_24;
  }
  if ( a3 == 35 )
  {
    if ( !a2 )
    {
      v4 = CComponentTransform2D::SetAnchor(
             a1,
             COERCE_DOUBLE((unsigned __int64)*(_DWORD *)a4),
             COERCE_DOUBLE((unsigned __int64)*(_DWORD *)(a4 + 4)));
      v5 = v4;
      if ( v4 >= 0 )
        return v5;
      v11 = 171;
      goto LABEL_27;
    }
    v7 = a2 - 1;
    if ( !v7 )
    {
      v4 = CComponentTransform2D::SetCenter(
             a1,
             COERCE_DOUBLE((unsigned __int64)*(_DWORD *)a4),
             COERCE_DOUBLE((unsigned __int64)*(_DWORD *)(a4 + 4)));
      v5 = v4;
      if ( v4 >= 0 )
        return v5;
      v11 = 175;
      goto LABEL_27;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v4 = CComponentTransform2D::SetOffset(
             a1,
             COERCE_DOUBLE((unsigned __int64)*(_DWORD *)a4),
             COERCE_DOUBLE((unsigned __int64)*(_DWORD *)(a4 + 4)));
      v5 = v4;
      if ( v4 >= 0 )
        return v5;
      v11 = 179;
      goto LABEL_27;
    }
    if ( v8 == 3 )
    {
      v4 = CComponentTransform2D::SetScale(
             a1,
             COERCE_DOUBLE((unsigned __int64)*(_DWORD *)a4),
             COERCE_DOUBLE((unsigned __int64)*(_DWORD *)(a4 + 4)));
      v5 = v4;
      if ( v4 >= 0 )
        return v5;
      v11 = 183;
LABEL_27:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, v11);
      return v5;
    }
LABEL_24:
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0xD6u);
    return v5;
  }
  if ( a3 != 104 || a2 != 6 )
    goto LABEL_24;
  v4 = CComponentTransform2D::SetTransformMatrix(a1, (const struct D2D_MATRIX_3X2_F *)a4);
  v5 = v4;
  if ( v4 < 0 )
  {
    v11 = 197;
    goto LABEL_27;
  }
  return v5;
}
