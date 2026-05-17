/*
 * XREFs of sub_1800491C0 @ 0x1800491C0
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x180049220 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x1800831A0 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180048D60 (RtlUnlockModuleSection.c)
 */

signed __int64 __fastcall sub_1800491C0(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  __int64 *v8; // rbx
  __int64 v9; // rdi

  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D2A0, a2, a3, a4);
  if ( !--dword_18015CFF8 )
  {
    v8 = (__int64 *)off_180110CA0;
    v9 = 4LL;
    do
    {
      RtlUnlockModuleSection(*v8++, v4, v5, v6);
      --v9;
    }
    while ( v9 );
  }
  return RtlReleaseSRWLockExclusive(&qword_18015D2A0);
}
