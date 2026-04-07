/*
 * XREFs of ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x18009DFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18001EC70 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18003CCD8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z @ 0x1800A22E0 (--$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::ValidateVisual(struct CResource **this)
{
  int v2; // eax
  unsigned int v3; // edi
  char v4; // al
  struct CResource *v5; // rdx
  unsigned int v6; // r13d
  int v7; // r12d
  int v8; // esi
  int v9; // r14d
  int v10; // r15d
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  struct CResource *v14; // rdx
  int v15; // ecx
  __m128i v16; // xmm4
  __m128i v17; // xmm1
  int v18; // r13d
  double v19; // xmm4_8
  __int64 v20; // r9
  unsigned __int64 v21; // r8
  __m128i v22; // xmm0
  double v23; // xmm0_8
  __m128i v24; // xmm2
  int v25; // eax
  double v26; // xmm2_8
  double v27; // xmm4_8
  int v28; // r13d
  struct CResource *v29; // rdx
  float v30; // xmm3_4
  double v31; // xmm1_8
  int v32; // eax
  int RectangleGeometry; // eax
  __int64 v35; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v36; // [rsp+38h] [rbp-48h]
  int v37; // [rsp+3Ch] [rbp-44h]
  __int64 v38; // [rsp+40h] [rbp-40h] BYREF
  __int64 v39; // [rsp+48h] [rbp-38h]
  __int64 v40; // [rsp+50h] [rbp-30h] BYREF
  float v41; // [rsp+58h] [rbp-28h]
  float v42; // [rsp+5Ch] [rbp-24h]
  __m128i v43; // [rsp+60h] [rbp-20h]

  v2 = CRenderDataVisual::ValidateVisual((CRenderDataVisual *)this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( ((_DWORD)this[10] & 0x1000) != 0 )
    {
      if ( *((_BYTE *)this + 337) || (v4 = 1, (*((_DWORD *)this + 85) & 0x100000) != 0) )
        v4 = 0;
      if ( this[35] )
      {
        if ( this[36] )
        {
          v5 = this[39];
          if ( v5 )
          {
            v6 = *((_DWORD *)this + 30);
            v7 = v6;
            v8 = *((_DWORD *)this + 31);
            v9 = 0;
            v41 = *(float *)&v6;
            v10 = 0;
            v42 = *(float *)&v8;
            v36 = v6;
            v37 = v8;
            v40 = 0LL;
            v38 = 0LL;
            v39 = 0LL;
            v35 = 0LL;
            if ( v4 )
            {
              v11 = 0;
              LODWORD(v38) = -*((_DWORD *)this + 28);
              HIDWORD(v38) = -*((_DWORD *)this + 29);
              if ( *((_DWORD *)v5 + 49) - *((_DWORD *)v5 + 47) >= 0 )
                v11 = *((_DWORD *)v5 + 49) - *((_DWORD *)v5 + 47);
              v12 = *((_DWORD *)v5 + 50) - *((_DWORD *)v5 + 48);
              LODWORD(v39) = v11;
              v13 = 0;
              if ( v12 >= 0 )
                v13 = v12;
              HIDWORD(v39) = v13;
              IntersectRectT<MilPointAndSizeL>(&v35, &v38, &v40);
              v8 = v37;
              v7 = v36;
              v10 = HIDWORD(v35);
              v9 = v35;
            }
            v14 = this[38];
            v15 = *((_DWORD *)this + 82) - *((_DWORD *)this + 80);
            v16 = _mm_cvtsi32_si128(v6);
            v17 = *(__m128i *)((char *)v14 + 40);
            v18 = *((_DWORD *)this + 85);
            *(_QWORD *)&v19 = *(_OWORD *)&_mm_cvtepi32_pd(v16);
            v20 = *((_QWORD *)v14 + 5);
            v21 = _mm_srli_si128(v17, 8).m128i_u64[0];
            v38 = v20;
            v22 = _mm_cvtsi32_si128(*((_DWORD *)v14 + 14));
            v43 = v17;
            *(_QWORD *)&v23 = *(_OWORD *)&_mm_cvtepi32_pd(v22);
            v24 = _mm_cvtsi32_si128((int)v21 - (int)v20);
            v25 = 0;
            if ( v15 >= 0 )
              v25 = v15;
            v26 = _mm_cvtepi32_pd(v24).m128d_f64[0];
            v27 = v19 * v26 / ((double)v25 * v23);
            v28 = v18 & 0x100000;
            if ( v28 && !*((_BYTE *)this + 338) )
            {
              v40 = v20;
              LODWORD(v41) = (int)(v26 / v27);
              LODWORD(v42) = (int)((double)(HIDWORD(v21) - HIDWORD(v20)) / v27);
              IntersectRectT<MilPointAndSizeL>(&v35, &v40, &v35);
              LODWORD(v20) = v38;
              v8 = v37;
              v7 = v36;
              v10 = HIDWORD(v35);
              v9 = v35;
            }
            if ( !v28 || !*((_BYTE *)this + 338) )
            {
              v29 = this[36];
              v30 = (double)(*((_DWORD *)this + 80) - (int)v20) + (double)v9 / v27;
              v31 = (double)(*((_DWORD *)this + 81) - v43.m128i_i32[1]);
              *(float *)&v40 = v30;
              *((float *)&v40 + 1) = v31 + (double)v10 / v27;
              *(float *)&v31 = (double)v7 / v27;
              v41 = *(float *)&v31 + v30;
              v42 = (float)((double)v8 / v27) + *((float *)&v40 + 1);
              v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)v29 + 2) + 304LL))(
                      *((_QWORD *)v29 + 2),
                      *((unsigned int *)v29 + 6),
                      &v40);
              v3 = v32;
              if ( v32 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v32, 0x1C3u);
                return v3;
              }
              RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                                    (unsigned int)v9,
                                    (unsigned int)v10,
                                    (unsigned int)v7,
                                    (unsigned int)v8,
                                    this + 35);
              v3 = RectangleGeometry;
              if ( RectangleGeometry < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, RectangleGeometry, 0x1C5u);
                return v3;
              }
              *((_BYTE *)this + 338) = 1;
            }
          }
        }
      }
      *((_DWORD *)this + 20) &= ~0x1000u;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x18Eu);
  }
  return v3;
}
