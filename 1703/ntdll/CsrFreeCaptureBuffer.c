/*
 * XREFs of CsrFreeCaptureBuffer @ 0x18000AFB0
 * Callers:
 *     sub_18000AEF4 @ 0x18000AEF4 (sub_18000AEF4.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

__int64 CsrFreeCaptureBuffer()
{
  __int64 result; // rax

  if ( !byte_18015B26C )
    return RtlFreeHeap(qword_18015BA90, 0LL);
  return result;
}
