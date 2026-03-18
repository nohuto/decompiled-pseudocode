/*
 * XREFs of IoSetIoCompletionEx @ 0x140086380
 * Callers:
 *     PspSendReliableJobNotification @ 0x14052DF4C (PspSendReliableJobNotification.c)
 *     NtSetIoCompletionEx @ 0x14052EAB0 (NtSetIoCompletionEx.c)
 *     PspNotificationPacketCallback @ 0x140576080 (PspNotificationPacketCallback.c)
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x1400863C0 (IoSetIoCompletionEx2.c)
 */

__int64 __fastcall IoSetIoCompletionEx(int a1, int a2, int a3, int a4, __int64 a5, char a6, __int64 a7)
{
  return IoSetIoCompletionEx2(a1, a2, a3, a4, a5, a6, a7, 0);
}
