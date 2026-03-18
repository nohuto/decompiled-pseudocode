/*
 * XREFs of ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x18004AE10
 * Callers:
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCMILMatrix@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18004A304 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 * Callees:
 *     ?SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18004A840 (-SetRealizedBrush@CLegacyMilBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z.c)
 *     ?GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18004AF90 (-GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 *     ?GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18004AFDC (-GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18007B8E0 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushResourceRealizer::EnsureRealization(
        CBrushResourceRealizer *this,
        struct LegacyMilBrushContext *a2,
        const struct CContextState *a3,
        const struct PixelFormatInfo *a4)
{
  bool v5; // zf
  struct PixelFormatInfo *v7; // rdi
  CLegacyMilBrush *v8; // rcx
  void (__fastcall *v9)(CImageLegacyMilBrush *__hidden, enum DXGI_FORMAT *); // rax
  __int64 v10; // rcx
  int BrushRealizationNoRef; // eax
  unsigned int v12; // ebp
  struct CMILBrush *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  v5 = *(_BYTE *)a2 == 0;
  *((_DWORD *)a2 + 53) = *((_DWORD *)a3 + 52);
  if ( v5 )
  {
    *(_OWORD *)((char *)a2 + 4) = *(_OWORD *)((char *)a3 + 212);
    *(_OWORD *)((char *)a2 + 20) = *(_OWORD *)((char *)a3 + 228);
    *(_OWORD *)((char *)a2 + 36) = *(_OWORD *)((char *)a3 + 244);
    *(_OWORD *)((char *)a2 + 52) = *(_OWORD *)((char *)a3 + 260);
    *((_DWORD *)a2 + 17) = *((_DWORD *)a3 + 69);
    *((_OWORD *)a2 + 11) = *(_OWORD *)((char *)a3 + 76);
  }
  v7 = (struct LegacyMilBrushContext *)((char *)a2 + 216);
  if ( a4 )
  {
    *(_QWORD *)v7 = *(_QWORD *)a4;
    *((_DWORD *)a2 + 56) = *((_DWORD *)a4 + 2);
  }
  else
  {
    v8 = (CLegacyMilBrush *)*((_QWORD *)this + 12);
    v9 = *(void (__fastcall **)(CImageLegacyMilBrush *__hidden, enum DXGI_FORMAT *))(*(_QWORD *)v8 + 152LL);
    if ( (char *)v9 == (char *)CLegacyMilBrush::GetDefaultRealizationFormat )
    {
      CLegacyMilBrush::GetDefaultRealizationFormat(v8, v7);
    }
    else if ( v9 == CImageLegacyMilBrush::GetDefaultRealizationFormat )
    {
      CImageLegacyMilBrush::GetDefaultRealizationFormat(v8, (enum DXGI_FORMAT *)v7);
    }
    else
    {
      v9(v8, (enum DXGI_FORMAT *)v7);
    }
  }
  *((_BYTE *)a2 + 140) = 0;
  *((_WORD *)a2 + 68) = 32085;
  *(_OWORD *)((char *)a2 + 72) = _xmm;
  *(_OWORD *)((char *)a2 + 88) = _xmm;
  *(_OWORD *)((char *)a2 + 104) = _xmm;
  *(_OWORD *)((char *)a2 + 120) = _xmm;
  v10 = *((_QWORD *)this + 11);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    *((_QWORD *)this + 11) = 0LL;
  }
  BrushRealizationNoRef = CLegacyMilBrush::GetBrushRealizationNoRef(*((CLegacyMilBrush **)this + 12), a2, &v14);
  v12 = BrushRealizationNoRef;
  if ( BrushRealizationNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BrushRealizationNoRef, 0x92u);
  }
  else
  {
    CLegacyMilBrushRealizer::SetRealizedBrush(this, v14, v7);
    if ( !*(_BYTE *)a2 && *((_BYTE *)a2 + 140) )
      CMILMatrix::Multiply(
        (struct LegacyMilBrushContext *)((char *)a2 + 4),
        (struct LegacyMilBrushContext *)((char *)a2 + 72));
  }
  return v12;
}
