/*
 * XREFs of ?ProcessSetCenterPoint@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETCENTERPOINT@@@Z @ 0x1800956B8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetCenter@CComponentTransform2D@@AEAAJMM@Z @ 0x18009551C (-SetCenter@CComponentTransform2D@@AEAAJMM@Z.c)
 */

__int64 __fastcall CComponentTransform2D::ProcessSetCenterPoint(
        CComponentTransform2D *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPONENTTRANSFORM2D_SETCENTERPOINT *a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx

  v3 = CComponentTransform2D::SetCenter(
         this,
         COERCE_DOUBLE((unsigned __int64)*((_DWORD *)a3 + 2)),
         COERCE_DOUBLE((unsigned __int64)*((_DWORD *)a3 + 3)));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x33u);
  return v4;
}
