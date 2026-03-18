/*
 * XREFs of PspComputeReportWakeFilter @ 0x140596B3C
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x14050E064 (PspAllocateAndQueryNotificationChannel.c)
 *     PspFreezeJobTree @ 0x1405128B8 (PspFreezeJobTree.c)
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
