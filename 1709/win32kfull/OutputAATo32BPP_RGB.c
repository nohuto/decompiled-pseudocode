/*
 * XREFs of OutputAATo32BPP_RGB @ 0x1C007AAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OutputAATo32BPP_RGB(unsigned int *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  unsigned __int8 *v6; // rdx
  __int64 v8; // r8
  __int64 v9; // r10
  _BYTE *v10; // r8
  __int64 v11; // r10

  result = *a1;
  v6 = (unsigned __int8 *)(a2 + 4);
  if ( (result & 0x80u) != 0LL )
  {
    if ( (unsigned __int64)v6 < a3 )
    {
      v10 = (_BYTE *)(a4 + 1);
      v11 = a4 - (_QWORD)v6;
      do
      {
        if ( v6[3] )
        {
          v10[1] = ~*(_BYTE *)(a5 + 4LL * ((unsigned int)v6[2] + 512));
          *v10 = ~*(_BYTE *)(a5 + 4LL * ((unsigned int)v6[1] + 256));
          result = *v6;
          v6[v11] = ~*(_BYTE *)(a5 + 4 * result);
        }
        v10 += 4;
        v6 += 4;
      }
      while ( (unsigned __int64)v6 < a3 );
    }
  }
  else if ( (unsigned __int64)v6 < a3 )
  {
    v8 = a4 + 1;
    v9 = a4 - (_QWORD)v6;
    do
    {
      v8 += 4LL;
      *(_BYTE *)(v8 - 3) = ~*(_BYTE *)(a5 + 4LL * ((unsigned int)v6[2] + 512));
      *(_BYTE *)(v8 - 4) = ~*(_BYTE *)(a5 + 4LL * ((unsigned int)v6[1] + 256));
      result = *v6;
      v6[v9] = ~*(_BYTE *)(a5 + 4 * result);
      v6 += 4;
    }
    while ( (unsigned __int64)v6 < a3 );
  }
  return result;
}
