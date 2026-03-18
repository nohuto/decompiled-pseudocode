/*
 * XREFs of ?SetReceiveBroadcastMessages@CChannel@@UEAAXH@Z @ 0x180082960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CChannel::SetReceiveBroadcastMessages(CChannel *this, int a2)
{
  *((_BYTE *)this + 210) = a2 != 0;
}
