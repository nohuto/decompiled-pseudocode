/*
 * XREFs of IopLiveDumpIsTracingEnabled @ 0x1401FBC50
 * Callers:
 *     IopLiveDumpTrace @ 0x1401FBCA8 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceBufferAllocation @ 0x1401FBCEC (IopLiveDumpTraceBufferAllocation.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x1401FBDC0 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x1401FBEAC (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1401FBFD8 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x1401FC080 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpTraceMirroringPhase0End @ 0x1401FC0E0 (IopLiveDumpTraceMirroringPhase0End.c)
 *     IopLiveDumpTraceMirroringPhase1End @ 0x1401FC138 (IopLiveDumpTraceMirroringPhase1End.c)
 *     IopLiveDumpTraceMirroringStart @ 0x1401FC190 (IopLiveDumpTraceMirroringStart.c)
 *     IopLiveDumpTraceRemovePagesCallbackFailure @ 0x1401FC1EC (IopLiveDumpTraceRemovePagesCallbackFailure.c)
 *     IopLiveDumpTraceSystemQuiesceEnd @ 0x1401FC280 (IopLiveDumpTraceSystemQuiesceEnd.c)
 *     IopLiveDumpTraceSystemQuiesceStart @ 0x1401FC2D8 (IopLiveDumpTraceSystemQuiesceStart.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x14042ACD0 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IoCaptureLiveDump @ 0x1406B9C84 (IoCaptureLiveDump.c)
 * Callees:
 *     <none>
 */

bool IopLiveDumpIsTracingEnabled()
{
  return IopLiveDumpEtwRegHandle && IopLiveDumpEtwEnabled != 0;
}
