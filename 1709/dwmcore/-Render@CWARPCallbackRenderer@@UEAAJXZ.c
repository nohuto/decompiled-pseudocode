/*
 * XREFs of ?Render@CWARPCallbackRenderer@@UEAAJXZ @ 0x1801D8220
 * Callers:
 *     <none>
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18004889C (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetShaderResourceView@CDrawListBitmap@@QEBAPEAUID3D11ShaderResourceView@@XZ @ 0x18011C52C (-GetShaderResourceView@CDrawListBitmap@@QEBAPEAUID3D11ShaderResourceView@@XZ.c)
 *     ?ReturnWARPCallbackRenderer@CCallbackRendererManager@@QEAAXPEAVCWARPCallbackRenderer@@@Z @ 0x1801D5718 (-ReturnWARPCallbackRenderer@CCallbackRendererManager@@QEAAXPEAVCWARPCallbackRenderer@@@Z.c)
 *     ApplyEdgeFlags @ 0x1801D7FFC (ApplyEdgeFlags.c)
 *     ?BlendModeToWarpBlendMode@@YA?AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z @ 0x1801D80B4 (-BlendModeToWarpBlendMode@@YA-AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z.c)
 *     ?ExtendModeToWarpAddressMode@@YA?AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z @ 0x1801D81FC (-ExtendModeToWarpAddressMode@@YA-AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z.c)
 */

