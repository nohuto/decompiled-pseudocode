/*
 * XREFs of ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18003B39C
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180081630 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18003B2A0 (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800597A4 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18005B088 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007B3F4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2, bool *a3)
{
  bool *v5; // r9
  int updated; // eax
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+20h] [rbp-B8h]
  _BYTE v10[64]; // [rsp+30h] [rbp-A8h] BYREF
  int v11; // [rsp+70h] [rbp-68h]
  _DWORD v12[20]; // [rsp+80h] [rbp-58h] BYREF

  v12[16] = 0;
  v11 = 0;
  if ( !CMILMatrix::SetToInverse((CMILMatrix *)v12, a2) )
  {
    v7 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304441, 0x1949u);
    return v7;
  }
  updated = CDrawingContext::UpdateDeviceTransform(this, a2, v5);
  v7 = updated;
  if ( updated < 0 )
  {
    v9 = 6477;
    goto LABEL_8;
  }
  CMatrixStack::Top((CDrawingContext *)((char *)this + 480), (struct CMILMatrix *)v10);
  CMILMatrix::Multiply((CMILMatrix *)v10, a2);
  updated = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)v10, 0, 0);
  v7 = updated;
  if ( updated < 0 )
  {
    v9 = 6487;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v9);
  }
  return v7;
}
