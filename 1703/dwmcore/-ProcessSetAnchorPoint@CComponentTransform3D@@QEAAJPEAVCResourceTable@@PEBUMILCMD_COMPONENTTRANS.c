/*
 * XREFs of ?ProcessSetAnchorPoint@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT@@@Z @ 0x18002BAF4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetAnchor@CComponentTransform3D@@AEAAJMM@Z @ 0x18002C024 (-SetAnchor@CComponentTransform3D@@AEAAJMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComponentTransform3D::ProcessSetAnchorPoint(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = CComponentTransform3D::SetAnchor(this, *((float *)a3 + 2), *((float *)a3 + 3));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x24u);
  return v4;
}
