/*
 * XREFs of ?SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x1801A2C10
 * Callers:
 *     ?CreateHwBrush@CHwLinearGradientBrushPoolManager@@MEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x1801A25E0 (-CreateHwBrush@CHwLinearGradientBrushPoolManager@@MEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x1801A2C94 (-SetBrushAndContextInternal@CHwLinearGradientBrush@@IEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 *     ?Create@CHwLinearGradientColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1801A2E74 (-Create@CHwLinearGradientColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CHwLinearGradientBrush::SetBrushAndContext(
        struct CD3DDeviceLevel1 **this,
        struct CMILBrush *a2,
        const struct CHwBrushContext *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax

  if ( this[12] || (v6 = CHwLinearGradientColorSource::Create(this[5], this + 12), v7 = v6, v6 >= 0) )
  {
    v8 = CHwLinearGradientBrush::SetBrushAndContextInternal((CHwLinearGradientBrush *)this, a2, a3);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xDAu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xD1u);
  }
  return v7;
}
