/*
 * XREFs of RetrieveModelParameters @ 0x1C0023FC0
 * Callers:
 *     InitEnergyCounters @ 0x1C0023A50 (InitEnergyCounters.c)
 * Callees:
 *     memset @ 0x1C0005280 (memset.c)
 */

__int64 __fastcall RetrieveModelParameters(unsigned int *a1)
{
  unsigned int v2; // r9d
  unsigned int v3; // r10d
  __int64 result; // rax
  float *v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // eax
  double v9; // xmm0_8
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r8

  memset(a1, 0, 0x98uLL);
  v2 = 0;
  a1[1] = dword_1C001AB60[0] / 0x3E8u;
  v3 = dword_1C001AB88;
  if ( dword_1C001AB88 )
  {
    v5 = (float *)&unk_1C001AB94;
    do
    {
      v6 = *((_DWORD *)v5 - 1);
      if ( (v6 & 1) != 0 )
      {
        v7 = *((unsigned int *)v5 - 2);
        v8 = HIWORD(v6);
        v9 = *v5;
        if ( v8 )
        {
          v10 = v8 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
            {
              v11 = a1[7];
              if ( (_DWORD)v11 == 4 )
                goto LABEL_4;
              a1[v11 + 8] = v7;
              *(double *)&a1[2 * v11 + 30] = v9;
              a1[7] = v11 + 1;
            }
          }
          else
          {
            v12 = a1[2];
            if ( (_DWORD)v12 == 4 )
              goto LABEL_4;
            a1[v12 + 3] = v7;
            *(double *)&a1[2 * v12 + 22] = v9;
            a1[2] = v12 + 1;
          }
        }
        else
        {
          if ( (unsigned int)v7 >= 5 )
            goto LABEL_4;
          *(double *)&a1[2 * v7 + 12] = v9;
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
    *a1 = 0;
    a1[2] = 1;
    a1[3] = 1593;
  }
  return result;
}
