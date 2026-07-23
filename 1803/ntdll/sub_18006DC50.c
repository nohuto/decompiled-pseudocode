/*
 * XREFs of sub_18006DC50 @ 0x18006DC50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006DF50 @ 0x18006DF50 (sub_18006DF50.c)
 *     sub_18006E5A4 @ 0x18006E5A4 (sub_18006E5A4.c)
 */

__int64 sub_18006DC50()
{
  int v0; // eax
  ULONG_PTR EnvironmentVersion; // rbx
  __int64 result; // rax

  v0 = 1;
  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( (dword_18015CFE4 & 1) == 0 )
  {
    if ( (dword_18015CFE4 & 0x10000) != 0 )
    {
      v0 = 0;
    }
    else
    {
      v0 = dword_18015D284;
      if ( !dword_18015D284 )
        v0 = sub_18006E5A4((PUNICODE_STRING)&stru_1801107A0);
    }
  }
  result = sub_18006DF50((char *)&unk_1801156E0 + 16 * v0, 4LL, 0LL);
  if ( result )
  {
    *(_QWORD *)(result + 88) = EnvironmentVersion;
    *(_BYTE *)(result + 100) = 0;
  }
  return result;
}
