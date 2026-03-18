/*
 * XREFs of ?GetRampValues@CoordMap@@AEBAJAEBV?$DynArray@URampEntry@CoordMap@@$0A@@@HAEAV?$DynArray@URampPair@CoordMap@@$0A@@@@Z @ 0x180155A08
 * Callers:
 *     ?ComputeTexPositions@CoordMap@@QEBAJHV?$span@$$CBM@gsl@@0AEAV?$DynArray@M$0A@@@1M@Z @ 0x180155634 (-ComputeTexPositions@CoordMap@@QEBAJHV-$span@$$CBM@gsl@@0AEAV-$DynArray@M$0A@@@1M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@URampPair@CoordMap@@$0A@@@QEAAJPEFBURampPair@CoordMap@@I@Z @ 0x1801A521C (-AddMultipleAndSet@-$DynArray@URampPair@CoordMap@@$0A@@@QEAAJPEFBURampPair@CoordMap@@I@Z.c)
 */

__int64 __fastcall CoordMap::GetRampValues(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // edi
  signed int v8; // eax
  unsigned int v9; // ebx

  *(_DWORD *)(a4 + 24) = 0;
  v4 = 0;
  if ( *(_DWORD *)(a2 + 24) )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)a2 + 16LL * v4 + 12) == a3 )
      {
        v8 = DynArray<CoordMap::RampPair,0>::AddMultipleAndSet(a4);
        v9 = v8;
        if ( v8 < 0 )
          break;
      }
      if ( ++v4 >= *(_DWORD *)(a2 + 24) )
        return 0;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xC7u);
  }
  else
  {
    return 0;
  }
  return v9;
}
