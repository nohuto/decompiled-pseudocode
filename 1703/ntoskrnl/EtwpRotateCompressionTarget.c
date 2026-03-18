/*
 * XREFs of EtwpRotateCompressionTarget @ 0x1402581F4
 * Callers:
 *     EtwpCompressBuffer @ 0x140257484 (EtwpCompressBuffer.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x140258264 (EtwpRotateCompressionTargetIfNeeded.c)
 * Callees:
 *     EtwpDequeueFreeBuffer @ 0x140087AC0 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x140087C44 (EtwpEnqueueAvailableBuffer.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

volatile signed __int32 *__fastcall EtwpRotateCompressionTarget(__int64 a1)
{
  volatile signed __int32 *v1; // rdi
  volatile signed __int32 *result; // rax

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 1000) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 1000) + 16LL) = (*(__int64 (**)(void))(a1 + 40))();
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1000), 5u);
  }
  result = (volatile signed __int32 *)*(unsigned int *)(a1 + 1016);
  if ( (_DWORD)result )
  {
    result = EtwpDequeueFreeBuffer(a1);
    v1 = result;
  }
  *(_QWORD *)(a1 + 1000) = v1;
  return result;
}
