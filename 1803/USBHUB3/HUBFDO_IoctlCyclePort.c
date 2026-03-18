/*
 * XREFs of HUBFDO_IoctlCyclePort @ 0x1C006968C
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0069CB0 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C000135C (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq @ 0x1C000A7AC (McTemplateK0pqq.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002BC84 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C00674F4 (HUBFDO_IoctlValidateParameters.c)
 *     HUBMISC_VerifyCallerIsAdmin @ 0x1C006E3A8 (HUBMISC_VerifyCallerIsAdmin.c)
 *     HUBREG_UpdateUxdSettings @ 0x1C0071938 (HUBREG_UpdateUxdSettings.c)
 */

__int64 __fastcall HUBFDO_IoctlCyclePort(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rdi
  int v9; // r12d
  bool v10; // si
  int v11; // eax
  int IsAdmin; // ebx
  unsigned __int16 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 i; // r8
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  PWDF_DRIVER_GLOBALS v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v28; // [rsp+20h] [rbp-58h]
  __int64 v29; // [rsp+28h] [rbp-50h]
  char v30[8]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD *v31; // [rsp+48h] [rbp-30h] BYREF
  _BYTE v32[16]; // [rsp+50h] [rbp-28h] BYREF

  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v7,
                   off_1C005B0C0);
  v31 = 0LL;
  v9 = 0;
  v10 = 0;
  v30[0] = 0;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, _DWORD **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v31,
          0LL);
  IsAdmin = v11;
  if ( v11 < 0 )
  {
    v13 = 48;
LABEL_3:
    LODWORD(v29) = v11;
    WPP_RECORDER_SF_d(v8[314], 2u, 3u, v13, (__int64)&WPP_4a56a43616cc3150b1f03ded22a040ae_Traceguids, v29);
    goto LABEL_24;
  }
  IsAdmin = HUBFDO_IoctlValidateParameters((__int64)v8, 4uLL, a4, v31, 8uLL, a3);
  v31[1] = 0;
  if ( IsAdmin >= 0 )
  {
    v9 = *(unsigned __int16 *)v31;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
      v10 = (int)HUBMISC_GetActivityIdIrp() >= 0;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
      {
        LODWORD(v28) = v9;
        McTemplateK0pq(
          v15,
          &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_HUB_CYCLE_PORT_START,
          (const GUID *)((unsigned __int64)v32 & -(__int64)v10),
          v8[30],
          v28);
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v8[2]);
    for ( i = 0LL; ; i = v18 )
    {
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              v8[2],
              i,
              1LL);
      v18 = v17;
      if ( !v17
        || *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   v17,
                                   off_1C005B070)
                               + 48) == v9 )
      {
        break;
      }
    }
    v19 = WdfFunctions_01015;
    v20 = WdfDriverGlobals;
    if ( !v18 )
      goto LABEL_13;
    v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            v18,
            off_1C005B070);
    v22 = v21;
    v23 = *(_QWORD *)(v21 + 24);
    if ( !v23 )
    {
      v19 = WdfFunctions_01015;
      v20 = WdfDriverGlobals;
LABEL_13:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(v19 + 1088))(v20, v8[2]);
      IsAdmin = -1073741810;
      v31[1] = -1073713152;
      goto LABEL_24;
    }
    HUBREG_UpdateUxdSettings(v8, *(_QWORD *)(v21 + 24), v30);
    v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v23);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v24,
      "User Mode FDO Request",
      4677LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v8[2]);
    IsAdmin = HUBMISC_VerifyCallerIsAdmin(v8[314]);
    if ( IsAdmin >= 0 || v30[0] == 1 )
    {
      LOBYTE(v25) = 1;
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, _QWORD, int, const char *))(WdfFunctions_01015 + 3504))(
              WdfDriverGlobals,
              v8[2],
              v25,
              0LL,
              4690,
              "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
      IsAdmin = v11;
      if ( v11 < 0 )
      {
        v13 = 49;
        goto LABEL_3;
      }
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v22 + 4), 1, 0) )
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v23 + 8) + 1240LL))(*(_QWORD *)(v23 + 8), 3011LL);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64, const char *))(WdfFunctions_01015 + 3512))(
        WdfDriverGlobals,
        v8[2],
        0LL,
        4712LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
    }
    v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v23);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v26,
      "User Mode FDO Request",
      4717LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
  }
LABEL_24:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
  {
    LODWORD(v29) = IsAdmin;
    LODWORD(v28) = v9;
    McTemplateK0pqq(
      v14,
      &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_HUB_CYCLE_PORT_COMPLETE,
      (const GUID *)((unsigned __int64)v32 & -(__int64)v10),
      v8[30],
      v28,
      v29);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
           WdfDriverGlobals,
           a2,
           (unsigned int)IsAdmin,
           8LL);
}
