/*
 * XREFs of VrpCleanupBufferParameter @ 0x14067952C
 * Callers:
 *     VrpPostEnumerateKey @ 0x14067B6B4 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x14067C12C (VrpPostQueryKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
