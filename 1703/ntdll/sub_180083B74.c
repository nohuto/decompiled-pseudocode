/*
 * XREFs of sub_180083B74 @ 0x180083B74
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x1800838A0 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlLockModuleSection @ 0x180083C60 (RtlLockModuleSection.c)
 *     RtlUnlockModuleSection @ 0x180083D60 (RtlUnlockModuleSection.c)
 */

__int64 sub_180083B74()
{
  int v0; // esi
  int v1; // eax
  __int64 v3; // rbx
  __int64 (__fastcall **v4)(); // rdi
  __int64 (__fastcall **v5)(); // rdi

  v0 = 0;
  RtlAcquireSRWLockExclusive(&qword_18015C260);
  v1 = dword_18015BF88;
  if ( dword_18015BF88 )
  {
LABEL_2:
    dword_18015BF88 = v1 + 1;
  }
  else
  {
    v3 = 0LL;
    v4 = off_180110F60;
    while ( 1 )
    {
      v0 = RtlLockModuleSection(*v4);
      if ( v0 < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      ++v4;
      if ( (unsigned int)v3 >= 4 )
      {
        v1 = dword_18015BF88;
        goto LABEL_2;
      }
    }
    if ( (_DWORD)v3 )
    {
      v5 = &off_180110F60[v3];
      do
      {
        RtlUnlockModuleSection(*--v5);
        LODWORD(v3) = v3 - 1;
      }
      while ( (_DWORD)v3 );
    }
  }
  RtlReleaseSRWLockExclusive(&qword_18015C260);
  return (unsigned int)v0;
}
