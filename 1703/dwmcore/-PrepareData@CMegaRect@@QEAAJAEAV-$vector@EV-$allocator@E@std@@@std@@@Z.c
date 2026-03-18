/*
 * XREFs of ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180008780
 * Callers:
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x180025CB4 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     ReorderAxisAlignedRectVertices @ 0x18001C800 (ReorderAxisAlignedRectVertices.c)
 *     ?_Reserve@?$vector@EV?$allocator@E@std@@@std@@IEAAX_K@Z @ 0x18001DD24 (-_Reserve@-$vector@EV-$allocator@E@std@@@std@@IEAAX_K@Z.c)
 *     IsValidAxisAlignedRect @ 0x18001DD8C (IsValidAxisAlignedRect.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18008B150 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     ?erase@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@2@0@Z @ 0x1801BFD68 (-erase@-$vector@EV-$allocator@E@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@U-$_Simple_t.c)
 */

__int64 __fastcall CMegaRect::PrepareData(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  unsigned int v4; // esi
  __int64 v6; // r13
  unsigned int v7; // r15d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r12
  SIZE_T v11; // r8
  LPVOID v12; // rbx
  int v13; // r9d
  void *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int32 *v17; // rdi
  unsigned int v18; // ebx
  __int32 v19; // xmm1_4
  __int32 v20; // xmm1_4
  __m128 v21; // xmm0
  __m128 v22; // xmm1
  char *v23; // rax
  _QWORD *v24; // rbx
  _DWORD *v25; // rax
  _QWORD *v26; // rdi
  _DWORD **v27; // rcx
  __int32 v28; // r9d
  __int32 v29; // r10d
  __int32 v30; // eax
  __int32 v31; // r11d
  _DWORD *v32; // rdx
  unsigned int v34; // [rsp+20h] [rbp-40h]
  unsigned __int64 v35; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v36; // [rsp+38h] [rbp-28h]
  int v37; // [rsp+3Ch] [rbp-24h]
  __m128 v38; // [rsp+40h] [rbp-20h] BYREF

  v3 = *(_QWORD *)a2;
  v4 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v7 = 8 * *(_DWORD *)(a1 + 24) + 16;
  v8 = *(_QWORD *)(a2 + 8) - v3;
  v9 = 4 * v7;
  if ( v8 < v9 )
  {
    std::vector<unsigned char>::_Reserve(a2, v9 + v3 - *(_QWORD *)(a2 + 8));
    memset_0(*(void **)(a2 + 8), 0, v9 + *(_QWORD *)a2 - *(_QWORD *)(a2 + 8));
    *(_QWORD *)(a2 + 8) = v9 + *(_QWORD *)a2;
  }
  else if ( v8 > v9 )
  {
    std::vector<unsigned char>::erase(a2, &v38, v3 + v9, *(_QWORD *)(a2 + 8));
  }
  v10 = *(_QWORD *)a2;
  v38.m128_u64[0] = v10;
  v38.m128_u64[1] = v7 | 0x400000000LL;
  v11 = *(_QWORD *)(a2 + 8) - v10;
  if ( !v11 )
    v11 = 1LL;
  v12 = HeapAlloc(WPF::g_processHeap, 0, v11);
  v14 = *(void **)(a1 + 16);
  if ( v12 != v14 )
  {
    if ( v14 )
      HeapFree(WPF::g_processHeap, 0, v14);
    *(_QWORD *)(a1 + 16) = v12;
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(v6, *(_DWORD *)a1 + 72, (_DWORD)v14, v13, (__int64)&v38);
    v15 = 0LL;
    while ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)((int)(v7 * v15) + v10)) & _xmm) <= 8388608.0
         && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)((int)(v7 * v15) + v10 + 4)) & _xmm) <= 8388608.0 )
    {
      if ( (unsigned __int64)++v15 >= 4 )
      {
        v38.m128_u64[0] = v10;
        v38.m128_u64[1] = v7 | 0x400000000LL;
        if ( !(unsigned __int8)IsValidAxisAlignedRect(&v38) )
          return v4;
        v16 = *(unsigned int *)(a1 + 24);
        v38.m128_u64[0] = *(_QWORD *)(a1 + 16);
        v17 = (__int32 *)v38.m128_u64[0];
        v18 = 8 * v16 + 16;
        v35 = v10;
        v38.m128_u64[1] = v18 | 0x400000000LL;
        v36 = v7;
        v37 = 4;
        ReorderAxisAlignedRectVertices(&v35, v16, &v38);
        v19 = v17[1];
        v38.m128_i32[0] = *v17;
        v38.m128_i32[1] = v19;
        v20 = *(__int32 *)((char *)v17 + (int)(3 * v18) + 4);
        v38.m128_i32[2] = *(__int32 *)((char *)v17 + (int)(3 * v18));
        v38.m128_i32[3] = v20;
        v21 = _mm_mul_ps(_mm_add_ps(v38, g_halfFixedPointForRounding), (__m128)_xmm);
        v22 = _mm_cmplt_ps(DirectX::g_XMMaxInt, v21);
        v38 = _mm_or_ps(_mm_andnot_ps(v22, (__m128)_mm_cvttps_epi32(v21)), _mm_and_ps(v22, DirectX::g_XMAbsMask));
        v23 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
        v24 = v23;
        if ( v23 )
        {
          v25 = v23 + 8;
          *v24 = v25;
          *v25 = 0;
        }
        else
        {
          v24 = 0LL;
        }
        v26 = *(_QWORD **)(a1 + 8);
        if ( v24 != v26 )
        {
          if ( v26 )
          {
            FastRegion::CRegion::FreeMemory(*(FastRegion::CRegion **)(a1 + 8));
            WPF::ProcessHeapImpl::Free(v26);
          }
          *(_QWORD *)(a1 + 8) = v24;
        }
        v27 = *(_DWORD ***)(a1 + 8);
        if ( !v27 )
        {
          v34 = 271;
          goto LABEL_30;
        }
        v28 = v38.m128_i32[0];
        v29 = v38.m128_i32[2];
        if ( v38.m128_i32[0] >= v38.m128_i32[2]
          || (v30 = v38.m128_i32[1], v31 = v38.m128_i32[3], v38.m128_i32[1] >= v38.m128_i32[3]) )
        {
          **v27 = 0;
        }
        else
        {
          v32 = *v27;
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
    v34 = 233;
LABEL_30:
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v34);
  }
  return v4;
}
