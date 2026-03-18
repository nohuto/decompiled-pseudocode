/*
 * XREFs of OutputAATo24BPP_BGR @ 0x1C007A8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OutputAATo24BPP_BGR(unsigned int *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  unsigned __int8 *v6; // rdx
  __int64 v8; // r8
  _BYTE *v9; // r9

  result = *a1;
  v6 = (unsigned __int8 *)(a2 + 4);
  if ( (result & 0x80u) != 0LL )
  {
    if ( (unsigned __int64)v6 < a3 )
    {
      v9 = (_BYTE *)(a4 + 2);
      do
      {
        if ( v6[3] )
        {
          *(v9 - 2) = ~*(_BYTE *)(a5 + 4LL * ((unsigned int)v6[2] + 512));
          *(v9 - 1) = ~*(_BYTE *)(a5 + 4LL * ((unsigned int)v6[1] + 256));
          result = *v6;
          *v9 = ~*(_BYTE *)(a5 + 4 * result);
        }
        v9 += 3;
        v6 += 4;
      }
      while ( (unsigned __int64)v6 < a3 );
    }
  }
  else if ( (unsigned __int64)v6 < a3 )
  {
    v8 = a4 + 2;
    do
    {
      v8 += 3LL;
      *(_BYTE *)(v8 - 5) = ~*(_BYTE *)(a5 + 4LL * ((unsigned int)v6[2] + 512));
      *(_BYTE *)(v8 - 4) = ~*(_BYTE *)(a5 + 4LL * ((unsigned int)v6[1] + 256));
      result = *v6;
      v6 += 4;
      *(_BYTE *)(v8 - 3) = ~*(_BYTE *)(a5 + 4 * result);
    }
    while ( (unsigned __int64)v6 < a3 );
  }
  return result;
}
