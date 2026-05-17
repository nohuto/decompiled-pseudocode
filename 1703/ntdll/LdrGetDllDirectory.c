/*
 * XREFs of LdrGetDllDirectory @ 0x180082570
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlCopyUnicodeString @ 0x180044A30 (RtlCopyUnicodeString.c)
 */

__int64 __fastcall LdrGetDllDirectory(__int64 a1)
{
  unsigned int v2; // edx
  unsigned int v3; // eax
  unsigned int v4; // edi

  if ( (dword_180158674 & 4) == 0 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive(&qword_18015C3A8);
  v2 = *(unsigned __int16 *)(a1 + 2);
  v3 = (unsigned __int16)xmmword_18015BF60 + 2;
  if ( v2 >= v3 )
  {
    RtlCopyUnicodeString((unsigned __int16 *)a1, (unsigned __int16 *)&xmmword_18015BF60);
    v4 = 0;
  }
  else
  {
    *(_WORD *)a1 = v3;
    v4 = -1073741789;
    if ( (_WORD)v2 )
      **(_WORD **)(a1 + 8) = 0;
  }
  RtlReleaseSRWLockExclusive(&qword_18015C3A8);
  return v4;
}
