/*
 * XREFs of ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusionContext@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x180170144
 * Callers:
 *     ?GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusionContext@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x180158718 (-GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusio.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x1800A8DCC (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@_N@Z @ 0x18013BC28 (-GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@_N@Z.c)
 */

void __fastcall CDirtyRegion::GetIntersectingRedrawRects(
        __int64 a1,
        float *a2,
        const struct CVisualTree *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // rsi
  unsigned int v8; // eax
  unsigned int v9; // r14d
  unsigned int v10; // ebx
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  unsigned int v19; // ecx
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // r15
  unsigned int v23; // r14d
  _QWORD **v24; // r12
  _QWORD *v25; // r13
  _QWORD *v26; // rbx
  unsigned int v27; // eax
  __m128i v28; // xmm3
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm4_4
  float v32; // xmm5_4
  float top; // xmm2_4
  float right; // xmm1_4
  float bottom; // xmm0_4
  unsigned int v36; // ecx
  unsigned int v37; // eax
  int v38; // eax
  unsigned int v39; // ebx
  float v40; // xmm3_4
  float v41; // xmm1_4
  float v42; // xmm2_4
  float v43; // xmm4_4
  float v44; // xmm0_4
  float v45; // xmm3_4
  float v46; // xmm3_4
  float v47; // xmm3_4
  unsigned int v48; // ecx
  unsigned int v49; // eax
  int v50; // eax
  unsigned int v51; // [rsp+30h] [rbp-48h]
  int v52; // [rsp+30h] [rbp-48h]
  struct D2D_RECT_F v57; // [rsp+58h] [rbp-20h] BYREF

  v7 = a1;
  *(_DWORD *)(a5 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a5, 0x10u);
  if ( *(_BYTE *)(v7 + 2880) )
  {
    v8 = *(_DWORD *)(v7 + 952);
    v9 = 0;
    if ( a4 )
    {
      if ( v8 )
      {
        v10 = v51;
        do
        {
          v11 = *a2;
          v12 = a2[1];
          v13 = a2[2];
          v14 = a2[3];
          v57.left = v11;
          v57.top = v12;
          v57.right = v13;
          v57.bottom = v14;
          v15 = *(float *)(v7 + 16LL * v9 + 988);
          if ( v15 <= v11 )
            v15 = v11;
          else
            v57.left = *(FLOAT *)(v7 + 16LL * v9 + 988);
          v16 = *(float *)(v7 + 16LL * v9 + 992);
          if ( v16 > v12 )
          {
            v57.top = *(FLOAT *)(v7 + 16LL * v9 + 992);
            v12 = v16;
          }
          v17 = *(float *)(v7 + 16LL * v9 + 996);
          if ( v13 > v17 )
          {
            v57.right = *(FLOAT *)(v7 + 16LL * v9 + 996);
            v13 = v17;
          }
          v18 = *(float *)(v7 + 16LL * v9 + 1000);
          if ( v14 > v18 )
          {
            v57.bottom = *(FLOAT *)(v7 + 16LL * v9 + 1000);
            v14 = v18;
          }
          if ( v13 <= v15 || v14 <= v12 )
          {
            v57.bottom = 0.0;
            v57.right = 0.0;
            v57.top = 0.0;
            v57.left = 0.0;
          }
          if ( !IsEmpty(&v57) )
          {
            v19 = *(_DWORD *)(a5 + 24);
            v20 = v19 + 1;
            if ( v19 + 1 >= v19 )
              v10 = v19 + 1;
            if ( v20 < v19 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20 < v19 ? 0x80070216 : 0, 0xB5u);
            }
            else if ( v10 > *(_DWORD *)(a5 + 20) )
            {
              v21 = DynArrayImpl<0>::AddMultipleAndSet(a5, 0x10u, 1, &v57);
              if ( v21 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xC0u);
            }
            else
            {
              *(struct D2D_RECT_F *)(*(_QWORD *)a5 + 16LL * v19) = v57;
              *(_DWORD *)(a5 + 24) = v10;
            }
          }
          v8 = *(_DWORD *)(v7 + 952);
          ++v9;
        }
        while ( v9 < v8 );
      }
      v22 = 0LL;
      v52 = 0;
      if ( v8 )
      {
        v23 = 0;
        do
        {
          v24 = (_QWORD **)(16LL * *(unsigned int *)(v7 + 4 * v22 + 956) + v7 + 280);
          v25 = *v24;
          if ( *v24 != v24 )
          {
            do
            {
              v26 = v25;
              v25 = (_QWORD *)*v25;
              v27 = CDirtyRegionAnnotation::GetZ((CVisual **)v26, a3);
              v28 = _mm_loadu_si128((const __m128i *)((char *)v26 + 28));
              v29 = *a2;
              v30 = a2[1];
              v31 = a2[2];
              v32 = a2[3];
              v57 = (struct D2D_RECT_F)v28;
              LODWORD(v57.left) = v28.m128i_i32[0];
              if ( v29 > *(float *)v28.m128i_i32 )
              {
                v57.left = v29;
                *(float *)v28.m128i_i32 = v29;
              }
              top = v57.top;
              if ( v30 > v57.top )
              {
                v57.top = v30;
                top = v30;
              }
              right = v57.right;
              if ( v57.right > v31 )
              {
                v57.right = v31;
                right = v31;
              }
              bottom = v57.bottom;
              if ( v57.bottom > v32 )
              {
                v57.bottom = v32;
                bottom = v32;
              }
              if ( right <= *(float *)v28.m128i_i32 || bottom <= top )
              {
                v57.bottom = 0.0;
                v57.right = 0.0;
                v57.top = 0.0;
                v57.left = 0.0;
              }
              if ( !COcclusionContext::IsOccluded(a4, &v57, 0LL, v27) )
              {
                v36 = *(_DWORD *)(a5 + 24);
                v37 = v36 + 1;
                if ( v36 + 1 >= v36 )
                  v23 = v36 + 1;
                if ( v37 < v36 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37 < v36 ? 0x80070216 : 0, 0xB5u);
                }
                else if ( v23 > *(_DWORD *)(a5 + 20) )
                {
                  v38 = DynArrayImpl<0>::AddMultipleAndSet(a5, 0x10u, 1, &v57);
                  if ( v38 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xC0u);
                }
                else
                {
                  *(struct D2D_RECT_F *)(*(_QWORD *)a5 + 16LL * v36) = v57;
                  *(_DWORD *)(a5 + 24) = v23;
                }
              }
            }
            while ( v25 != v24 );
            v7 = a1;
            LODWORD(v22) = v52;
          }
          v22 = (unsigned int)(v22 + 1);
          v52 = v22;
        }
        while ( (unsigned int)v22 < *(_DWORD *)(v7 + 952) );
      }
    }
    else if ( v8 )
    {
      v39 = v51;
      do
      {
        v40 = *a2;
        v41 = a2[1];
        v42 = a2[2];
        v43 = a2[3];
        v57.left = v40;
        v57.top = v41;
        v57.right = v42;
        v57.bottom = v43;
        v44 = *(float *)(v7 + 16LL * v9 + 824);
        if ( v44 <= v40 )
          v44 = v40;
        else
          v57.left = *(FLOAT *)(v7 + 16LL * v9 + 824);
        v45 = *(float *)(v7 + 16LL * v9 + 828);
        if ( v45 > v41 )
        {
          v57.top = *(FLOAT *)(v7 + 16LL * v9 + 828);
          v41 = v45;
        }
        v46 = *(float *)(v7 + 16LL * v9 + 832);
        if ( v42 > v46 )
        {
          v57.right = *(FLOAT *)(v7 + 16LL * v9 + 832);
          v42 = v46;
        }
        v47 = *(float *)(v7 + 16LL * v9 + 836);
        if ( v43 > v47 )
        {
          v57.bottom = *(FLOAT *)(v7 + 16LL * v9 + 836);
          v43 = v47;
        }
        if ( v42 <= v44 || v43 <= v41 )
        {
          v57.bottom = 0.0;
          v57.right = 0.0;
          v57.top = 0.0;
          v57.left = 0.0;
        }
        if ( !IsEmpty(&v57) )
        {
          v48 = *(_DWORD *)(a5 + 24);
          v49 = v48 + 1;
          if ( v48 + 1 >= v48 )
            v39 = v48 + 1;
          if ( v49 < v48 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49 < v48 ? 0x80070216 : 0, 0xB5u);
          }
          else if ( v39 > *(_DWORD *)(a5 + 20) )
          {
            v50 = DynArrayImpl<0>::AddMultipleAndSet(a5, 0x10u, 1, &v57);
            if ( v50 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0xC0u);
          }
          else
          {
            *(struct D2D_RECT_F *)(*(_QWORD *)a5 + 16LL * v48) = v57;
            *(_DWORD *)(a5 + 24) = v39;
          }
        }
        ++v9;
      }
      while ( v9 < *(_DWORD *)(v7 + 952) );
    }
  }
}
