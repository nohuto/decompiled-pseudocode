/*
 * XREFs of ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18000CE8C
 * Callers:
 *     ?PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z @ 0x18000CF34 (-PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18000CF94 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 * Callees:
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x18001DB74 (-SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180098570 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::UpdateDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2, bool *a3)
{
  __int64 v6; // r11
  char v7; // al
  bool v8; // zf
  __int64 v9; // rdi
  int v10; // eax
  _BYTE v12[64]; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+70h] [rbp-18h]

  if ( a3 )
    *a3 = 0;
  CMILMatrix::Multiply((CDrawingContext *)((char *)this + 6472), a2);
  v7 = CMILMatrix::IsIdentity<0>(v6);
  v8 = *((_BYTE *)this + 6771) == 0;
  *((_BYTE *)this + 6540) = v7 != 0;
  if ( !v8 )
  {
    v9 = *((_QWORD *)this + 835);
    if ( v9 )
    {
      v13 = 0;
      CMILMatrix::Multiply((const struct CMILMatrix *)(v9 + 732), a2, (struct CMILMatrix *)v12);
      v10 = COcclusionContext::SetDeviceTransform((COcclusionContext *)v9, (const struct CMILMatrix *)v12);
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x6Eu);
      }
      else if ( a3 )
      {
        *a3 = 1;
      }
    }
  }
  return 0LL;
}
