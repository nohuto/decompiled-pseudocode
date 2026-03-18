/*
 * XREFs of HUBFDO_EvtDeviceReleaseHardware @ 0x1C0067280
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq @ 0x1C000135C (McTemplateK0pq.c)
 *     McTemplateK0p @ 0x1C0006374 (McTemplateK0p.c)
 *     HUBSM_AddHsmEvent @ 0x1C0008DE0 (HUBSM_AddHsmEvent.c)
 *     HUBMISC_WaitForSignal @ 0x1C002B484 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     HUBCONNECTOR_UnMapHubPorts @ 0x1C006DB78 (HUBCONNECTOR_UnMapHubPorts.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceReleaseHardware(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  const void *v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rdx
  _QWORD *v7; // rax
  PWDF_DRIVER_GLOBALS v8; // rcx
  void *v9; // rcx
  int v11; // [rsp+20h] [rbp-18h]
  char v12; // [rsp+50h] [rbp+18h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B0C0);
  v2 = v1;
  _InterlockedAnd((volatile signed __int32 *)(v1 + 40), 0xFFFDFFFF);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p(
      LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink),
      &USBHUB3_ETW_EVENT_HUB_RELEASE_HARDWARE_START,
      0LL,
      *(_QWORD *)(v1 + 240));
  HUBCONNECTOR_UnMapHubPorts(v2);
  v12 = 0;
  (*(void (__fastcall **)(_QWORD, char *))(v2 + 552))(*(_QWORD *)(v2 + 240), &v12);
  KeResetEvent((PRKEVENT)(v2 + 1144));
  HUBSM_AddHsmEvent(v2, 2035LL);
  v3 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                       WdfDriverGlobals,
                       v2);
  HUBMISC_WaitForSignal((PVOID)(v2 + 1144), "Hub FDO PnpCallback", v3);
  v4 = *(_DWORD *)(v2 + 1168);
  (*(void (__fastcall **)(_QWORD, char *))(v2 + 560))(*(_QWORD *)(v2 + 240), &v12);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v5 + 32),
    0LL);
  v6 = *(_QWORD *)(v2 + 2424);
  if ( *(_QWORD *)(v6 + 8) != v2 + 2424 || (v7 = *(_QWORD **)(v2 + 2432), *v7 != v2 + 2424) )
    __fastfail(3u);
  v8 = WdfDriverGlobals;
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(v8, *(_QWORD *)(v5 + 32));
  v9 = *(void **)(v2 + 2544);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x68334855u);
  RtlInitUnicodeString((PUNICODE_STRING)(v2 + 2536), 0LL);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    v11 = v4;
    McTemplateK0pq(
      LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink),
      &USBHUB3_ETW_EVENT_HUB_RELEASE_HARDWARE_COMPLETE,
      0LL,
      *(_QWORD *)(v2 + 240),
      v11);
  }
  return v4;
}
