/*
 * XREFs of RtlpHpLfhOwnerInitialize @ 0x14029A814
 * Callers:
 *     RtlpHpLfhBucketActivate @ 0x140299370 (RtlpHpLfhBucketActivate.c)
 *     RtlpHpLfhBucketInitialize @ 0x140299ACC (RtlpHpLfhBucketInitialize.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140299C08 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

_BYTE *__fastcall RtlpHpLfhOwnerInitialize(_BYTE *a1, char a2, int a3)
{
  _BYTE *result; // rax

  memset(a1, 0, 0x38uLL);
  if ( a3 == -1 )
    *a1 = 1;
  else
    a1[2] = a3;
  a1[1] = a2;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 4) = a1 + 24;
  *((_QWORD *)a1 + 3) = a1 + 24;
  result = a1 + 40;
  *((_QWORD *)a1 + 6) = a1 + 40;
  *((_QWORD *)a1 + 5) = a1 + 40;
  return result;
}
