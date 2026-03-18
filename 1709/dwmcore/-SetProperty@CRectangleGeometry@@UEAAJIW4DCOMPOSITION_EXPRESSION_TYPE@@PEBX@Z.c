/*
 * XREFs of ?SetProperty@CRectangleGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180175970
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBottomRightRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x1800586E0 (-SetBottomRightRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottomRightRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x180058720 (-SetBottomRightRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottomLeftRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180058760 (-SetBottomLeftRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottomLeftRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x1800587A0 (-SetBottomLeftRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopRightRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x1800587E0 (-SetTopRightRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopRightRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x180058820 (-SetTopRightRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopLeftRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180058860 (-SetTopLeftRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopLeftRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x1800588A0 (-SetTopLeftRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottom@CRectangleGeometry@@AEAAJM@Z @ 0x1800588E0 (-SetBottom@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetRight@CRectangleGeometry@@AEAAJM@Z @ 0x180058950 (-SetRight@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTop@CRectangleGeometry@@AEAAJM@Z @ 0x1800589C0 (-SetTop@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetLeft@CRectangleGeometry@@AEAAJM@Z @ 0x180058A30 (-SetLeft@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRectangleGeometry::SetProperty(CRectangleGeometry *a1, unsigned int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  signed int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v16; // [rsp+20h] [rbp-18h]

  if ( a3 == 18 )
  {
    if ( a2 > 7 )
    {
      v11 = a2 - 8;
      if ( !v11 )
      {
        v10 = CRectangleGeometry::SetTopRightRadiusY(a1, *a4);
        v4 = v10;
        if ( v10 >= 0 )
          return v4;
        v16 = 86;
        goto LABEL_41;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        v10 = CRectangleGeometry::SetBottomLeftRadiusX(a1, *a4);
        v4 = v10;
        if ( v10 >= 0 )
          return v4;
        v16 = 90;
        goto LABEL_41;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        v10 = CRectangleGeometry::SetBottomLeftRadiusY(a1, *a4);
        v4 = v10;
        if ( v10 >= 0 )
          return v4;
        v16 = 94;
        goto LABEL_41;
      }
      v14 = v13 - 1;
      if ( !v14 )
      {
        v10 = CRectangleGeometry::SetBottomRightRadiusX(a1, *a4);
        v4 = v10;
        if ( v10 >= 0 )
          return v4;
        v16 = 98;
        goto LABEL_41;
      }
      if ( v14 == 1 )
      {
        v10 = CRectangleGeometry::SetBottomRightRadiusY(a1, *a4);
        v4 = v10;
        if ( v10 >= 0 )
          return v4;
        v16 = 102;
        goto LABEL_41;
      }
    }
    else
    {
      if ( a2 == 7 )
      {
        v10 = CRectangleGeometry::SetTopRightRadiusX(a1, *a4);
        v4 = v10;
        if ( v10 >= 0 )
          return v4;
        v16 = 82;
        goto LABEL_41;
      }
      v5 = a2 - 1;
      if ( !v5 )
      {
        v10 = CRectangleGeometry::SetLeft(a1, *a4);
        v4 = v10;
        if ( v10 >= 0 )
          return v4;
        v16 = 58;
        goto LABEL_41;
      }
      v6 = v5 - 1;
      if ( !v6 )
      {
        v10 = CRectangleGeometry::SetTop(a1, *a4);
        v4 = v10;
        if ( v10 >= 0 )
          return v4;
        v16 = 62;
        goto LABEL_41;
      }
      v7 = v6 - 1;
      if ( !v7 )
      {
        v10 = CRectangleGeometry::SetRight(a1, *a4);
        v4 = v10;
        if ( v10 >= 0 )
          return v4;
        v16 = 66;
        goto LABEL_41;
      }
      v8 = v7 - 1;
      if ( !v8 )
      {
        v10 = CRectangleGeometry::SetBottom(a1, *a4);
        v4 = v10;
        if ( v10 >= 0 )
          return v4;
        v16 = 70;
        goto LABEL_41;
      }
      v9 = v8 - 1;
      if ( !v9 )
      {
        v10 = CRectangleGeometry::SetTopLeftRadiusX(a1, *a4);
        v4 = v10;
        if ( v10 >= 0 )
          return v4;
        v16 = 74;
        goto LABEL_41;
      }
      if ( v9 == 1 )
      {
        v10 = CRectangleGeometry::SetTopLeftRadiusY(a1, *a4);
        v4 = v10;
        if ( v10 >= 0 )
          return v4;
        v16 = 78;
LABEL_41:
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, v16);
        return v4;
      }
    }
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x6Eu);
    return v4;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x78u);
  return v4;
}
