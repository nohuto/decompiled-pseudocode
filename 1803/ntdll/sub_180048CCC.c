/*
 * XREFs of sub_180048CCC @ 0x180048CCC
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x180049020 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180048D60 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x180048E10 (RtlLockModuleSection.c)
 */

__int64 sub_180048CCC()
{
  NTSTATUS v0; // esi
  int v1; // eax
  __int64 v3; // rbx
  PVOID *v4; // rdi
  PVOID *v5; // rdi

  v0 = 0;
  RtlAcquireSRWLockExclusive(&stru_18015D2A0);
  v1 = dword_18015CFF8;
  if ( dword_18015CFF8 )
  {
LABEL_2:
    dword_18015CFF8 = v1 + 1;
  }
  else
  {
    v3 = 0LL;
    v4 = (PVOID *)off_180110CA0;
    while ( 1 )
    {
      v0 = RtlLockModuleSection(*v4);
      if ( v0 < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      ++v4;
      if ( (unsigned int)v3 >= 4 )
      {
        v1 = dword_18015CFF8;
        goto LABEL_2;
      }
    }
    if ( (_DWORD)v3 )
    {
      v5 = (PVOID *)&off_180110CA0[v3];
      do
      {
        RtlUnlockModuleSection(*--v5);
        LODWORD(v3) = v3 - 1;
      }
      while ( (_DWORD)v3 );
    }
  }
  RtlReleaseSRWLockExclusive(&stru_18015D2A0);
  return (unsigned int)v0;
}
