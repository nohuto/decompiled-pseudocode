/*
 * XREFs of ?ComputeTexPositionsWorker@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@3@AEAV?$DynArray@M$0A@@@M@Z @ 0x180005704
 * Callers:
 *     ?ComputeTexPositions@CoordMap@@QEBAJHV?$span@$$CBM$0?0@gsl@@0AEAV?$DynArray@M$0A@@@1M@Z @ 0x180004C68 (-ComputeTexPositions@CoordMap@@QEBAJHV-$span@$$CBM$0-0@gsl@@0AEAV-$DynArray@M$0A@@@1M@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1800BCE4C (-AddMultipleAndSet@-$DynArray@M$0A@@@QEAAJPEFBMI@Z.c)
 */

__int64 __fastcall CoordMap::ComputeTexPositionsWorker(__int64 *a1, _QWORD *a2, __int64 a3, float a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // r9
  int v9; // r12d
  int v10; // esi
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // r8
  float v14; // xmm2_4
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  float v17; // xmm1_4
  float v18; // xmm0_4
  __int64 result; // rax
  float *i; // rcx
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // [rsp+98h] [rbp+48h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+50h]

  v25 = a3;
  v4 = *a1;
  v5 = 0LL;
  v6 = a3;
  if ( *a2 )
  {
    v9 = 0;
    v10 = 0;
    if ( v4 > 0 )
    {
      v11 = 0LL;
      v12 = 0LL;
      do
      {
        v13 = a1[1];
        v14 = *(float *)(v12 + v13);
        v24 = 0.0;
        if ( v10 < *a2 )
        {
          v15 = a2[1];
          v16 = (_QWORD *)(v15 + 12 * v11);
          while ( 1 )
          {
            LODWORD(v17) = *v16;
            v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - v17)) & _xmm);
            if ( a4 >= v18 )
              break;
            if ( v17 > v14 )
            {
              if ( v10 )
                v15 += 12LL * (v10 - 1);
              v23 = (float)(v14 - COERCE_FLOAT(*(_QWORD *)v15)) / (float)(v17 - COERCE_FLOAT(*(_QWORD *)v15));
              v22 = (float)((float)(1.0 - v23) * *(float *)(v15 + 8)) + (float)(v23 * COERCE_FLOAT(HIDWORD(*v16)));
              goto LABEL_18;
            }
            ++v10;
            ++v11;
            v16 = (_QWORD *)((char *)v16 + 12);
            if ( v10 >= *a2 )
              goto LABEL_9;
          }
          LODWORD(v24) = HIDWORD(*v16);
          if ( !v9
            || a4 >= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v12 + v13) - *(float *)(v13 + v12 - 4))) & _xmm) )
          {
            if ( v10 + 1 < *a2 )
            {
              for ( i = (float *)(v15 + 12 * (v11 + 1)); ; i += 3 )
              {
                v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*i - v14)) & _xmm);
                if ( a4 < v21 )
                  break;
                ++v10;
                ++v11;
              }
            }
            v22 = *(float *)(v15 + 12 * v11 + 8);
LABEL_18:
            v24 = v22;
          }
        }
LABEL_9:
        DynArray<float,0>::AddMultipleAndSet(v6, &v24, 1LL);
        v6 = v25;
        result = ++v9;
        v12 += 4LL;
      }
      while ( v9 < *a1 );
    }
  }
  else
  {
    while ( v5 != v4 )
    {
      v24 = *(float *)(a1[1] + 4 * v5);
      result = DynArray<float,0>::AddMultipleAndSet(v6, &v24, 1LL);
      v6 = v25;
      ++v5;
    }
  }
  return result;
}
