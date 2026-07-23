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
  unsigned __int32 v2; // ebx

  v2 = ZwAlpcSendWaitReceivePort(
         *(HANDLE *)(a1 + 216),
         *(_DWORD *)(a1 + 224),
         *(PPORT_MESSAGE *)(a1 + 208),
         0LL,
         0LL,
         0LL,
         0LL,
         0LL);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(a1 + 208));
  return v2;
}
