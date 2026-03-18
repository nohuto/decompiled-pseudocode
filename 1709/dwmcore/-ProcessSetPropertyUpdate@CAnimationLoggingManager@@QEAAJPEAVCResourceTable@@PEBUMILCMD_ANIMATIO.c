/*
 * XREFs of ?ProcessSetPropertyUpdate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETPROPERTYUPDATE@@@Z @ 0x180157E5C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@URampPair@CoordMap@@$0A@@@QEAAJPEFBURampPair@CoordMap@@I@Z @ 0x1801A521C (-AddMultipleAndSet@-$DynArray@URampPair@CoordMap@@$0A@@@QEAAJPEFBURampPair@CoordMap@@I@Z.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessSetPropertyUpdate(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATIONLOGGINGMANAGER_SETPROPERTYUPDATE *a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx

  v3 = DynArray<CoordMap::RampPair,0>::AddMultipleAndSet((char *)this + 56);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x53u);
  else
    return 0;
  return v4;
}
