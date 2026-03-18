/*
 * XREFs of ?OnCoreMsgKSendNotification@CBaseInput@@AEAAJXZ @ 0x1C011A420
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
