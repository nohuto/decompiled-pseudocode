/*
 * XREFs of RtlpComputeExePath @ 0x18007E330
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputePath @ 0x18004CA08 (RtlpComputePath.c)
 */

_WORD *__fastcall RtlpComputeExePath(__int64 a1)
{
  unsigned __int64 EnvironmentVersion; // rbx
  unsigned int v2; // edx
  _DWORD *v3; // rcx
  _WORD *result; // rax

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( a1 )
  {
    v2 = 3;
    v3 = &unk_180118C50;
  }
  else
  {
    v2 = 4;
    v3 = &unk_180118C30;
  }
  result = RtlpComputePath(v3, v2, 0LL, 0);
  if ( result )
  {
    *((_QWORD *)result + 11) = EnvironmentVersion;
    *((_BYTE *)result + 100) = 0;
  }
  return result;
}
