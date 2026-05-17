/*
 * XREFs of sub_180082E68 @ 0x180082E68
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x180082E30 (TpCallbackSendPendingAlpcMessage.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1800A6410 (ZwAlpcSendWaitReceivePort.c)
 */

__int64 __fastcall sub_180082E68(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = ZwAlpcSendWaitReceivePort(
         *(_QWORD *)(a1 + 216),
         *(unsigned int *)(a1 + 224),
         *(_QWORD *)(a1 + 208),
         0LL,
         0LL,
         0LL,
         0LL,
         0LL);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(a1 + 208));
  return v2;
}
