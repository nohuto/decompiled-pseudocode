/*
 * XREFs of HUBFDO_EvtDeviceAdd @ 0x1C0066140
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0001008 (RtlStringCchPrintfA.c)
 *     McTemplateK0 @ 0x1C00012A0 (McTemplateK0.c)
 *     McTemplateK0pq @ 0x1C000135C (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddHsmEvent @ 0x1C0008DE0 (HUBSM_AddHsmEvent.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x1C000A94C (HUBFDO_GetDeviceCapabilities.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x1C000CD54 (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMISC_WaitForSignal @ 0x1C002B484 (HUBMISC_WaitForSignal.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 *     HUBMISC_InitializeHsm @ 0x1C006DD74 (HUBMISC_InitializeHsm.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceAdd(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // r9
  int DeviceCapabilities; // ebx
  __int64 v6; // rax
  unsigned __int16 v7; // r9
  __int64 v8; // rcx
  unsigned int v9; // r8d
  __int64 v10; // rcx
  struct _DEVICE_OBJECT *v11; // rax
  NTSTATUS v12; // ebx
  __int64 v13; // rax
  __int64 *v14; // r14
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  PWDF_DRIVER_GLOBALS v23; // rcx
  int v24; // eax
  int v25; // eax
  const void *v26; // rax
  __int64 v27; // r9
  __int64 v28; // rax
  int v30; // [rsp+28h] [rbp-E0h]
  __int64 v31; // [rsp+28h] [rbp-E0h]
  int v32; // [rsp+28h] [rbp-E0h]
  int v33; // [rsp+28h] [rbp-E0h]
  __int64 v34; // [rsp+30h] [rbp-D8h]
  __int64 v35; // [rsp+38h] [rbp-D0h]
  __int64 v36; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v38[8]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v39[8]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v40[8]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v41[12]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v42[18]; // [rsp+178h] [rbp+70h] BYREF
  int v43; // [rsp+208h] [rbp+100h] BYREF
  __m128i si128; // [rsp+20Ch] [rbp+104h]
  int v45; // [rsp+21Ch] [rbp+114h]
  int v46; // [rsp+220h] [rbp+118h]
  int v47; // [rsp+224h] [rbp+11Ch]
  int v48; // [rsp+228h] [rbp+120h]
  int v49; // [rsp+22Ch] [rbp+124h]
  int v50; // [rsp+230h] [rbp+128h]
  int v51; // [rsp+234h] [rbp+12Ch]
  __int64 v52; // [rsp+238h] [rbp+130h] BYREF
  int v53; // [rsp+240h] [rbp+138h]
  int v54; // [rsp+244h] [rbp+13Ch]
  __int64 v55; // [rsp+248h] [rbp+140h]
  char v56; // [rsp+250h] [rbp+148h]
  int v57; // [rsp+254h] [rbp+14Ch]
  char pszDest[16]; // [rsp+258h] [rbp+150h] BYREF
  GUID v59; // [rsp+268h] [rbp+160h] BYREF
  __int64 v60; // [rsp+278h] [rbp+170h]

  v37 = a2;
  v2 = a2;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    McTemplateK0(a1, &USBHUB3_ETW_EVENT_HUB_ADD_DEVICE_START, 0LL);
    v2 = v37;
  }
  v3 = 0LL;
  memset(v38, 0, 0x38uLL);
  LODWORD(v38[0]) = 56;
  v38[3] = 0x100000001LL;
  v38[6] = off_1C005B0C0;
  v38[1] = HUBFDO_EvtDeviceCleanupCallback;
  v38[2] = HUBFDO_EvtDeviceDestroyCallback;
  memset(v42, 0, sizeof(v42));
  v42[1] = HUBFDO_EvtDeviceD0Entry;
  LODWORD(v42[0]) = 144;
  v42[3] = HUBFDO_EvtDeviceD0Exit;
  v42[5] = HUBFDO_EvtDevicePrepareHardware;
  v42[6] = HUBFDO_EvtDeviceReleaseHardware;
  v42[12] = HUBFDO_EvtDeviceSurpriseRemoval;
  v42[15] = HUBFDO_EvtDeviceUsageNotification;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(WdfDriverGlobals, v2, v42);
  LOBYTE(v4) = 16;
  DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
                         WdfDriverGlobals,
                         v37,
                         HUBFDO_EvtDeviceShutdownPreprocess,
                         v4,
                         0LL,
                         0);
  if ( DeviceCapabilities < 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C005B110);
    v7 = 12;
LABEL_5:
    v8 = *(_QWORD *)(v6 + 64);
    v9 = 2;
    LODWORD(v34) = DeviceCapabilities;
LABEL_6:
    WPP_RECORDER_SF_d(v8, 2u, v9, v7, (__int64)&WPP_4a56a43616cc3150b1f03ded22a040ae_Traceguids, v34);
    goto LABEL_33;
  }
  memset(v39, 0, sizeof(v39));
  v39[1] = HUBFDO_EvtDeviceArmWakeFromS0;
  v39[2] = HUBFDO_EvtDeviceDisarmWakeFromS0;
  v39[4] = HUBFDO_EvtDeviceArmWakeFromSx;
  v39[5] = HUBFDO_EvtDeviceDisarmWakeFromSx;
  LODWORD(v39[0]) = 64;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 448))(
    WdfDriverGlobals,
    v37,
    v39);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 3440))(
    WdfDriverGlobals,
    v37,
    2LL);
  DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015 + 600))(
                         WdfDriverGlobals,
                         &v37,
                         v38,
                         &v36);
  if ( DeviceCapabilities < 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C005B110);
    v7 = 13;
    goto LABEL_5;
  }
  v11 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                   WdfDriverGlobals,
                                   v36);
  v12 = IoRegisterShutdownNotification(v11);
  if ( v12 < 0 )
  {
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C005B110);
    LODWORD(v34) = v12;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v13 + 64),
      2u,
      2u,
      0xEu,
      (__int64)&WPP_4a56a43616cc3150b1f03ded22a040ae_Traceguids,
      v34);
  }
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v36,
         off_1C005B0C0);
  *(_QWORD *)(v3 + 16) = v36;
  *(_QWORD *)(v3 + 24) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                           WdfDriverGlobals,
                           v36);
  *(_QWORD *)v3 = &g_Usbhub3_Triage_Info;
  *(_DWORD *)(v3 + 96) = USBD_AllocateHubNumber();
  v52 = 48LL;
  pszDest[0] = 0;
  v57 = 16;
  v55 = v3;
  v56 = 1;
  v53 = 1024;
  v54 = 512;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "hub%d", *(_DWORD *)(v3 + 96));
  v14 = (__int64 *)(v3 + 2512);
  if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v52, v3 + 2512) < 0 )
    *v14 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                         WdfDriverGlobals,
                         WdfDriverGlobals->Driver,
                         off_1C005B110)
                     + 64);
  LOBYTE(v15) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v36,
    1LL,
    v15);
  LOBYTE(v16) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v36,
    2LL,
    v16);
  LOBYTE(v17) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v36,
    3LL,
    v17);
  LOBYTE(v18) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    v36,
    4LL,
    v18);
  DeviceCapabilities = HUBFDO_GetDeviceCapabilities(v36, (_DWORD *)(v3 + 688), *v14);
  if ( DeviceCapabilities < 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C005B110);
    v7 = 15;
    goto LABEL_5;
  }
  v50 = -1;
  v51 = -1;
  v43 = 48;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v45 = 2;
  v46 = 2;
  v48 = 2;
  v49 = 2;
  v47 = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *))(WdfFunctions_01015 + 664))(WdfDriverGlobals, v36, &v43);
  v19 = WdfFunctions_01015;
  *(_QWORD *)(v3 + 328) = v3;
  LOWORD(v34) = 1013;
  LOWORD(v30) = 136;
  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, int, _DWORD, _QWORD))(v19 + 1048))(
          WdfDriverGlobals,
          v36,
          &GUID_HUB_PARENT_INTERFACE,
          v3 + 200,
          v30,
          v34,
          0LL);
  DeviceCapabilities = v20;
  if ( v20 < 0 )
  {
    v7 = 16;
LABEL_17:
    LODWORD(v34) = v20;
LABEL_18:
    v8 = *v14;
    v9 = 3;
    goto LABEL_6;
  }
  if ( !*(_BYTE *)(v3 + 232) )
  {
    v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v36);
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1424))(WdfDriverGlobals, v21);
    v23 = WdfDriverGlobals;
    *(_QWORD *)(v3 + 2440) = v22;
    *(_QWORD *)(v3 + 32) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(
                             v23,
                             v36);
    *(_DWORD *)(v3 + 92) = 500;
  }
  *(_QWORD *)(v3 + 368) = *(_QWORD *)(v3 + 240);
  *(_QWORD *)(v3 + 376) = v3;
  *(_QWORD *)(v3 + 384) = HUBHTX_ClearTTBuffer;
  *(_QWORD *)(v3 + 528) = HUBPDO_NoPingResponse;
  LOWORD(v34) = 2000;
  LOWORD(v32) = 256;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, int, _DWORD, _QWORD))(WdfFunctions_01015
                                                                                                 + 1048))(
         WdfDriverGlobals,
         v36,
         &GUID_HUB_CONTROLLERSTACK_INTERFACE,
         v3 + 336,
         v32,
         v34,
         0LL) < 0 )
  {
    LOWORD(v34) = 1000;
    LOWORD(v33) = 256;
    v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, int, _DWORD, _QWORD))(WdfFunctions_01015 + 1048))(
            WdfDriverGlobals,
            v36,
            &GUID_HUB_CONTROLLERSTACK_INTERFACE,
            v3 + 336,
            v33,
            v34,
            0LL);
    DeviceCapabilities = v20;
    if ( v20 < 0 )
    {
      v7 = 17;
      goto LABEL_17;
    }
  }
  if ( *(_BYTE *)(v3 + 232) )
    v35 = 0LL;
  else
    v35 = *(_QWORD *)(v3 + 240);
  LOWORD(v34) = 3;
  LOWORD(v33) = 96;
  v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const GUID *, __int64, int, _DWORD, __int64))(WdfFunctions_01015 + 1048))(
          WdfDriverGlobals,
          v36,
          &USB_BUS_INTERFACE_USBDI_GUID,
          v3 + 592,
          v33,
          v34,
          v35);
  DeviceCapabilities = v24;
  if ( v24 < 0 )
  {
    v7 = 18;
    LODWORD(v34) = v24;
    goto LABEL_18;
  }
  memset(v41, 0, sizeof(v41));
  LODWORD(v41[0]) = 96;
  BYTE5(v41[1]) = 1;
  v41[5] = HUBFDO_EvtIoDeviceControl;
  *(_QWORD *)((char *)v41 + 4) = 1LL;
  v41[6] = HUBFDO_EvtIoInternalDeviceControlFromPDO;
  memset(v40, 0, 0x38uLL);
  v40[6] = off_1C005B1B0;
  LODWORD(v40[0]) = 56;
  v40[3] = 0x100000002LL;
  v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 1216))(
          WdfDriverGlobals,
          v36,
          v41,
          v40,
          v3 + 2392);
  DeviceCapabilities = v25;
  if ( v25 < 0 )
  {
    v7 = 19;
    LODWORD(v34) = v25;
    goto LABEL_18;
  }
  v59 = GUID_BUS_TYPE_USB;
  v60 = 15LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01015 + 680))(WdfDriverGlobals, v36, &v59);
  HSMMUX_InitializeHSMMuxContext(v3);
  DeviceCapabilities = HUBMISC_InitializeHsm(v3);
  if ( DeviceCapabilities >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(v3 + 40), 0x20u);
    KeResetEvent((PRKEVENT)(v3 + 1144));
    HUBSM_AddHsmEvent(v3, 2023LL);
    v26 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                          WdfDriverGlobals,
                          v3);
    HUBMISC_WaitForSignal((PVOID)(v3 + 1144), "Hub FDO PnpCallback", v26);
    DeviceCapabilities = *(_DWORD *)(v3 + 1168);
  }
LABEL_33:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    if ( v3 )
      v27 = *(_QWORD *)(v3 + 240);
    else
      v27 = 0LL;
    LODWORD(v31) = DeviceCapabilities;
    McTemplateK0pq(v10, &USBHUB3_ETW_EVENT_HUB_ADD_DEVICE_COMPLETE, 0LL, v27, v31);
  }
  if ( DeviceCapabilities < 0 )
  {
    if ( v3 && *(_DWORD *)(v3 + 96) )
    {
      USBD_ReleaseHubNumber();
      *(_DWORD *)(v3 + 96) = 0;
    }
    v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C005B110);
    LODWORD(v34) = DeviceCapabilities;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v28 + 64),
      2u,
      3u,
      0x14u,
      (__int64)&WPP_4a56a43616cc3150b1f03ded22a040ae_Traceguids,
      v34);
  }
  return (unsigned int)DeviceCapabilities;
}
