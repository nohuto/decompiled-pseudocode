/*
 * XREFs of ?OnCoreMsgKSendNotification@CBaseInput@@AEAAJXZ @ 0x1C0123350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseInput::OnCoreMsgKSendNotification(CBaseInput *this)
{
  if ( (int)IsEditionCoreMsgKSendSupported(this) >= 0 )
    EditionCoreMsgKSend();
  return 0LL;
}
