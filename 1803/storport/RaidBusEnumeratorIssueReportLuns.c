/*
 * XREFs of RaidBusEnumeratorIssueReportLuns @ 0x1C00139F4
 * Callers:
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0013810 (RaidBusEnumeratorGetLunListFromTarget.c)
 * Callees:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0013BF0 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C00144CC (RaidBusEnumeratorBuildReportLuns.c)
 *     RaidBusEnumeratorAllocateReportLunsResources @ 0x1C001460C (RaidBusEnumeratorAllocateReportLunsResources.c)
 */

__int64 __fastcall RaidBusEnumeratorIssueReportLuns(
        __int64 a1,
        unsigned int a2,
        int a3,
        _DWORD *a4,
        unsigned __int8 **a5)
{
  __int64 v5; // rbp
  __int64 result; // rax
  unsigned int v11; // edi
  __int64 v12; // rbx
  unsigned __int8 *v13; // r8
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v5 = a1 + 64;
  result = RaidBusEnumeratorAllocateReportLunsResources(a1, (unsigned int)*a4, a1 + 64);
  v11 = 0;
  if ( (int)result >= 0 )
  {
    RaidBusEnumeratorBuildReportLuns(a1, a2, v5, (unsigned int)*a4);
    v12 = v14;
    result = RaidBusEnumeratorIssueSynchronousRequest(a1, a3, v5, v14, (char)&v14);
    if ( (int)result >= 0 )
    {
      if ( *(_BYTE *)(*(_QWORD *)a1 + 402LL) == 1 )
        v13 = *(unsigned __int8 **)(v12 + 64);
      else
        v13 = *(unsigned __int8 **)(v12 + 24);
      if ( (unsigned int)*a4 < (unsigned __int64)(v13[3] | ((v13[2] | ((v13[1] | (*v13 << 8)) << 8)) << 8)) + 8 )
      {
        v11 = -1073741789;
        *a4 = (v13[3] | ((v13[2] | ((v13[1] | (*v13 << 8)) << 8)) << 8)) + 8;
      }
      result = v11;
      *a5 = v13;
    }
    else if ( (_DWORD)result == -1073741789 )
    {
      return 3221225486LL;
    }
  }
  return result;
}
