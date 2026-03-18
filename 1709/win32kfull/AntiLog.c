/*
 * XREFs of AntiLog @ 0x1C007AFD4
 * Callers:
 *     RaisePower @ 0x1C007AEC8 (RaisePower.c)
 * Callees:
 *     FD6DivL @ 0x1C007B200 (FD6DivL.c)
 *     MantissaToFraction @ 0x1C007B244 (MantissaToFraction.c)
 */

__int64 __fastcall AntiLog(int a1)
{
  int v1; // r8d
  int v2; // ebx
  unsigned int v3; // edx
  unsigned int v4; // r9d
  int v5; // edx
  unsigned int i; // edi
  int v7; // ecx
  __int64 v8; // r8

  v1 = a1;
  if ( a1 >= 0 )
  {
    if ( a1 >= 1000000 )
    {
      if ( a1 >= 3331930 )
        return 0x7FFFFFFFLL;
      v2 = (a1 + 999999) / 1000000;
      v1 = 1000000 * v2 - a1;
    }
    else
    {
      v2 = 0;
    }
  }
  else
  {
    if ( a1 <= -6000000 )
      return 1LL;
    v2 = (a1 - 999999) / 1000000;
    v1 = -1000000 * v2 + a1;
  }
  if ( v1 )
  {
    v3 = v1 / 10000;
    if ( v1 / 10000 >= 0 && v3 <= 0x63 )
    {
      _mm_lfence();
      v4 = (unsigned __int16)MantSearchTable[v3];
      v5 = (unsigned __int16)MantSearchTable[v3 + 1] + 1;
      for ( i = (v5 + v4) >> 1; i != v4; i = (int)(v5 + v4) >> 1 )
      {
        v7 = MantissaTable[i];
        if ( v1 < v7 )
        {
          v5 = i;
        }
        else
        {
          if ( v1 <= v7 )
          {
            v1 = 0;
            break;
          }
          v4 = i;
        }
      }
      if ( v1 )
        v1 = MantissaToFraction((unsigned int)(v1 - MantissaTable[v4]), (unsigned int)MantissaCorrectData[v4]);
      v8 = 1000000 * (i + 100) + v1;
      v2 -= 2;
      goto LABEL_17;
    }
    return 0x7FFFFFFFLL;
  }
  v8 = 1000000LL;
LABEL_17:
  if ( v2 < 0 )
    return FD6DivL((unsigned int)v8, (unsigned int)Power10ExpNum[-v2], v8);
  if ( v2 > 0 )
    return (unsigned int)(v8 * Power10ExpNum[v2]);
  return (unsigned int)v8;
}
