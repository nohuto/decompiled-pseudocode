/*
 * XREFs of ObGetProcessHandleCount @ 0x140441B10
 * Callers:
 *     EtwTraceAppStateChange @ 0x1404E977C (EtwTraceAppStateChange.c)
 *     NtQueryInformationProcess @ 0x1404EA100 (NtQueryInformationProcess.c)
 *     EtwpPsProvTraceProcess @ 0x140595350 (EtwpPsProvTraceProcess.c)
 *     EtwpProcessPerfCtrsRundown @ 0x140710D94 (EtwpProcessPerfCtrsRundown.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExHandleTableQuery @ 0x140441B68 (ExHandleTableQuery.c)
 *     ObReferenceProcessHandleTable @ 0x140517F9C (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall ObGetProcessHandleCount(struct _EX_RUNDOWN_REF *a1, _DWORD *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = ObReferenceProcessHandleTable(a1);
  result = 0LL;
  if ( v4 )
  {
    ExHandleTableQuery(v4, &v6, a2);
    ExReleaseRundownProtection(a1 + 95);
    return v6;
  }
  else if ( a2 )
  {
    *a2 = 0;
  }
  return result;
}
