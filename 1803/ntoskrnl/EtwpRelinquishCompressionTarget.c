/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x1402B3E9C
 * Callers:
 *     EtwpFreeCompression @ 0x140005FF4 (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1402B3110 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x1402B3670 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x1402B3888 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x1400D4438 (EtwpEnqueueAvailableBuffer.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

void __fastcall EtwpRelinquishCompressionTarget(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1168) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 16LL) = (*(__int64 (**)(void))(a1 + 40))();
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1168), 5u);
    *(_QWORD *)(a1 + 1168) = 0LL;
  }
}
