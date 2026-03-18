/*
 * XREFs of ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x18018F3FC
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z @ 0x180171320 (-Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x18018F0E4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@.c)
 */

__int64 __fastcall CGenericInk::GetDirectInkWetStroke(
        CGenericInk *this,
        struct ID2DContext *a2,
        struct IDCompositionDirectInkWetStrokePartner **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct IDCompositionDirectInkWetStrokePartner *v6; // rcx
  CMILCOMBase *v8; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v8 = 0LL;
  v4 = CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::FindOrCreateResourceNoRef(
         (CGenericInk *)((char *)this + 72),
         a2,
         &v8);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x14Du);
  }
  else
  {
    v6 = (struct IDCompositionDirectInkWetStrokePartner *)*((_QWORD *)v8 + 13);
    *a3 = v6;
    if ( v6 )
      (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return v5;
}
