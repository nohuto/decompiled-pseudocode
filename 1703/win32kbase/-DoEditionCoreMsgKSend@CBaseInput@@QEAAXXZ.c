/*
 * XREFs of ?DoEditionCoreMsgKSend@CBaseInput@@QEAAXXZ @ 0x1C011A370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBaseInput::DoEditionCoreMsgKSend(HANDLE *this)
{
  ZwSetEvent(this[66], 0LL);
}
