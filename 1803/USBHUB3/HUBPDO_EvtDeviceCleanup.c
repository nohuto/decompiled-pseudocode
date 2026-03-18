/*
 * XREFs of HUBPDO_EvtDeviceCleanup @ 0x1C0016110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p @ 0x1C0006374 (McTemplateK0p.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C0011DE8 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     HUBMISC_WaitForSignal @ 0x1C002B484 (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x1C00354EC (HUBIDLE_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     HUBPDO_BillboardCleanup @ 0x1C006AC90 (HUBPDO_BillboardCleanup.c)
 */

NTSTATUS __fastcall HUBPDO_EvtDeviceCleanup(__int64 a1)
{
  __int64 v1; // rdi
  struct _KEVENT *v2; // r14
  __int64 v3; // rbp
  NTSTATUS v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  PVOID *v10; // rbx
  __int64 v11; // rsi
  NTSTATUS v12; // eax
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  void *v16; // rcx
  NTSTATUS result; // eax
  __int64 v18; // [rsp+28h] [rbp-30h]
  char v19; // [rsp+68h] [rbp+10h] BYREF
  __int64 v20; // [rsp+70h] [rbp+18h]

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B070);
  v2 = *(struct _KEVENT **)(v1 + 24);
  v3 = *(_QWORD *)&v2[1].Header.Lock;
  v20 = v3;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p(LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink), &USBHUB3_ETW_EVENT_DEVICE_CLEANUP_START, 0LL, v3);
  v4 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v1 + 424), "DRIPS SR Tag", File, 1u, 0x20u);
  if ( v4 < 0 )
    WPP_RECORDER_SF_d(
      (__int64)v2->Header.WaitListHead.Flink[89].Blink,
      2u,
      5u,
      0x53u,
      (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
      v4);
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(v1 + 424), "DRIPS SR Tag", 0x20u);
  v7 = *(void **)(v1 + 408);
  if ( v7 )
  {
    PoUnregisterPowerSettingCallback(v7);
    v8 = WdfFunctions_01015;
    *(_QWORD *)(v1 + 408) = 0LL;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(v8 + 1632))(WdfDriverGlobals, v1);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v9,
      "DRIPS SR Tag",
      6238LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  wil_details_FeaturePropertyCache_ReportUsageToService(0LL, 3LL, v5, v6);
  v10 = (PVOID *)(v1 + 272);
  v11 = 5LL;
  do
  {
    if ( *v10 )
    {
      v12 = PoUnregisterPowerSettingCallback(*v10);
      if ( v12 < 0 )
      {
        LODWORD(v18) = v12;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v1 + 24) + 8LL),
          2u,
          5u,
          0x52u,
          (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
          v18);
      }
      *v10 = 0LL;
    }
    ++v10;
    --v11;
  }
  while ( v11 );
  v13 = v20;
  if ( (*(_DWORD *)(v1 + 32) & 0x1000) != 0 )
    HUBIDLE_AddEvent(v1 + 72, 6006LL, 0LL);
  v19 = 0;
  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)&v2->Header.Lock + 552LL))(
    *(_QWORD *)(*(_QWORD *)&v2->Header.Lock + 240LL),
    &v19);
  KeClearEvent(v2 + 66);
  HUBSM_AddEvent((__int64)&v2[21], 4063);
  HUBMISC_WaitForSignal(&v2[66]);
  HUBPDO_BillboardCleanup(v2);
  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)&v2->Header.Lock + 560LL))(
    *(_QWORD *)(*(_QWORD *)&v2->Header.Lock + 240LL),
    &v19);
  v14 = WdfFunctions_01015;
  v2->Header.WaitListHead.Blink = 0LL;
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, struct _KEVENT *))(v14 + 1632))(WdfDriverGlobals, v2);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
    WdfDriverGlobals,
    v15,
    "DSM PDO Tag",
    6307LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  v16 = *(void **)(v1 + 56);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0x64334855u);
    *(_QWORD *)(v1 + 56) = 0LL;
  }
  result = (NTSTATUS)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    return McTemplateK0p((__int64)v16, &USBHUB3_ETW_EVENT_DEVICE_CLEANUP_COMPLETE, 0LL, v13);
  return result;
}
