/*
 * XREFs of ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000A520
 * Callers:
 *     ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000B0F0 (-IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@.c)
 *     ?IsDrawListCacheDirty@CPrimitiveGroup@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000C6B0 (-IsDrawListCacheDirty@CPrimitiveGroup@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SI.c)
 *     ?IsDrawListCacheDirty@CHwndBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180164D70 (-IsDrawListCacheDirty@CHwndBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F.c)
 * Callees:
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x18000F590 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18004EC48 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B108 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?HasClip@CCpuClip@@QEBA_NXZ @ 0x1800C12CC (-HasClip@CCpuClip@@QEBA_NXZ.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C12E0 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

char __fastcall CContent::IsDrawListCacheDirty(
        CContent *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  unsigned __int64 v5; // rsi
  CVisual *v8; // rcx
  struct CMILMatrix *v9; // rdx
  int v11; // xmm0_4
  __m128 v12; // xmm2
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  __int128 v15; // [rsp+20h] [rbp-51h] BYREF
  __int64 v16; // [rsp+30h] [rbp-41h] BYREF
  char v17; // [rsp+38h] [rbp-39h]
  char v18; // [rsp+40h] [rbp-31h]
  int v19; // [rsp+60h] [rbp-11h]
  __int128 v20; // [rsp+70h] [rbp-1h] BYREF
  __int128 v21; // [rsp+88h] [rbp+17h] BYREF
  unsigned __int64 v22; // [rsp+98h] [rbp+27h]

  v5 = *((_QWORD *)a2 + 3);
  if ( v5
    && !CCommonRegistryData::m_fDisableDrawListCaching
    && *((_BYTE *)a3 + 6774)
    && !*((_QWORD *)a3 + 405)
    && ((*((_BYTE *)a2 + 88) & 2) == 0 || *(_BYTE *)(*((_QWORD *)this + 2) + 1360LL) == ((*((_BYTE *)a2 + 88) & 4) != 0))
    && *((_DWORD *)a2 + 24) == (*((_DWORD *)a3 + 66) != 0) )
  {
    if ( (*((_BYTE *)a2 + 88) & 0x40) == 0
      || (v19 = 0,
          CMatrixStack::Top((struct CDrawingContext *)((char *)a3 + 472), (struct CMILMatrix *)&v15),
          (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(&v15)) )
    {
      if ( *((_DWORD *)a2 + 4) != 2 || *((_DWORD *)a3 + 67) != 4 )
      {
        v8 = 0LL;
        if ( *((_BYTE *)a3 + 6456) )
        {
          if ( *((_BYTE *)a3 + 6457) )
            v8 = (CVisual *)*((_QWORD *)a3 + 383);
          else
            v8 = *(CVisual **)(*((_QWORD *)a3 + 808) + 24LL);
        }
        if ( v5 >= *((_QWORD *)CVisual::FindTreeData(v8, *((const struct CVisualTree **)a3 + 808)) + 25) )
          return 0;
        if ( !*((_BYTE *)a2 + 100) )
        {
          if ( (*((_BYTE *)a2 + 92) & 0x20) != 0 )
          {
            v16 = 0LL;
            v17 = 0;
            v18 = 0;
            v15 = 0LL;
            if ( (int)CDrawingContext::GetCpuClip(a3, v9, (struct CCpuClip *)&v15) >= 0
              && CCpuClip::HasClip((CCpuClip *)&v15) )
            {
              if ( a5 )
              {
                v11 = *(_DWORD *)a5;
                v12 = (__m128)*((unsigned int *)a5 + 13);
                DWORD1(v20) = *((_DWORD *)a5 + 1);
                HIDWORD(v20) = *((_DWORD *)a5 + 5);
                v13 = (__m128)*((unsigned int *)a5 + 12);
                LODWORD(v20) = v11;
                DWORD2(v20) = *((_DWORD *)a5 + 4);
                v21 = v20;
                v22 = _mm_unpacklo_ps(v13, v12).m128_u64[0];
              }
              v14 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a2 + 44));
              LODWORD(v20) = v14.m128_i32[0];
              HIDWORD(v20) = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
              DWORD1(v20) = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
              DWORD2(v20) = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
              if ( !(unsigned __int8)CCpuClip::FullyContains(&v15, &v20, (unsigned __int64)&v21 & -(__int64)(a5 != 0LL)) )
              {
                CShapePtr::Release((CShapePtr *)&v16);
                return 1;
              }
            }
            CShapePtr::Release((CShapePtr *)&v16);
          }
          return 0;
        }
      }
    }
  }
  return 1;
}
