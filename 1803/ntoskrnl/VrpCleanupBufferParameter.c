/*
 * XREFs of VrpCleanupBufferParameter @ 0x140708174
 * Callers:
 *     VrpPostEnumerateKey @ 0x14070A514 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x14070B0E8 (VrpPostQueryKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
