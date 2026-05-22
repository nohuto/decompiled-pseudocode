/*
 * XREFs of ?GetPoints@MPCProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x180053510
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@Z @ 0x18003A08C (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall MPCProcessor::GetPoints(__int64 a1, _QWORD *a2, float *a3)
{
  __m128 **v6; // rdi
  __m128 *v7; // rbx
  __m128 v8; // xmm6
  __m128 v9; // xmm5
  __m128 v10; // xmm7
  __m128 v11; // xmm8
  __m128 v12; // xmm11
  float v13; // xmm9_4
  __m128 v14; // xmm3
  __m128 v15; // xmm2
  __m128 *v16; // rax
  unsigned __int64 i; // rax
  unsigned __int64 v19; // [rsp+28h] [rbp-D8h]
  float v20; // [rsp+30h] [rbp-D0h]
  float v21; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  float v23; // [rsp+58h] [rbp-A8h]
  __int32 v24; // [rsp+5Ch] [rbp-A4h]
  int v25; // [rsp+60h] [rbp-A0h]
  BOOL v26; // [rsp+64h] [rbp-9Ch]
  __int64 v27; // [rsp+68h] [rbp-98h]
  int v28; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+74h] [rbp-8Ch]
  __int64 v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+84h] [rbp-7Ch]
  __int64 v33; // [rsp+8Ch] [rbp-74h]
  __int64 v34; // [rsp+94h] [rbp-6Ch]
  __int16 v35; // [rsp+9Ch] [rbp-64h]
  char v36; // [rsp+9Eh] [rbp-62h]
  __int128 v37; // [rsp+A0h] [rbp-60h]
  __int128 v38; // [rsp+B0h] [rbp-50h]
  __int128 v39; // [rsp+C0h] [rbp-40h]
  __int128 v40; // [rsp+D0h] [rbp-30h]
  __int128 v41; // [rsp+E0h] [rbp-20h]
  __int128 v42; // [rsp+F0h] [rbp-10h]

  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v6 = *(__m128 ***)(a1 + 544);
  v7 = *v6;
  while ( v7 != (__m128 *)v6 )
  {
    v19 = v7[85].m128_u64[1];
    v20 = v7[86].m128_f32[0];
    v8 = v7[117];
    v9 = v7[118];
    v10 = v7[119];
    v11 = v7[120];
    v12 = (__m128)HIDWORD(v19);
    v12.m128_f32[0] = (float)((float)((float)(*((float *)&v19 + 1) * v9.m128_f32[0])
                                    + (float)(*(float *)&v19 * v8.m128_f32[0]))
                            + (float)(v20 * v10.m128_f32[0]))
                    + v11.m128_f32[0];
    v13 = (float)((float)((float)(*((float *)&v19 + 1) * _mm_shuffle_ps(v9, v9, 85).m128_f32[0])
                        + (float)(*(float *)&v19 * _mm_shuffle_ps(v8, v8, 85).m128_f32[0]))
                + (float)(v20 * _mm_shuffle_ps(v10, v10, 85).m128_f32[0]))
        + _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
    v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
    v8.m128_f32[0] = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
    v10.m128_f32[0] = _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
    v11.m128_f32[0] = _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
    v14 = v12;
    v14.m128_f32[0] = (float)((float)((float)(v12.m128_f32[0] * *a3) + (float)(v13 * a3[4]))
                            + (float)((float)((float)((float)((float)(*((float *)&v19 + 1) * v9.m128_f32[0])
                                                            + (float)(*(float *)&v19 * v8.m128_f32[0]))
                                                    + (float)(v20 * v10.m128_f32[0]))
                                            + v11.m128_f32[0])
                                    * a3[8]))
                    + a3[12];
    v15 = v12;
    v15.m128_f32[0] = (float)((float)((float)(v12.m128_f32[0] * a3[1]) + (float)(v13 * a3[5]))
                            + (float)((float)((float)((float)((float)(*((float *)&v19 + 1) * v9.m128_f32[0])
                                                            + (float)(*(float *)&v19 * v8.m128_f32[0]))
                                                    + (float)(v20 * v10.m128_f32[0]))
                                            + v11.m128_f32[0])
                                    * a3[9]))
                    + a3[13];
    v21 = (float)((float)((float)(v12.m128_f32[0] * a3[2]) + (float)(v13 * a3[6]))
                + (float)((float)((float)((float)((float)(*((float *)&v19 + 1) * v9.m128_f32[0])
                                                + (float)(*(float *)&v19 * v8.m128_f32[0]))
                                        + (float)(v20 * v10.m128_f32[0]))
                                + v11.m128_f32[0])
                        * a3[10]))
        + a3[14];
    v24 = v7[85].m128_i32[1];
    v25 = 6;
    v22 = _mm_unpacklo_ps(v14, v15).m128_u64[0];
    v23 = v21;
    v26 = v7[180].m128_i8[8] != 0;
    v35 = 0;
    v27 = 0LL;
    v28 = 0;
    v29 = 1065353216;
    v30 = 0LL;
    v31 = 0;
    v36 = 0;
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    v37 = *(_OWORD *)(a1 + 112);
    v38 = *(_OWORD *)(a1 + 128);
    v39 = *(_OWORD *)(a1 + 144);
    v40 = *(_OWORD *)(a1 + 160);
    v41 = *(_OWORD *)(a1 + 176);
    v42 = *(_OWORD *)(a1 + 192);
    std::vector<PointData3D>::emplace_back<PointData3D const &>((__int64)a2, (__int64)&v22);
    if ( !v7[1].m128_i8[9] )
    {
      v16 = (__m128 *)v7[1].m128_u64[0];
      if ( v16[1].m128_i8[9] )
      {
        for ( i = v7->m128_u64[1]; !*(_BYTE *)(i + 25) && v7 == *(__m128 **)(i + 16); i = *(_QWORD *)(i + 8) )
          v7 = (__m128 *)i;
        v7 = (__m128 *)i;
      }
      else
      {
        do
        {
          v7 = v16;
          v16 = (__m128 *)v16->m128_u64[0];
        }
        while ( !v16[1].m128_i8[9] );
      }
    }
  }
  return a2;
}
