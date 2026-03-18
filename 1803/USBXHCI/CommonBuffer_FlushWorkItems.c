/*
 * XREFs of CommonBuffer_FlushWorkItems @ 0x1C0006708
 * Callers:
 *     Controller_InitiateRecovery @ 0x1C00083F8 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C00086D4 (Controller_InternalReset.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000C380 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall CommonBuffer_FlushWorkItems(_QWORD *a1)
{
  void *i; // rcx
  NTSTATUS result; // eax
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = -600000000LL;
  for ( i = a1 + 3; ; i = a1 + 3 )
  {
    result = KeWaitForSingleObject(i, Executive, 0, 0, &Timeout);
    if ( result != 258 )
      break;
    WPP_RECORDER_SF_(*(_QWORD *)(*a1 + 72LL), 4u, 8u, 0x10u, (__int64)&WPP_2b4f898d1d553c000803289ecd93c2f6_Traceguids);
  }
  if ( a1[9] )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 3056))(WdfDriverGlobals);
  return result;
}
