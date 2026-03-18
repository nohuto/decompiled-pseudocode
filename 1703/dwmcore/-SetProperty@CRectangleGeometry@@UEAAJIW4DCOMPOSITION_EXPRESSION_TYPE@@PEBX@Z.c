/*
 * XREFs of ?SetProperty@CRectangleGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18001F970
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetBottomRightRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180094B50 (-SetBottomRightRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottomRightRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x180094B90 (-SetBottomRightRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottomLeftRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180094BD0 (-SetBottomLeftRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottomLeftRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x180094C10 (-SetBottomLeftRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopRightRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180094C50 (-SetTopRightRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopRightRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x180094C90 (-SetTopRightRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopLeftRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180094CD0 (-SetTopLeftRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopLeftRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x180094D10 (-SetTopLeftRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottom@CRectangleGeometry@@AEAAJM@Z @ 0x180094D50 (-SetBottom@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetRight@CRectangleGeometry@@AEAAJM@Z @ 0x180094DC0 (-SetRight@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTop@CRectangleGeometry@@AEAAJM@Z @ 0x180094E30 (-SetTop@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetLeft@CRectangleGeometry@@AEAAJM@Z @ 0x180094EA0 (-SetLeft@CRectangleGeometry@@AEAAJM@Z.c)
 */

__int64 __fastcall CRectangleGeometry::SetProperty(CRectangleGeometry *a1, unsigned int a2, int a3, float *a4)
{
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // [rsp+20h] [rbp-18h]

  if ( a3 != 18 )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x78u);
    return v9;
  }
  if ( a2 > 7 )
  {
    v12 = a2 - 8;
    if ( !v12 )
    {
      v8 = CRectangleGeometry::SetTopRightRadiusY(a1, *a4);
      v9 = v8;
      if ( v8 >= 0 )
        return v9;
      v16 = 86;
      goto LABEL_42;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v8 = CRectangleGeometry::SetBottomLeftRadiusX(a1, *a4);
      v9 = v8;
      if ( v8 >= 0 )
        return v9;
      v16 = 90;
      goto LABEL_42;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v8 = CRectangleGeometry::SetBottomLeftRadiusY(a1, *a4);
      v9 = v8;
      if ( v8 >= 0 )
        return v9;
      v16 = 94;
      goto LABEL_42;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v8 = CRectangleGeometry::SetBottomRightRadiusX(a1, *a4);
      v9 = v8;
      if ( v8 >= 0 )
        return v9;
      v16 = 98;
      goto LABEL_42;
    }
    if ( v15 == 1 )
    {
      v8 = CRectangleGeometry::SetBottomRightRadiusY(a1, *a4);
      v9 = v8;
      if ( v8 >= 0 )
        return v9;
      v16 = 102;
      goto LABEL_42;
    }
    goto LABEL_33;
  }
  if ( a2 == 7 )
  {
    v8 = CRectangleGeometry::SetTopRightRadiusX(a1, *a4);
    v9 = v8;
    if ( v8 >= 0 )
      return v9;
    v16 = 82;
    goto LABEL_42;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v8 = CRectangleGeometry::SetLeft(a1, *a4);
    v9 = v8;
    if ( v8 >= 0 )
      return v9;
    v16 = 58;
    goto LABEL_42;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v8 = CRectangleGeometry::SetTop(a1, *a4);
    v9 = v8;
    if ( v8 >= 0 )
      return v9;
    v16 = 62;
    goto LABEL_42;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v8 = CRectangleGeometry::SetRight(a1, *a4);
    v9 = v8;
    if ( v8 >= 0 )
      return v9;
    v16 = 66;
LABEL_42:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v16);
    return v9;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v11 = v7 - 1;
    if ( !v11 )
    {
      v8 = CRectangleGeometry::SetTopLeftRadiusX(a1, *a4);
      v9 = v8;
      if ( v8 >= 0 )
        return v9;
      v16 = 74;
      goto LABEL_42;
    }
    if ( v11 == 1 )
    {
      v8 = CRectangleGeometry::SetTopLeftRadiusY(a1, *a4);
      v9 = v8;
      if ( v8 >= 0 )
        return v9;
      v16 = 78;
      goto LABEL_42;
    }
LABEL_33:
    v9 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x6Eu);
    return v9;
  }
  v8 = CRectangleGeometry::SetBottom(a1, *a4);
  v9 = v8;
  if ( v8 < 0 )
  {
    v16 = 70;
    goto LABEL_42;
  }
  return v9;
}
