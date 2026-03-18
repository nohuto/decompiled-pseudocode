/*
 * XREFs of CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002B678
 * Callers:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreGetDeviceCaps @ 0x1C002A9C0 (GreGetDeviceCaps.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C002B280 (LogicalToPhysicalDPIPoint.c)
 *     GreGetStockObject @ 0x1C002B5C0 (GreGetStockObject.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C0071318 (W32SetCurrentThreadDpiAwarenessContext.c)
 * Callees:
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C00776F8 (IsValidKernelDpiAwarenessContext.c)
 */

void __fastcall CaptureAndValidateUserModeDpiAwarenessContext(__int64 a1)
{
  __int64 v1; // r9
  unsigned int *v2; // rdx
  unsigned int v3; // r10d
  unsigned int v4; // r8d

  v1 = a1;
  v2 = *(unsigned int **)(a1 + 352);
  v3 = 0;
  if ( v2[1] )
  {
    v4 = *v2;
    if ( !*v2 || (unsigned int)IsValidKernelDpiAwarenessContext(v4) )
      *(_DWORD *)(v1 + 340) = v4;
    else
      *v2 = v3;
    v2[1] = v3;
  }
}
