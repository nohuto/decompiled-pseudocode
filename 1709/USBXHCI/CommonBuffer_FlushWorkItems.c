/*
 * XREFs of CommonBuffer_FlushWorkItems @ 0x1C0006FEC
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0001C10 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_InitiateRecovery @ 0x1C0011130 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C0011414 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
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
    WPP_RECORDER_SF_(*(_QWORD *)(*a1 + 72LL), 4u, 8u, 0x10u, (__int64)&WPP_7d05ae32274238640bbafad5b1877db3_Traceguids);
  }
  if ( a1[9] )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 3056))(WdfDriverGlobals);
  return result;
}
