/*
 * XREFs of sub_1800839B4 @ 0x1800839B4
 * Callers:
 *     RtlLockMemoryZone @ 0x180083910 (RtlLockMemoryZone.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlLockModuleSection @ 0x180083C60 (RtlLockModuleSection.c)
 *     RtlUnlockModuleSection @ 0x180083D60 (RtlUnlockModuleSection.c)
 */

__int64 sub_1800839B4()
{
  NTSTATUS v0; // esi
  int v1; // eax
  int v3; // ebx
  PVOID *v4; // rdi

  v0 = 0;
  RtlAcquireSRWLockExclusive(&stru_18015C268);
  v1 = dword_18015BF8C;
  if ( dword_18015BF8C )
  {
LABEL_2:
    dword_18015BF8C = v1 + 1;
  }
  else
  {
    v3 = 0;
    v4 = (PVOID *)&off_180111098;
    while ( 1 )
    {
      v0 = RtlLockModuleSection(*v4);
      if ( v0 < 0 )
        break;
      ++v3;
      ++v4;
      if ( v3 )
      {
        v1 = dword_18015BF8C;
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&stru_18015C268);
  return (unsigned int)v0;
}
