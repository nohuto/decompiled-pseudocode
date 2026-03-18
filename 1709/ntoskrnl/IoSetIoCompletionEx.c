/*
 * XREFs of IoSetIoCompletionEx @ 0x1400765E0
 * Callers:
 *     NtSetIoCompletionEx @ 0x1404A65E0 (NtSetIoCompletionEx.c)
 *     PspNotificationPacketCallback @ 0x14050CDB0 (PspNotificationPacketCallback.c)
 *     PspSendReliableJobNotification @ 0x140512674 (PspSendReliableJobNotification.c)
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x1400759E0 (IoSetIoCompletionEx2.c)
 */

__int64 __fastcall IoSetIoCompletionEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7)
{
  return IoSetIoCompletionEx2(a1, a2, a3, a4, a5, a6, a7, 0);
}
