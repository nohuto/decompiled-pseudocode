/*
 * XREFs of PepUpdateCoordinatedStateWorker @ 0x1C002F110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C00239FC (ProcLibTraceCoordinatedIdleStates.c)
 */

__int64 __fastcall PepUpdateCoordinatedStateWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // eax
  int v6; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 64);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v2 + 208),
    0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0015DA0,
    0LL);
  byte_1C0016310 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0015DA0);
  *(_BYTE *)(a2 + 40) = 1;
  v4 = ((__int64 (__fastcall *)(__int64))qword_1C0015FD0)(a2);
  if ( v4 >= 0 )
  {
    if ( a2 == qword_1C00162D8 )
      ProcLibTraceCoordinatedIdleStates(0);
  }
  else
  {
    v6 = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x19u,
      (__int64)&WPP_3f118529186a374ec3cb77f2488483e6_Traceguids,
      v6);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           *(_QWORD *)(v2 + 208));
}
