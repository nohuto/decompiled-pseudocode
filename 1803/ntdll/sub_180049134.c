/*
 * XREFs of sub_180049134 @ 0x180049134
 * Callers:
 *     RtlLockMemoryZone @ 0x180049090 (RtlLockMemoryZone.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x180048D60 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x180048E10 (RtlLockModuleSection.c)
 */

__int64 sub_180049134()
{
  NTSTATUS v0; // esi
  int v1; // eax
  int v3; // ebx
  PVOID *v4; // rdi

  v0 = 0;
  RtlAcquireSRWLockExclusive(&stru_18015D2A8);
  v1 = dword_18015CFFC;
  if ( dword_18015CFFC )
  {
LABEL_2:
    dword_18015CFFC = v1 + 1;
  }
  else
  {
    v3 = 0;
    v4 = (PVOID *)&off_180110EF8;
    while ( 1 )
    {
      v0 = RtlLockModuleSection(*v4);
      if ( v0 < 0 )
        break;
      ++v3;
      ++v4;
      if ( v3 )
      {
        v1 = dword_18015CFFC;
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&stru_18015D2A8);
  return (unsigned int)v0;
}
