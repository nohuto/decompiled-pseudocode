/*
 * XREFs of ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18000D164
 * Callers:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18000D284 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@W4Enum@MilCompositingMode@@@Z @ 0x18000DF60 (-FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@W4En.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18006E340 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800A96E0 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800AAB10 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x1800D45E0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x18000FAC0 (--_GCD2DLayer@@UEAAPEAXI@Z.c)
 *     ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18000FBF0 (-RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ??_ECColorSpaceLayer@@UEAAPEAXI@Z @ 0x180014200 (--_ECColorSpaceLayer@@UEAAPEAXI@Z.c)
 *     ?RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x180014D60 (-RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PopLayerInternal(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // r8
  CD2DLayer *v3; // rbx
  int v4; // edx
  __int64 (__fastcall *v5)(CTreeEffectLayer *__hidden, struct CDrawingContext *); // rax
  int v6; // eax
  void *(__fastcall *v7)(CD2DLayer *__hidden, unsigned int); // rax

  v1 = 0;
  v2 = (unsigned int)(*(_DWORD *)(a1 + 560) - 1);
  v3 = *(CD2DLayer **)(*(_QWORD *)(a1 + 536) + 8 * v2);
  *(_DWORD *)(a1 + 560) = v2;
  v4 = *(_DWORD *)(a1 + 624);
  if ( v4 && *(CD2DLayer **)(*(_QWORD *)(a1 + 600) + 8LL * (unsigned int)(v4 - 1)) == v3 )
  {
    *(_DWORD *)(a1 + 624) = v4 - 1;
  }
  else
  {
    v5 = *(__int64 (__fastcall **)(CTreeEffectLayer *__hidden, struct CDrawingContext *))(*(_QWORD *)v3 + 24LL);
    if ( v5 == CD2DLayer::RestoreState )
    {
      v6 = CD2DLayer::RestoreState(v3, (struct CDrawingContext *)a1);
    }
    else if ( v5 == CTreeEffectLayer::RestoreState )
    {
      v6 = CTreeEffectLayer::RestoreState(v3, (struct CDrawingContext *)a1);
    }
    else
    {
      v6 = v5(v3, (struct CDrawingContext *)a1);
    }
    v1 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x19B9u);
  }
  if ( v3 )
  {
    v7 = **(void *(__fastcall ***)(CD2DLayer *__hidden, unsigned int))v3;
    if ( v7 == CD2DLayer::`scalar deleting destructor' )
    {
      CD2DLayer::`scalar deleting destructor'(v3, 1u);
    }
    else if ( v7 == CColorSpaceLayer::`vector deleting destructor' )
    {
      CColorSpaceLayer::`vector deleting destructor'(v3, 1u);
    }
    else
    {
      v7(v3, 1u);
    }
  }
  return v1;
}
