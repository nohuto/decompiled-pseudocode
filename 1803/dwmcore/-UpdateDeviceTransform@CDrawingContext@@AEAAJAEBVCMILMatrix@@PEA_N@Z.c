/*
 * XREFs of ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18006B224
 * Callers:
 *     ?PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z @ 0x18006B2D0 (-PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18006B344 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800A35A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x1800A87CC (-SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800BE970 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 */

__int64 __fastcall CDrawingContext::UpdateDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2, bool *a3)
{
  char *v6; // rbx
  char v7; // al
  bool v8; // zf
  __int64 v9; // rbx
  int v10; // eax
  _BYTE v12[64]; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+70h] [rbp-18h]

  if ( a3 )
    *a3 = 0;
  v6 = (char *)this + 6536;
  CMILMatrix::Multiply((CDrawingContext *)((char *)this + 6536), a2);
  v7 = CMILMatrix::IsIdentity<0>(v6);
  v8 = *((_BYTE *)this + 6827) == 0;
  *((_BYTE *)this + 6604) = v7 != 0;
  if ( !v8 )
  {
    v9 = *((_QWORD *)this + 843);
    v13 = 0;
    CMILMatrix::Multiply((const struct CMILMatrix *)(v9 + 820), a2, (struct CMILMatrix *)v12);
    v10 = COcclusionContext::SetDeviceTransform((COcclusionContext *)v9, (const struct CMILMatrix *)v12);
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x6Fu);
    }
    else if ( a3 )
    {
      *a3 = 1;
    }
  }
  return 0LL;
}
