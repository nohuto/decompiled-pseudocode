/*
 * XREFs of sub_180083C00 @ 0x180083C00
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x180083A50 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180089060 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180083D60 (RtlUnlockModuleSection.c)
 */

void sub_180083C00()
{
  PVOID *v0; // rbx
  __int64 v1; // rdi

  RtlAcquireSRWLockExclusive(&stru_18015C260);
  if ( !--dword_18015BF88 )
  {
    v0 = (PVOID *)off_180110F60;
    v1 = 4LL;
    do
    {
      RtlUnlockModuleSection(*v0++);
      --v1;
    }
    while ( v1 );
  }
  RtlReleaseSRWLockExclusive(&stru_18015C260);
}
