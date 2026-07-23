/*
 * XREFs of sub_1800506D0 @ 0x1800506D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004D108 @ 0x18004D108 (sub_18004D108.c)
 *     sub_18005021C @ 0x18005021C (sub_18005021C.c)
 */

int *sub_1800506D0()
{
  int v0; // eax
  ULONG_PTR EnvironmentVersion; // rbx
  int *result; // rax

  v0 = 1;
  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( (dword_18015BF5C & 1) == 0 )
  {
    if ( (dword_18015BF5C & 0x10000) != 0 )
    {
      v0 = 0;
    }
    else
    {
      v0 = dword_18015C244;
      if ( !dword_18015C244 )
        v0 = sub_18005021C((PUNICODE_STRING)&stru_1801103F0, 0, &dword_18015C244);
    }
  }
  result = sub_18004D108(&dword_180114780[4 * v0], 4u, 0LL, 0);
  if ( result )
  {
    *((_QWORD *)result + 11) = EnvironmentVersion;
    *((_BYTE *)result + 100) = 0;
  }
  return result;
}
