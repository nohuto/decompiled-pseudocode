/*
 * XREFs of ?GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA?AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ @ 0x1C01A1E54
 * Callers:
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C01A2790 (DxgkGetProcessSchedulingPriorityBand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGPROCESS::GetProcessSchedulingPriorityBand(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rax

  v4 = *(unsigned int *)(a1 + 276);
  result = 1LL;
  if ( (_DWORD)v4 != 1 )
  {
    if ( (v4 & 0xFFFFFFFD) != 0 )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1, v4, a3, a4);
      *(_QWORD *)(v6 + 24) = 3723LL;
      WdLogEvent5_WdAssertion(v6);
      return 3LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
