/*
 * XREFs of ?Create@CSurfaceDrawListBrush@@SAJPEAVIImageSource@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18007AE00
 * Callers:
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800193BC (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18001A5C0 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180038860 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015C9A0 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180171530 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18017BC40 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801802D0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z @ 0x1801BA440 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z.c)
 * Callees:
 *     ?AddRef@CArrayBasedCoverageSet@@UEAAKXZ @ 0x18004B200 (-AddRef@CArrayBasedCoverageSet@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z @ 0x18007B0EC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::Create(
        struct IImageSource *this,
        const struct D2D_RECT_F *a2,
        struct CSurfaceDrawListBrush **a3)
{
  unsigned int v6; // edi
  struct CObjectCache *ObjectCache; // rax
  char *v8; // rbx
  int v9; // r9d
  __int128 v10; // xmm0
  __int64 (__fastcall *v11)(CArrayBasedCoverageSet *); // rax

  v6 = 0;
  ObjectCache = CThreadContext::GetObjectCache(this);
  v8 = 0LL;
  v9 = *((_DWORD *)ObjectCache + 1);
  if ( v9 )
  {
    v8 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v8;
    *((_DWORD *)ObjectCache + 1) = v9 - 1;
  }
  if ( v8 || (v8 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0xA0uLL)) != 0LL )
  {
    v10 = (__int128)*a2;
    *(_QWORD *)v8 = &CSurfaceDrawListBrush::`vftable';
    *(_OWORD *)(v8 + 8) = v10;
    *((_QWORD *)v8 + 18) = this;
    if ( this )
    {
      v11 = *(__int64 (__fastcall **)(CArrayBasedCoverageSet *))(*(_QWORD *)this + 8LL);
      if ( v11 == CArrayBasedCoverageSet::AddRef )
        CArrayBasedCoverageSet::AddRef(this);
      else
        v11(this);
    }
    v8[152] = 0;
  }
  else
  {
    v8 = 0LL;
  }
  *a3 = (struct CSurfaceDrawListBrush *)v8;
  if ( !v8 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x16u);
  }
  return v6;
}
