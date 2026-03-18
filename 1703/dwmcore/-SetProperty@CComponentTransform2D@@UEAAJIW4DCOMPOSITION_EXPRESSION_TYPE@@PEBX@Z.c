/*
 * XREFs of ?SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180023A40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetTransformMatrix@CComponentTransform2D@@AEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC2C8 (-SetTransformMatrix@CComponentTransform2D@@AEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJM@Z @ 0x1800AC324 (-SetRotationAngle@CComponentTransform2D@@AEAAJM@Z.c)
 *     ?SetScale@CComponentTransform2D@@AEAAJMM@Z @ 0x1800AC364 (-SetScale@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?SetOffset@CComponentTransform2D@@AEAAJMM@Z @ 0x1800AC3C4 (-SetOffset@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?SetCenter@CComponentTransform2D@@AEAAJMM@Z @ 0x1800AC424 (-SetCenter@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?SetAnchor@CComponentTransform2D@@AEAAJMM@Z @ 0x1800AC484 (-SetAnchor@CComponentTransform2D@@AEAAJMM@Z.c)
 */

__int64 __fastcall CComponentTransform2D::SetProperty(
        CComponentTransform2D *a1,
        int a2,
        int a3,
        const struct D2D_MATRIX_3X2_F *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // edx
  int v8; // edx
  float m11; // xmm1_4
  int v10; // edx
  unsigned int v11; // [rsp+20h] [rbp-18h]

  if ( a3 == 18 )
  {
    m11 = a4->m11;
    v10 = a2 - 3;
    if ( !v10 )
    {
      v4 = CComponentTransform2D::SetRotationAngle(a1, m11);
      v5 = v4;
      if ( v4 >= 0 )
        return v5;
      v11 = 148;
      goto LABEL_27;
    }
    if ( v10 == 1 )
    {
      v4 = CComponentTransform2D::SetRotationAngle(a1, m11 * 0.017453292);
      v5 = v4;
      if ( v4 >= 0 )
        return v5;
      v11 = 152;
      goto LABEL_27;
    }
    goto LABEL_24;
  }
  if ( a3 == 35 )
  {
    if ( !a2 )
    {
      v4 = CComponentTransform2D::SetAnchor(a1, a4->m11, a4->m12);
      v5 = v4;
      if ( v4 >= 0 )
        return v5;
      v11 = 165;
      goto LABEL_27;
    }
    v7 = a2 - 1;
    if ( !v7 )
    {
      v4 = CComponentTransform2D::SetCenter(a1, a4->m11, a4->m12);
      v5 = v4;
      if ( v4 >= 0 )
        return v5;
      v11 = 169;
      goto LABEL_27;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v4 = CComponentTransform2D::SetOffset(a1, a4->m11, a4->m12);
      v5 = v4;
      if ( v4 >= 0 )
        return v5;
      v11 = 173;
      goto LABEL_27;
    }
    if ( v8 == 3 )
    {
      v4 = CComponentTransform2D::SetScale(a1, a4->m11, a4->m12);
      v5 = v4;
      if ( v4 >= 0 )
        return v5;
      v11 = 177;
LABEL_27:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v11);
      return v5;
    }
LABEL_24:
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xD0u);
    return v5;
  }
  if ( a3 != 104 || a2 != 6 )
    goto LABEL_24;
  v4 = CComponentTransform2D::SetTransformMatrix(a1, a4);
  v5 = v4;
  if ( v4 < 0 )
  {
    v11 = 191;
    goto LABEL_27;
  }
  return v5;
}
