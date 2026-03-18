/*
 * XREFs of ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x180054CD0
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18004F894 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800912CC (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@.c)
 * Callees:
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x180054C68 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 */

void __fastcall CVisual::OnInputSinkChange(CVisual *this)
{
  __int64 v1; // r11

  if ( CVisual::GetInputHandle(this) )
    *(_QWORD *)(v1 + 400) = 0LL;
  CVisual::PropagateFlags(v1, 0x10u, 0);
}
