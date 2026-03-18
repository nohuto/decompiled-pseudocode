/*
 * XREFs of DpiGetVirtualizationFlags @ 0x1C01DFC40
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01DC910 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C00248BC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C01E4A50 (DpiIovGetVirtualizationFlags.c)
 */

__int64 __fastcall DpiGetVirtualizationFlags(
        void *a1,
        int a2,
        _QWORD *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        _QWORD *a7)
{
  int VirtualizationFlags; // ebx
  __int64 v12; // rax

  if ( bTracingEnabled )
    VgpuTrace(1, 0, a1, L"DpiGetVirtualizationFlags", 0LL);
  if ( a4 >= 8 && a3 && a6 >= 4 && a5 )
  {
    VirtualizationFlags = DpiIovGetVirtualizationFlags(*((_QWORD *)a1 + 8) + (a2 != 0 ? 5136LL : 5104LL), *a3);
    if ( VirtualizationFlags >= 0 )
      *a7 = 4LL;
  }
  else
  {
    VirtualizationFlags = -1073741789;
    v12 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v12 + 24) = -1073741789LL;
    WdLogEvent5_WdError(v12);
  }
  if ( bTracingEnabled )
    VgpuTrace(0, VirtualizationFlags, a1, L"DpiGetVirtualizationFlags", 0LL);
  return (unsigned int)VirtualizationFlags;
}
