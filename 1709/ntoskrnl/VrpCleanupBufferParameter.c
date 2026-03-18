/*
 * XREFs of VrpCleanupBufferParameter @ 0x1406A3B04
 * Callers:
 *     VrpPostEnumerateKey @ 0x1406A5E80 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x1406A6A5C (VrpPostQueryKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpCleanupBufferParameter(char a1, PVOID *a2)
{
  if ( a1 == 1 && *a2 )
  {
    ExFreePoolWithTag(*a2, 0x67655256u);
    *a2 = 0LL;
  }
  return 0LL;
}
