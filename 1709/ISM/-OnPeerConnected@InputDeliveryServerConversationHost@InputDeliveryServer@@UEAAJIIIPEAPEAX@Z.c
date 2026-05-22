/*
 * XREFs of ?OnPeerConnected@InputDeliveryServerConversationHost@InputDeliveryServer@@UEAAJIIIPEAPEAX@Z @ 0x180081590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputDeliveryServer::InputDeliveryServerConversationHost::OnPeerConnected(
        InputDeliveryServer **this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        void **a5)
{
  *a5 = this;
  return InputDeliveryServer::OnAppThreadConnected(this[2], a2, a3);
}
