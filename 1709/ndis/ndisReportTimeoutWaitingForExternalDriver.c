/*
 * XREFs of ndisReportTimeoutWaitingForExternalDriver @ 0x1C00F99B4
 * Callers:
 *     ndisFindSomeoneToBlame @ 0x1C00F9814 (ndisFindSomeoneToBlame.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     ndisLiveBugCheck @ 0x1C004F4E8 (ndisLiveBugCheck.c)
 *     ndisMLiveBugCheck @ 0x1C004F57C (ndisMLiveBugCheck.c)
 *     ndisGetMiniportFromObject @ 0x1C00B55AC (ndisGetMiniportFromObject.c)
 */

PBOOLEAN __fastcall ndisReportTimeoutWaitingForExternalDriver(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rbp
  __int64 MiniportFromObject; // rax
  bool v5; // di
  __int64 v6; // rsi
  __int64 v7; // rcx
  PBOOLEAN result; // rax
  ULONG VerifierFlags; // [rsp+50h] [rbp+8h] BYREF

  v2 = (unsigned int)BugCheckParameter2;
  MiniportFromObject = ndisGetMiniportFromObject(*(_QWORD *)(BugCheckParameter3 + 16));
  v5 = 0;
  v6 = MiniportFromObject;
  if ( MiniportFromObject
    && *(_QWORD *)(MiniportFromObject + 4488)
    && *(_DWORD *)(*(_QWORD *)(MiniportFromObject + 3784) + 904LL) == 1 )
  {
    v5 = ndisWatchdogForceBugCheckForWDI == 0;
  }
  if ( MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) )
  {
    VerifierFlags = 0;
    if ( MmIsVerifierEnabled(&VerifierFlags) < 0 || (VerifierFlags & 0x400000) == 0 )
      v5 = 1;
  }
  if ( v5 )
    ndisBugCheckEx(0x25uLL, v2, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 40));
  result = KdDebuggerNotPresent;
  if ( (_BYTE)KdDebuggerNotPresent )
  {
    if ( !v6 || (_DWORD)v2 == 34 )
      return (PBOOLEAN)ndisLiveBugCheck(v7, v2, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 40));
    else
      return (PBOOLEAN)ndisMLiveBugCheck(v6, 37LL, v2, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 40));
  }
  return result;
}
