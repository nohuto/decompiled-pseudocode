/*
 * XREFs of sub_180083C00 @ 0x180083C00
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x180083A50 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180089060 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180083D60 (RtlUnlockModuleSection.c)
 */

signed __int64 sub_180083C00()
{
  __int64 (__fastcall **v1)(); // rbx
  __int64 v2; // rdi

  RtlAcquireSRWLockExclusive(&qword_18015C260);
  if ( !--dword_18015BF88 )
  {
    v1 = off_180110F60;
    v2 = 4LL;
    do
    {
      RtlUnlockModuleSection(*v1++);
      --v2;
    }
    while ( v2 );
  }
  return RtlReleaseSRWLockExclusive(&qword_18015C260);
}
