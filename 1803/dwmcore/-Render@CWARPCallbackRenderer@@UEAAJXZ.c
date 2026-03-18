/*
 * XREFs of ?Render@CWARPCallbackRenderer@@UEAAJXZ @ 0x18021B550
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x1800772B8 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180095264 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ReturnWARPCallbackRenderer@CCallbackRendererManager@@QEAAXPEAVCWARPCallbackRenderer@@@Z @ 0x180218854 (-ReturnWARPCallbackRenderer@CCallbackRendererManager@@QEAAXPEAVCWARPCallbackRenderer@@@Z.c)
 *     ApplyEdgeFlags @ 0x18021B328 (ApplyEdgeFlags.c)
 *     ?BlendModeToWarpBlendMode@@YA?AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z @ 0x18021B3E0 (-BlendModeToWarpBlendMode@@YA-AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z.c)
 *     ?ExtendModeToWarpAddressMode@@YA?AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z @ 0x18021B528 (-ExtendModeToWarpAddressMode@@YA-AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z.c)
 */

__int64 __fastcall CWARPCallbackRenderer::Render(CWARPCallbackRenderer *this)
{
  CWARPCallbackRenderer *v1; // r14
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned int v4; // esi
  __int64 v5; // rcx
  _OWORD *v6; // rdx
  __int64 v7; // rbx
  __m128 v8; // xmm2
  unsigned int v9; // xmm1_4
  int v10; // xmm1_4
  int v11; // xmm0_4
  int v12; // xmm1_4
  int v13; // xmm0_4
  int v14; // xmm1_4
  int v15; // ecx
  int v16; // xmm0_4
  D2DMatrixHelper *v17; // rdx
  __int64 v18; // xmm1_8
  __int128 v19; // xmm1
  int v20; // xmm0_4
  __m128 v21; // xmm3
  __m128 v22; // xmm1
  _QWORD *v23; // rdi
  float v24; // xmm3_4
  unsigned int v25; // r15d
  __int64 v26; // rax
  float v27; // xmm4_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  __int64 v30; // rax
  unsigned int v31; // r13d
  __int64 v32; // rbx
  _QWORD *v33; // r9
  char *v34; // rsi
  _BYTE *v35; // r12
  _BYTE *v36; // r14
  __int64 v37; // rdi
  const struct D2D1::Matrix3x2F *v38; // r8
  unsigned __int64 v39; // xmm1_8
  __m128 v40; // xmm1
  __m128 v41; // xmm3
  __int128 v42; // xmm0
  _QWORD *v43; // r9
  _OWORD *v44; // r10
  _BYTE *v45; // r11
  int v46; // edx
  BOOL v47; // ecx
  int v48; // eax
  __int128 v49; // xmm0
  int v50; // eax
  __int64 v51; // r8
  unsigned int v52; // edx
  int v53; // ecx
  bool v54; // zf
  __int64 v55; // rbx
  __int64 v56; // rdi
  int v57; // eax
  CCallbackRendererManager *v58; // rcx
  int v60; // [rsp+38h] [rbp-D0h]
  __int128 v61; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v62; // [rsp+50h] [rbp-B8h]
  __int64 v63; // [rsp+60h] [rbp-A8h]
  _BYTE *v64; // [rsp+68h] [rbp-A0h]
  _QWORD *v65; // [rsp+70h] [rbp-98h]
  _BYTE *v66; // [rsp+78h] [rbp-90h]
  int v67; // [rsp+88h] [rbp-80h] BYREF
  __int128 *v68; // [rsp+90h] [rbp-78h]
  int v69; // [rsp+98h] [rbp-70h]
  int v70; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v71; // [rsp+A0h] [rbp-68h]
  __int128 v72; // [rsp+A8h] [rbp-60h]
  __int128 v73; // [rsp+B8h] [rbp-50h]
  __int128 v74; // [rsp+C8h] [rbp-40h]
  __m128 v75; // [rsp+D8h] [rbp-30h]
  __int128 v76; // [rsp+E8h] [rbp-20h]
  _QWORD v77[3]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v78; // [rsp+110h] [rbp+8h]
  CWARPCallbackRenderer *v79; // [rsp+118h] [rbp+10h]
  __int64 v80; // [rsp+120h] [rbp+18h]
  _QWORD v81[2]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v82[4]; // [rsp+138h] [rbp+30h] BYREF
  char v83; // [rsp+13Ch] [rbp+34h] BYREF
  __int128 v84; // [rsp+1B8h] [rbp+B0h] BYREF
  float v85[3]; // [rsp+1D0h] [rbp+C8h] BYREF
  float v86; // [rsp+1DCh] [rbp+D4h]
  __int128 v87; // [rsp+1E0h] [rbp+D8h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+1F0h] [rbp+E8h] BYREF
  struct D2D_MATRIX_3X2_F v89; // [rsp+208h] [rbp+100h] BYREF
  _OWORD v90[2]; // [rsp+220h] [rbp+118h] BYREF
  int v91; // [rsp+240h] [rbp+138h]
  _BYTE v92[32]; // [rsp+248h] [rbp+140h] BYREF
  _BYTE v93[48]; // [rsp+268h] [rbp+160h] BYREF

  ++dword_1802D6354;
  v1 = this;
  v2 = *((_QWORD *)this + 3);
  v79 = this;
  v3 = 0;
  v4 = *((_DWORD *)this + 10);
  v5 = *(_QWORD *)(v2 + 8);
  v80 = v5;
  v60 = v4;
  if ( v4 < *((_DWORD *)v1 + 11) )
  {
    while ( 1 )
    {
      ++dword_1802D6348;
      v6 = v90;
      v69 = 0;
      v72 = 0LL;
      v73 = 0LL;
      v68 = 0LL;
      v71 = 3840;
      v67 = 26;
      v70 = 0;
      v7 = *(_QWORD *)(v5 + 8LL * v4);
      v78 = v7;
      v8 = (__m128)_mm_loadu_si128((const __m128i *)(v7 + 56));
      LODWORD(v74) = v8.m128_i32[0];
      DWORD1(v74) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
      DWORD2(v74) = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
      HIDWORD(v74) = _mm_shuffle_ps(v8, v8, 255).m128_u32[0];
      v87 = v74;
      v9 = *(_DWORD *)(v7 + 260);
      LODWORD(v61) = *(_DWORD *)(v7 + 256);
      *(_QWORD *)((char *)&v61 + 4) = __PAIR64__(*(_DWORD *)(v7 + 268), v9);
      v10 = *(_DWORD *)(v7 + 272);
      LODWORD(v62) = *(_DWORD *)(v7 + 276);
      v11 = *(_DWORD *)(v7 + 304);
      HIDWORD(v61) = v10;
      v12 = *(_DWORD *)(v7 + 284);
      DWORD2(v62) = v11;
      v13 = *(_DWORD *)(v7 + 316);
      DWORD1(v62) = v12;
      v14 = *(_DWORD *)(v7 + 308);
      LODWORD(v63) = v13;
      v91 = v13;
      v68 = &v87;
      HIDWORD(v62) = v14;
      *((_QWORD *)&v72 + 1) = v90;
      v90[0] = v61;
      v90[1] = v62;
      v15 = (*(_DWORD *)(v7 + 76) & 3) << 6;
      v71 = v15 | 0xF00;
      if ( v15 && *(_DWORD *)(v7 + 72) != 50529027 )
      {
        v16 = *(_DWORD *)(v7 + 256);
        v17 = (D2DMatrixHelper *)*(unsigned int *)(v7 + 72);
        DWORD1(v84) = *(_DWORD *)(v7 + 260);
        HIDWORD(v84) = *(_DWORD *)(v7 + 276);
        v18 = *(_QWORD *)(v7 + 304);
        LODWORD(v84) = v16;
        DWORD2(v84) = *(_DWORD *)(v7 + 272);
        *(_QWORD *)&v89.m[2][0] = v18;
        v19 = *(_OWORD *)(v7 + 56);
        *(_OWORD *)&v89.m11 = v84;
        v84 = v19;
        ApplyEdgeFlags((D2DMatrixHelper *)&v84, v17, &v89, (float *)&v87);
        v6 = 0LL;
        *((_QWORD *)&v72 + 1) = 0LL;
      }
      if ( !v6 )
      {
        v20 = *(_DWORD *)(v7 + 256);
        v21 = (__m128)*(unsigned int *)(v7 + 308);
        DWORD1(v84) = *(_DWORD *)(v7 + 260);
        HIDWORD(v84) = *(_DWORD *)(v7 + 276);
        v22 = (__m128)*(unsigned int *)(v7 + 304);
        LODWORD(v84) = v20;
        DWORD2(v84) = *(_DWORD *)(v7 + 272);
        *(_OWORD *)&matrix.m11 = v84;
        *(_QWORD *)&matrix.m[2][0] = _mm_unpacklo_ps(v22, v21).m128_u64[0];
        D2D1InvertMatrix(&matrix);
      }
      *(_QWORD *)&v84 = v7 + 96;
      v23 = (_QWORD *)(v7 + 176);
      `vector constructor iterator'(
        (CInputSinkStruct::InputQueueInfo *)v82,
        64LL,
        2LL,
        (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))WarpTextureState::WarpTextureState);
      v24 = *(float *)(v7 + 328);
      v25 = 0;
      v26 = v77[0];
      v27 = *(float *)(v7 + 88);
      v28 = *(float *)(v7 + 84) * v24;
      v29 = *(float *)(v7 + 92) * v24;
      v75.m128_f32[0] = *(float *)_mm_loadu_si128((const __m128i *)(v7 + 80)).m128i_i32 * v24;
      v75.m128_f32[1] = v28;
      v75.m128_f32[3] = v29;
      v75.m128_f32[2] = v27 * v24;
      v85[0] = v75.m128_f32[0];
      LODWORD(v85[1]) = _mm_shuffle_ps(v75, v75, 85).m128_u32[0];
      LODWORD(v85[2]) = _mm_shuffle_ps(v75, v75, 170).m128_u32[0];
      LODWORD(v86) = _mm_shuffle_ps(v75, v75, 255).m128_u32[0];
      if ( *(_QWORD *)(v7 + 96) )
        v26 = v7 + 96;
      LOBYTE(v25) = *(_QWORD *)(v7 + 96) != 0LL;
      v77[0] = v26;
      if ( *v23 )
      {
        v30 = v25++;
        v77[v30] = v23;
      }
      v31 = 0;
      if ( v25 )
      {
        v32 = v7 + 176;
        v33 = v77;
        v66 = v92;
        v65 = v77;
        v64 = v92;
        v34 = &v83;
        v35 = v93;
        v36 = v93;
        do
        {
          v37 = *v33;
          v38 = (const struct D2D1::Matrix3x2F *)(*v33 + 24LL);
          if ( *((_QWORD *)&v72 + 1) )
          {
            v40 = (__m128)*(unsigned int *)(*v33 + 40LL);
            v41 = (__m128)*(unsigned int *)(*v33 + 44LL);
            v61 = *(_OWORD *)v38;
            v39 = _mm_unpacklo_ps(v40, v41).m128_u64[0];
          }
          else
          {
            D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v61, (const struct D2D1::Matrix3x2F *)&matrix, v38);
            v39 = v62;
          }
          v42 = v61;
          *(_DWORD *)v34 = 0;
          *((_DWORD *)v34 - 1) = v31;
          *(_OWORD *)v35 = v42;
          *(_QWORD *)(v34 + 4) = v36;
          *((_QWORD *)v35 + 2) = v39;
          *((_DWORD *)v34 + 12) = ExtendModeToWarpAddressMode((_DWORD *)(v37 + 64));
          *((_DWORD *)v34 + 13) = ExtendModeToWarpAddressMode((_DWORD *)(v37 + 68));
          v46 = *(_DWORD *)(v37 + 72);
          v47 = 0;
          if ( v46 )
            v47 = v46 == 1;
          v54 = v37 == (_QWORD)v84;
          *((_DWORD *)v34 + 11) = v47;
          *((_DWORD *)v34 + 8) = 0;
          *((_DWORD *)v34 + 9) = v54;
          *((_DWORD *)v34 + 10) = v37 == v32;
          if ( v37 == (_QWORD)v84 )
          {
            if ( CDrawListBitmap::IsOpaque((CDrawListBitmap *)v37) )
            {
              if ( v86 == 1.0 )
                v48 = 1;
              else
                v48 = 3;
            }
            else
            {
              v48 = 2;
            }
            v43 = v65;
            v44 = v66;
            v45 = v64;
            *((_DWORD *)v34 + 7) = v48;
          }
          else if ( v37 == v32 )
          {
            *((_DWORD *)v34 + 7) = 4;
          }
          if ( *(_BYTE *)(v37 + 76) )
          {
            v49 = *(_OWORD *)(v37 + 48);
            *(_QWORD *)(v34 + 20) = v45;
            v76 = v49;
            *v44 = v49;
          }
          v33 = v43 + 1;
          v64 = v45 + 16;
          ++v31;
          v65 = v33;
          v36 += 24;
          v66 = v44 + 1;
          v35 += 24;
          v34 += 64;
        }
        while ( v31 < v25 );
        v7 = v78;
        v1 = v79;
        v4 = v60;
      }
      *(_QWORD *)&v72 = v85;
      *(_QWORD *)&v73 = v82;
      v50 = BlendModeToWarpBlendMode(*(_DWORD *)(v7 + 324));
      v70 = v50;
      v52 = v71 & 0xFFFFFFC3 | (4 * (v25 | 0x3C0));
      v71 = v52;
      v53 = *(_DWORD *)(v7 + 324);
      if ( v53 == 4 || v53 == 6 || v53 == 17 || v53 == 20 )
        v54 = *(_BYTE *)(v7 + 332) == (unsigned __int8)v51;
      else
        v54 = v53 == 22;
      if ( v54 )
        v71 = v52 & 0xFFFFF7FF;
      if ( *(_DWORD *)(v7 + 324) == (_DWORD)v51 && (*(_BYTE *)(v7 + 44) & 1) != 0 )
      {
        if ( *(float *)(v7 + 328) >= 0.99999988 )
          v50 = v51;
        v70 = v50;
      }
      if ( v25 )
      {
        v55 = v51;
        v56 = v25;
        do
        {
          *(_QWORD *)((char *)v81 + v55) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)((char *)v77 + v55)
                                                                                           + 8LL)
                                                                             + 32LL))(*(_QWORD *)(*(_QWORD *)((char *)v77 + v55)
                                                                                                + 8LL));
          v55 += 8LL;
          --v56;
        }
        while ( v56 );
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *))(**(_QWORD **)(*((_QWORD *)v1 + 3) + 656LL) + 64LL))(
          *(_QWORD *)(*((_QWORD *)v1 + 3) + 656LL),
          0LL,
          v25,
          v81);
      }
      v57 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 4) + 24LL))(*((_QWORD *)v1 + 4), &v67);
      v3 = v57;
      if ( v57 < 0 )
        break;
      v5 = v80;
      v60 = ++v4;
      if ( v4 >= *((_DWORD *)v1 + 11) )
        goto LABEL_52;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0x120u);
  }
LABEL_52:
  v58 = (CCallbackRendererManager *)(*((_QWORD *)v1 + 3) + 8LL);
  *((_BYTE *)v1 + 68) = 0;
  CCallbackRendererManager::ReturnWARPCallbackRenderer(v58, v1);
  return v3;
}
