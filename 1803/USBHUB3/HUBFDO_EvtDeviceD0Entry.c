/*
 * XREFs of HUBFDO_EvtDeviceD0Entry @ 0x1C000AB90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     McTemplateK0pqqh @ 0x1C000A71C (McTemplateK0pqqh.c)
 *     McTemplateK0pqq @ 0x1C000A7AC (McTemplateK0pqq.c)
 *     HUBMISC_WaitForSignal @ 0x1C002B484 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceD0Entry(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  PVOID *v4; // rbx
  struct _DEVICE_OBJECT *v5; // rax
  NTSTATUS v6; // eax
  NTSTATUS v7; // ebx
  char v8; // r14
  int v9; // eax
  __int64 Blink_low; // rcx
  int v11; // ebp
  __int64 v12; // rcx
  void *v13; // rbx
  int v14; // edx
  PVOID *Handle; // [rsp+20h] [rbp-38h]
  __int64 v17; // [rsp+28h] [rbp-30h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B0C0);
  v3 = v2;
  *(_DWORD *)(v2 + 2592) = 1;
  _InterlockedOr((volatile signed __int32 *)(v2 + 40), 0x20000u);
  v4 = (PVOID *)(v2 + 2552);
  if ( !*(_QWORD *)(v2 + 2552) && (*(_DWORD *)(v2 + 40) & 0x4000000) != 0 )
  {
    v5 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                    WdfDriverGlobals,
                                    a1);
    v6 = PoRegisterPowerSettingCallback(
           v5,
           &GUID_USB_SETTING_SELECTIVE_SUSPEND,
           HUBFDO_PowerSettingCallback,
           (PVOID)v3,
           v4);
    if ( v6 < 0 )
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 2512),
        2u,
        3u,
        0x18u,
        (__int64)&WPP_4a56a43616cc3150b1f03ded22a040ae_Traceguids,
        v6);
      *v4 = 0LL;
    }
  }
  v7 = 0;
  v8 = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v7 = EtwActivityIdControl(3u, (LPGUID)(v3 + 2268));
    if ( v7 >= 0 )
    {
      if ( g_IoSetActivityIdIrp )
        g_IoSetActivityIdIrp(*(_QWORD *)(v3 + 808), v3 + 2268);
      v8 = 1;
    }
  }
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  Blink_low = LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink);
  v11 = v9;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v12 = *(_DWORD *)(v3 + 40) >> 10;
    LOWORD(v12) = (*(_DWORD *)(v3 + 40) & 0x400) != 0;
    LODWORD(v17) = v9;
    LODWORD(Handle) = 1;
    McTemplateK0pqqh(
      v12,
      &USBHUB3_ETW_EVENT_HUB_D0_ENTRY_START,
      (const GUID *)(v3 + 2268),
      *(_QWORD *)(v3 + 240),
      Handle,
      v17,
      v12);
  }
  if ( v11 )
  {
    if ( (unsigned int)(v11 - 2) > 4 )
      goto LABEL_17;
    v13 = (void *)(v3 + 1144);
    KeResetEvent((PRKEVENT)(v3 + 1144));
    v14 = 2011;
  }
  else
  {
    v13 = (void *)(v3 + 1144);
    KeResetEvent((PRKEVENT)(v3 + 1144));
    v14 = 2007;
  }
  HUBSM_AddEvent(v3 + 1256, v14);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
  HUBMISC_WaitForSignal(v13);
  v7 = *(_DWORD *)(v3 + 1168);
LABEL_17:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    LODWORD(v17) = v11;
    LODWORD(Handle) = v7;
    McTemplateK0pqq(
      Blink_low,
      &USBHUB3_ETW_EVENT_HUB_D0_ENTRY_COMPLETE,
      (const GUID *)(v3 + 2268),
      *(_QWORD *)(v3 + 240),
      Handle,
      v17);
  }
  if ( v8 == 1 )
  {
    *(_QWORD *)(v3 + 2268) = 0LL;
    *(_QWORD *)(v3 + 2276) = 0LL;
  }
  return (unsigned int)v7;
}
