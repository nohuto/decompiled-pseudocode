/*
 * XREFs of ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18000FF4C
 * Callers:
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x18001382C (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     ReorderAxisAlignedRectVertices @ 0x180016474 (ReorderAxisAlignedRectVertices.c)
 *     IsValidAxisAlignedRect @ 0x180016D98 (IsValidAxisAlignedRect.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1800ACDB0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Calculate_growth@?$vector@DV?$allocator@D@std@@@std@@AEBA_K_K@Z @ 0x1800D2574 (-_Calculate_growth@-$vector@DV-$allocator@D@std@@@std@@AEBA_K_K@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CMegaRect::PrepareData(__int64 a1, const void **a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v4; // esi
  char *v6; // rbx
  char *v8; // r13
  unsigned __int64 v9; // r12
  unsigned int v10; // r12d
  SIZE_T v11; // rbx
  LPVOID v12; // rax
  int v13; // r8d
  int v14; // r9d
  void *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int32 *v18; // rdi
  unsigned int v19; // ebx
  __int32 v20; // xmm1_4
  __int32 v21; // xmm1_4
  __m128 v22; // xmm0
  __m128 v23; // xmm2
  char *v24; // rax
  _QWORD *v25; // rcx
  _DWORD *v26; // rax
  FastRegion::CRegion *v27; // rbx
  __int32 v28; // r8d
  __int32 v29; // r9d
  __int32 v30; // eax
  __int32 v31; // r10d
  _DWORD *v32; // rdx
  __int64 v34; // r9
  char *v35; // rax
  char *v36; // rcx
  unsigned int v37; // [rsp+20h] [rbp-40h]
  __int64 v38; // [rsp+30h] [rbp-30h] BYREF
  int v39; // [rsp+38h] [rbp-28h]
  int v40; // [rsp+3Ch] [rbp-24h]
  int v41; // [rsp+40h] [rbp-20h]
  __m128 v42; // [rsp+48h] [rbp-18h] BYREF

  v3 = (__int64)*a2;
  v4 = 0;
  v6 = (char *)a2[1];
  v8 = (char *)(v6 - (_BYTE *)*a2);
  v42.m128_u64[0] = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v41 = 8 * *(_DWORD *)(a1 + 24) + 16;
  v9 = (unsigned int)(4 * v41);
  if ( (char *)v9 > (char *)a2[2] - v3 )
  {
    v38 = std::vector<char>::_Calculate_growth(a2, (unsigned int)(4 * v41), a3, 1LL);
    v3 = std::_Allocate<std::_Default_allocate_traits<1>>(v38, v34);
    memset_0(&v8[v3], 0, v9 - (_QWORD)v8);
    memmove((void *)v3, *a2, (_BYTE *)a2[1] - (_BYTE *)*a2);
    if ( *a2 )
      std::_Deallocate((void *)*a2, (_BYTE *)a2[2] - (_BYTE *)*a2, 1uLL);
    v6 = (char *)(v3 + v9);
    v35 = (char *)(v3 + v38);
    *a2 = (const void *)v3;
    a2[2] = v35;
    goto LABEL_27;
  }
  if ( v9 > (unsigned __int64)v8 )
  {
    v36 = v6;
    v6 = (char *)(v3 + v9);
    memset_0(v36, 0, v3 + v9 - (_QWORD)v36);
    v3 = (__int64)*a2;
LABEL_27:
    a2[1] = v6;
    goto LABEL_5;
  }
  if ( (char *)v9 != v8 )
  {
    v6 = (char *)(v3 + v9);
    a2[1] = (const void *)(v3 + v9);
  }
LABEL_5:
  v10 = v41;
  v40 = 4;
  v38 = v3;
  v39 = v41;
  v11 = (SIZE_T)&v6[-v3];
  if ( !v11 )
    v11 = 1LL;
  v12 = HeapAlloc(WPF::g_processHeap, 0, v11);
  v15 = *(void **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v12;
  if ( v15 )
  {
    operator delete(v15);
    v12 = *(LPVOID *)(a1 + 16);
  }
  if ( v12 )
  {
    TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(v42.m128_i32[0], *(_DWORD *)a1 + 72, v13, v14, (__int64)&v38);
    v16 = 0LL;
    while ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)((int)(v10 * v16) + v3)) & _xmm) <= 8388608.0
         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)((int)(v10 * v16) + v3 + 4)) & _xmm) <= 8388608.0 )
    {
      if ( (unsigned __int64)++v16 >= 4 )
      {
        v42.m128_u64[0] = v3;
        v42.m128_u64[1] = v10 | 0x400000000LL;
        if ( !(unsigned __int8)IsValidAxisAlignedRect(&v42) )
          return v4;
        v17 = *(unsigned int *)(a1 + 24);
        v42.m128_u64[0] = *(_QWORD *)(a1 + 16);
        v18 = (__int32 *)v42.m128_u64[0];
        v19 = 8 * v17 + 16;
        v38 = v3;
        v42.m128_u64[1] = v19 | 0x400000000LL;
        v39 = v10;
        v40 = 4;
        ReorderAxisAlignedRectVertices(&v38, v17, &v42);
        v20 = v18[1];
        v42.m128_i32[0] = *v18;
        v42.m128_i32[1] = v20;
        v21 = *(__int32 *)((char *)v18 + (int)(3 * v19) + 4);
        v42.m128_i32[2] = *(__int32 *)((char *)v18 + (int)(3 * v19));
        v42.m128_i32[3] = v21;
        v22 = _mm_mul_ps(_mm_add_ps(v42, g_halfFixedPointForRounding), (__m128)_xmm);
        v23 = _mm_cmplt_ps(DirectX::g_XMMaxInt, v22);
        v42 = _mm_or_ps(_mm_and_ps(v23, DirectX::g_XMAbsMask), _mm_andnot_ps(v23, (__m128)_mm_cvttps_epi32(v22)));
        v24 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
        v25 = v24;
        if ( v24 )
        {
          v26 = v24 + 8;
          *v25 = v26;
          *v26 = 0;
        }
        else
        {
          v25 = 0LL;
        }
        v27 = *(FastRegion::CRegion **)(a1 + 8);
        *(_QWORD *)(a1 + 8) = v25;
        if ( v27 )
        {
          FastRegion::CRegion::FreeMemory(v27);
          operator delete(v27, 0x48uLL);
          v25 = *(_QWORD **)(a1 + 8);
        }
        if ( !v25 )
        {
          v37 = 271;
          goto LABEL_31;
        }
        v28 = v42.m128_i32[0];
        v29 = v42.m128_i32[2];
        if ( v42.m128_i32[0] >= v42.m128_i32[2]
          || (v30 = v42.m128_i32[1], v31 = v42.m128_i32[3], v42.m128_i32[1] >= v42.m128_i32[3]) )
        {
          *(_DWORD *)*v25 = 0;
        }
        else
        {
          v32 = (_DWORD *)*v25;
          *v32 = 2;
          v32[1] = v28;
          v32[2] = v29;
          v32[3] = v30;
          v32[4] = 16;
          v32[7] = v28;
          v32[8] = v29;
          v32[5] = v31;
          v32[6] = 16;
        }
        return v4;
      }
    }
  }
  else
  {
    v37 = 233;
LABEL_31:
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v37);
  }
  return v4;
}
