/*
 * XREFs of PepUpdateCoordinatedStateWorker @ 0x1C0023BA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C00226AC (ProcLibTraceCoordinatedIdleStates.c)
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
    qword_1C00113F0,
    0LL);
  byte_1C0011960 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00113F0);
  *(_BYTE *)(a2 + 40) = 1;
  v4 = ((__int64 (__fastcall *)(__int64))qword_1C0011620)(a2);
  if ( v4 >= 0 )
  {
    if ( a2 == qword_1C0011928 )
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
      (__int64)&WPP_3f0965cfccb23b2033a01e6dc5919532_Traceguids,
      v6);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           *(_QWORD *)(v2 + 208));
}
