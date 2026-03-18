/*
 * XREFs of ?GetRampValues@CoordMap@@AEBAJAEBV?$DynArray@URampEntry@CoordMap@@$0A@@@HAEAV?$DynArray@URampPair@CoordMap@@$0A@@@@Z @ 0x18015F95C
 * Callers:
 *     ?ComputeTexPositions@CoordMap@@QEBAJHV?$ArrayRef@M@@0AEAV?$DynArray@M$0A@@@1M@Z @ 0x18015F5BC (-ComputeTexPositions@CoordMap@@QEBAJHV-$ArrayRef@M@@0AEAV-$DynArray@M$0A@@@1M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@URampPair@CoordMap@@$0A@@@QEAAJPEFBURampPair@CoordMap@@I@Z @ 0x18018CA2C (-AddMultipleAndSet@-$DynArray@URampPair@CoordMap@@$0A@@@QEAAJPEFBURampPair@CoordMap@@I@Z.c)
 */

__int64 __fastcall CoordMap::GetRampValues(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // edi
  int v8; // eax
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC7u);
  }
  else
  {
    return 0;
  }
  return v9;
}
