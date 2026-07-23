/*
 * XREFs of sub_180050870 @ 0x180050870
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004D108 @ 0x18004D108 (sub_18004D108.c)
 */

int *__fastcall sub_180050870(__int64 a1)
{
  ULONG_PTR EnvironmentVersion; // rbx
  unsigned int v2; // edx
  _DWORD *v3; // rcx
  int *result; // rax

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( a1 )
  {
    v2 = 3;
    v3 = &unk_1801147A0;
  }
  else
  {
    v2 = 4;
    v3 = dword_180114780;
  }
  result = sub_18004D108(v3, v2, 0LL, 0);
  if ( result )
  {
    *((_QWORD *)result + 11) = EnvironmentVersion;
    *((_BYTE *)result + 100) = 0;
  }
  return result;
}
