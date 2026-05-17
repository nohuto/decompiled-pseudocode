/*
 * XREFs of RtlpHpLfhOwnerInitialize @ 0x1800074F4
 * Callers:
 *     RtlpHpLfhBucketActivate @ 0x180007258 (RtlpHpLfhBucketActivate.c)
 *     RtlpHpLfhBucketInitialize @ 0x180007490 (RtlpHpLfhBucketInitialize.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007F8DC (RtlpHpLfhBucketUpdateAffinityMapping.c)
 * Callees:
 *     memset @ 0x1800A6C80 (memset.c)
 */

_BYTE *__fastcall RtlpHpLfhOwnerInitialize(_BYTE *a1, char a2, int a3)
{
  _BYTE *result; // rax

  memset(a1, 0, 0x38uLL);
  if ( a3 == -1 )
    *a1 |= 1u;
  else
    a1[2] = a3;
  *((_QWORD *)a1 + 2) = 0LL;
  a1[1] = a2;
  *((_QWORD *)a1 + 4) = a1 + 24;
  *((_QWORD *)a1 + 3) = a1 + 24;
  result = a1 + 40;
  *((_QWORD *)a1 + 6) = a1 + 40;
  *((_QWORD *)a1 + 5) = a1 + 40;
  return result;
}
