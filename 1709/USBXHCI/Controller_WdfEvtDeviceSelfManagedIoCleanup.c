/*
 * XREFs of Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C005A3E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     XilCommonBuffer_ReleaseBuffer @ 0x1C000FE78 (XilCommonBuffer_ReleaseBuffer.c)
 *     Controller_ReleaseWdfPowerReferenceForDebugger @ 0x1C0012058 (Controller_ReleaseWdfPowerReferenceForDebugger.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 *     Controller_UpdateSqmDatapoints @ 0x1C00598D8 (Controller_UpdateSqmDatapoints.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceSelfManagedIoCleanup(__int64 a1)
{
  _QWORD *v2; // rbx
  void *v3; // rcx
  _DWORD *v4; // rdx

  v2 = *(_QWORD **)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      a1,
                      off_1C004E408)
                  + 8);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(v2[9], 5u, 4u, 0x39u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, a1);
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
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v2[1]);
}
