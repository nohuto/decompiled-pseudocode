/*
 * XREFs of ?ProcessSetAnchorPoint@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETANCHORPOINT@@@Z @ 0x1800AC1B8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetAnchor@CComponentTransform2D@@AEAAJMM@Z @ 0x1800AC484 (-SetAnchor@CComponentTransform2D@@AEAAJMM@Z.c)
 */

__int64 __fastcall CComponentTransform2D::ProcessSetAnchorPoint(
        CComponentTransform2D *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPONENTTRANSFORM2D_SETANCHORPOINT *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CComponentTransform2D::SetAnchor(this, *((float *)a3 + 2), *((float *)a3 + 3));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x3Cu);
  return v4;
}
