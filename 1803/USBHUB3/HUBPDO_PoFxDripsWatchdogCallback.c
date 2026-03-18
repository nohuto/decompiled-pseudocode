/*
 * XREFs of HUBPDO_PoFxDripsWatchdogCallback @ 0x1C0017F80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqhhh @ 0x1C0010CC8 (McTemplateK0pqhhh.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

void __fastcall HUBPDO_PoFxDripsWatchdogCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // rax
  PWDF_DRIVER_GLOBALS v13; // rcx
  __int64 v14; // [rsp+28h] [rbp-19h]
  __int64 v15; // [rsp+28h] [rbp-19h]
  __int64 v16; // [rsp+30h] [rbp-11h]
  __int64 v17; // [rsp+30h] [rbp-11h]
  _QWORD v18[3]; // [rsp+48h] [rbp+7h] BYREF
  _QWORD v19[7]; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v20; // [rsp+B0h] [rbp+6Fh] BYREF

  v2 = *(_QWORD *)(a2 + 64);
  v4 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 424), "DRIPS SR Tag", File, 1u, 0x20u);
  if ( v4 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v7,
      "DRIPS SR Tag",
      10755LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
    memset(v19, 0, sizeof(v19));
    v19[6] = off_1C005B0E8;
    LODWORD(v19[0]) = 56;
    v19[3] = 0x100000001LL;
    v19[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    v18[2] = 1LL;
    v18[1] = HUBPDO_EvtWorkItemDripsWatchDogCallback;
    v18[0] = 24LL;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3032))(
           WdfDriverGlobals,
           v18,
           v19,
           &v20);
    if ( v8 >= 0 )
    {
      v12 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        v20,
                        off_1C005B0E8);
      v13 = WdfDriverGlobals;
      *v12 = a2;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(v13, v20);
    }
    else
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 1432LL),
        2u,
        2u,
        0x8Fu,
        (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
        v8);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x2000000) != 0 )
      {
        v10 = *(_QWORD *)(v2 + 24);
        LOWORD(v17) = *(_WORD *)(v10 + 1996);
        LODWORD(v15) = 10;
        McTemplateK0pqhhh(
          v9,
          &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
          (const GUID *)(v10 + 1516),
          *(_QWORD *)(v10 + 24),
          v15,
          v17,
          *(_WORD *)(v10 + 1998),
          *(_WORD *)(v10 + 2000));
      }
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
        WdfDriverGlobals,
        v11,
        "DRIPS SR Tag",
        10783LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 424), "DRIPS SR Tag", 0x20u);
    }
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 1432LL),
      2u,
      2u,
      0x8Eu,
      (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
      v4);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x2000000) != 0 )
    {
      v6 = *(_QWORD *)(v2 + 24);
      LOWORD(v16) = *(_WORD *)(v6 + 1996);
      LODWORD(v14) = 9;
      McTemplateK0pqhhh(
        v5,
        &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
        (const GUID *)(v6 + 1516),
        *(_QWORD *)(v6 + 24),
        v14,
        v16,
        *(_WORD *)(v6 + 1998),
        *(_WORD *)(v6 + 2000));
    }
  }
}
