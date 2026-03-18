/*
 * XREFs of ?PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z @ 0x18003B344
 * Callers:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180081490 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18003B2A0 (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041BF8 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18005B088 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::PopDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2)
{
  int updated; // eax
  unsigned int v4; // ebx
  _BYTE v6[64]; // [rsp+30h] [rbp-58h] BYREF
  int v7; // [rsp+70h] [rbp-18h]

  v7 = 0;
  CMILMatrix::SetToInverse((CMILMatrix *)v6, a2);
  updated = CDrawingContext::UpdateDeviceTransform(this, (const struct CMILMatrix *)v6, 0LL);
  v4 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x1967u);
  else
    CDrawingContext::PopTransformInternal(this, 0);
  return v4;
}
