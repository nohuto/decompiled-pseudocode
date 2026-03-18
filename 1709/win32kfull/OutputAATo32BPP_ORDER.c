/*
 * XREFs of OutputAATo32BPP_ORDER @ 0x1C0241950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OutputAATo32BPP_ORDER(
        unsigned int *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        __int64 a9)
{
  unsigned __int8 *v9; // rdx
  __int64 result; // rax
  _BYTE *v11; // r10

  v9 = (unsigned __int8 *)(a2 + 4);
  result = *a1;
  if ( (result & 0x80u) == 0LL )
  {
    if ( (unsigned __int64)v9 < a3 )
    {
      v11 = (_BYTE *)(BYTE2(a9) + a4);
      do
      {
        v11[BYTE1(a9) - (unsigned __int64)BYTE2(a9)] = ~*(_BYTE *)(a5 + 4LL * ((unsigned int)v9[2] + 512));
        *v11 = ~*(_BYTE *)(a5 + 4LL * ((unsigned int)v9[1] + 256));
        result = *v9;
        v9 += 4;
        v11[BYTE3(a9) - (unsigned __int64)BYTE2(a9)] = ~*(_BYTE *)(a5 + 4 * result);
        v11 += 4;
      }
      while ( (unsigned __int64)v9 < a3 );
    }
  }
  else
  {
    for ( ; (unsigned __int64)v9 < a3; v9 += 4 )
    {
      if ( v9[3] )
      {
        *(_BYTE *)(BYTE1(a9) + a4) = ~*(_BYTE *)(a5 + 4LL * ((unsigned int)v9[2] + 512));
        *(_BYTE *)(BYTE2(a9) + a4) = ~*(_BYTE *)(a5 + 4LL * ((unsigned int)v9[1] + 256));
        result = *v9;
        *(_BYTE *)(BYTE3(a9) + a4) = ~*(_BYTE *)(a5 + 4 * result);
      }
      a4 += 4LL;
    }
  }
  return result;
}
