/*
 * XREFs of ?OnItemMessage@InputQueueConversationHost@InputQueue@@UEAAJIIPEBX0I@Z @ 0x1800829C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputQueue::InputQueueConversationHost::OnItemMessage(
        void ***this,
        __int64 a2,
        __int64 a3,
        const char *a4,
        struct InputQueueMessage *a5,
        unsigned int a6)
{
  return InputQueue::OnMessage(this[2], a5, a6, a4);
}
