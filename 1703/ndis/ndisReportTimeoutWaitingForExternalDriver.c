/*
 * XREFs of ndisReportTimeoutWaitingForExternalDriver @ 0x1C00F0274
 * Callers:
 *     ndisFindSomeoneToBlame @ 0x1C00F0134 (ndisFindSomeoneToBlame.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C00505FC (ndisBugCheckEx.c)
 *     ndisLiveBugCheck @ 0x1C0050918 (ndisLiveBugCheck.c)
 *     ndisMLiveBugCheck @ 0x1C00509AC (ndisMLiveBugCheck.c)
 *     ndisGetMiniportFromObject @ 0x1C00B56D4 (ndisGetMiniportFromObject.c)
 */

PBOOLEAN __fastcall ndisReportTimeoutWaitingForExternalDriver(__int64 a1, __int64 a2)
{
  __int64 MiniportFromObject; // rax
  __int64 v3; // r9
  ULONG_PTR v4; // r10
  __int64 v5; // rcx
  PBOOLEAN result; // rax

  MiniportFromObject = ndisGetMiniportFromObject(*(_QWORD *)(a2 + 16));
  v5 = MiniportFromObject;
  if ( MiniportFromObject
    && *(_QWORD *)(MiniportFromObject + 4488)
    && *(_DWORD *)(*(_QWORD *)(MiniportFromObject + 3784) + 904LL) == 1
    && !ndisWatchdogForceBugCheckForWDI )
  {
    ndisBugCheckEx(0x25uLL, (unsigned int)v3, v4, *(_QWORD *)(v4 + 40));
  }
  result = KdDebuggerNotPresent;
  if ( (_BYTE)KdDebuggerNotPresent )
  {
    if ( !v5 || (_DWORD)v3 == 34 )
      return (PBOOLEAN)ndisLiveBugCheck(v5, v3, v4, *(_QWORD *)(v4 + 40));
    else
      return (PBOOLEAN)ndisMLiveBugCheck(v5, 37LL, v3, v4, *(_QWORD *)(v4 + 40));
  }
  return result;
}
