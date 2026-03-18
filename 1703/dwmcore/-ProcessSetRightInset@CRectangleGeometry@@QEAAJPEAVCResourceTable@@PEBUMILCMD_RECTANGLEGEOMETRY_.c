/*
 * XREFs of ?ProcessSetRightInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET@@@Z @ 0x1800953D8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetRight@CRectangleGeometry@@AEAAJM@Z @ 0x180094DC0 (-SetRight@CRectangleGeometry@@AEAAJM@Z.c)
 */

__int64 __fastcall CRectangleGeometry::ProcessSetRightInset(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct MILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CRectangleGeometry::SetRight(this, *((float *)a3 + 2));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x101u);
  return v4;
}
