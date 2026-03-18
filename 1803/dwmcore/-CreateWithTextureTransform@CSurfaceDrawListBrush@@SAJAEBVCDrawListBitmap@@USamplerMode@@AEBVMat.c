/*
 * XREFs of ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800B2E7C
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x1800050E0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x180005A60 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180011A40 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18008DD3C (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801B4BA0 (-GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801B7190 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x18021815C (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddRef@CRenderTargetImageSource@@UEAAKXZ @ 0x180089F70 (-AddRef@CRenderTargetImageSource@@UEAAKXZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z @ 0x1800B3004 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::CreateWithTextureTransform(__int64 a1, __int16 *a2, _DWORD *a3, _QWORD *a4)
{
  unsigned int v8; // edi
  struct CObjectCache *ObjectCache; // rax
  char *v10; // rbx
  int v11; // r11d
  __int16 v12; // r12
  char v13; // bp
  CRenderTargetImageSource *v14; // rcx
  void (*v15)(void); // rax
  __int64 v16; // rcx

  v8 = 0;
  ObjectCache = CThreadContext::GetObjectCache((struct CSurfaceDrawListBrush *)a1);
  v10 = 0LL;
  v11 = *((_DWORD *)ObjectCache + 1);
  if ( v11 )
  {
    v10 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v10;
    *((_DWORD *)ObjectCache + 1) = v11 - 1;
  }
  if ( v10 || (v10 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x98uLL)) != 0LL )
  {
    v12 = *a2;
    v13 = *((_BYTE *)a2 + 2);
    *(_OWORD *)(v10 + 8) = _xmm;
    v10[52] = 0;
    *(_QWORD *)v10 = &CSurfaceDrawListBrush::`vftable';
    *((_QWORD *)v10 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v14 = *(CRenderTargetImageSource **)a1;
    *((_QWORD *)v10 + 7) = *(_QWORD *)a1;
    if ( v14 )
    {
      v15 = *(void (**)(void))(*(_QWORD *)v14 + 8LL);
      if ( (char *)v15 == (char *)CRenderTargetImageSource::AddRef )
        CRenderTargetImageSource::AddRef(v14);
      else
        v15();
    }
    v16 = *(_QWORD *)(a1 + 8);
    *((_QWORD *)v10 + 8) = v16;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v10[72] = *(_BYTE *)(a1 + 16);
    *((_WORD *)v10 + 48) = v12;
    v10[98] = v13;
    *((_OWORD *)v10 + 5) = 0LL;
    *((_DWORD *)v10 + 25) = *a3;
    *((_DWORD *)v10 + 26) = a3[1];
    *((_DWORD *)v10 + 27) = a3[2];
    *((_DWORD *)v10 + 28) = a3[3];
    *((_DWORD *)v10 + 29) = a3[4];
    *((_DWORD *)v10 + 30) = a3[5];
    *((_DWORD *)v10 + 31) = a3[6];
    *((_DWORD *)v10 + 32) = a3[7];
    *((_DWORD *)v10 + 33) = a3[8];
    *(_OWORD *)(v10 + 136) = _xmm;
  }
  else
  {
    v10 = 0LL;
  }
  *a4 = v10;
  if ( !v10 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x35u);
  }
  return v8;
}
