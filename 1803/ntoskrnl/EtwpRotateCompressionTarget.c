/*
 * XREFs of EtwpRotateCompressionTarget @ 0x1402B3EEC
 * Callers:
 *     EtwpCompressBuffer @ 0x1402B3178 (EtwpCompressBuffer.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x1402B3F5C (EtwpRotateCompressionTargetIfNeeded.c)
 * Callees:
 *     EtwpDequeueFreeBuffer @ 0x1400D42C8 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1400D4438 (EtwpEnqueueAvailableBuffer.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

volatile signed __int32 *__fastcall EtwpRotateCompressionTarget(__int64 a1)
{
  volatile signed __int32 *v1; // rdi
  volatile signed __int32 *result; // rax

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 1168) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 16LL) = (*(__int64 (**)(void))(a1 + 40))();
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1168), 5u);
  }
  result = (volatile signed __int32 *)*(unsigned int *)(a1 + 1184);
  if ( (_DWORD)result )
  {
    result = EtwpDequeueFreeBuffer(a1);
    v1 = result;
  }
  *(_QWORD *)(a1 + 1168) = v1;
  return result;
}
