/*
 * XREFs of sub_1800491C0 @ 0x1800491C0
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x180049220 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x1800831A0 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180048D60 (RtlUnlockModuleSection.c)
 */

void sub_1800491C0()
{
  PVOID *v0; // rbx
  __int64 v1; // rdi

  RtlAcquireSRWLockExclusive(&stru_18015D2A0);
  if ( !--dword_18015CFF8 )
  {
    v0 = (PVOID *)off_180110CA0;
    v1 = 4LL;
    do
    {
      RtlUnlockModuleSection(*v0++);
      --v1;
    }
    while ( v1 );
  }
  RtlReleaseSRWLockExclusive(&stru_18015D2A0);
}
