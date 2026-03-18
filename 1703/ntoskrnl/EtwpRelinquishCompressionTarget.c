/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x1402581A4
 * Callers:
 *     EtwpFreeCompression @ 0x14001B67C (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x14025741C (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x140257980 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x140257B90 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x140087C44 (EtwpEnqueueAvailableBuffer.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

void __fastcall EtwpRelinquishCompressionTarget(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1000) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 1000) + 16LL) = (*(__int64 (**)(void))(a1 + 40))();
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1000), 5u);
    *(_QWORD *)(a1 + 1000) = 0LL;
  }
}
