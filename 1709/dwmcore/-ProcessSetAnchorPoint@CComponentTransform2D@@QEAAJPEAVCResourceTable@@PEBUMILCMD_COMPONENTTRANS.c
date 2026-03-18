/*
 * XREFs of ?ProcessSetAnchorPoint@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETANCHORPOINT@@@Z @ 0x180095660
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetAnchor@CComponentTransform2D@@AEAAJMM@Z @ 0x18009557C (-SetAnchor@CComponentTransform2D@@AEAAJMM@Z.c)
 */

__int64 __fastcall CComponentTransform2D::ProcessSetAnchorPoint(
        CComponentTransform2D *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPONENTTRANSFORM2D_SETANCHORPOINT *a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx

  v3 = CComponentTransform2D::SetAnchor(
         this,
         COERCE_DOUBLE((unsigned __int64)*((_DWORD *)a3 + 2)),
         COERCE_DOUBLE((unsigned __int64)*((_DWORD *)a3 + 3)));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x42u);
  return v4;
}
