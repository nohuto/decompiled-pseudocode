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

__int64 __fastcall sub_180048CCC(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  int v4; // esi
  int v5; // eax
  __int64 v7; // rbx
  __int64 (__fastcall **v8)(); // rdi
  __int64 (__fastcall **v9)(); // rdi

  v4 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D2A0, a2, a3, a4);
  v5 = dword_18015CFF8;
  if ( dword_18015CFF8 )
  {
LABEL_2:
    dword_18015CFF8 = v5 + 1;
  }
  else
  {
    v7 = 0LL;
    v8 = off_180110CA0;
    while ( 1 )
    {
      v4 = RtlLockModuleSection(*v8);
      if ( v4 < 0 )
        break;
      v7 = (unsigned int)(v7 + 1);
      ++v8;
      if ( (unsigned int)v7 >= 4 )
      {
        v5 = dword_18015CFF8;
        goto LABEL_2;
      }
    }
    if ( (_DWORD)v7 )
    {
      v9 = &off_180110CA0[v7];
      do
      {
        RtlUnlockModuleSection(*--v9);
        LODWORD(v7) = v7 - 1;
      }
      while ( (_DWORD)v7 );
    }
  }
  RtlReleaseSRWLockExclusive(&qword_18015D2A0);
  return (unsigned int)v4;
}
