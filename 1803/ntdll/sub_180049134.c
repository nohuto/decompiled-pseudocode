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

__int64 __fastcall sub_180049134(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  int v4; // esi
  unsigned __int64 v5; // rdx
  unsigned __int64 *v6; // r8
  __int64 v7; // r9
  int v8; // eax
  int v10; // ebx
  __int64 *v11; // rdi

  v4 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D2A8, a2, a3, a4);
  v8 = dword_18015CFFC;
  if ( dword_18015CFFC )
  {
LABEL_2:
    dword_18015CFFC = v8 + 1;
  }
  else
  {
    v10 = 0;
    v11 = (__int64 *)&off_180110EF8;
    while ( 1 )
    {
      v4 = RtlLockModuleSection(*v11, v5, v6, v7);
      if ( v4 < 0 )
        break;
      ++v10;
      ++v11;
      if ( v10 )
      {
        v8 = dword_18015CFFC;
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&qword_18015D2A8);
  return (unsigned int)v4;
}
