/*
 * XREFs of RtlpInitializeMap @ 0x1800F41B4
 * Callers:
 *     RtlpInitializeLeakDetection @ 0x1800F4114 (RtlpInitializeLeakDetection.c)
 *     RtlpSetBlockInfo @ 0x1800F48DC (RtlpSetBlockInfo.c)
 * Callees:
 *     memset @ 0x1800A6C80 (memset.c)
 */

void *__fastcall RtlpInitializeMap(_QWORD *a1, _QWORD *a2)
{
  void *result; // rax

  result = memset(a1, 0, 0x840uLL);
  a1[263] = a2;
  if ( a2 )
  {
    result = (void *)(*a2 >> 8);
    *a1 = result;
  }
  return result;
}
