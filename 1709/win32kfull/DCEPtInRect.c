/*
 * XREFs of DCEPtInRect @ 0x1C0101130
 * Callers:
 *     NtUserLogicalToPhysicalPoint @ 0x1C0100DA0 (NtUserLogicalToPhysicalPoint.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1C0100F40 (NtUserPhysicalToLogicalPoint.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C013F110 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C01EA150 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     QueryInertiaInfo @ 0x1C020D930 (QueryInertiaInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DCEPtInRect(_DWORD *a1, unsigned __int64 a2)
{
  _BOOL8 result; // rax
  unsigned __int64 v3; // rdx

  result = 0LL;
  if ( a1 && (int)a2 >= *a1 && (int)a2 <= a1[2] )
  {
    v3 = HIDWORD(a2);
    if ( (int)v3 >= a1[1] )
      return (int)v3 <= a1[3];
  }
  return result;
}
