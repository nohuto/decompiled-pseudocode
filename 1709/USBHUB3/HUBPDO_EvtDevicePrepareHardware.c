/*
 * XREFs of HUBPDO_EvtDevicePrepareHardware @ 0x1C006A250
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq @ 0x1C000136C (McTemplateK0pq.c)
 *     McTemplateK0ppqzznhCR6zcqQ6qqqqqqqqqsssccx @ 0x1C00013DC (McTemplateK0ppqzznhCR6zcqQ6qqqqqqqqqsssccx.c)
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C000639C (McTemplateK0p.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C002AD88 (HUBMISC_GetDeviceInterfacePath.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038E80 (memmove.c)
 *     memset @ 0x1C00391C0 (memset.c)
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x1C006F138 (HUBREG_AssignUsbflagsValueForDevice.c)
 *     HUBREG_QueryValuesInDeviceHardwareKey @ 0x1C0070AB0 (HUBREG_QueryValuesInDeviceHardwareKey.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x1C0070FC0 (HUBREG_WriteValueToDeviceHardwareKey.c)
 *     HUBREG_WriteStringToDeviceHardwareKey @ 0x1C00710FC (HUBREG_WriteStringToDeviceHardwareKey.c)
 *     HUBREG_UpdateSqmFlags @ 0x1C00726F0 (HUBREG_UpdateSqmFlags.c)
 *     WMI_RegisterDevice @ 0x1C0074DAC (WMI_RegisterDevice.c)
 *     WMI_FireNotification @ 0x1C0075028 (WMI_FireNotification.c)
 */

__int64 __fastcall HUBPDO_EvtDevicePrepareHardware(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r12d
  int DeviceInterfacePath; // eax
  unsigned __int16 v9; // r9
  _QWORD *v10; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v12; // rsi
  wchar_t *v13; // rbx
  int (__fastcall *v14)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *, __int64 *); // rax
  wchar_t *v15; // rax
  __int64 v16; // r8
  char *v17; // rdx
  __int64 v18; // r9
  unsigned __int16 *v19; // rcx
  int v20; // eax
  unsigned __int8 v21; // al
  __int64 v22; // rsi
  unsigned int v23; // ecx
  int v24; // r10d
  __int64 v25; // rax
  char v26; // bl
  unsigned int v27; // ecx
  const char *v28; // r9
  const char *v29; // rdx
  const char *v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  __int64 v36; // [rsp+20h] [rbp-160h]
  __int64 v37; // [rsp+28h] [rbp-158h]
  int v38; // [rsp+40h] [rbp-140h]
  char v39; // [rsp+70h] [rbp-110h]
  char v40; // [rsp+100h] [rbp-80h]
  __int16 v41; // [rsp+104h] [rbp-7Ch]
  int v42; // [rsp+108h] [rbp-78h]
  int v43; // [rsp+10Ch] [rbp-74h]
  int v44; // [rsp+110h] [rbp-70h]
  int v45; // [rsp+114h] [rbp-6Ch]
  int v46; // [rsp+118h] [rbp-68h]
  unsigned __int16 v47; // [rsp+11Ch] [rbp-64h]
  __int64 v48; // [rsp+120h] [rbp-60h] BYREF
  unsigned int v49; // [rsp+128h] [rbp-58h]
  int v50; // [rsp+12Ch] [rbp-54h]
  __int64 v51; // [rsp+130h] [rbp-50h] BYREF
  wchar_t *v52; // [rsp+138h] [rbp-48h]
  const wchar_t *v53; // [rsp+140h] [rbp-40h]
  __int64 v54; // [rsp+148h] [rbp-38h]
  wchar_t *v55; // [rsp+150h] [rbp-30h]
  __int64 v56; // [rsp+158h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+160h] [rbp-20h] BYREF
  unsigned __int16 v58; // [rsp+170h] [rbp-10h] BYREF
  void *Src; // [rsp+178h] [rbp-8h]
  __int64 v60; // [rsp+180h] [rbp+0h]
  __int64 v61; // [rsp+188h] [rbp+8h]
  _QWORD v62[7]; // [rsp+190h] [rbp+10h] BYREF
  int v63; // [rsp+1C8h] [rbp+48h] BYREF
  char v64; // [rsp+1CCh] [rbp+4Ch] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B070);
  v3 = *(_QWORD *)(v2 + 24);
  v54 = v2;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  v56 = v4;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p(
      LODWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink),
      &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_START,
      0LL,
      *(_QWORD *)(v3 + 24));
  _InterlockedOr((volatile signed __int32 *)(v3 + 1636), 0x4000u);
  HUBREG_QueryValuesInDeviceHardwareKey(v3);
  if ( (*(_DWORD *)(v3 + 2464) & 4) != 0 && (*(_DWORD *)(v3 + 2468) & 4) == 0 )
  {
    HUBREG_AssignUsbflagsValueForDevice(v3, L".0", v3 + 2480, 8LL);
    *(_DWORD *)(v3 + 2468) |= 4u;
  }
  HUBREG_UpdateSqmFlags(v3);
  if ( (*(_DWORD *)(v3 + 2464) & 1) != 0 )
    HUBREG_WriteValueToDeviceHardwareKey(v3, (unsigned int)&g_MsOs20Flags, 4, 4, v3 + 2464);
  HUBREG_WriteValueToDeviceHardwareKey(v3, (unsigned int)L"*,", 4, 4, v3 + 32);
  if ( (*(_DWORD *)(v3 + 1632) & 2) != 0 )
  {
    v5 = *(_QWORD *)(v3 + 8);
    if ( *(_BYTE *)(*(_QWORD *)v3 + 232LL) >= *(_BYTE *)(v5 + 202) )
    {
      *(_DWORD *)(v5 + 1424) = 7;
      WMI_FireNotification(*(_QWORD *)v3, *(unsigned __int16 *)(v2 + 48), 10LL);
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        3u,
        0x4Au,
        (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids);
      v7 = -1073741823;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10) != 0 )
        McTemplateK0p(v6, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_NESTED_TOO_DEEP, 0LL, *(_QWORD *)(v3 + 24));
      goto LABEL_77;
    }
    DeviceInterfacePath = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015
                                                                                                  + 616))(
                            WdfDriverGlobals,
                            a1,
                            &GUID_DEVINTERFACE_USB_HUB,
                            0LL);
    v7 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      v9 = 75;
