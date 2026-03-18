/*
 * XREFs of ?GetAllPositions@CoordMap@@AEBAJAEBV?$DynArray@URampEntry@CoordMap@@$0A@@@AEAV?$DynArray@M$0A@@@MMM@Z @ 0x180057DF4
 * Callers:
 *     ?ComputeMeshPositions@CoordMap@@QEBAJAEAV?$DynArray@M$0A@@@0AEBUD2D_RECT_F@@M@Z @ 0x180058078 (-ComputeMeshPositions@CoordMap@@QEBAJAEAV-$DynArray@M$0A@@@0AEBUD2D_RECT_F@@M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1800BF7F8 (-AddMultipleAndSet@-$DynArray@M$0A@@@QEAAJPEFBMI@Z.c)
 */

__int64 __fastcall CoordMap::GetAllPositions(__int64 a1, __int64 a2, __int64 a3, __int64 a4, float a5, float a6)
{
  float v6; // xmm3_4
  float *v8; // rcx
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm0_4
  float v13; // xmm8_4
  float v14; // xmm6_4
  float v15; // xmm7_4
  __int64 v16; // r9
  char v17; // dl
  unsigned int i; // ebp
  float *v19; // rdi
  float v20; // xmm0_4
  unsigned int v21; // ebx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  float v26; // [rsp+98h] [rbp+20h] BYREF

  v26 = v6;
  *(_DWORD *)(a3 + 24) = 0;
  v8 = *(float **)a2;
  v10 = v6;
  if ( v6 <= **(float **)a2 )
  {
    v10 = *v8;
    v26 = *v8;
  }
  v11 = a5;
  v12 = v8[4 * (*(_DWORD *)(a2 + 24) - 1)];
  if ( v12 <= a5 )
  {
    a5 = v8[4 * (*(_DWORD *)(a2 + 24) - 1)];
    v11 = v12;
  }
  v13 = a6;
  if ( (float)(v11 - v10) > a6 )
  {
    v14 = v10 + a6;
    v15 = v11 - a6;
    DynArray<float,0>::AddMultipleAndSet(a3, &v26, 1LL, a4);
    v17 = 0;
    for ( i = 1; i < *(_DWORD *)(a2 + 24); ++i )
    {
      v19 = (float *)(*(_QWORD *)a2 + 16LL * i);
      v20 = *v19;
      if ( v14 < *v19 )
      {
        if ( v20 >= v15 )
          break;
        v23 = *(_DWORD *)(a3 + 24);
        if ( !v23
          || v13 < (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v20
                                                                    - *(float *)(*(_QWORD *)a3
                                                                               + 4LL * (unsigned int)(v23 - 1)))) & _xmm) )
        {
          v24 = DynArray<float,0>::AddMultipleAndSet(a3, *(_QWORD *)a2 + 16LL * i, 1LL, v16);
          v21 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x10Du);
            return v21;
          }
          v17 = 0;
        }
        if ( !v17 && v19[1] != v19[2] && *(_DWORD *)(a3 + 24) > 1u )
        {
          v25 = DynArray<float,0>::AddMultipleAndSet(a3, v19, 1LL, v16);
          v21 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x116u);
            return v21;
          }
          v17 = 1;
        }
      }
    }
    DynArray<float,0>::AddMultipleAndSet(a3, &a5, 1LL, v16);
  }
  return 0;
}
