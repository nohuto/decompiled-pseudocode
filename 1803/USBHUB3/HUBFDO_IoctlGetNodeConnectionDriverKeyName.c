/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C0067940
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C0069CB0 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq @ 0x1C000A7AC (McTemplateK0pqq.c)
 *     HUBMISC_GetActivityIdIrp @ 0x1C002BC84 (HUBMISC_GetActivityIdIrp.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C00674F4 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionDriverKeyName(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v7; // r15d
  __int64 v8; // rax
  _QWORD *v9; // rdi
  int v10; // eax
  int v11; // ebx
  __int64 i; // r8
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // r8
  PWDF_DRIVER_GLOBALS v16; // rcx
  int ActivityIdIrp; // eax
  __int64 v18; // rcx
  const GUID *v19; // r8
  char *v21; // [rsp+20h] [rbp-58h]
  int *v22; // [rsp+28h] [rbp-50h]
  void *v23; // [rsp+40h] [rbp-38h] BYREF
  int v24; // [rsp+48h] [rbp-30h] BYREF
  char v25; // [rsp+50h] [rbp-28h] BYREF

  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v8,
                   off_1C005B0C0);
  v23 = 0LL;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          a2,
          a3,
          &v23,
          0LL);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v11 = HUBFDO_IoctlValidateParameters((__int64)v9, 4uLL, a4, v23, 0xAuLL, a3);
    if ( v11 >= 0 )
    {
      v7 = *(unsigned __int16 *)v23;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(WdfDriverGlobals, v9[2]);
      for ( i = 0LL; ; i = v14 )
      {
        v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
                WdfDriverGlobals,
                v9[2],
                i,
                1LL);
        v14 = v13;
        if ( !v13
          || *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                     WdfDriverGlobals,
                                     v13,
                                     off_1C005B070)
                                 + 48) == v7 )
        {
          break;
        }
      }
      if ( v14 )
      {
        memset(v23, 0, a3);
        v22 = &v24;
        *(_DWORD *)v23 = v7;
        v21 = (char *)v23 + 8;
        v24 = a3 - 8;
        v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 648))(
                WdfDriverGlobals,
                v14,
                7LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v9[2]);
        if ( v11 == -1073741789 )
          v11 = 0;
        if ( v11 >= 0 )
        {
          v15 = (unsigned int)(v24 + 10);
          *((_DWORD *)v23 + 1) = v15;
          v16 = WdfDriverGlobals;
          if ( a3 < v15 )
          {
            v15 = 10LL;
            *((_WORD *)v23 + 4) = 0;
          }
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int64))(WdfFunctions_01015 + 2200))(
            v16,
            a2,
            v15);
        }
      }
      else
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(WdfDriverGlobals, v9[2]);
        v11 = -1073741811;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_d(v9[314], 2u, 3u, 0x23u, (__int64)&WPP_4a56a43616cc3150b1f03ded22a040ae_Traceguids, v10);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    ActivityIdIrp = HUBMISC_GetActivityIdIrp();
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x400) != 0 )
    {
      v19 = (const GUID *)&v25;
      LODWORD(v22) = v11;
      LODWORD(v21) = v7;
      if ( ActivityIdIrp < 0 )
        v19 = 0LL;
      McTemplateK0pqq(
        v18,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_DRIVERKEY_NAME_COMPLETE,
        v19,
        v9[30],
        v21,
        v22);
    }
  }
  if ( v11 < 0 && v23 && a3 >= 0xA )
  {
    *((_WORD *)v23 + 4) = 0;
    *((_DWORD *)v23 + 1) = 10;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           (unsigned int)v11);
}
