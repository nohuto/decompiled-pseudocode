/*
 * XREFs of sub_180080944 @ 0x180080944
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 *     TpCallbackSendPendingAlpcMessage @ 0x1801084F0 (TpCallbackSendPendingAlpcMessage.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     ZwAlpcSendWaitReceivePort @ 0x18009BBF0 (ZwAlpcSendWaitReceivePort.c)
 */

__int64 __fastcall sub_180080944(__int64 a1)
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
