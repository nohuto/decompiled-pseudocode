/*
 * XREFs of CsrFreeCaptureBuffer @ 0x18005CF60
 * Callers:
 *     sub_18005CEA8 @ 0x18005CEA8 (sub_18005CEA8.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 */

__int64 __fastcall CsrFreeCaptureBuffer(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( !byte_18015C298 )
    return RtlFreeHeap(qword_18015CAF0, 0, a1);
  return result;
}
