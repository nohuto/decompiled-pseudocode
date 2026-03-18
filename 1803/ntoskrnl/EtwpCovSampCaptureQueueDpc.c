/*
 * XREFs of EtwpCovSampCaptureQueueDpc @ 0x1402B5240
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     RtlpInterlockedFlushSList @ 0x1401B2C50 (RtlpInterlockedFlushSList.c)
 *     EtwpCovSampPushListSList @ 0x1402B58A0 (EtwpCovSampPushListSList.c)
 */

void __fastcall EtwpCovSampCaptureQueueDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  PSLIST_ENTRY v5; // rax
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = RtlpInterlockedFlushSList((PSLIST_HEADER)DeferredContext + 44);
  if ( v5 )
  {
    if ( !EtwpCovSampPushListSList(DeferredContext + 720, v5, &v6) )
      KeSetEvent((PRKEVENT)(DeferredContext + 736), *((_DWORD *)DeferredContext + 233), 0);
  }
}
