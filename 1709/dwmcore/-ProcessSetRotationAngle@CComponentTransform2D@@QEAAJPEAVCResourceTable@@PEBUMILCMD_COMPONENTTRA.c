/*
 * XREFs of ?ProcessSetRotationAngle@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETROTATIONANGLE@@@Z @ 0x180095710
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJM@Z @ 0x18009541C (-SetRotationAngle@CComponentTransform2D@@AEAAJM@Z.c)
 */

__int64 __fastcall CComponentTransform2D::ProcessSetRotationAngle(
        CComponentTransform2D *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPONENTTRANSFORM2D_SETROTATIONANGLE *a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx

  v3 = CComponentTransform2D::SetRotationAngle(this, *((float *)a3 + 2));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x60u);
  return v4;
}
