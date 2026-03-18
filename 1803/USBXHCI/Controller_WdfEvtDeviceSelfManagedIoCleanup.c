/*
 * XREFs of Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C0057450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 *     XilCommonBuffer_ReleaseBuffer @ 0x1C0006D00 (XilCommonBuffer_ReleaseBuffer.c)
 *     Controller_ReleaseWdfPowerReferenceForDebugger @ 0x1C00093D0 (Controller_ReleaseWdfPowerReferenceForDebugger.c)
 *     Controller_UpdateSqmDatapoints @ 0x1C00568CC (Controller_UpdateSqmDatapoints.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceSelfManagedIoCleanup(__int64 a1)
{
  _QWORD *v2; // rbx
  void *v3; // rcx
  _DWORD *v4; // rdx

  v2 = *(_QWORD **)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WdfDriverGlobals,
                      a1,
                      off_1C004B408)
                  + 8);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(v2[9], 5u, 4u, 0x39u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, a1);
  v3 = (void *)v2[54];
  if ( v3 )
  {
    PoUnregisterPowerSettingCallback(v3);
    v2[54] = 0LL;
  }
  Controller_ReleaseWdfPowerReferenceForDebugger((__int64)v2);
  v4 = (_DWORD *)v2[48];
  if ( v4 )
  {
    XilCommonBuffer_ReleaseBuffer(v2[15], v4);
    v2[48] = 0LL;
  }
  Controller_UpdateSqmDatapoints((__int64)v2);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1664))(WdfDriverGlobals, v2[1]);
}
