/*
 * XREFs of HUBFDO_EvtDeviceD0Exit @ 0x1C000AE30
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     McTemplateK0pqqh @ 0x1C000A75C (McTemplateK0pqqh.c)
 *     McTemplateK0pqq @ 0x1C000A7EC (McTemplateK0pqq.c)
 *     HUBMISC_WaitForSignal @ 0x1C002A6AC (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceD0Exit(__int64 a1, int a2)
{
  NTSTATUS v4; // ebx
  char v5; // r14
  __int64 v6; // rdi
  int v7; // eax
  __int64 Blink_low; // rcx
  int v9; // esi
  __int64 v10; // rcx
  void *v11; // rbx
  int v12; // edx
  __int64 v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+28h] [rbp-30h]

  v4 = 0;
  v5 = 0;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B0C0);
  *(_DWORD *)(v6 + 2592) = a2;
  _InterlockedAnd((volatile signed __int32 *)(v6 + 40), 0xFFFDFFFF);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v4 = EtwActivityIdControl(3u, (LPGUID)(v6 + 2268));
    if ( v4 >= 0 )
    {
      if ( g_IoSetActivityIdIrp )
        g_IoSetActivityIdIrp(*(_QWORD *)(v6 + 808), v6 + 2268);
      v5 = 1;
    }
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  Blink_low = LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink);
  v9 = v7;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v10 = *(_DWORD *)(v6 + 40) >> 10;
    LOWORD(v10) = (*(_DWORD *)(v6 + 40) & 0x400) != 0;
    McTemplateK0pqqh(
      v10,
      &USBHUB3_ETW_EVENT_HUB_D0_EXIT_START,
      (const GUID *)(v6 + 2268),
      *(_QWORD *)(v6 + 240),
      a2,
      v7,
      v10);
  }
  if ( v9 )
  {
    if ( (unsigned int)(v9 - 2) > 4 )
      goto LABEL_12;
  }
  else if ( a2 == 5 )
  {
    v11 = (void *)(v6 + 1144);
    KeResetEvent((PRKEVENT)(v6 + 1144));
    v12 = 2019;
    goto LABEL_11;
  }
  v11 = (void *)(v6 + 1144);
  KeResetEvent((PRKEVENT)(v6 + 1144));
  v12 = 2015;
LABEL_11:
  HUBSM_AddEvent(v6 + 1256, v12);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v6);
  HUBMISC_WaitForSignal(v11);
  v4 = *(_DWORD *)(v6 + 1168);
LABEL_12:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    LODWORD(v15) = v9;
    LODWORD(v14) = v4;
    McTemplateK0pqq(
      Blink_low,
      &USBHUB3_ETW_EVENT_HUB_D0_EXIT_COMPLETE,
      (const GUID *)(v6 + 2268),
      *(_QWORD *)(v6 + 240),
      v14,
      v15);
  }
  if ( v5 == 1 )
  {
    *(_QWORD *)(v6 + 2268) = 0LL;
    *(_QWORD *)(v6 + 2276) = 0LL;
  }
  return (unsigned int)v4;
}
