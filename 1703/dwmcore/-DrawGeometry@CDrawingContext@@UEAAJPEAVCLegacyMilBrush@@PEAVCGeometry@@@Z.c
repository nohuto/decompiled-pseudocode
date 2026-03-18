/*
 * XREFs of ?DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1800A91D0
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x180083B90 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180029978 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800A1D6C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x1800A90E4 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 */

__int64 __fastcall CDrawingContext::DrawGeometry(
        CDrawingContext *this,
        struct CLegacyMilBrush *a2,
        struct CGeometry *a3)
{
  int v6; // ebx
  struct CShape *v7; // rdx
  __int64 v8; // rcx
  int ShapeData; // eax
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rcx
  struct CShape *v14; // [rsp+30h] [rbp-18h] BYREF
  char v15; // [rsp+38h] [rbp-10h]

  v14 = 0LL;
  v6 = 0;
  v15 = 0;
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    Template_qq(v8, &EVTDESC_ETWGUID_DRAWEVENT_Start, 3LL, *(unsigned int *)(v8 + 6696));
    v7 = v14;
  }
  if ( a3 )
  {
    ShapeData = CGeometry::GetShapeData(a3, 0LL, (struct CShapePtr *)&v14);
    v6 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeData, 0x4E3u);
      goto LABEL_10;
    }
    v7 = v14;
  }
  if ( v7 )
  {
    v10 = CDrawingContext::DrawShape(this, v7, a2);
    v6 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x4ECu);
  }
LABEL_10:
  v11 = 0;
  if ( v6 != -2003304438 )
    v11 = v6;
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_qq(v12, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 3LL, *((unsigned int *)this + 1674));
  CShapePtr::Release((CShapePtr *)&v14);
  return v11;
}
