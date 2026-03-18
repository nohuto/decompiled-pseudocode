/*
 * XREFs of ObSetRefTraceInformation @ 0x14075A420
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     ObpStartRuntimeStackTrace @ 0x14075B108 (ObpStartRuntimeStackTrace.c)
 *     ObpStopRuntimeStackTrace @ 0x14075B53C (ObpStopRuntimeStackTrace.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ObSetRefTraceInformation(_BYTE *a1, unsigned int a2)
{
  __int64 v2; // rdi
  KPROCESSOR_MODE PreviousMode; // si
  _BYTE *v5; // rcx

  v2 = a2;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    return 3221225506LL;
  if ( (unsigned int)v2 < 0x28 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = &a1[v2];
    if ( (unsigned __int64)&a1[v2] > 0x7FFFFFFF0000LL || v5 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( *a1 )
    return ObpStartRuntimeStackTrace(a1);
  else
    return ObpStopRuntimeStackTrace(v5);
}
