/*
 * XREFs of ?SetProperty@CPathGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18019DFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18018FDC0 (-SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x18019DF7C (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 */

__int64 __fastcall CPathGeometry::SetProperty(CPathGeometry *a1, int a2, int a3, const struct CPathData *a4)
{
  int v4; // eax
  unsigned int v5; // ebx

  if ( a2 == 4 )
  {
    if ( a3 != 11 )
    {
      v5 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x6Fu);
      return v5;
    }
    CPathGeometry::SetPath(a1, a4);
    return 0;
  }
  v4 = CGeometry::SetProperty(a1, a2, a3, (struct _D3DCOLORVALUE *)a4);
  v5 = v4;
  if ( v4 >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x77u);
  return v5;
}
