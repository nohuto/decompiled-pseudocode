/*
 * XREFs of IopLiveDumpIsTracingEnabled @ 0x140238928
 * Callers:
 *     IopLiveDumpTrace @ 0x140238980 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x1402389C4 (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x140238A98 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x140238B84 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x140238CAC (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x140238D54 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x140238DB4 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x140238E0C (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x140238E64 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x140238EC0 (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x140238F54 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x140238FAC (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140481804 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IoCaptureLiveDump @ 0x14071EC24 (IoCaptureLiveDump.c)
 * Callees:
 *     <none>
 */

bool IopLiveDumpIsTracingEnabled()
{
  return IopLiveDumpEtwRegHandle && IopLiveDumpEtwEnabled != 0;
}
