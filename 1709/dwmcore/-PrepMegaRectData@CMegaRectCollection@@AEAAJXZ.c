/*
 * XREFs of ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x180034960
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?_Reserve@?$vector@EV?$allocator@E@std@@@std@@IEAAX_K@Z @ 0x180006374 (-_Reserve@-$vector@EV-$allocator@E@std@@@std@@IEAAX_K@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@IEAAXXZ @ 0x180006454 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@IEAAXXZ.c)
 *     ReorderAxisAlignedRectVertices @ 0x180032C50 (ReorderAxisAlignedRectVertices.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180061360 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CMegaRectCollection::PrepMegaRectData(CMegaRectCollection *this)
{
  __int64 v1; // r12
  unsigned int v2; // r13d
  _QWORD *v3; // rdx
  __int64 v4; // rax
  float *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rdi
  int v9; // r14d
  unsigned __int64 v10; // rbx
  float *v11; // rax
  SIZE_T v12; // r8
  LPVOID v13; // rbx
  int v14; // r9d
  void *v15; // r8
  unsigned __int64 i; // rdx
  float v17; // xmm1_4
  int v18; // edx
  float *v19; // rdi
  int v20; // ebx
  __m128 v21; // xmm3
  __m128 v22; // xmm3
  __m128 v23; // xmm3
  __m128 v24; // xmm3
  __m128 v25; // xmm2
  char *v26; // rax
  _QWORD *v27; // rbx
  _DWORD *v28; // rax
  _QWORD *v29; // rdi
  _DWORD **v30; // rax
  __int32 v31; // r8d
  __int32 v32; // r9d
  __int32 v33; // r10d
  __int32 v34; // r11d
  _DWORD *v35; // rdx
  float *v37; // rbx
  void *Src[2]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v39; // [rsp+48h] [rbp-59h]
  _QWORD *v40; // [rsp+50h] [rbp-51h]
  __int64 v41; // [rsp+58h] [rbp-49h]
  float *v42; // [rsp+60h] [rbp-41h] BYREF
  int v43; // [rsp+68h] [rbp-39h]
  int v44; // [rsp+6Ch] [rbp-35h]
  float *v45; // [rsp+70h] [rbp-31h] BYREF
  int v46; // [rsp+78h] [rbp-29h]
  int v47; // [rsp+7Ch] [rbp-25h]
  float *v48; // [rsp+80h] [rbp-21h] BYREF
  int v49; // [rsp+88h] [rbp-19h]
  int v50; // [rsp+8Ch] [rbp-15h]
  __m128 v51; // [rsp+90h] [rbp-11h]

  v1 = *((_QWORD *)this + 3);
  v2 = 0;
  v3 = *(_QWORD **)this;
  v4 = v1 + *((_QWORD *)this + 4);
  *(_OWORD *)Src = 0LL;
  v5 = 0LL;
  v41 = v4;
  v39 = 0LL;
  v40 = v3;
  while ( 2 )
  {
    if ( v1 != v4 )
    {
      if ( v3 )
        v6 = *v3;
      else
        v6 = 0LL;
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8 * (v1 & (*(_QWORD *)(v6 + 16) - 1LL)));
      v8 = *(_QWORD *)(*(_QWORD *)v7 + 56LL);
      v9 = 8 * *(_DWORD *)(v7 + 24) + 16;
      v10 = (unsigned int)(4 * v9);
      if ( (char *)Src[1] - (char *)v5 < v10 )
      {
        std::vector<unsigned char>::_Reserve((__int64)Src, v10 + (char *)v5 - (char *)Src[1]);
        v5 = (float *)Src[0];
        memset_0(Src[1], 0, v10 + (char *)Src[0] - (char *)Src[1]);
        v11 = (float *)((char *)v5 + v10);
        Src[1] = (char *)v5 + v10;
      }
      else if ( (char *)Src[1] - (char *)v5 > v10 )
      {
        v37 = (float *)((char *)v5 + v10);
        if ( v37 == v5 )
        {
          v11 = v5;
          Src[1] = v5;
        }
        else
        {
          v11 = (float *)Src[1];
          if ( v37 != Src[1] )
          {
            memmove(v37, Src[1], 0LL);
            v11 = v37;
            Src[1] = v37;
          }
        }
      }
      else
      {
        v11 = (float *)Src[1];
      }
      v42 = v5;
      v43 = v9;
      v44 = 4;
      v12 = (char *)v11 - (char *)v5;
      if ( v11 == v5 )
        v12 = 1LL;
      v13 = HeapAlloc(WPF::g_processHeap, 0, v12);
      v15 = *(void **)(v7 + 16);
      if ( v13 != v15 )
      {
        if ( v15 )
          HeapFree(WPF::g_processHeap, 0, v15);
        *(_QWORD *)(v7 + 16) = v13;
      }
      if ( !*(_QWORD *)(v7 + 16) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xE9u);
LABEL_50:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1F2u);
        v2 = -2147024882;
        break;
      }
      TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(v8, *(_DWORD *)v7 + 72, (_DWORD)v15, v14, (__int64)&v42);
      for ( i = 0LL; i < 4; ++i )
      {
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)((char *)v5 + v9 * (int)i)) & _xmm) > 8388608.0
          || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)((char *)v5 + v9 * (int)i + 4)) & _xmm) > 8388608.0 )
        {
          goto LABEL_34;
        }
      }
      v17 = *(float *)((char *)v5 + v9);
      if ( *v5 == v17 )
      {
        if ( *(float *)((char *)v5 + v9 + 4) == *(float *)((char *)v5 + 3 * v9 + 4)
          && *(float *)((char *)v5 + 3 * v9) == *(float *)((char *)v5 + 2 * v9)
          && *(float *)((char *)v5 + 2 * v9 + 4) == v5[1] )
        {
LABEL_24:
          v18 = *(_DWORD *)(v7 + 24);
          v45 = *(float **)(v7 + 16);
          v19 = v45;
          v47 = 4;
          v20 = 8 * v18 + 16;
          v48 = v5;
          v46 = v20;
          v49 = v9;
          v50 = 4;
          ReorderAxisAlignedRectVertices(&v48, v18, (__int64)&v45);
          v21 = _mm_shuffle_ps((__m128)*(unsigned int *)v19, (__m128)*(unsigned int *)v19, 225);
          v21.m128_f32[0] = v19[1];
          v22 = _mm_shuffle_ps(v21, v21, 198);
          v22.m128_f32[0] = *(float *)((char *)v19 + 3 * v20);
          v23 = _mm_shuffle_ps(v22, v22, 39);
          v23.m128_f32[0] = *(float *)((char *)v19 + 3 * v20 + 4);
          v24 = _mm_mul_ps(_mm_add_ps(_mm_shuffle_ps(v23, v23, 57), g_halfFixedPointForRounding), (__m128)_xmm);
          v25 = _mm_cmplt_ps(DirectX::g_XMMaxInt, v24);
          v51 = _mm_or_ps(_mm_and_ps(v25, DirectX::g_XMAbsMask), _mm_andnot_ps(v25, (__m128)_mm_cvttps_epi32(v24)));
          v26 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
          v27 = v26;
          if ( v26 )
          {
            v28 = v26 + 8;
            *v27 = v28;
            *v28 = 0;
          }
          else
          {
            v27 = 0LL;
          }
          v29 = *(_QWORD **)(v7 + 8);
          if ( v27 != v29 )
          {
            if ( v29 )
            {
              FastRegion::CRegion::FreeMemory(*(FastRegion::CRegion **)(v7 + 8));
              WPF::ProcessHeapImpl::Free(v29);
            }
            *(_QWORD *)(v7 + 8) = v27;
          }
          v30 = *(_DWORD ***)(v7 + 8);
          if ( v30 )
          {
            v31 = v51.m128_i32[0];
            v32 = v51.m128_i32[2];
            if ( v51.m128_i32[0] >= v51.m128_i32[2]
              || (v33 = v51.m128_i32[1], v34 = v51.m128_i32[3], v51.m128_i32[1] >= v51.m128_i32[3]) )
            {
              **v30 = 0;
            }
            else
            {
              v35 = *v30;
              *v35 = 2;
              v35[1] = v31;
              v35[2] = v32;
              v35[3] = v33;
              v35[4] = 16;
              v35[7] = v31;
              v35[8] = v32;
              v35[5] = v34;
              v35[6] = 16;
            }
            goto LABEL_34;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x10Fu);
          goto LABEL_50;
        }
      }
      else if ( v5[1] == *(float *)((char *)v5 + v9 + 4)
             && v17 == *(float *)((char *)v5 + 3 * v9)
             && *(float *)((char *)v5 + 3 * v9 + 4) == *(float *)((char *)v5 + 2 * v9 + 4)
             && *(float *)((char *)v5 + 2 * v9) == *v5 )
      {
        goto LABEL_24;
      }
LABEL_34:
      v3 = v40;
      ++v1;
      v4 = v41;
      continue;
    }
    break;
  }
  std::vector<unsigned char>::_Tidy((__int64)Src);
  return v2;
}
