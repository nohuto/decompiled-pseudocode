/*
 * XREFs of ?GetRampValues@CoordMap@@AEBAJAEBV?$DynArray@URampEntry@CoordMap@@$0A@@@HAEAV?$DynArray@URampPair@CoordMap@@$0A@@@@Z @ 0x1800041D4
 * Callers:
 *     ?ComputeTexPositions@CoordMap@@QEBAJHV?$span@$$CBM$0?0@gsl@@0AEAV?$DynArray@M$0A@@@1M@Z @ 0x180004C68 (-ComputeTexPositions@CoordMap@@QEBAJHV-$span@$$CBM$0-0@gsl@@0AEAV-$DynArray@M$0A@@@1M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CoordMap::GetRampValues(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  unsigned int v4; // edi
  __int64 v8; // r9
  __int64 v9; // rcx
  unsigned int v10; // eax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v15; // eax

  *((_DWORD *)a4 + 6) = 0;
  v4 = 0;
  if ( *(_DWORD *)(a2 + 24) )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)a2 + 16LL * v4;
      if ( !*(_DWORD *)(v8 + 12) )
      {
        v9 = *((unsigned int *)a4 + 6);
        v10 = v9 + 1;
        if ( (int)v9 + 1 >= (unsigned int)v9 )
          a3 = v9 + 1;
        v11 = v10 < (unsigned int)v9 ? 0x80070216 : 0;
        if ( v10 < (unsigned int)v9 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xB5u);
        }
        else if ( a3 > *((_DWORD *)a4 + 5) )
        {
          v15 = DynArrayImpl<0>::AddMultipleAndSet(a4, 12LL, 1LL, v8);
          v11 = v15;
          if ( v15 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xC0u);
        }
        else
        {
          v12 = 3 * v9;
          v13 = *a4;
          *(_QWORD *)(v13 + 4 * v12) = *(_QWORD *)v8;
          *(_DWORD *)(v13 + 4 * v12 + 8) = *(_DWORD *)(v8 + 8);
          *((_DWORD *)a4 + 6) = a3;
        }
        if ( v11 < 0 )
          break;
      }
      if ( ++v4 >= *(_DWORD *)(a2 + 24) )
        return 0;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC7u);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v11;
}
