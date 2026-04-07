/*
 * XREFs of ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x18009C0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z @ 0x18000BC84 (--$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18000C1A0 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180015830 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::ValidateVisual(struct CResource **this)
{
  int v2; // eax
  unsigned int v3; // edi
  char v4; // cl
  struct CResource *v5; // r15
  struct CResource *v6; // rdx
  unsigned int v7; // r14d
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  struct CResource *v11; // rdx
  int v12; // ecx
  __m128i v13; // xmm4
  int v14; // r14d
  double v15; // xmm4_8
  int v16; // r12d
  unsigned __int64 v17; // r8
  __m128i v18; // xmm0
  double v19; // xmm0_8
  __m128i v20; // xmm2
  int v21; // eax
  double v22; // xmm2_8
  double v23; // xmm4_8
  int v24; // r14d
  float v25; // xmm3_4
  double v26; // xmm1_8
  int v27; // eax
  int RectangleGeometry; // eax
  int v30[4]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v31; // [rsp+40h] [rbp-30h] BYREF
  __int128 v32; // [rsp+50h] [rbp-20h] BYREF

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
        v5 = this[36];
        if ( v5 )
        {
          v6 = this[39];
          if ( v6 )
          {
            v7 = *((_DWORD *)this + 30);
            *((_QWORD *)&v31 + 1) = __PAIR64__(*((_DWORD *)this + 31), v7);
            *(_QWORD *)&v31 = 0LL;
            *(_OWORD *)v30 = v31;
            v32 = 0uLL;
            if ( v4 )
            {
              v8 = 0;
              LODWORD(v32) = -*((_DWORD *)this + 28);
              DWORD1(v32) = -*((_DWORD *)this + 29);
              if ( *((_DWORD *)v6 + 49) - *((_DWORD *)v6 + 47) >= 0 )
                v8 = *((_DWORD *)v6 + 49) - *((_DWORD *)v6 + 47);
              v9 = *((_DWORD *)v6 + 50) - *((_DWORD *)v6 + 48);
              DWORD2(v32) = v8;
              v10 = 0;
              if ( v9 >= 0 )
                v10 = v9;
              HIDWORD(v32) = v10;
              IntersectRectT<MilPointAndSizeL>(v30, (int *)&v32, (int *)&v31);
            }
            v11 = this[38];
            v12 = *((_DWORD *)this + 82) - *((_DWORD *)this + 80);
            v13 = _mm_cvtsi32_si128(v7);
            v14 = *((_DWORD *)this + 85);
            *(_QWORD *)&v15 = *(_OWORD *)&_mm_cvtepi32_pd(v13);
            v17 = _mm_srli_si128(*(__m128i *)((char *)v11 + 40), 8).m128i_u64[0];
            v18 = _mm_cvtsi32_si128(*((_DWORD *)v11 + 14));
            v32 = *(_OWORD *)((char *)v11 + 40);
            v16 = v32;
            *(_QWORD *)&v19 = *(_OWORD *)&_mm_cvtepi32_pd(v18);
            v20 = _mm_cvtsi32_si128((int)v17 - (int)v32);
            v21 = 0;
            if ( v12 >= 0 )
              v21 = v12;
            v22 = _mm_cvtepi32_pd(v20).m128d_f64[0];
            v23 = v15 * v22 / ((double)v21 * v19);
            v24 = v14 & 0x100000;
            if ( v24 && !*((_BYTE *)this + 338) )
            {
              *(_QWORD *)&v31 = v32;
              DWORD2(v31) = (int)(v22 / v23);
              HIDWORD(v31) = (int)((double)(HIDWORD(v17) - DWORD1(v32)) / v23);
              IntersectRectT<MilPointAndSizeL>(v30, (int *)&v31, v30);
            }
            if ( !v24 || !*((_BYTE *)this + 338) )
            {
              v25 = (double)v30[0] / v23 + (double)(*((_DWORD *)this + 80) - v16);
              v26 = (double)(*((_DWORD *)this + 81) - DWORD1(v32));
              *(float *)&v31 = v25;
              *((float *)&v31 + 1) = v26 + (double)v30[1] / v23;
              *(float *)&v26 = (double)v30[2] / v23;
              *((float *)&v31 + 2) = *(float *)&v26 + v25;
              *((float *)&v31 + 3) = (float)((double)v30[3] / v23) + *((float *)&v31 + 1);
              v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**((_QWORD **)v5 + 2) + 304LL))(
                      *((_QWORD *)v5 + 2),
                      *((unsigned int *)v5 + 6),
                      &v31);
              v3 = v27;
              if ( v27 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x1C3u);
                return v3;
              }
              RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                                    (unsigned int)v30[0],
                                    (unsigned int)v30[1],
                                    (unsigned int)v30[2],
                                    (unsigned int)v30[3],
                                    this + 35);
              v3 = RectangleGeometry;
              if ( RectangleGeometry < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectangleGeometry, 0x1C5u);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x18Eu);
  }
  return v3;
}
