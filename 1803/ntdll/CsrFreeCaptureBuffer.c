/*
 * XREFs of CsrFreeCaptureBuffer @ 0x18005CF60
 * Callers:
 *     sub_18005CEA8 @ 0x18005CEA8 (sub_18005CEA8.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall CsrFreeCaptureBuffer(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( !byte_18015C298 )
    return RtlFreeHeap(qword_18015CAF0, 0, BaseAddress);
  return result;
}
