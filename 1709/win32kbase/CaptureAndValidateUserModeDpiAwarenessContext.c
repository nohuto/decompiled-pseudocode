/*
 * XREFs of CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0048C48
 * Callers:
 *     GreGetStockObject @ 0x1C0048B90 (GreGetStockObject.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0059B98 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreGetDeviceCaps @ 0x1C005CBF0 (GreGetDeviceCaps.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C0060E38 (W32SetCurrentThreadDpiAwarenessContext.c)
 * Callees:
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C0070E10 (IsValidKernelDpiAwarenessContext.c)
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
