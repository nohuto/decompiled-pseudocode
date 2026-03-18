/*
 * XREFs of ?OnInputSinkChange@CVisual@@QEAAXXZ @ 0x180087DB8
 * Callers:
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x18004B708 (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180087E0C (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x180084B5C (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 */

void __fastcall CVisual::OnInputSinkChange(CVisual *this)
{
  __int64 InputHandle; // rax
  struct CVisual *v2; // r11

  InputHandle = CVisual::GetInputHandle(this);
  *((_BYTE *)v2 + 488) = *((_BYTE *)v2 + 488) & 0xFB | (InputHandle != 0 ? 4 : 0) | 1;
  CVisual::PropagateFlags(v2, 1, 0, 0, 0, 0, 0, 0);
}
