/*
 * XREFs of ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18003B2A0
 * Callers:
 *     ?PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z @ 0x18003B344 (-PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18003B39C (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180058F90 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800597A4 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x180060D80 (-SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18007B590 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::UpdateDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2, bool *a3)
{
  __int64 v5; // r10
  char v6; // al
  __int64 v7; // r11
  bool v8; // zf
  __int64 v9; // r11
  COcclusionContext *v10; // r11
  int v11; // eax
  _BYTE v13[64]; // [rsp+30h] [rbp-58h] BYREF
  int v14; // [rsp+70h] [rbp-18h]

  if ( a3 )
    *a3 = 0;
  CMILMatrix::Multiply((CDrawingContext *)((char *)this + 6536), a2);
  v6 = CMILMatrix::IsIdentity<0>(v5);
  v8 = *(_BYTE *)(v7 + 6827) == 0;
  *(_BYTE *)(v7 + 6604) = v6 != 0;
  if ( !v8 )
  {
    v9 = *(_QWORD *)(v7 + 6744);
    if ( v9 )
    {
      v14 = 0;
      CMILMatrix::Multiply((const struct CMILMatrix *)(v9 + 820), a2, (struct CMILMatrix *)v13);
      v11 = COcclusionContext::SetDeviceTransform(v10, (const struct CMILMatrix *)v13);
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x6Fu);
      }
      else if ( a3 )
      {
        *a3 = 1;
      }
    }
  }
  return 0LL;
}
