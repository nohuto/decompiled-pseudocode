/*
 * XREFs of Controller_WdfEvtDeviceReleaseHardware @ 0x1C005A200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Controller_IsSecureDevice @ 0x1C0011780 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 *     XilDeviceSlot_ReleaseHardware @ 0x1C0016CBC (XilDeviceSlot_ReleaseHardware.c)
 *     Command_ReleaseHardware @ 0x1C0055550 (Command_ReleaseHardware.c)
 *     Interrupter_ReleaseInterrupter @ 0x1C005CC04 (Interrupter_ReleaseInterrupter.c)
 *     Register_UnmapSecureMmio @ 0x1C005DD6C (Register_UnmapSecureMmio.c)
 *     RootHub_ReleaseHardware @ 0x1C005E770 (RootHub_ReleaseHardware.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceReleaseHardware(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  unsigned int i; // edi
  void *v5; // rcx
  __int64 v6; // rbx

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C004E408)
                 + 8);
  WPP_RECORDER_SF_q(*(_QWORD *)(v2 + 72), 4u, 4u, 0x30u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v2 + 304));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v2 + 408));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v2 + 584));
  RootHub_ReleaseHardware(*(_QWORD *)(v2 + 152));
  Command_ReleaseHardware(*(_QWORD *)(v2 + 144));
  XilDeviceSlot_ReleaseHardware(*(_QWORD *)(v2 + 136));
  v3 = *(_QWORD *)(v2 + 128);
  if ( *(_QWORD *)(v3 + 32) )
  {
    for ( i = 0; i < *(_DWORD *)(v3 + 24); ++i )
      Interrupter_ReleaseInterrupter(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL * i));
    ExFreePoolWithTag(*(PVOID *)(v3 + 32), 0x49434858u);
    *(_QWORD *)(v3 + 32) = 0LL;
  }
  v5 = *(void **)(v3 + 56);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x49434858u);
    *(_QWORD *)(v3 + 56) = 0LL;
  }
  v6 = *(_QWORD *)(v2 + 88);
  if ( *(_QWORD *)(v6 + 24) )
  {
    if ( Controller_IsSecureDevice(*(_QWORD *)(v6 + 8)) )
      Register_UnmapSecureMmio(v6);
    MmUnmapIoSpace(*(PVOID *)(v6 + 24), *(unsigned int *)(v6 + 20));
    *(_BYTE *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 40) = 0LL;
    *(_QWORD *)(v6 + 48) = 0LL;
    *(_QWORD *)(v6 + 56) = 0LL;
    *(_QWORD *)(v6 + 64) = 0LL;
    *(_QWORD *)(v6 + 72) = 0LL;
  }
  if ( !*(_BYTE *)(v2 + 16) )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(
      WdfDriverGlobals,
      *(_QWORD *)(v2 + 8));
  return 0LL;
}
