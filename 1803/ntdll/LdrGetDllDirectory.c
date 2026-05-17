/*
 * XREFs of LdrGetDllDirectory @ 0x18007E280
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyUnicodeString @ 0x18001F9C0 (RtlCopyUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrGetDllDirectory(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v5; // edx
  unsigned int v6; // eax
  unsigned int v7; // edi

  if ( (dword_1801596D4 & 4) == 0 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D3E0, a2, a3, a4);
  v5 = *(unsigned __int16 *)(a1 + 2);
  v6 = (unsigned __int16)xmmword_18015CFE8 + 2;
  if ( v5 >= v6 )
  {
    RtlCopyUnicodeString((unsigned __int16 *)a1, (unsigned __int16 *)&xmmword_18015CFE8);
    v7 = 0;
  }
  else
  {
    *(_WORD *)a1 = v6;
    v7 = -1073741789;
    if ( (_WORD)v5 )
      **(_WORD **)(a1 + 8) = 0;
  }
  RtlReleaseSRWLockExclusive(&qword_18015D3E0);
  return v7;
}
