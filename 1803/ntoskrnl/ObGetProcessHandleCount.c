/*
 * XREFs of ObGetProcessHandleCount @ 0x14056588C
 * Callers:
 *     EtwpPsProvTraceProcess @ 0x1404F7F94 (EtwpPsProvTraceProcess.c)
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 *     EtwTraceAppStateChange @ 0x140510E74 (EtwTraceAppStateChange.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1407AF6FC (EtwpProcessPerfCtrsRundown.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ObReferenceProcessHandleTable @ 0x1404B7304 (ObReferenceProcessHandleTable.c)
 *     ExHandleTableQuery @ 0x1405658E4 (ExHandleTableQuery.c)
 */

__int64 __fastcall ObGetProcessHandleCount(struct _EX_RUNDOWN_REF *a1, _DWORD *a2)
{
  unsigned __int64 v4; // rcx
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
