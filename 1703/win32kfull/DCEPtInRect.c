/*
 * XREFs of DCEPtInRect @ 0x1C00F35E0
 * Callers:
 *     NtUserLogicalToPhysicalPoint @ 0x1C00F3280 (NtUserLogicalToPhysicalPoint.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1C00F3410 (NtUserPhysicalToLogicalPoint.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C0138C50 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C01DE050 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     QueryInertiaInfo @ 0x1C020A788 (QueryInertiaInfo.c)
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
