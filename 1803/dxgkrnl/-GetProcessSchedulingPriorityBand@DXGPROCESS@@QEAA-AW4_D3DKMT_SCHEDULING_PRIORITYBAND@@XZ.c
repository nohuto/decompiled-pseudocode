/*
 * XREFs of ?GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA?AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ @ 0x1C01B7094
 * Callers:
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C01B88D0 (DxgkGetProcessSchedulingPriorityBand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGPROCESS::GetProcessSchedulingPriorityBand(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  __int64 v3; // rax

  v1 = *(_DWORD *)(a1 + 328);
  result = 1LL;
  if ( v1 != 1 )
  {
    if ( (v1 & 0xFFFFFFFD) != 0 )
    {
      v3 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v3 + 24) = 4090LL;
      WdLogEvent5_WdAssertion(v3);
      return 3LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
