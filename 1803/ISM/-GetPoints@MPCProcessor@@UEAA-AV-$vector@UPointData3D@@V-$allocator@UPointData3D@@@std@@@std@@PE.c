/*
 * XREFs of ?GetPoints@MPCProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x1800460A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x180040884 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
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
  unsigned __int64 v16; // rax
  __m128 *v17; // rcx
  unsigned __int64 i; // rax
  struct MPCHolographicInputManager *Instance; // rax
  char *v20; // rcx
  __int64 v21; // rdx
  struct MPCHolographicInputManager *v22; // rax
  __m128 v23; // xmm7
  __m128 v24; // xmm6
  float v25; // ebx
  unsigned __int64 v27; // [rsp+28h] [rbp-E0h]
  __int64 v28; // [rsp+28h] [rbp-E0h]
  float v29; // [rsp+30h] [rbp-D8h]
  float v30; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  float v32; // [rsp+50h] [rbp-B8h]
  int v33; // [rsp+54h] [rbp-B4h]
  __int64 v34; // [rsp+58h] [rbp-B0h]
  __int64 v35; // [rsp+60h] [rbp-A8h]
  __int64 v36; // [rsp+68h] [rbp-A0h]
  __int64 v37; // [rsp+70h] [rbp-98h]
  int v38; // [rsp+78h] [rbp-90h]
  __int64 v39; // [rsp+7Ch] [rbp-8Ch]
  __int64 v40; // [rsp+84h] [rbp-84h]
  __int64 v41; // [rsp+8Ch] [rbp-7Ch]
  __int16 v42; // [rsp+94h] [rbp-74h]
  char v43; // [rsp+96h] [rbp-72h]
  __int128 v44; // [rsp+98h] [rbp-70h]
  __int128 v45; // [rsp+A8h] [rbp-60h]
  __int128 v46; // [rsp+B8h] [rbp-50h]
  __int128 v47; // [rsp+C8h] [rbp-40h]
  __int128 v48; // [rsp+D8h] [rbp-30h]
  __int128 v49; // [rsp+E8h] [rbp-20h]
  float v50; // [rsp+110h] [rbp+8h]
  __int64 v51; // [rsp+118h] [rbp+10h]
  char v52; // [rsp+128h] [rbp+20h] BYREF
  float v53; // [rsp+668h] [rbp+560h]
  float v54; // [rsp+66Ch] [rbp+564h]
  float v55; // [rsp+670h] [rbp+568h]
  float v56; // [rsp+678h] [rbp+570h]
  float v57; // [rsp+67Ch] [rbp+574h]
  float v58; // [rsp+680h] [rbp+578h]
  float v59; // [rsp+688h] [rbp+580h]
  float v60; // [rsp+68Ch] [rbp+584h]
  float v61; // [rsp+690h] [rbp+588h]
  float v62; // [rsp+698h] [rbp+590h]
  float v63; // [rsp+69Ch] [rbp+594h]
  float v64; // [rsp+6A0h] [rbp+598h]

  v51 = -2LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v6 = *(__m128 ***)(a1 + 2272);
  v7 = *v6;
  while ( v7 != (__m128 *)v6 )
  {
    v27 = v7[74].m128_u64[1];
    v29 = v7[75].m128_f32[0];
    v8 = v7[106];
    v9 = v7[107];
    v10 = v7[108];
    v11 = v7[109];
    v12 = (__m128)HIDWORD(v27);
    v12.m128_f32[0] = (float)((float)((float)(*((float *)&v27 + 1) * v9.m128_f32[0])
                                    + (float)(*(float *)&v27 * v8.m128_f32[0]))
                            + (float)(v29 * v10.m128_f32[0]))
                    + v11.m128_f32[0];
    v13 = (float)((float)((float)(*((float *)&v27 + 1) * _mm_shuffle_ps(v9, v9, 85).m128_f32[0])
                        + (float)(*(float *)&v27 * _mm_shuffle_ps(v8, v8, 85).m128_f32[0]))
                + (float)(v29 * _mm_shuffle_ps(v10, v10, 85).m128_f32[0]))
        + _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
    v9.m128_f32[0] = _mm_shuffle_ps(v9, v9, 170).m128_f32[0];
    v8.m128_f32[0] = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
    v10.m128_f32[0] = _mm_shuffle_ps(v10, v10, 170).m128_f32[0];
    v11.m128_f32[0] = _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
    v14 = v12;
    v14.m128_f32[0] = (float)((float)((float)(v12.m128_f32[0] * *a3) + (float)(v13 * a3[4]))
                            + (float)((float)((float)((float)((float)(*((float *)&v27 + 1) * v9.m128_f32[0])
                                                            + (float)(*(float *)&v27 * v8.m128_f32[0]))
                                                    + (float)(v29 * v10.m128_f32[0]))
                                            + v11.m128_f32[0])
                                    * a3[8]))
                    + a3[12];
    v15 = v12;
    v15.m128_f32[0] = (float)((float)((float)(v12.m128_f32[0] * a3[1]) + (float)(v13 * a3[5]))
                            + (float)((float)((float)((float)((float)(*((float *)&v27 + 1) * v9.m128_f32[0])
                                                            + (float)(*(float *)&v27 * v8.m128_f32[0]))
                                                    + (float)(v29 * v10.m128_f32[0]))
                                            + v11.m128_f32[0])
                                    * a3[9]))
                    + a3[13];
    v50 = (float)((float)((float)(v12.m128_f32[0] * a3[2]) + (float)(v13 * a3[6]))
                + (float)((float)((float)((float)((float)(*((float *)&v27 + 1) * v9.m128_f32[0])
                                                + (float)(*(float *)&v27 * v8.m128_f32[0]))
                                        + (float)(v29 * v10.m128_f32[0]))
                                + v11.m128_f32[0])
                        * a3[10]))
        + a3[14];
    v33 = v7[74].m128_i32[1];
    LODWORD(v34) = 6;
    v31 = _mm_unpacklo_ps(v14, v15).m128_u64[0];
    v32 = v50;
    HIDWORD(v34) = v7[75].m128_i32[1] == 1;
    v42 = 0;
    v35 = 0LL;
    v36 = 0x3F80000000000000LL;
    v37 = 0LL;
    v38 = 0;
    v43 = 0;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    v44 = *(_OWORD *)(a1 + 104);
    v45 = *(_OWORD *)(a1 + 120);
    v46 = *(_OWORD *)(a1 + 136);
    v47 = *(_OWORD *)(a1 + 152);
    v48 = *(_OWORD *)(a1 + 168);
    v49 = *(_OWORD *)(a1 + 184);
    std::vector<PointData3D>::emplace_back<PointData3D const &>((__int64)a2, (__int64)&v31);
    if ( !v7[1].m128_i8[9] )
    {
      v16 = v7[1].m128_u64[0];
      if ( *(_BYTE *)(v16 + 25) )
      {
        for ( i = v7->m128_u64[1]; !*(_BYTE *)(i + 25) && v7 == *(__m128 **)(i + 16); i = *(_QWORD *)(i + 8) )
          v7 = (__m128 *)i;
        v7 = (__m128 *)i;
      }
      else
      {
        v7 = (__m128 *)v7[1].m128_u64[0];
        v17 = *(__m128 **)v16;
        if ( !*(_BYTE *)(*(_QWORD *)v16 + 25LL) )
        {
          do
          {
            v7 = v17;
            v17 = (__m128 *)v17->m128_u64[0];
          }
          while ( !v17[1].m128_i8[9] );
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 2289) )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    v20 = &v52;
    v21 = 15LL;
    do
    {
      *(_OWORD *)v20 = *(_OWORD *)Instance;
      *((_OWORD *)v20 + 1) = *((_OWORD *)Instance + 1);
      *((_OWORD *)v20 + 2) = *((_OWORD *)Instance + 2);
      *((_OWORD *)v20 + 3) = *((_OWORD *)Instance + 3);
      *((_OWORD *)v20 + 4) = *((_OWORD *)Instance + 4);
      *((_OWORD *)v20 + 5) = *((_OWORD *)Instance + 5);
      *((_OWORD *)v20 + 6) = *((_OWORD *)Instance + 6);
      v20 += 128;
      *((_OWORD *)v20 - 1) = *((_OWORD *)Instance + 7);
      Instance = (struct MPCHolographicInputManager *)((char *)Instance + 128);
      --v21;
    }
    while ( v21 );
    *(_OWORD *)v20 = *(_OWORD *)Instance;
    *((_QWORD *)v20 + 2) = *((_QWORD *)Instance + 2);
    v22 = MPCHolographicInputManager::GetInstance();
    v28 = *((_QWORD *)v22 + 22);
    v30 = *((float *)v22 + 46);
    v23 = (__m128)LODWORD(v56);
    v23.m128_f32[0] = (float)((float)((float)(v56 * *((float *)&v28 + 1)) + (float)(v53 * *(float *)&v28))
                            + (float)(v59 * v30))
                    + v62;
    v24 = (__m128)LODWORD(v54);
    v24.m128_f32[0] = (float)((float)((float)(v54 * *(float *)&v28) + (float)(v57 * *((float *)&v28 + 1)))
                            + (float)(v60 * v30))
                    + v63;
    v50 = (float)((float)((float)(v55 * *(float *)&v28) + (float)(v58 * *((float *)&v28 + 1))) + (float)(v61 * v30))
        + v64;
    v33 = 3;
    v34 = 0x100000007LL;
    v24.m128_u64[0] = _mm_unpacklo_ps(v23, v24).m128_u64[0];
    v31 = v24.m128_u64[0];
    v25 = v50;
    v32 = v50;
    v42 = 0;
    v35 = 0LL;
    v36 = 0x3F80000000000000LL;
    v37 = 0LL;
    v38 = 0;
    v43 = 0;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    v44 = *(_OWORD *)(a1 + 104);
    v45 = *(_OWORD *)(a1 + 120);
    v46 = *(_OWORD *)(a1 + 136);
    v47 = *(_OWORD *)(a1 + 152);
    v48 = *(_OWORD *)(a1 + 168);
    v49 = *(_OWORD *)(a1 + 184);
    std::vector<PointData3D>::emplace_back<PointData3D const &>((__int64)a2, (__int64)&v31);
    v33 = 3;
    v34 = 7LL;
    v31 = v24.m128_u64[0];
    v32 = v25;
    v42 = 0;
    v35 = 0LL;
    v36 = 0x3F80000000000000LL;
    v37 = 0LL;
    v38 = 0;
    v43 = 0;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    v44 = *(_OWORD *)(a1 + 104);
    v45 = *(_OWORD *)(a1 + 120);
    v46 = *(_OWORD *)(a1 + 136);
    v47 = *(_OWORD *)(a1 + 152);
    v48 = *(_OWORD *)(a1 + 168);
    v49 = *(_OWORD *)(a1 + 184);
    std::vector<PointData3D>::emplace_back<PointData3D const &>((__int64)a2, (__int64)&v31);
    *(_BYTE *)(a1 + 2289) = 0;
  }
  return a2;
}
