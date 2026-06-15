/*
 * XREFs of ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x1400366C0
 * Callers:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140036954 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ??$AtlMultiplyThrow@_K@ATL@@YA_K_K0@Z @ 0x140045BC0 (--$AtlMultiplyThrow@_K@ATL@@YA_K_K0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::AtlMultiply<unsigned __int64>(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  if ( a2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < a3 )
      return 2147942487LL;
    *a1 = a3 * a2;
  }
  else
  {
    *a1 = 0LL;
  }
  return 0LL;
}
