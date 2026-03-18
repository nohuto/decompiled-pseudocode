/*
 * XREFs of ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180095F80
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800A1DF0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z @ 0x180095B90 (-SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z.c)
 *     ?SetRotationAngle@CComponentTransform3D@@AEAAJM@Z @ 0x180095C3C (-SetRotationAngle@CComponentTransform3D@@AEAAJM@Z.c)
 *     ?SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z @ 0x180095C7C (-SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z.c)
 *     ?SetScale@CComponentTransform3D@@AEAAJMMM@Z @ 0x180095CE8 (-SetScale@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z @ 0x180095DE4 (-SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetCenter@CComponentTransform3D@@AEAAJMMM@Z @ 0x180095E6C (-SetCenter@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetAnchor@CComponentTransform3D@@AEAAJMM@Z @ 0x180095F1C (-SetAnchor@CComponentTransform3D@@AEAAJMM@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetProperty(CComponentTransform3D *a1, int a2, int a3, __int64 a4)
{
  signed int v4; // eax
  unsigned int v5; // ebx
  int v7; // edx
  int v8; // edx
  float v9; // xmm1_4
  int v10; // edx
  unsigned int v11; // [rsp+20h] [rbp-18h]

  switch ( a3 )
  {
    case 18:
      v9 = *(float *)a4;
      v10 = a2 - 12;
      if ( !v10 )
      {
        v4 = CComponentTransform3D::SetRotationAngle(a1, v9);
        v5 = v4;
        if ( v4 >= 0 )
          return v5;
        v11 = 163;
        goto LABEL_32;
      }
      if ( v10 == 1 )
      {
        v4 = CComponentTransform3D::SetRotationAngle(a1, v9 * 0.017453292);
        v5 = v4;
        if ( v4 >= 0 )
          return v5;
        v11 = 167;
        goto LABEL_32;
      }
      goto LABEL_29;
    case 35:
      if ( a2 == 19 )
      {
        v4 = CComponentTransform3D::SetAnchor(a1, *(float *)a4, *(float *)(a4 + 4));
        v5 = v4;
        if ( v4 >= 0 )
          return v5;
        v11 = 180;
        goto LABEL_32;
      }
      goto LABEL_29;
    case 52:
      v7 = a2 - 18;
      if ( !v7 )
      {
        v4 = CComponentTransform3D::SetCenter(a1, *(float *)a4, *(float *)(a4 + 4), *(float *)(a4 + 8));
        v5 = v4;
        if ( v4 >= 0 )
          return v5;
        v11 = 193;
        goto LABEL_32;
      }
      v8 = v7 - 3;
      if ( !v8 )
      {
        v4 = CComponentTransform3D::SetRotationAxis(a1, *(float *)a4, *(float *)(a4 + 4), *(float *)(a4 + 8));
        v5 = v4;
        if ( v4 >= 0 )
          return v5;
        v11 = 197;
        goto LABEL_32;
      }
      if ( v8 == 1 )
      {
        v4 = CComponentTransform3D::SetScale(a1, *(float *)a4, *(float *)(a4 + 4), *(float *)(a4 + 8));
        v5 = v4;
        if ( v4 >= 0 )
          return v5;
        v11 = 201;
        goto LABEL_32;
      }
LABEL_29:
      v5 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0xF6u);
      return v5;
    case 71:
      if ( a2 == 20 )
      {
        v4 = CComponentTransform3D::SetOrientation(
               a1,
               *(float *)a4,
               *(float *)(a4 + 4),
               *(float *)(a4 + 8),
               *(_DWORD *)(a4 + 12));
        v5 = v4;
        if ( v4 >= 0 )
          return v5;
        v11 = 215;
LABEL_32:
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, v11);
        return v5;
      }
      goto LABEL_29;
  }
  if ( a3 != 265 || a2 != 17 )
    goto LABEL_29;
  v4 = CComponentTransform3D::SetTransformMatrix(a1, (const struct D2DMatrix *)a4);
  v5 = v4;
  if ( v4 < 0 )
  {
    v11 = 229;
    goto LABEL_32;
  }
  return v5;
}
