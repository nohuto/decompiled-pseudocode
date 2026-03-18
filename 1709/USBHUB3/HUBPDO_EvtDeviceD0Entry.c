/*
 * XREFs of HUBPDO_EvtDeviceD0Entry @ 0x1C00152C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     McTemplateK0pqqh @ 0x1C000A75C (McTemplateK0pqqh.c)
 *     McTemplateK0pqq @ 0x1C000A7EC (McTemplateK0pqq.c)
 *     HUBMISC_WaitForSignal @ 0x1C002A6AC (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x1C00341EC (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceD0Entry(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r8
  PWDF_DRIVER_GLOBALS v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rdi
  int v7; // eax
  int v8; // esi
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+28h] [rbp-50h]
  unsigned __int128 v14; // [rsp+40h] [rbp-38h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B070);
  v3 = WdfFunctions_01015;
  v4 = WdfDriverGlobals;
  v5 = v2;
  v6 = *(_QWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 384) = 1;
  v14 = 0uLL;
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(v3 + 1616))(
                      v4,
                      v4->Driver,
                      off_1C005B110)
                  + 4) & 0x1000) != 0
    && EtwActivityIdControl(3u, (LPGUID)(v6 + 2176)) >= 0 )
  {
    v14 = *(_OWORD *)(v6 + 2176);
    _InterlockedOr((volatile signed __int32 *)(v6 + 1636), 0x80u);
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3104))(WdfDriverGlobals, a1);
  v8 = v7;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    v9 = *(_DWORD *)(v5 + 32) >> 3;
    LOWORD(v9) = (*(_DWORD *)(v5 + 32) & 8) != 0;
    McTemplateK0pqqh(v9, &USBHUB3_ETW_EVENT_DEVICE_D0_ENTRY_START, (const GUID *)&v14, *(_QWORD *)(v6 + 24), 1, v7, v9);
  }
  HUBIDLE_AddEvent(v5 + 72, 6007LL, 0LL);
  KeClearEvent((PRKEVENT)(v6 + 1584));
  HUBSM_AddEvent(v6 + 504, 4067);
  HUBMISC_WaitForSignal((PVOID)(v6 + 1584));
  v10 = *(_DWORD *)(v6 + 1576);
  if ( *(_QWORD *)(v5 + 392) )
    SleepstudyHelper_ComponentActive();
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 4) != 0 )
  {
    LODWORD(v13) = v8;
    LODWORD(v12) = v10;
    McTemplateK0pqq(
      LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink),
      &USBHUB3_ETW_EVENT_DEVICE_D0_ENTRY_COMPLETE,
      (const GUID *)&v14,
      *(_QWORD *)(v6 + 24),
      v12,
      v13);
  }
  _InterlockedAnd((volatile signed __int32 *)(v6 + 1636), 0xFFFFFF7F);
  return v10;
}
