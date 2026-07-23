/*
 * XREFs of sub_18006DCE0 @ 0x18006DCE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006DF50 @ 0x18006DF50 (sub_18006DF50.c)
 */

__int64 __fastcall sub_18006DCE0(__int64 a1)
{
  bool v2; // cf
  void *v3; // rcx
  ULONG_PTR EnvironmentVersion; // rbx
  __int64 result; // rax

  v2 = a1 != 0;
  v3 = &unk_180115700;
  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( !a1 )
    v3 = &unk_1801156E0;
  result = sub_18006DF50(v3, 4 - (unsigned int)v2, 0LL);
  if ( result )
  {
    *(_QWORD *)(result + 88) = EnvironmentVersion;
    *(_BYTE *)(result + 100) = 0;
  }
  return result;
}
