/*
 * XREFs of ?RemoveAt@?$DynArray@W4D2D1_POLYGON_EDGE_FLAG@@$0A@@@QEAAJI@Z @ 0x18014AAD8
 * Callers:
 *     ?SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_MATRIX_3X2_F@@W4Enum@Orientation@@@Z @ 0x18014AB98 (-SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_M.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // r10
  __int64 v5; // r8

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  if ( a2 < v2 )
  {
    v4 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v5 = a2 + 1;
        *(_DWORD *)(v4 + 4LL * a2++) = *(_DWORD *)(v4 + 4 * v5);
      }
      while ( (unsigned int)v5 < *((_DWORD *)a1 + 6) - 1 );
    }
    --*((_DWORD *)a1 + 6);
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x193u);
  }
  return v3;
}
