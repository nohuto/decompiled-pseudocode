/*
 * XREFs of ?ProcessSetAnchorPoint@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT@@@Z @ 0x180095FE0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetAnchor@CComponentTransform3D@@AEAAJMM@Z @ 0x180095F1C (-SetAnchor@CComponentTransform3D@@AEAAJMM@Z.c)
 */

__int64 __fastcall CComponentTransform3D::ProcessSetAnchorPoint(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT *a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx

  v3 = CComponentTransform3D::SetAnchor(this, *((float *)a3 + 2), *((float *)a3 + 3));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x3Au);
  return v4;
}
