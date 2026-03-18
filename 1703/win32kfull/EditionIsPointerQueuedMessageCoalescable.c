/*
 * XREFs of EditionIsPointerQueuedMessageCoalescable @ 0x1C019AB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionIsPointerQueuedMessageCoalescable(
        __int64 a1,
        struct tagQMSG *a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  return IsPointerQueuedMessageCoalescable(
           *(struct tagQ **)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) + 384LL),
           a2,
           a3,
           a4,
           a5,
           a6);
}
