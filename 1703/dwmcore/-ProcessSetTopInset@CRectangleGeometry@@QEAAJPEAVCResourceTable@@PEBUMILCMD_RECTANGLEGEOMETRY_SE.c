/*
 * XREFs of ?ProcessSetTopInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETTOPINSET@@@Z @ 0x18009536C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetTop@CRectangleGeometry@@AEAAJM@Z @ 0x180094E30 (-SetTop@CRectangleGeometry@@AEAAJM@Z.c)
 */

__int64 __fastcall CRectangleGeometry::ProcessSetTopInset(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct MILCMD_RECTANGLEGEOMETRY_SETTOPINSET *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CRectangleGeometry::SetTop(this, *((float *)a3 + 2));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xF4u);
  return v4;
}
