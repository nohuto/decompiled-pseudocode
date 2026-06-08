/*
 * XREFs of RetrieveModelParameters @ 0x1C001D654
 * Callers:
 *     InitEnergyCounters @ 0x1C001E870 (InitEnergyCounters.c)
 * Callees:
 *     memset @ 0x1C0005000 (memset.c)
 */

__int64 __fastcall RetrieveModelParameters(unsigned int *a1)
{
  unsigned int v2; // r9d
  unsigned int v3; // r10d
  __int64 result; // rax
  float *v5; // rcx
  __int64 v6; // rdx
  double v7; // xmm0_8
  __int64 v8; // r8
  __int64 v9; // r8

  memset(a1, 0, 0x98uLL);
  v2 = 0;
  a1[1] = dword_1C0019B60[0] / 0x3E8u;
  v3 = dword_1C0019B88;
  if ( dword_1C0019B88 )
  {
    v5 = (float *)&unk_1C0019B94;
    do
    {
      if ( (*(_DWORD *)(v5 - 1) & 1) != 0 )
      {
        v6 = *((unsigned int *)v5 - 2);
        v7 = *v5;
        if ( *((_WORD *)v5 - 1) )
        {
          if ( *((_WORD *)v5 - 1) == 1 )
          {
            v9 = a1[2];
            if ( (_DWORD)v9 == 4 )
              goto LABEL_4;
            a1[v9 + 3] = v6;
            *(double *)&a1[2 * v9 + 22] = v7;
            a1[2] = v9 + 1;
          }
          else if ( *((_WORD *)v5 - 1) == 2 )
          {
            v8 = a1[7];
            if ( (_DWORD)v8 == 4 )
              goto LABEL_4;
            a1[v8 + 8] = v6;
            *(double *)&a1[2 * v8 + 30] = v7;
            a1[7] = v8 + 1;
          }
        }
        else
        {
          if ( (unsigned int)v6 >= 5 )
            goto LABEL_4;
          *(double *)&a1[2 * v6 + 12] = v7;
        }
      }
      ++v2;
      v5 += 3;
    }
    while ( v2 < v3 );
  }
  if ( a1[2] )
    *a1 |= 1u;
LABEL_4:
  result = *a1;
  if ( (result & 1) == 0 )
  {
    result = (__int64)memset(a1, 0, 0x98uLL);
    *a1 &= ~1u;
    a1[2] = 1;
    a1[3] = 1593;
  }
  return result;
}
