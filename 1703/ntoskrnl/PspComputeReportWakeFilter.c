/*
 * XREFs of PspComputeReportWakeFilter @ 0x140560E2C
 * Callers:
 *     PspFreezeJobTree @ 0x14055F98C (PspFreezeJobTree.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140560A90 (PspAllocateAndQueryNotificationChannel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspComputeReportWakeFilter(_DWORD *a1, __int64 a2, _QWORD *a3, char a4)
{
  __int64 result; // rax

  *(_QWORD *)a2 = *a3;
  if ( a4 )
  {
    *(_DWORD *)a2 &= ~a1[238];
    *(_DWORD *)(a2 + 4) &= ~a1[239];
  }
  *(_DWORD *)(a2 + 4) &= a1[240];
  result = (unsigned int)~*(_DWORD *)(a2 + 4);
  a1[240] &= result;
  return result;
}
