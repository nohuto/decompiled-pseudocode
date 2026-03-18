/*
 * XREFs of EtwpRotateCompressionTargetIfNeeded @ 0x140258264
 * Callers:
 *     EtwpCompressBuffer @ 0x140257484 (EtwpCompressBuffer.c)
 *     EtwpCompressPendingBuffers @ 0x14025780C (EtwpCompressPendingBuffers.c)
 * Callees:
 *     EtwpRotateCompressionTarget @ 0x1402581F4 (EtwpRotateCompressionTarget.c)
 */

volatile signed __int32 *__fastcall EtwpRotateCompressionTargetIfNeeded(__int64 a1)
{
  __int64 v1; // rax
  volatile signed __int32 *result; // rax

  v1 = *(_QWORD *)(a1 + 1000);
  if ( !v1 )
    return EtwpRotateCompressionTarget(a1);
  result = (volatile signed __int32 *)*(unsigned int *)(v1 + 8);
  if ( (unsigned int)(*(_DWORD *)(a1 + 4) - (_DWORD)result) <= 0x148 )
    return EtwpRotateCompressionTarget(a1);
  return result;
}
