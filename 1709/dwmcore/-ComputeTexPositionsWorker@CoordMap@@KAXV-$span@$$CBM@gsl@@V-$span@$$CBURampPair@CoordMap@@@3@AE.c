/*
 * XREFs of ?ComputeTexPositionsWorker@CoordMap@@KAXV?$span@$$CBM@gsl@@V?$span@$$CBURampPair@CoordMap@@@3@AEAV?$DynArray@M$0A@@@M@Z @ 0x1801557F0
 * Callers:
 *     ?ComputeTexPositions@CoordMap@@QEBAJHV?$span@$$CBM@gsl@@0AEAV?$DynArray@M$0A@@@1M@Z @ 0x180155634 (-ComputeTexPositions@CoordMap@@QEBAJHV-$span@$$CBM@gsl@@0AEAV-$DynArray@M$0A@@@1M@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1800B2C9C (-AddMultipleAndSet@-$DynArray@M$0A@@@QEAAJPEFBMI@Z.c)
 */

unsigned __int64 __fastcall CoordMap::ComputeTexPositionsWorker(
        unsigned __int64 *a1,
        __int64 *a2,
        __int64 a3,
        float a4)
{
  __int64 v4; // rbx
  __int64 v5; // r9
  float *v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rdi
  int v12; // r12d
  int v13; // esi
  __int64 v14; // rdi
  __int64 v15; // r15
  _DWORD *v16; // r8
  float v17; // xmm2_4
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm0_4
  float *i; // rcx
  float v25; // xmm0_4
  float v26; // [rsp+98h] [rbp+48h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+50h]

  v27 = a3;
  v4 = 0LL;
  v5 = a3;
  if ( a2[1] )
  {
    v12 = 0;
    v13 = 0;
    if ( (__int64)a1[1] > 0 )
    {
      v14 = 0LL;
      v15 = 0LL;
      do
      {
        v16 = (_DWORD *)*a1;
        v17 = *(float *)(v15 * 4 + *a1);
        v26 = 0.0;
        if ( v13 < a2[1] )
        {
          v18 = *a2;
          v19 = (_QWORD *)(*a2 + 12 * v14);
          while ( 1 )
          {
            LODWORD(v20) = *v19;
            v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v17 - v20)) & _xmm);
            if ( a4 >= v21 )
              break;
            if ( v20 > v17 )
            {
              if ( v13 )
                v18 += 12LL * (v13 - 1);
              v22 = (float)(v17 - COERCE_FLOAT(*(_QWORD *)v18)) / (float)(v20 - COERCE_FLOAT(*(_QWORD *)v18));
              v23 = (float)((float)(1.0 - v22) * *(float *)(v18 + 8)) + (float)(v22 * COERCE_FLOAT(HIDWORD(*v19)));
LABEL_25:
              v26 = v23;
              goto LABEL_26;
            }
            ++v13;
            ++v14;
            v19 = (_QWORD *)((char *)v19 + 12);
            if ( v13 >= a2[1] )
              goto LABEL_26;
          }
          LODWORD(v26) = HIDWORD(*v19);
          if ( !v12
            || a4 >= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v16[v15] - *(float *)&v16[v15 - 1])) & _xmm) )
          {
            if ( v13 + 1 < a2[1] )
            {
              for ( i = (float *)(v18 + 12 * (v14 + 1)); ; i += 3 )
              {
                v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*i - v17)) & _xmm);
                if ( a4 < v25 )
                  break;
                ++v13;
                ++v14;
              }
            }
            v23 = *(float *)(v18 + 12 * v14 + 8);
            goto LABEL_25;
          }
        }
LABEL_26:
        DynArray<float,0>::AddMultipleAndSet(v5, &v26, 1u);
        v5 = v27;
        result = ++v12;
        ++v15;
      }
      while ( v12 < (__int64)a1[1] );
    }
  }
  else
  {
    v8 = (float *)*a1;
    v9 = 4 * a1[1];
    result = v9 + *a1;
    v11 = v9 >> 2;
    if ( *a1 > result )
      v11 = 0LL;
    if ( v11 )
    {
      do
      {
        v26 = *v8;
        result = DynArray<float,0>::AddMultipleAndSet(v5, &v26, 1u);
        v5 = v27;
        ++v8;
        ++v4;
      }
      while ( v4 != v11 );
    }
  }
  return result;
}
