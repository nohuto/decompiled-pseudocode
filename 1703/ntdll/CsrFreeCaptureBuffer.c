/*
 * XREFs of CsrFreeCaptureBuffer @ 0x18000AFB0
 * Callers:
 *     sub_18000AEF4 @ 0x18000AEF4 (sub_18000AEF4.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall CsrFreeCaptureBuffer(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( !byte_18015B26C )
    return RtlFreeHeap(qword_18015BA90, 0, BaseAddress);
  return result;
}
