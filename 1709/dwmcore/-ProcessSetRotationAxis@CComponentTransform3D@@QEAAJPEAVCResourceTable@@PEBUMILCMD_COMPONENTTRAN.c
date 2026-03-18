/*
 * XREFs of ?ProcessSetRotationAxis@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS@@@Z @ 0x180096078
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z @ 0x180095DE4 (-SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z.c)
 */

__int64 __fastcall CComponentTransform3D::ProcessSetRotationAxis(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS *a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx

  v3 = CComponentTransform3D::SetRotationAxis(this, *((float *)a3 + 2), *((float *)a3 + 3), *((float *)a3 + 4));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x67u);
  return v4;
}