LABEL_14:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        5u,
        v9,
        (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
        DeviceInterfacePath);
      goto LABEL_77;
    }
    v10 = (_QWORD *)(v3 + 2136);
    DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                            (__int64)&GUID_DEVINTERFACE_USB_HUB,
                            a1,
                            (_QWORD *)(v3 + 2136),
                            0LL,
                            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL));
    v7 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      v9 = 76;
      goto LABEL_14;
    }
  }
  else
  {
    DeviceInterfacePath = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015
                                                                                                  + 616))(
                            WdfDriverGlobals,
                            a1,
                            &GUID_DEVINTERFACE_USB_DEVICE,
                            0LL);
    v7 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      v9 = 77;
      goto LABEL_14;
    }
    v10 = (_QWORD *)(v3 + 2136);
    DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                            (__int64)&GUID_DEVINTERFACE_USB_DEVICE,
                            a1,
                            (_QWORD *)(v3 + 2136),
                            0LL,
                            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL));
    v7 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      v9 = 78;
      goto LABEL_14;
    }
  }
  if ( *v10 )
  {
    DeviceInterfacePath = HUBREG_WriteStringToDeviceHardwareKey(v3);
    v7 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      v9 = 79;
      goto LABEL_14;
    }
  }
  if ( (*(_DWORD *)(v2 + 32) & 0x200) == 0 && (*(_DWORD *)(v3 + 1636) & 2) != 0 )
    *(_BYTE *)v2 = 0;
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C005B110)
                  + 4) & 0x1000) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    if ( *v10 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        *v10,
        &DestinationString);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(
                               ExDefaultNonPagedPoolType,
                               DestinationString.Length + 2LL,
                               0x64334855u);
    v55 = PoolWithTag;
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, DestinationString.Length + 2LL);
      memmove(v12, DestinationString.Buffer, DestinationString.Length);
    }
    memset(v62, 0, sizeof(v62));
    v48 = 0LL;
    LODWORD(v62[0]) = 56;
    v13 = 0LL;
    v62[3] = 0x100000001LL;
    v62[4] = a1;
    v14 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015 + 2464);
    v52 = 0LL;
    if ( v14(WdfDriverGlobals, 0LL, v62, &v48) >= 0
      && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 320))(
           WdfDriverGlobals,
           a1,
           v48) >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int16 *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v48,
        &v58);
      v15 = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v58 + 2LL, 0x64334855u);
      v52 = v15;
      v13 = v15;
      if ( v15 )
      {
        memset(v15, 0, v58 + 2LL);
        memmove(v13, Src, v58);
      }
    }
    memset(v62, 0, sizeof(v62));
    v51 = 0LL;
    LODWORD(v62[0]) = 56;
    v62[3] = 0x100000001LL;
    v62[4] = a1;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015
                                                                                                  + 656))(
           WdfDriverGlobals,
           a1,
           0LL,
           (unsigned int)ExDefaultNonPagedPoolType,
           v62,
           &v51) < 0 )
      v53 = 0LL;
    else
      v53 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                               WdfDriverGlobals,
                               v51,
                               0LL);
    v16 = *(_QWORD *)(v2 + 16);
    v17 = &v64;
    v18 = 5LL;
    v19 = (unsigned __int16 *)(v16 + 314);
    v63 = *(unsigned __int16 *)(v16 + 312);
    do
    {
      v20 = *v19++;
      *(_DWORD *)v17 = v20;
      v17 += 4;
      --v18;
    }
    while ( v18 );
    v21 = *(_BYTE *)(v16 + 232);
    if ( v21 < 6u )
      *(&v63 + v21) = *(unsigned __int16 *)(v2 + 48);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 8) != 0 )
    {
      v22 = *(_QWORD *)(v3 + 8);
      v60 = v22;
      v23 = *(_DWORD *)(v22 + 204);
      if ( (v23 & 2) != 0 )
        v40 = *(_BYTE *)(v22 + 1341);
      else
        v40 = 0;
      v24 = *(_DWORD *)(v16 + 160);
      v50 = v24;
      if ( v24 == 1 )
      {
        v42 = *(_DWORD *)(v16 + 172);
        v43 = *(_DWORD *)(v16 + 168);
        v44 = *(_DWORD *)(v16 + 188);
        v45 = *(_DWORD *)(v16 + 184);
        v41 = *(_WORD *)(v16 + 176);
      }
      else
      {
        LOBYTE(v41) = 0;
        LOBYTE(v44) = 0;
        LOBYTE(v45) = 0;
        LOBYTE(v42) = -1;
        LOBYTE(v43) = -1;
      }
      if ( v24 == 1 )
        v46 = *(_DWORD *)(v16 + 180);
      else
        LOBYTE(v46) = 0;
      v25 = *(_QWORD *)(v3 + 2016);
      v61 = v25;
      if ( v25 )
        v47 = *(_WORD *)(v25 + 2);
      else
        v47 = 0;
      v26 = *(_BYTE *)(v16 + 232);
      v27 = v23 >> 1;
      LOBYTE(v27) = v27 & 1;
      v28 = 0LL;
      v49 = v27;
      if ( v24 == 2 )
        v28 = (const char *)(v16 + 178);
      v29 = 0LL;
      if ( v24 == 2 )
        v29 = (const char *)(v16 + 173);
      v30 = 0LL;
      if ( v24 == 2 )
        v30 = (const char *)(v16 + 168);
      v39 = v26 + 1;
      v13 = v52;
      McTemplateK0ppqzznhCR6zcqQ6qqqqqqqqqsssccx(
        (__int64)v30,
        &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_DEVICE_INFORMATION_V1,
        (const GUID *)(v16 + 756),
        *(_QWORD *)(*(_QWORD *)v3 + 240LL),
        *(_QWORD *)(v3 + 24),
        *(_WORD *)(v22 + 200),
        v53,
        v55,
        v38,
        v3 + 1988,
        v47,
        v61,
        v52,
        (*(_BYTE *)(v2 + 32) & 1) == 0,
        v39,
        (__int64)&v63,
        v46,
        v45,
        v44,
        v43,
        v42,
        v41,
        *(_DWORD *)(v54 + 384),
        *(_DWORD *)(v3 + 2224),
        v50,
        v30,
        v29,
        v28,
        v49,
        v40,
        *(_QWORD *)(v60 + 1416));
      v2 = v54;
      v12 = v55;
    }
    if ( v12 )
      ExFreePoolWithTag(v12, 0x64334855u);
    if ( v13 )
      ExFreePoolWithTag(v13, 0x64334855u);
    if ( v48 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    if ( v51 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    v4 = v56;
  }
  if ( (*(_DWORD *)(v3 + 1632) & 6) == 0 )
    WMI_RegisterDevice(a1);
  if ( *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    WdfDriverGlobals->Driver,
                    off_1C005B110)
                + 92) )
  {
    v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(WdfDriverGlobals, a1);
    v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 16));
    v33 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(WdfDriverGlobals, v32);
    v34 = SleepstudyHelper_RegisterPdoWithParentPdo(*(_QWORD *)(v4 + 96), v33, v31, v2 + 392);
    if ( v34 < 0 )
    {
      LODWORD(v37) = v34;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        2u,
        0x50u,
        (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
        v37);
      *(_QWORD *)(v2 + 392) = 0LL;
    }
  }
LABEL_77:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    LODWORD(v36) = v7;
    McTemplateK0pq(v6, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_COMPLETE, 0LL, *(_QWORD *)(v3 + 24), v36);
  }
  LODWORD(v37) = *(_DWORD *)(v3 + 1644);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
    2u,
    5u,
    0x51u,
    (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
    v37);
  return v7;
}
