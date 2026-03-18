/*
 * XREFs of DpiGetVirtualizationFlags @ 0x1C01C5E14
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01C31F0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DpiIovGetVirtualizationFlags @ 0x1C01CA6A0 (DpiIovGetVirtualizationFlags.c)
 */

__int64 __fastcall DpiGetVirtualizationFlags(
        void *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6)
{
  int VirtualizationFlags; // ebx
  __int64 v7; // rax

  if ( a3 >= 8 && a2 && a5 >= 4 && a4 )
  {
    VirtualizationFlags = DpiIovGetVirtualizationFlags(a1);
    if ( VirtualizationFlags >= 0 )
      *a6 = 4LL;
  }
  else
  {
    VirtualizationFlags = -1073741789;
    v7 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v7 + 24) = -1073741789LL;
    WdLogEvent5_WdError(v7);
  }
  return (unsigned int)VirtualizationFlags;
}
