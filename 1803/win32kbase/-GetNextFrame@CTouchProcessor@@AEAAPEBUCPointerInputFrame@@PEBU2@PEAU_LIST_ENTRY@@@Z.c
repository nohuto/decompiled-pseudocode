/*
 * XREFs of ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0113F28
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C010D250 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 *     ?DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0110D50 (-DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 *     ?DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0110DF0 (-DispatchFramePostDelayZoneProcessingAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0110F30 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z @ 0x1C011DA20 (-SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z.c)
 * Callees:
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C010D890 (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _LIST_ENTRY **__fastcall CTouchProcessor::GetNextFrame(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        struct _LIST_ENTRY *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct _LIST_ENTRY *v8; // rax

  v7 = 0LL;
  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
  v8 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 2);
  if ( v8 && v8 != a3 )
    return &v8[-1].Blink;
  return (struct _LIST_ENTRY **)v7;
}
