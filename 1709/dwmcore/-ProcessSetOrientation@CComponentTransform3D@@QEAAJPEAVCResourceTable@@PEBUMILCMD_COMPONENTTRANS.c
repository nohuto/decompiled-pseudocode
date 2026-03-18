/*
 * XREFs of ?ProcessSetOrientation@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETORIENTATION@@@Z @ 0x18009600C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z @ 0x180095C7C (-SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z.c)
 */

__int64 __fastcall CComponentTransform3D::ProcessSetOrientation(
        CComponentTransform3D *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPONENTTRANSFORM3D_SETORIENTATION *a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx

  v3 = CComponentTransform3D::SetOrientation(
         this,
         *((float *)a3 + 2),
         *((float *)a3 + 3),
         *((float *)a3 + 4),
         *((_DWORD *)a3 + 5));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x49u);
  return v4;
}
