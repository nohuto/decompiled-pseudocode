/*
 * XREFs of ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x180050F30
 * Callers:
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x180028860 (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18004D868 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18004FF28 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 */

void __fastcall CVisual::OnInputSinkChange(CVisual *this)
{
  __int64 v1; // r11

  if ( CVisual::GetInputHandle(this) )
    *(_QWORD *)(v1 + 408) = 0LL;
  CVisual::PropagateFlags(v1, 0x10u, 0);
}
