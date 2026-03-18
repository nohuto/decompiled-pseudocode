/*
 * XREFs of Controller_WdfEvtDeviceReleaseHardware @ 0x1C0057260
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 *     Controller_IsSecureDevice @ 0x1C0008AAC (Controller_IsSecureDevice.c)
 *     XilDeviceSlot_ReleaseHardware @ 0x1C000F860 (XilDeviceSlot_ReleaseHardware.c)
 *     Command_ReleaseHardware @ 0x1C0052410 (Command_ReleaseHardware.c)
 *     Interrupter_ReleaseInterrupter @ 0x1C0059F40 (Interrupter_ReleaseInterrupter.c)
 *     Register_UnmapSecureMmio @ 0x1C005B0E0 (Register_UnmapSecureMmio.c)
 *     RootHub_ReleaseHardware @ 0x1C005BAE8 (RootHub_ReleaseHardware.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceReleaseHardware(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // rcx
  unsigned int i; // edi
  void *v6; // rcx
  __int64 v7; // rbx
  void *v8; // r8

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C004B408)
                 + 8);
  WPP_RECORDER_SF_q(*(_QWORD *)(v2 + 72), 4u, 4u, 0x30u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v2 + 304));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v2 + 408));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3056))(
    WdfDriverGlobals,
    *(_QWORD *)(v2 + 600));
  RootHub_ReleaseHardware(*(_QWORD *)(v2 + 152));
  Command_ReleaseHardware(*(_QWORD *)(v2 + 144));
  XilDeviceSlot_ReleaseHardware(*(_QWORD *)(v2 + 136));
  v3 = *(_QWORD *)(v2 + 128);
  v4 = *(_QWORD **)(v3 + 32);
  if ( v4 )
  {
    for ( i = 0; i < *(_DWORD *)(v3 + 80); ++i )
    {
      v4 = *(_QWORD **)(v3 + 32);
      if ( v4[i] )
      {
        Interrupter_ReleaseInterrupter(v4[i]);
        v4 = *(_QWORD **)(v3 + 32);
      }
    }
    ExFreePoolWithTag(v4, 0x49434858u);
    *(_QWORD *)(v3 + 32) = 0LL;
  }
  v6 = *(void **)(v3 + 56);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x49434858u);
    *(_QWORD *)(v3 + 56) = 0LL;
  }
  v7 = *(_QWORD *)(v2 + 88);
  if ( *(_QWORD *)(v7 + 24) )
  {
    if ( Controller_IsSecureDevice(*(_QWORD *)(v7 + 8)) )
    {
      Register_UnmapSecureMmio(v7);
      v8 = *(void **)(v7 + 24);
    }
    MmUnmapIoSpace(v8, *(unsigned int *)(v7 + 20));
    *(_BYTE *)(v7 + 16) = 0;
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = 0LL;
    *(_QWORD *)(v7 + 40) = 0LL;
    *(_QWORD *)(v7 + 48) = 0LL;
    *(_QWORD *)(v7 + 56) = 0LL;
    *(_QWORD *)(v7 + 64) = 0LL;
    *(_QWORD *)(v7 + 72) = 0LL;
  }
  if ( !*(_BYTE *)(v2 + 16) )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1664))(
      WdfDriverGlobals,
      *(_QWORD *)(v2 + 8));
  return 0LL;
}
