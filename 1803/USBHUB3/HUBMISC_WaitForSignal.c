/*
 * XREFs of HUBMISC_WaitForSignal @ 0x1C002B484
 * Callers:
 *     HUBHTX_GetPortStatusForBootDevice @ 0x1C0005A10 (HUBHTX_GetPortStatusForBootDevice.c)
 *     HUBFDO_EvtDeviceD0Entry @ 0x1C000AB90 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBFDO_EvtDeviceD0Exit @ 0x1C000ADF0 (HUBFDO_EvtDeviceD0Exit.c)
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x1C000B140 (HUBFDO_EvtDeviceCleanupCallback.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x1C00145C0 (HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess @ 0x1C00148E0 (HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0014A80 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceD0Entry @ 0x1C0015B80 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0015D60 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1C0016110 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBPDO_EvtDeviceDisableWakeAtBus @ 0x1C0017590 (HUBPDO_EvtDeviceDisableWakeAtBus.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C0066140 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0066B40 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x1C0067280 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBPDO_EvtDeviceResourceRequirementsQuery @ 0x1C006C830 (HUBPDO_EvtDeviceResourceRequirementsQuery.c)
 * Callees:
 *     WPP_RECORDER_SF_dqqs @ 0x1C002724C (WPP_RECORDER_SF_dqqs.c)
 *     WPP_RECORDER_SF_qsqd @ 0x1C00273E4 (WPP_RECORDER_SF_qsqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall HUBMISC_WaitForSignal(PVOID Object, const char *a2, const void *a3)
{
  int v6; // esi
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS result; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int Timeouta; // [rsp+20h] [rbp-48h]
  int Timeout; // [rsp+20h] [rbp-48h]
  union _LARGE_INTEGER v17; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  v17.QuadPart = -600000000LL;
  while ( 1 )
  {
    result = KeWaitForSingleObject(Object, Executive, 0, 0, &v17);
    if ( result != 258 )
      break;
    DbgPrint(
      "\nUSBHUB3 Watchdog: Thread 0x%p has waited %d minutes for %s to complete for WDF object 0x%p\n",
      KeGetCurrentThread(),
      ++v6,
      a2,
      a3);
    WPP_RECORDER_SF_qsqd(*(_QWORD *)(v7 + 64), v8, v9, v10, Timeouta);
  }
  if ( result < 0 )
    return WPP_RECORDER_SF_dqqs(
             *(_QWORD *)(v7 + 64),
             v12,
             v13,
             v14,
             Timeout,
             result,
             (char)KeGetCurrentThread(),
             (char)a3,
             a2);
  return result;
}
