/*
 * XREFs of ?ComputeTexPositionsWorker@CoordMap@@KAXV?$ArrayRef@M@@V?$ArrayRef@URampPair@CoordMap@@@@AEAV?$DynArray@M$0A@@@M@Z @ 0x18015F76C
 * Callers:
 *     ?ComputeTexPositions@CoordMap@@QEBAJHV?$ArrayRef@M@@0AEAV?$DynArray@M$0A@@@1M@Z @ 0x18015F5BC (-ComputeTexPositions@CoordMap@@QEBAJHV-$ArrayRef@M@@0AEAV-$DynArray@M$0A@@@1M@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1800BF7F8 (-AddMultipleAndSet@-$DynArray@M$0A@@@QEAAJPEFBMI@Z.c)
 */

__int64 __fastcall CoordMap::ComputeTexPositionsWorker(__int64 *a1, __int64 *a2, __int64 a3, float a4)
{
  int v4; // ebx
  __int64 v5; // r10
  __int64 result; // rax
  int v9; // r12d
  int v10; // r14d
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // r8
  float v14; // xmm2_4
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  float *i; // rcx
  float v22; // xmm0_4
  float v23; // [rsp+98h] [rbp+48h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+50h]

  v24 = a3;
  v4 = 0;
  v5 = a3;
  if ( *((_DWORD *)a2 + 2) )
  {
    v9 = 0;
    v10 = 0;
    if ( *((int *)a1 + 2) > 0 )
    {
      v11 = 0LL;
      v12 = 0LL;
      do
      {
        v13 = *a1;
        v14 = *(float *)(*a1 + 4 * v12);
        v23 = 0.0;
        if ( v10 < *((_DWORD *)a2 + 2) )
        {
          v15 = *a2;
          v16 = (_QWORD *)(*a2 + 12 * v11);
          while ( 1 )
          {
            LODWORD(v17) = *v16;
            v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - v17)) & _xmm);
            if ( a4 >= v18 )
              break;
            if ( v17 > v14 )
            {
              if ( v11 )
                v15 += 12LL * (v10 - 1);
              v19 = (float)(v14 - COERCE_FLOAT(*(_QWORD *)v15)) / (float)(v17 - COERCE_FLOAT(*(_QWORD *)v15));
              v20 = (float)((float)(1.0 - v19) * *(float *)(v15 + 8)) + (float)(v19 * COERCE_FLOAT(HIDWORD(*v16)));
LABEL_23:
              v23 = v20;
              goto LABEL_24;
            }
            ++v10;
            ++v11;
            v16 = (_QWORD *)((char *)v16 + 12);
            if ( v11 >= *((int *)a2 + 2) )
              goto LABEL_24;
          }
          LODWORD(v23) = HIDWORD(*v16);
          if ( !v12
            || a4 >= (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v13 + 4 * v12)
                                                                      - *(float *)(v13 + 4 * v12 - 4))) & _xmm) )
          {
            if ( v10 + 1 < *((_DWORD *)a2 + 2) )
            {
              for ( i = (float *)(v15 + 12 * (v11 + 1)); ; i += 3 )
              {
                v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*i - v14)) & _xmm);
                if ( a4 < v22 )
                  break;
                ++v10;
                ++v11;
              }
            }
            v20 = *(float *)(v15 + 12 * v11 + 8);
            goto LABEL_23;
          }
        }
LABEL_24:
        result = DynArray<float,0>::AddMultipleAndSet(v5, &v23, 1u);
        v5 = v24;
        ++v9;
        ++v12;
      }
      while ( v9 < *((_DWORD *)a1 + 2) );
    }
  }
  else if ( *((int *)a1 + 2) > 0 )
  {
    do
    {
      result = DynArray<float,0>::AddMultipleAndSet(v5, (const void *)(*a1 + 4LL * v4), 1u);
      v5 = v24;
      ++v4;
    }
    while ( v4 < *((_DWORD *)a1 + 2) );
  }
  return result;
}
