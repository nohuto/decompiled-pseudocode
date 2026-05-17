/*
 * XREFs of TppCompleteThreadData @ 0x18000F478
 * Callers:
 *     TppSimplepExecuteCallback @ 0x18000B180 (TppSimplepExecuteCallback.c)
 *     RtlpTpWaitCallback @ 0x18000B370 (RtlpTpWaitCallback.c)
 *     RtlpTpTimerCallback @ 0x18000BD60 (RtlpTpTimerCallback.c)
 *     TppExecuteWaitCallback @ 0x18000CB00 (TppExecuteWaitCallback.c)
 *     TppIopExecuteCallback @ 0x18000CC70 (TppIopExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x18000F4D0 (TppTimerpExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x180010840 (RtlpTpWorkCallback.c)
 *     TppJobpExecuteCallback @ 0x180013140 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x18010B2C0 (RtlpTpIoCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall TppCompleteThreadData(__int64 a1)
{
  if ( a1 )
  {
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= *(_QWORD *)(a1 + 24) )
      *(_QWORD *)(a1 + 24) = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - *(_QWORD *)(a1 + 24);
  }
}
