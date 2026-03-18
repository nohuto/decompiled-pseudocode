/*
 * XREFs of ?ProcessSetRotationAngle@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETROTATIONANGLE@@@Z @ 0x1800960A8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetRotationAngle@CComponentTransform3D@@AEAAJM@Z @ 0x180095C3C (-SetRotationAngle@CComponentTransform3D@@AEAAJM@Z.c)
 */

__int64 __fastcall CComponentTransform3D::ProcessSetRotationAngle(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPONENTTRANSFORM3D_SETROTATIONANGLE *a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx

  v3 = CComponentTransform3D::SetRotationAngle(this, *((float *)a3 + 2));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x58u);
  return v4;
}
