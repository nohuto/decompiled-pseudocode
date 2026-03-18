/*
 * XREFs of ?Render@CWARPCallbackRenderer@@UEAAJXZ @ 0x1801BF410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ReturnWARPCallbackRenderer@CCallbackRendererManager@@QEAAXPEAVCWARPCallbackRenderer@@@Z @ 0x1801BB930 (-ReturnWARPCallbackRenderer@CCallbackRendererManager@@QEAAXPEAVCWARPCallbackRenderer@@@Z.c)
 *     ApplyEdgeFlags @ 0x1801BF1EC (ApplyEdgeFlags.c)
 *     ?BlendModeToWarpBlendMode@@YA?AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z @ 0x1801BF2A4 (-BlendModeToWarpBlendMode@@YA-AW4Enum@WarpBlendMode2@@W41BlendMode@@@Z.c)
 *     ?ExtendModeToWarpAddressMode@@YA?AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z @ 0x1801BF3E8 (-ExtendModeToWarpAddressMode@@YA-AW4Enum@WarpAddressMode@@AEBW4D2D1_EXTEND_MODE@@@Z.c)
 */

__int64 __fastcall CWARPCallbackRenderer::Render(CWARPCallbackRenderer *this)
{
  CWARPCallbackRenderer *v1; // r15
  unsigned int v2; // r13d
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rbx
  _OWORD *v6; // rcx
  __m128 v7; // xmm2
  unsigned int v8; // xmm1_4
  int v9; // xmm1_4
  int v10; // xmm0_4
  int v11; // xmm1_4
  int v12; // xmm0_4
  int v13; // xmm1_4
  D2DMatrixHelper *v14; // rdx
  int v15; // xmm0_4
  __m128 v16; // xmm2
  __m128 v17; // xmm1
  int v18; // xmm0_4
  __int128 v19; // xmm1
  int v20; // xmm0_4
  __m128 v21; // xmm3
  __m128 v22; // xmm1
  float v23; // xmm4_4
  unsigned int v24; // r14d
  __m128 v25; // xmm6
  __m128 v26; // xmm6
  __m128 v27; // xmm0
  float v28; // xmm2_4
  unsigned int v29; // xmm3_4
  unsigned int v30; // xmm1_4
  __int64 v31; // rax
  unsigned int v32; // r12d
  _QWORD **v33; // r11
  char *v34; // rsi
  _BYTE *v35; // r13
  _BYTE *v36; // r15
  _QWORD *v37; // rdi
  float v38; // xmm2_4
  float v39; // xmm0_4
  __m128 dx_low; // xmm4
  float v41; // xmm1_4
  float v42; // xmm3_4
  __m128 v43; // xmm2
  float v44; // xmm1_4
  __int128 v45; // xmm0
  unsigned __int64 v46; // xmm1_8
  _QWORD *v47; // r9
  _QWORD *v48; // r10
  _QWORD *v49; // r11
  int v50; // edx
  BOOL v51; // ecx
  int v52; // eax
  _OWORD *v53; // rax
  _BYTE *v54; // rcx
  __int128 v55; // xmm0
  int v56; // eax
  __int64 v57; // r8
  unsigned int v58; // edx
  int v59; // ecx
  bool v60; // zf
  unsigned int v61; // edi
  _QWORD **v62; // rsi
  _QWORD *v63; // rax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  CCallbackRendererManager *v67; // rcx
  int v69; // [rsp+38h] [rbp-D0h]
  __int64 v70; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE *v71; // [rsp+48h] [rbp-C0h]
  _QWORD *v72; // [rsp+50h] [rbp-B8h]
  _BYTE *v73; // [rsp+58h] [rbp-B0h]
  __int128 v74; // [rsp+60h] [rbp-A8h]
  __int128 v75; // [rsp+70h] [rbp-98h]
  int v76; // [rsp+80h] [rbp-88h]
  int v77; // [rsp+88h] [rbp-80h] BYREF
  __int128 *v78; // [rsp+90h] [rbp-78h]
  int v79; // [rsp+98h] [rbp-70h]
  int v80; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v81; // [rsp+A0h] [rbp-68h]
  __int128 v82; // [rsp+A8h] [rbp-60h]
  __int128 v83; // [rsp+B8h] [rbp-50h]
  __int128 v84; // [rsp+C8h] [rbp-40h]
  __m128 v85; // [rsp+D8h] [rbp-30h]
  __m128 v86; // [rsp+E8h] [rbp-20h]
  CWARPCallbackRenderer *v87; // [rsp+F8h] [rbp-10h]
  __int64 v88; // [rsp+100h] [rbp-8h]
  _QWORD v89[2]; // [rsp+108h] [rbp+0h] BYREF
  __int128 v90; // [rsp+118h] [rbp+10h]
  __int128 v91; // [rsp+130h] [rbp+28h]
  unsigned __int64 v92; // [rsp+140h] [rbp+38h]
  __int128 v93; // [rsp+150h] [rbp+48h]
  __int128 v94; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v95[2]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v96[4]; // [rsp+188h] [rbp+80h] BYREF
  char v97; // [rsp+18Ch] [rbp+84h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+208h] [rbp+100h] BYREF
  __int128 v99; // [rsp+220h] [rbp+118h]
  __int128 v100; // [rsp+238h] [rbp+130h] BYREF
  __m128 v101; // [rsp+248h] [rbp+140h] BYREF
  struct D2D_MATRIX_3X2_F v102; // [rsp+258h] [rbp+150h] BYREF
  _OWORD v103[2]; // [rsp+270h] [rbp+168h] BYREF
  int v104; // [rsp+290h] [rbp+188h]
  _BYTE v105[32]; // [rsp+298h] [rbp+190h] BYREF
  _BYTE v106[48]; // [rsp+2B8h] [rbp+1B0h] BYREF

  v1 = this;
  v87 = this;
  _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 7, 1u);
  v2 = *((_DWORD *)this + 10);
  v3 = 0;
  v69 = v2;
  v4 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL);
  v88 = v4;
  if ( v2 < *((_DWORD *)this + 11) )
  {
    while ( 1 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 8, 1u);
      v79 = 0;
      v82 = 0LL;
      v83 = 0LL;
      v78 = 0LL;
      v81 = 3840;
      v77 = 26;
      v80 = 0;
      v5 = *(_QWORD *)(v4 + 8LL * v2);
      v6 = v103;
      v7 = (__m128)_mm_loadu_si128((const __m128i *)(v5 + 56));
      LODWORD(v84) = v7.m128_i32[0];
      DWORD1(v84) = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
      DWORD2(v84) = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
      HIDWORD(v84) = _mm_shuffle_ps(v7, v7, 255).m128_u32[0];
      v100 = v84;
      v8 = *(_DWORD *)(v5 + 244);
      LODWORD(v74) = *(_DWORD *)(v5 + 240);
      *(_QWORD *)((char *)&v74 + 4) = __PAIR64__(*(_DWORD *)(v5 + 252), v8);
      v9 = *(_DWORD *)(v5 + 256);
      LODWORD(v75) = *(_DWORD *)(v5 + 260);
      v10 = *(_DWORD *)(v5 + 288);
      HIDWORD(v74) = v9;
      v11 = *(_DWORD *)(v5 + 268);
      DWORD2(v75) = v10;
      v12 = *(_DWORD *)(v5 + 300);
      DWORD1(v75) = v11;
      v13 = *(_DWORD *)(v5 + 292);
      v76 = v12;
      v104 = v12;
      v78 = &v100;
      HIDWORD(v75) = v13;
      *((_QWORD *)&v82 + 1) = v103;
      v103[0] = v74;
      v103[1] = v75;
      v81 = (*(_DWORD *)(v5 + 92) & 3 | 0x3C) << 6;
      if ( (v81 & 0xC0) != 0 )
      {
        v14 = (D2DMatrixHelper *)*(unsigned int *)(v5 + 88);
        if ( (_DWORD)v14 != 50529027 )
        {
          v15 = *(_DWORD *)(v5 + 240);
          v16 = (__m128)*(unsigned int *)(v5 + 292);
          DWORD1(v99) = *(_DWORD *)(v5 + 244);
          HIDWORD(v99) = *(_DWORD *)(v5 + 260);
          v17 = (__m128)*(unsigned int *)(v5 + 288);
          LODWORD(v99) = v15;
          v18 = *(_DWORD *)(v5 + 256);
          *(_QWORD *)&v102.m[2][0] = _mm_unpacklo_ps(v17, v16).m128_u64[0];
          v19 = *(_OWORD *)(v5 + 56);
          DWORD2(v99) = v18;
          v94 = v19;
          *(_OWORD *)&v102.m11 = v99;
          ApplyEdgeFlags((D2DMatrixHelper *)&v94, v14, &v102, (float *)&v100);
          v6 = 0LL;
          *((_QWORD *)&v82 + 1) = 0LL;
        }
      }
      if ( !v6 )
      {
        v20 = *(_DWORD *)(v5 + 240);
        v21 = (__m128)*(unsigned int *)(v5 + 292);
        DWORD1(v99) = *(_DWORD *)(v5 + 244);
        HIDWORD(v99) = *(_DWORD *)(v5 + 260);
        v22 = (__m128)*(unsigned int *)(v5 + 288);
        LODWORD(v99) = v20;
        DWORD2(v99) = *(_DWORD *)(v5 + 256);
        *(_OWORD *)&matrix.m11 = v99;
        *(_QWORD *)&matrix.m[2][0] = _mm_unpacklo_ps(v22, v21).m128_u64[0];
        D2D1InvertMatrix(&matrix);
      }
      `vector constructor iterator'(
        (CInputSinkStruct::InputQueueInfo *)v96,
        64LL,
        2LL,
        (void (__fastcall *)(CInputSinkStruct::InputQueueInfo *))WarpTextureState::WarpTextureState);
      v23 = *(float *)(v5 + 312);
      v24 = 0;
      v25 = (__m128)LODWORD(v23);
      if ( *(_BYTE *)(v5 + 385) )
        v25.m128_f32[0] = v23 * *(float *)(v5 + 108);
      v26 = _mm_shuffle_ps(v25, v25, 0);
      if ( *(_QWORD *)(v5 + 112) )
      {
        v85 = v26;
        v89[0] = v5 + 112;
        v24 = 1;
        v27 = v26;
      }
      else
      {
        v28 = *(float *)(v5 + 100) * v23;
        *(float *)&v29 = *(float *)(v5 + 104) * v23;
        *(float *)&v30 = *(float *)(v5 + 108) * v23;
        v86.m128_f32[0] = *(float *)_mm_loadu_si128((const __m128i *)(v5 + 96)).m128i_i32 * v23;
        v86.m128_f32[1] = v28;
        v86.m128_u64[1] = __PAIR64__(v30, v29);
        v27 = v86;
      }
      v101 = v27;
      if ( *(_QWORD *)(v5 + 176) )
      {
        v31 = v24++;
        v89[v31] = v5 + 176;
      }
      v32 = 0;
      if ( v24 )
      {
        v73 = v105;
        v33 = (_QWORD **)v89;
        v72 = v89;
        v71 = v105;
        v34 = &v97;
        v35 = v106;
        v36 = v106;
        do
        {
          v37 = *v33;
          if ( *((_QWORD *)&v82 + 1) )
          {
            v45 = *(_OWORD *)(v37 + 1);
            v46 = _mm_unpacklo_ps((__m128)*((unsigned int *)v37 + 6), (__m128)*((unsigned int *)v37 + 7)).m128_u64[0];
            v91 = v45;
            v92 = v46;
          }
          else
          {
            v38 = matrix.m12 * *((float *)v37 + 5);
            v39 = *((float *)v37 + 3) * matrix.m11;
            dx_low = (__m128)LODWORD(matrix.dx);
            *(float *)&v93 = (float)(matrix.m12 * *((float *)v37 + 4)) + (float)(*((float *)v37 + 2) * matrix.m11);
            v41 = matrix.m21 * *((float *)v37 + 2);
            v42 = matrix.m21 * *((float *)v37 + 3);
            *((float *)&v93 + 1) = v38 + v39;
            v43 = (__m128)LODWORD(matrix.dx);
            v43.m128_f32[0] = matrix.dx * *((float *)v37 + 2);
            dx_low.m128_f32[0] = matrix.dx * *((float *)v37 + 3);
            v44 = v41 + (float)(matrix.m22 * *((float *)v37 + 4));
            *((float *)&v93 + 3) = v42 + (float)(matrix.m22 * *((float *)v37 + 5));
            *((float *)&v93 + 2) = v44;
            v45 = v93;
            dx_low.m128_f32[0] = (float)(dx_low.m128_f32[0] + (float)(matrix.dy * *((float *)v37 + 5)))
                               + *((float *)v37 + 7);
            v43.m128_f32[0] = (float)(v43.m128_f32[0] + (float)(matrix.dy * *((float *)v37 + 4))) + *((float *)v37 + 6);
            v46 = _mm_unpacklo_ps(v43, dx_low).m128_u64[0];
          }
          *(_OWORD *)v35 = v45;
          *((_DWORD *)v34 - 1) = v32;
          *((_QWORD *)v35 + 2) = v46;
          *(_DWORD *)v34 = 0;
          *(_QWORD *)(v34 + 4) = v36;
          *((_DWORD *)v34 + 12) = ExtendModeToWarpAddressMode((_DWORD *)v37 + 12);
          *((_DWORD *)v34 + 13) = ExtendModeToWarpAddressMode((_DWORD *)v37 + 13);
          v50 = *((_DWORD *)v37 + 14);
          v51 = 0;
          if ( v50 )
            v51 = v50 == 1;
          *((_DWORD *)v34 + 11) = v51;
          *((_DWORD *)v34 + 8) = 0;
          *((_DWORD *)v34 + 9) = v37 == v48;
          *((_DWORD *)v34 + 10) = v37 == v47;
          if ( v37 == v48 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v37 + 96LL))(*v37) )
            {
              v52 = 1;
              if ( v26.m128_f32[0] != 1.0 )
                v52 = 3;
              *((_DWORD *)v34 + 7) = v52;
            }
            else
            {
              *((_DWORD *)v34 + 7) = 2;
            }
            v49 = v72;
          }
          else if ( v37 == v47 )
          {
            *((_DWORD *)v34 + 7) = 4;
          }
          v53 = v73;
          v54 = v71;
          if ( *((_BYTE *)v37 + 60) )
          {
            v55 = *((_OWORD *)v37 + 2);
            *(_QWORD *)(v34 + 20) = v71;
            v90 = v55;
            *v53 = v55;
          }
          v33 = (_QWORD **)(v49 + 1);
          v71 = v54 + 16;
          ++v32;
          v72 = v33;
          v36 += 24;
          v73 = v53 + 1;
          v35 += 24;
          v34 += 64;
        }
        while ( v32 < v24 );
        v1 = v87;
        v2 = v69;
      }
      *(_QWORD *)&v82 = &v101;
      *(_QWORD *)&v83 = v96;
      v56 = BlendModeToWarpBlendMode(*(_DWORD *)(v5 + 308));
      v80 = v56;
      v58 = v81 & 0xFFFFFFC3 | (4 * (v24 & 0xF | 0x3C0));
      v81 = v58;
      v59 = *(_DWORD *)(v5 + 308);
      if ( v59 == 4 || v59 == 6 || v59 == 17 || v59 == 20 )
        v60 = *(_BYTE *)(v5 + 384) == (unsigned __int8)v57;
      else
        v60 = v59 == 22;
      if ( v60 )
        v81 = v58 & 0xFFFFF0FF | 0x700;
      if ( *(_DWORD *)(v5 + 308) == (_DWORD)v57 && (*(_BYTE *)(v5 + 44) & 1) != 0 )
      {
        if ( *(float *)(v5 + 312) >= 0.99999988 )
          v56 = v57;
        v80 = v56;
      }
      if ( v24 )
        break;
LABEL_54:
      v66 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 4) + 24LL))(*((_QWORD *)v1 + 4), &v77);
      v3 = v66;
      if ( v66 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v66, 0x129u);
        goto LABEL_61;
      }
      v69 = ++v2;
      if ( v2 >= *((_DWORD *)v1 + 11) )
        goto LABEL_61;
      v4 = v88;
    }
    v61 = v57;
    v62 = (_QWORD **)v89;
    while ( 1 )
    {
      v63 = *v62;
      v70 = v57;
      v64 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v63 + 72LL))(*v63, &v70);
      v3 = v64;
      if ( v64 < 0 )
        break;
      v65 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v70 + 120LL))(
              v70,
              (__int64)v1 + 48,
              &v95[v61]);
      v3 = v65;
      if ( v65 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v65, 0x123u);
        goto LABEL_59;
      }
      Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v70);
      ++v61;
      ++v62;
      if ( v61 >= v24 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *))(**(_QWORD **)(*((_QWORD *)v1 + 3) + 648LL) + 64LL))(
          *(_QWORD *)(*((_QWORD *)v1 + 3) + 648LL),
          0LL,
          v24,
          v95);
        goto LABEL_54;
      }
      v57 = 0LL;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v64, 0x121u);
LABEL_59:
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v70);
  }
LABEL_61:
  v67 = (CCallbackRendererManager *)(*((_QWORD *)v1 + 3) + 8LL);
  *((_BYTE *)v1 + 68) = 0;
  CCallbackRendererManager::ReturnWARPCallbackRenderer(v67, (unsigned __int64)v1);
  return v3;
}
