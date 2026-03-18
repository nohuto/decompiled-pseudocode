/*
 * XREFs of ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800B303C
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180007680 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M4@Z @ 0x180055E70 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180099560 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18017BC04 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PE.c)
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180189B60 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180190480 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801B4BA0 (-GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C1450 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTextureSize@CD2DBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180077460 (-GetTextureSize@CD2DBitmap@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetTextureSize@CHwTextureRenderTarget@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180078250 (-GetTextureSize@CHwTextureRenderTarget@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z @ 0x1800B3004 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::CreateWithContentRect(__int64 *a1, __int16 *a2, __int128 *a3, _QWORD *a4)
{
  CD2DBitmap *v5; // rcx
  unsigned int v7; // edi
  struct D2D_SIZE_U (__fastcall *v10)(CHwTextureRenderTarget *, _DWORD *); // rax
  struct CSurfaceDrawListBrush *v11; // rcx
  float v12; // xmm8_4
  float v13; // xmm7_4
  struct CObjectCache *ObjectCache; // rax
  char *v15; // rbx
  int v16; // edx
  __int16 v17; // r15
  char v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int128 v21; // xmm0
  __int128 v22; // xmm0
  _DWORD v24[16]; // [rsp+30h] [rbp-88h] BYREF

  v5 = (CD2DBitmap *)a1[1];
  v7 = 0;
  v10 = *(struct D2D_SIZE_U (__fastcall **)(CHwTextureRenderTarget *, _DWORD *))(*(_QWORD *)v5 + 40LL);
  if ( v10 == CD2DBitmap::GetTextureSize )
  {
    CD2DBitmap::GetTextureSize(v5, v24);
  }
  else if ( v10 == CHwTextureRenderTarget::GetTextureSize )
  {
    CHwTextureRenderTarget::GetTextureSize(v5, v24);
  }
  else
  {
    v10(v5, v24);
  }
  v12 = 1.0 / (float)v24[0];
  v13 = 1.0 / (float)v24[1];
  ObjectCache = CThreadContext::GetObjectCache(v11);
  v15 = 0LL;
  v16 = *((_DWORD *)ObjectCache + 1);
  if ( v16 )
  {
    v15 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v15;
    *((_DWORD *)ObjectCache + 1) = v16 - 1;
  }
  if ( v15 || (v15 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x98uLL)) != 0LL )
  {
    v17 = *a2;
    v18 = *((_BYTE *)a2 + 2);
    *(_OWORD *)(v15 + 8) = _xmm;
    v15[52] = 0;
    *(_QWORD *)v15 = &CSurfaceDrawListBrush::`vftable';
    *((_QWORD *)v15 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v19 = *a1;
    *((_QWORD *)v15 + 7) = *a1;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    v20 = a1[1];
    *((_QWORD *)v15 + 8) = v20;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
    v15[72] = *((_BYTE *)a1 + 16);
    v21 = *a3;
    *((_WORD *)v15 + 48) = v17;
    v15[98] = v18;
    *((_OWORD *)v15 + 5) = v21;
    *((_QWORD *)v15 + 13) = 0LL;
    *((float *)v15 + 25) = v12;
    *((float *)v15 + 29) = v13;
    *((float *)v15 + 31) = 0.0 - (float)(v12 * 0.0);
    *((float *)v15 + 32) = 0.0 - (float)(v13 * 0.0);
    *((_DWORD *)v15 + 28) = 0;
    *((_DWORD *)v15 + 30) = 0;
    *((_DWORD *)v15 + 33) = 1065353216;
    *(_OWORD *)(v15 + 136) = _xmm;
  }
  else
  {
    v15 = 0LL;
  }
  *a4 = v15;
  if ( v15 )
  {
    v15[52] = 1;
    v22 = *a3;
    *((_DWORD *)v15 + 12) = 50529027;
    *((_OWORD *)v15 + 2) = v22;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Fu);
  }
  return v7;
}
