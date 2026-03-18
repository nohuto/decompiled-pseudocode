/*
 * XREFs of RtlpHpHeapHandleError @ 0x14029367C
 * Callers:
 *     RtlpLogHeapFailure @ 0x1402932C0 (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140130B00 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x1402931AC (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x14029364C (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x14029370C (RtlpLocateRelatedBlocks.c)
 */

void __fastcall __noreturn RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  RtlpHeapHandleError();
}
