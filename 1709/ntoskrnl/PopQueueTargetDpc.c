/*
 * XREFs of PopQueueTargetDpc @ 0x14008ECA4
 * Callers:
 *     PopExecuteOnTargetProcessors @ 0x1401173B0 (PopExecuteOnTargetProcessors.c)
 *     PopExecuteProcessorCallback @ 0x14011B930 (PopExecuteProcessorCallback.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KiEnumerateNextProcessorNumber @ 0x14008FD70 (KiEnumerateNextProcessorNumber.c)
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 */

BOOLEAN __fastcall PopQueueTargetDpc(__int64 a1, __int64 a2)
{
  int v3; // eax
  struct _KDPC *v4; // r11
  int v5; // ecx
  unsigned __int16 v7; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int8 v8; // [rsp+3Ah] [rbp+12h]

  v3 = KiEnumerateNextProcessorNumber(&v7, *(_QWORD *)(a2 + 32));
  if ( v3 < 0 )
  {
    LOWORD(v5) = v7;
  }
  else
  {
    v5 = KiProcessorNumberToIndexMappingTable[64 * v7 + v8];
    v3 = 0;
  }
  if ( v3 < 0 )
    return KeSetEvent(*(PRKEVENT *)(a2 + 24), 0, 0);
  v4->TargetInfoAsUlong = 787;
  v4->DeferredRoutine = (PKDEFERRED_ROUTINE)PopExecuteProcessorCallback;
  v4->DeferredContext = (PVOID)a2;
  v4->DpcData = 0LL;
  v4->ProcessorHistory = 0LL;
  if ( !v4->DpcData )
    v4->Number = v5 + 1280;
  return KeInsertQueueDpc(v4, 0LL, 0LL);
}