__int64 __fastcall CWARPCallbackRenderer::Render(CWARPCallbackRenderer *this)
{
  CWARPCallbackRenderer *v1; // r15
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned int v4; // esi
  __int64 v5; // rcx
  _OWORD *v6; // rdx
  __int64 v7; // rbx
  __m128 v8; // xmm2
  int v9; // xmm1_4
  int v10; // ecx
  int v11; // xmm0_4
  __m128 v12; // xmm2
  D2DMatrixHelper *v13; // rdx
  __m128 v14; // xmm1
  __int128 v15; // xmm1
  int v16; // xmm0_4
  __m128 v17; // xmm3
  __m128 v18; // xmm1
  unsigned int v19; // r14d
  float v20; // xmm4_4
  __m128 v21; // xmm8
  __m128 v22; // xmm8
  __m128 v23; // xmm0
  float v24; // xmm2_4
  unsigned int v25; // xmm3_4
  unsigned int v26; // xmm1_4
  __int64 v27; // rax
  unsigned int v28; // r12d
  CDrawListBitmap **v29; // r11
  char *v30; // rsi
  _BYTE *v31; // r13
  _BYTE *v32; // r15
  CDrawListBitmap *v33; // rdi
  __m128 v34; // xmm2
  __m128 dx_low; // xmm3
  __m128 v36; // xmm1
  CDrawListBitmap *v37; // r9
  CDrawListBitmap *v38; // r10
  CDrawListBitmap **v39; // r11
  BOOL v40; // ecx
  int v41; // edx
  int v42; // eax
  _OWORD *v43; // rax
  __int128 v44; // xmm0
  int v45; // eax
  unsigned int v46; // edx
  int v47; // ecx
  bool v48; // zf
  __int64 v49; // rbx
  __int64 v50; // rdi
  signed int v51; // eax
  CCallbackRendererManager *v52; // rcx
  unsigned int v54; // [rsp+38h] [rbp-D0h]
  __int128 v55; // [rsp+40h] [rbp-C8h]
  __int128 v56; // [rsp+40h] [rbp-C8h]
  __int128 v57; // [rsp+50h] [rbp-B8h]
  _BYTE *v58; // [rsp+68h] [rbp-A0h]
  CDrawListBitmap **v59; // [rsp+70h] [rbp-98h]
  __int64 v60; // [rsp+78h] [rbp-90h] BYREF
  __int128 *v61; // [rsp+80h] [rbp-88h]
  int v62; // [rsp+88h] [rbp-80h]
  int v63; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v64; // [rsp+90h] [rbp-78h]
  __int128 v65; // [rsp+98h] [rbp-70h]
  __int128 v66; // [rsp+A8h] [rbp-60h]
  __int128 v67; // [rsp+B8h] [rbp-50h]
  __m128 v68; // [rsp+C8h] [rbp-40h]
  __m128 v69; // [rsp+D8h] [rbp-30h]
  __int128 v70; // [rsp+E8h] [rbp-20h]
  CWARPCallbackRenderer *v71; // [rsp+F8h] [rbp-10h]
  __int64 v72; // [rsp+100h] [rbp-8h]
  CDrawListBitmap *v73[2]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v74[2]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v75[4]; // [rsp+128h] [rbp+20h] BYREF
  char v76; // [rsp+12Ch] [rbp+24h] BYREF
  __int128 v77; // [rsp+1A8h] [rbp+A0h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+1C0h] [rbp+B8h] BYREF
  __int128 v79; // [rsp+1D8h] [rbp+D0h] BYREF
  __m128 v80; // [rsp+1E8h] [rbp+E0h] BYREF
  struct D2D_MATRIX_3X2_F v81; // [rsp+1F8h] [rbp+F0h] BYREF
  _OWORD v82[2]; // [rsp+210h] [rbp+108h] BYREF
  int v83; // [rsp+230h] [rbp+128h]
  _BYTE v84[32]; // [rsp+238h] [rbp+130h] BYREF
  _BYTE v85[48]; // [rsp+258h] [rbp+150h] BYREF

  ++dword_18026EE14;
  v1 = this;
  v2 = *((_QWORD *)this + 3);
  v71 = this;
  v3 = 0;
  v4 = *((_DWORD *)this + 10);
  v5 = *(_QWORD *)(v2 + 8);
  v72 = v5;
  while ( 1 )
  {
    v54 = v4;
    if ( v4 >= *((_DWORD *)v1 + 11) )
      break;
    ++dword_18026EE08;
    v6 = v82;
    v62 = 0;
    v65 = 0LL;
    v66 = 0LL;
    v61 = 0LL;
    v64 = 3840;
    LODWORD(v60) = 26;
    v63 = 0;
    v7 = *(_QWORD *)(v5 + 8LL * v4);
    v8 = (__m128)_mm_loadu_si128((const __m128i *)(v7 + 56));
    LODWORD(v67) = v8.m128_i32[0];
    DWORD1(v67) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
    DWORD2(v67) = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
    HIDWORD(v67) = _mm_shuffle_ps(v8, v8, 255).m128_u32[0];
    v79 = v67;
    *(_QWORD *)&v55 = *(_QWORD *)(v7 + 256);
    DWORD2(v55) = *(_DWORD *)(v7 + 268);
    LODWORD(v57) = *(_DWORD *)(v7 + 276);
    HIDWORD(v55) = *(_DWORD *)(v7 + 272);
    DWORD2(v57) = *(_DWORD *)(v7 + 304);
    DWORD1(v57) = *(_DWORD *)(v7 + 284);
    v9 = *(_DWORD *)(v7 + 308);
    v83 = *(_DWORD *)(v7 + 316);
    v61 = &v79;
    HIDWORD(v57) = v9;
    *((_QWORD *)&v65 + 1) = v82;
    v82[0] = v55;
    v82[1] = v57;
    v10 = (*(_DWORD *)(v7 + 76) & 3) << 6;
    v64 = v10 | 0xF00;
    if ( v10 && *(_DWORD *)(v7 + 72) != 50529027 )
    {
      v11 = *(_DWORD *)(v7 + 256);
      v12 = (__m128)*(unsigned int *)(v7 + 308);
      v13 = (D2DMatrixHelper *)*(unsigned int *)(v7 + 72);
      DWORD1(v77) = *(_DWORD *)(v7 + 260);
      HIDWORD(v77) = *(_DWORD *)(v7 + 276);
      v14 = (__m128)*(unsigned int *)(v7 + 304);
      LODWORD(v77) = v11;
      DWORD2(v77) = *(_DWORD *)(v7 + 272);
      *(_QWORD *)&v81.m[2][0] = _mm_unpacklo_ps(v14, v12).m128_u64[0];
      v15 = *(_OWORD *)(v7 + 56);
      *(_OWORD *)&v81.m11 = v77;
      v77 = v15;
      ApplyEdgeFlags((D2DMatrixHelper *)&v77, v13, &v81, (float *)&v79);
      v6 = 0LL;
      *((_QWORD *)&v65 + 1) = 0LL;
    }
    if ( !v6 )
    {
      v16 = *(_DWORD *)(v7 + 256);
      v17 = (__m128)*(unsigned int *)(v7 + 308);
      DWORD1(v77) = *(_DWORD *)(v7 + 260);
      HIDWORD(v77) = *(_DWORD *)(v7 + 276);
      v18 = (__m128)*(unsigned int *)(v7 + 304);
      LODWORD(v77) = v16;
      DWORD2(v77) = *(_DWORD *)(v7 + 272);
      *(_OWORD *)&matrix.m11 = v77;
      *(_QWORD *)&matrix.m[2][0] = _mm_unpacklo_ps(v18, v17).m128_u64[0];
      D2D1InvertMatrix(&matrix);
    }
    `vector constructor iterator'(
      (CInputSinkStruct::InputQueueInfo *)v75,
      64LL,
      2LL,
      (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))WarpTextureState::WarpTextureState);
    v19 = 0;
    v20 = *(float *)(v7 + 328);
    v21 = (__m128)LODWORD(v20);
    if ( *(_BYTE *)(v7 + 333) )
      v21.m128_f32[0] = v20 * *(float *)(v7 + 92);
    v22 = _mm_shuffle_ps(v21, v21, 0);
    if ( *(_QWORD *)(v7 + 96) )
    {
      v68 = v22;
      v73[0] = (CDrawListBitmap *)(v7 + 96);
      v19 = 1;
      v23 = v22;
    }
    else
    {
      v24 = *(float *)(v7 + 84) * v20;
      *(float *)&v25 = *(float *)(v7 + 88) * v20;
      *(float *)&v26 = *(float *)(v7 + 92) * v20;
      v69.m128_f32[0] = *(float *)_mm_loadu_si128((const __m128i *)(v7 + 80)).m128i_i32 * v20;
      v69.m128_f32[1] = v24;
      v69.m128_u64[1] = __PAIR64__(v26, v25);
      v23 = v69;
    }
    v80 = v23;
    if ( *(_QWORD *)(v7 + 176) )
    {
      v27 = v19++;
      v73[v27] = (CDrawListBitmap *)(v7 + 176);
    }
    v28 = 0;
    if ( v19 )
    {
      *(_QWORD *)&v77 = v84;
      v29 = v73;
      v59 = v73;
      v58 = v84;
      v30 = &v76;
      v31 = v85;
      v32 = v85;
      do
      {
        v33 = *v29;
        if ( *((_QWORD *)&v65 + 1) )
        {
          v36 = (__m128)*((unsigned int *)v33 + 10);
          dx_low = (__m128)*((unsigned int *)v33 + 11);
          v56 = *(_OWORD *)((char *)v33 + 24);
        }
        else
        {
          dx_low = (__m128)LODWORD(matrix.dx);
          v34 = (__m128)LODWORD(matrix.dx);
          *((float *)&v56 + 1) = (float)(matrix.m12 * *((float *)v33 + 9)) + (float)(matrix.m11 * *((float *)v33 + 7));
          *(float *)&v56 = (float)(matrix.m12 * *((float *)v33 + 8)) + (float)(matrix.m11 * *((float *)v33 + 6));
          *((float *)&v56 + 2) = (float)(matrix.m21 * *((float *)v33 + 6)) + (float)(matrix.m22 * *((float *)v33 + 8));
          *((float *)&v56 + 3) = (float)(matrix.m21 * *((float *)v33 + 7)) + (float)(matrix.m22 * *((float *)v33 + 9));
          dx_low.m128_f32[0] = (float)((float)(matrix.dx * *((float *)v33 + 7))
                                     + (float)(matrix.dy * *((float *)v33 + 9)))
                             + *((float *)v33 + 11);
          v34.m128_f32[0] = (float)((float)(matrix.dx * *((float *)v33 + 6)) + (float)(matrix.dy * *((float *)v33 + 8)))
                          + *((float *)v33 + 10);
          v36 = v34;
        }
        *(_DWORD *)v30 = 0;
        *(_OWORD *)v31 = v56;
        *((_DWORD *)v30 - 1) = v28;
        *((_QWORD *)v31 + 2) = _mm_unpacklo_ps(v36, dx_low).m128_u64[0];
        *(_QWORD *)(v30 + 4) = v32;
        *((_DWORD *)v30 + 12) = ExtendModeToWarpAddressMode((_DWORD *)v33 + 16);
        *((_DWORD *)v30 + 13) = ExtendModeToWarpAddressMode((_DWORD *)v33 + 17);
        v40 = 0;
        v41 = *((_DWORD *)v33 + 18);
        if ( v41 )
          v40 = v41 == 1;
        *((_DWORD *)v30 + 8) = 0;
        *((_DWORD *)v30 + 11) = v40;
        *((_DWORD *)v30 + 9) = v33 == v38;
        *((_DWORD *)v30 + 10) = v33 == v37;
        if ( v33 == v38 )
        {
          if ( CDrawListBitmap::IsOpaque(v33) )
          {
            v42 = 1;
            if ( v22.m128_f32[0] != 1.0 )
              v42 = 3;
            *((_DWORD *)v30 + 7) = v42;
          }
          else
          {
            *((_DWORD *)v30 + 7) = 2;
          }
          v39 = v59;
        }
        else if ( v33 == v37 )
        {
          *((_DWORD *)v30 + 7) = 4;
        }
        v43 = (_OWORD *)v77;
        if ( *((_BYTE *)v33 + 76) )
        {
          v44 = *((_OWORD *)v33 + 3);
          *(_QWORD *)(v30 + 20) = v58;
          v70 = v44;
          *v43 = v44;
        }
        v29 = v39 + 1;
        v58 += 16;
        ++v28;
        v59 = v29;
        v32 += 24;
        *(_QWORD *)&v77 = v43 + 1;
        v31 += 24;
        v30 += 64;
      }
      while ( v28 < v19 );
      v1 = v71;
      v4 = v54;
    }
    *(_QWORD *)&v65 = &v80;
    *(_QWORD *)&v66 = v75;
    v45 = BlendModeToWarpBlendMode(*(_DWORD *)(v7 + 324));
    v63 = v45;
    v46 = v64 & 0xFFFFFFC3 | (4 * (v19 | 0x3C0));
    v64 = v46;
    v47 = *(_DWORD *)(v7 + 324);
    if ( v47 == 4 || v47 == 6 || v47 == 17 || v47 == 20 )
      v48 = *(_BYTE *)(v7 + 332) == 0;
    else
      v48 = v47 == 22;
    if ( v48 )
      v64 = v46 & 0xFFFFF0FF | 0x700;
    if ( !*(_DWORD *)(v7 + 324) && (*(_BYTE *)(v7 + 44) & 1) != 0 )
    {
      if ( *(float *)(v7 + 328) >= 0.99999988 )
        v45 = 0;
      v63 = v45;
    }
    if ( v19 )
    {
      v49 = 0LL;
      v50 = v19;
      do
      {
        v74[v49] = CDrawListBitmap::GetShaderResourceView(v73[v49]);
        ++v49;
        --v50;
      }
      while ( v50 );
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *))(**(_QWORD **)(*((_QWORD *)v1 + 3) + 656LL) + 64LL))(
        *(_QWORD *)(*((_QWORD *)v1 + 3) + 656LL),
        0LL,
        v19,
        v74);
    }
    v51 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v1 + 4) + 24LL))(*((_QWORD *)v1 + 4), &v60);
    v3 = v51;
    if ( v51 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v51, 0x126u);
      break;
    }
    v5 = v72;
    ++v4;
  }
  v52 = (CCallbackRendererManager *)(*((_QWORD *)v1 + 3) + 8LL);
  *((_BYTE *)v1 + 68) = 0;
  CCallbackRendererManager::ReturnWARPCallbackRenderer(v52, (unsigned __int64)v1);
  return v3;
}
