/*
 * XREFs of ?PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z @ 0x18006B2D0
 * Callers:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024A00 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18006B224 (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x1800A36A8 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z @ 0x1800BE2F8 (-Pop@-$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z.c)
 */

__int64 __fastcall CDrawingContext::PopDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2)
{
  int updated; // eax
  unsigned int v4; // edi
  int v5; // ecx
  _BYTE v7[64]; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+70h] [rbp-18h]

  v8 = 0;
  CMILMatrix::SetToInverse((CMILMatrix *)v7, a2);
  updated = CDrawingContext::UpdateDeviceTransform(this, (const struct CMILMatrix *)v7, 0LL);
  v4 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x1A95u);
  }
  else
  {
    v5 = *((_DWORD *)this + 120);
    if ( v5 )
      *((_DWORD *)this + 120) = v5 - 1;
    CWatermarkStack<bool,64,2,10>::Pop((char *)this + 512);
    *((_BYTE *)this + 6824) = 1;
  }
  return v4;
}
