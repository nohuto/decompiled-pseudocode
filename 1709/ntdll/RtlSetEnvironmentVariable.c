/*
 * XREFs of RtlSetEnvironmentVariable @ 0x18004D250
 * Callers:
 *     RtlpWow64ThunkEnvironment32To64 @ 0x180052F34 (RtlpWow64ThunkEnvironment32To64.c)
 *     RtlpResetDriveEnvironment @ 0x18007BCCC (RtlpResetDriveEnvironment.c)
 * Callees:
 *     RtlSetEnvironmentVar @ 0x18004B530 (RtlSetEnvironmentVar.c)
 */

__int64 __fastcall RtlSetEnvironmentVariable(unsigned __int64 *a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  _WORD *v3; // r9
  unsigned __int64 v4; // rax

  v3 = 0LL;
  if ( a3 )
    v4 = (unsigned __int64)*a3 >> 1;
  else
    v4 = 0LL;
  if ( a3 )
    v3 = (_WORD *)*((_QWORD *)a3 + 1);
  return RtlSetEnvironmentVar(a1, *((_WORD **)a2 + 1), (unsigned __int64)*a2 >> 1, v3, v4);
}
