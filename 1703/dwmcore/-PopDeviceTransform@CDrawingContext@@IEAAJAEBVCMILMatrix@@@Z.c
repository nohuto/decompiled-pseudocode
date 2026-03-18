/*
 * XREFs of ?PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z @ 0x18000CF34
 * Callers:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180015610 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18000CE8C (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180098678 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

__int64 __fastcall CDrawingContext::PopDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2)
{
  int updated; // eax
  unsigned int v4; // ebx
  _BYTE v6[64]; // [rsp+30h] [rbp-58h] BYREF
  int v7; // [rsp+70h] [rbp-18h]

  v7 = 0;
  if ( CMILMatrix::SetToInverse((CMILMatrix *)v6, a2) )
  {
    updated = CDrawingContext::UpdateDeviceTransform(this, (const struct CMILMatrix *)v6, 0LL);
    v4 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x1B9Bu);
    else
      CDrawingContext::PopTransformInternal(this, 0);
  }
  else
  {
    v4 = -2003304441;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x1B98u);
  }
  return v4;
}
