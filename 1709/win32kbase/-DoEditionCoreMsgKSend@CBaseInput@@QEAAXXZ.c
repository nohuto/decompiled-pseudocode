/*
 * XREFs of ?DoEditionCoreMsgKSend@CBaseInput@@QEAAXXZ @ 0x1C0118FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBaseInput::DoEditionCoreMsgKSend(HANDLE *this)
{
  ZwSetEvent(this[95], 0LL);
}
