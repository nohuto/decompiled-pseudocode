/*
 * XREFs of ?Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z @ 0x18013AA20
 * Callers:
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180166B70 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?TryMakeSuperWet@CWetInkManager@@AEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_KPEAVCDrawingContext@@PEA_N@Z @ 0x18013ABFC (-TryMakeSuperWet@CWetInkManager@@AEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_KPEAVCDrawing.c)
 *     ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x18013CA50 (-DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180166BBC (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@.c)
 */

__int64 __fastcall CWetInkManager::Draw(CWetInkManager *this, struct CDrawingContext *a2, struct CGenericInk *a3)
{
  struct IDCompositionDirectInkWetStrokePartner *v5; // rbx
  signed int ResourceNoRef; // eax
  struct IDCompositionDirectInkWetStrokePartner *v7; // rdx
  CWetInkManager *v8; // rcx
  unsigned __int64 v9; // r8
  struct CDrawingContext *v10; // r9
  int v11; // edi
  int SuperWet; // eax
  DWORD v13; // r9d
  unsigned int v15; // [rsp+20h] [rbp-18h]
  CWetInkManager *v16; // [rsp+40h] [rbp+8h] BYREF
  struct IDCompositionDirectInkWetStrokePartner *v17; // [rsp+48h] [rbp+10h] BYREF

  v16 = this;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  v16 = 0LL;
  v5 = 0LL;
  v17 = 0LL;
  ResourceNoRef = CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::FindOrCreateResourceNoRef((struct CGenericInk *)((char *)a3 + 72));
  v11 = ResourceNoRef;
  if ( ResourceNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ResourceNoRef, 0x12Du);
  }
  else
  {
    v5 = (struct IDCompositionDirectInkWetStrokePartner *)*((_QWORD *)v16 + 13);
    v17 = v5;
    if ( v5 )
      (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  if ( v11 < 0 )
  {
    v15 = 50;
    v13 = v11;
    goto LABEL_12;
  }
  LOBYTE(v16) = 0;
  SuperWet = CWetInkManager::TryMakeSuperWet(v8, v7, v9, v10, (bool *)&v16);
  v11 = SuperWet;
  if ( SuperWet < 0 )
  {
    v15 = 57;
    goto LABEL_9;
  }
  SuperWet = CDrawingContext::DrawGenericInk(a2, v5, (_BYTE)v16 == 0);
  v11 = SuperWet;
  if ( SuperWet < 0 )
  {
    v15 = 60;
LABEL_9:
    v13 = SuperWet;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, v15);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  return (unsigned int)v11;
}
