/*
 * XREFs of EditionIsPointerQueuedMessageCoalescable @ 0x1C01A67B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C01A5310 (-IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z.c)
 */

__int64 __fastcall EditionIsPointerQueuedMessageCoalescable(
        __int64 a1,
        struct tagQMSG *a2,
        int a3,
        int a4,
        struct tagQMSG *a5,
        unsigned int a6)
{
  return IsPointerQueuedMessageCoalescable(
           *(struct tagQ **)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) + 408LL),
           a2,
           a3,
           a4,
           a5,
           a6);
}
