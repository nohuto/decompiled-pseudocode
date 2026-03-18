/*
 * XREFs of EtwpRotateCompressionTarget @ 0x140281C54
 * Callers:
 *     EtwpCompressBuffer @ 0x140280ED4 (EtwpCompressBuffer.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x140281CC4 (EtwpRotateCompressionTargetIfNeeded.c)
 * Callees:
 *     EtwpDequeueFreeBuffer @ 0x1400E0608 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1400E078C (EtwpEnqueueAvailableBuffer.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

volatile signed __int32 *__fastcall EtwpRotateCompressionTarget(__int64 a1)
{
  volatile signed __int32 *v1; // rdi
  volatile signed __int32 *result; // rax

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 2312) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 2312) + 16LL) = (*(__int64 (**)(void))(a1 + 40))();
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 2312), 5u);
  }
  result = (volatile signed __int32 *)*(unsigned int *)(a1 + 2328);
  if ( (_DWORD)result )
  {
    result = EtwpDequeueFreeBuffer(a1);
    v1 = result;
  }
  *(_QWORD *)(a1 + 2312) = v1;
  return result;
}
