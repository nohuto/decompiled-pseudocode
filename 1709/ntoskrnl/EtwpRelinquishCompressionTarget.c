/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x140281C04
 * Callers:
 *     EtwpFreeCompression @ 0x1401292C0 (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x140280E6C (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x1402813E0 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x1402815F4 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x1400E078C (EtwpEnqueueAvailableBuffer.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

void __fastcall EtwpRelinquishCompressionTarget(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 2312) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 2312) + 16LL) = (*(__int64 (**)(void))(a1 + 40))();
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 2312), 5u);
    *(_QWORD *)(a1 + 2312) = 0LL;
  }
}
