/*
 * XREFs of ?GetAllPositions@CoordMap@@AEBAJAEBV?$DynArray@URampEntry@CoordMap@@$0A@@@AEAV?$DynArray@M$0A@@@MMM@Z @ 0x18009FF4C
 * Callers:
 *     ?ComputeMeshPositions@CoordMap@@QEBAJAEAV?$DynArray@M$0A@@@0AEBUD2D_RECT_F@@M@Z @ 0x1800A01A4 (-ComputeMeshPositions@CoordMap@@QEBAJAEAV-$DynArray@M$0A@@@0AEBUD2D_RECT_F@@M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1800B2C9C (-AddMultipleAndSet@-$DynArray@M$0A@@@QEAAJPEFBMI@Z.c)
 */

__int64 __fastcall CoordMap::GetAllPositions(__int64 a1, __int64 a2, __int64 a3, float a4, float a5, float a6)
{
  float *v7; // rcx
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm0_4
  float v12; // xmm8_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  char v15; // dl
  unsigned int i; // ebp
  float *v17; // rdi
  float v18; // xmm0_4
  unsigned int v19; // ebx
  int v21; // eax
  signed int v22; // eax
  signed int v23; // eax
  float v24; // [rsp+98h] [rbp+20h] BYREF

  v24 = a4;
  *(_DWORD *)(a3 + 24) = 0;
  v7 = *(float **)a2;
  v9 = a4;
  if ( a4 <= **(float **)a2 )
  {
    v9 = *v7;
    v24 = *v7;
  }
  v10 = a5;
  v11 = v7[4 * (*(_DWORD *)(a2 + 24) - 1)];
  if ( v11 <= a5 )
  {
    a5 = v7[4 * (*(_DWORD *)(a2 + 24) - 1)];
    v10 = v11;
  }
  v12 = a6;
  if ( (float)(v10 - v9) > a6 )
  {
    v13 = v9 + a6;
    v14 = v10 - a6;
    DynArray<float,0>::AddMultipleAndSet(a3, &v24, 1LL);
    v15 = 0;
    for ( i = 1; i < *(_DWORD *)(a2 + 24); ++i )
    {
      v17 = (float *)(*(_QWORD *)a2 + 16LL * i);
      v18 = *v17;
      if ( v13 < *v17 )
      {
        if ( v18 >= v14 )
          break;
        v21 = *(_DWORD *)(a3 + 24);
        if ( !v21
          || v12 < (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v18
                                                                    - *(float *)(*(_QWORD *)a3
                                                                               + 4LL * (unsigned int)(v21 - 1)))) & _xmm) )
        {
          v22 = DynArray<float,0>::AddMultipleAndSet(a3, *(_QWORD *)a2 + 16LL * i, 1LL);
          v19 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0x10Du);
            return v19;
          }
          v15 = 0;
        }
        if ( !v15 && v17[1] != v17[2] && *(_DWORD *)(a3 + 24) > 1u )
        {
          v23 = DynArray<float,0>::AddMultipleAndSet(a3, v17, 1LL);
          v19 = v23;
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0x116u);
            return v19;
          }
          v15 = 1;
        }
      }
    }
    DynArray<float,0>::AddMultipleAndSet(a3, &a5, 1LL);
  }
  return 0;
}
