/*
 * XREFs of HUBPDO_EvtDevicePrepareHardware @ 0x1C006A170
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq @ 0x1C000135C (McTemplateK0pq.c)
 *     McTemplateK0ppqzznhCR6zcqQ6qqqqqqqqqsssccx @ 0x1C00013CC (McTemplateK0ppqzznhCR6zcqQ6qqqqqqqqqsssccx.c)
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p @ 0x1C0006374 (McTemplateK0p.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C002BB60 (HUBMISC_GetDeviceInterfacePath.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0039BC0 (memmove.c)
 *     memset @ 0x1C0039F00 (memset.c)
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x1C006EFE0 (HUBREG_AssignUsbflagsValueForDevice.c)
 *     HUBREG_QueryValuesInDeviceHardwareKey @ 0x1C0070988 (HUBREG_QueryValuesInDeviceHardwareKey.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x1C0070E98 (HUBREG_WriteValueToDeviceHardwareKey.c)
 *     HUBREG_WriteStringToDeviceHardwareKey @ 0x1C0070FD4 (HUBREG_WriteStringToDeviceHardwareKey.c)
 *     HUBREG_UpdateSqmFlags @ 0x1C00725C0 (HUBREG_UpdateSqmFlags.c)
 *     WMI_RegisterDevice @ 0x1C0074C60 (WMI_RegisterDevice.c)
 *     WMI_FireNotification @ 0x1C0074EDC (WMI_FireNotification.c)
 */

__int64 __fastcall HUBPDO_EvtDevicePrepareHardware(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r12d
  int v8; // eax
  __int64 v9; // rcx
  unsigned __int16 v10; // r9
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  int DeviceInterfacePath; // eax
  __int64 v14; // rax
  wchar_t *PoolWithTag; // rax
  wchar_t *v16; // rsi
  wchar_t *v17; // rbx
  int (__fastcall *v18)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *, __int64 *); // rax
  wchar_t *v19; // rax
  __int64 v20; // r8
  char *v21; // rdx
  __int64 v22; // r9
  unsigned __int16 *v23; // rcx
  int v24; // eax
  unsigned __int8 v25; // al
  __int64 v26; // rsi
  int v27; // ecx
  int v28; // r10d
  __int64 v29; // rax
  const char *v30; // r9
  const char *v31; // rdx
  const char *v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // eax
  __int64 v38; // [rsp+20h] [rbp-160h]
  __int64 v39; // [rsp+28h] [rbp-158h]
  int v40; // [rsp+28h] [rbp-158h]
  int v41; // [rsp+40h] [rbp-140h]
  char v42; // [rsp+100h] [rbp-80h]
  char v43; // [rsp+104h] [rbp-7Ch]
  __int16 v44; // [rsp+108h] [rbp-78h]
  int v45; // [rsp+10Ch] [rbp-74h]
  int v46; // [rsp+110h] [rbp-70h]
  int v47; // [rsp+114h] [rbp-6Ch]
  int v48; // [rsp+118h] [rbp-68h]
  int v49; // [rsp+11Ch] [rbp-64h]
  unsigned __int16 v50; // [rsp+120h] [rbp-60h]
  __int64 v51; // [rsp+128h] [rbp-58h] BYREF
  int v52; // [rsp+130h] [rbp-50h]
  __int64 v53; // [rsp+138h] [rbp-48h] BYREF
  wchar_t *v54; // [rsp+140h] [rbp-40h]
  const wchar_t *v55; // [rsp+148h] [rbp-38h]
  __int64 v56; // [rsp+150h] [rbp-30h]
  wchar_t *v57; // [rsp+158h] [rbp-28h]
  __int64 v58; // [rsp+160h] [rbp-20h]
  struct _UNICODE_STRING DestinationString; // [rsp+168h] [rbp-18h] BYREF
  unsigned __int16 v60; // [rsp+178h] [rbp-8h] BYREF
  void *Src; // [rsp+180h] [rbp+0h]
  __int64 v62; // [rsp+188h] [rbp+8h]
  __int64 v63; // [rsp+190h] [rbp+10h]
  _QWORD v64[7]; // [rsp+198h] [rbp+18h] BYREF
  int v65; // [rsp+1D0h] [rbp+50h] BYREF
  char v66; // [rsp+1D4h] [rbp+54h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B070);
  v3 = *(_QWORD *)(v2 + 24);
  v56 = v2;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005B110);
  v58 = v4;
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
        (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids);
      v7 = -1073741823;
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10) != 0 )
        McTemplateK0p(v6, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_NESTED_TOO_DEEP, 0LL, *(_QWORD *)(v3 + 24));
      goto LABEL_76;
    }
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015 + 616))(
           WdfDriverGlobals,
           a1,
           &GUID_DEVINTERFACE_USB_HUB,
           0LL);
    v9 = *(_QWORD *)(v3 + 8);
    v7 = v8;
    if ( v8 < 0 )
    {
      v10 = 75;
      v11 = *(_QWORD *)(v9 + 1432);
LABEL_14:
      v40 = v7;
LABEL_15:
      WPP_RECORDER_SF_d(v11, 2u, 5u, v10, (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids, v40);
      goto LABEL_76;
    }
    v12 = (_QWORD *)(v3 + 2136);
    DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                            (__int64)&GUID_DEVINTERFACE_USB_HUB,
                            a1,
                            (_QWORD *)(v3 + 2136),
                            0LL,
                            *(_QWORD *)(v9 + 1432));
    v7 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      v10 = 76;
LABEL_18:
      v40 = DeviceInterfacePath;
      v11 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL);
      goto LABEL_15;
    }
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015 + 616))(
           WdfDriverGlobals,
           a1,
           &GUID_DEVINTERFACE_USB_DEVICE,
           0LL);
    v14 = *(_QWORD *)(v3 + 8);
    v11 = *(_QWORD *)(v14 + 1432);
    if ( v7 < 0 )
    {
      v10 = 77;
      goto LABEL_14;
    }
    v12 = (_QWORD *)(v3 + 2136);
    DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                            (__int64)&GUID_DEVINTERFACE_USB_DEVICE,
                            a1,
                            (_QWORD *)(v3 + 2136),
                            0LL,
                            *(_QWORD *)(v14 + 1432));
    v7 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      v10 = 78;
      goto LABEL_18;
    }
  }
  if ( *v12 )
  {
    DeviceInterfacePath = HUBREG_WriteStringToDeviceHardwareKey(v3);
    v7 = DeviceInterfacePath;
    if ( DeviceInterfacePath < 0 )
    {
      v10 = 79;
      goto LABEL_18;
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
    if ( *v12 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        *v12,
        &DestinationString);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(
                               ExDefaultNonPagedPoolType,
                               DestinationString.Length + 2LL,
                               0x64334855u);
    v57 = PoolWithTag;
    v16 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, DestinationString.Length + 2LL);
      memmove(v16, DestinationString.Buffer, DestinationString.Length);
    }
    memset(v64, 0, sizeof(v64));
    v51 = 0LL;
    LODWORD(v64[0]) = 56;
    v17 = 0LL;
    v64[3] = 0x100000001LL;
    v64[4] = a1;
    v18 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015 + 2464);
    v54 = 0LL;
    if ( v18(WdfDriverGlobals, 0LL, v64, &v51) >= 0
      && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 320))(
           WdfDriverGlobals,
           a1,
           v51) >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int16 *))(WdfFunctions_01015 + 2472))(
        WdfDriverGlobals,
        v51,
        &v60);
      v19 = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v60 + 2LL, 0x64334855u);
      v54 = v19;
      v17 = v19;
      if ( v19 )
      {
        memset(v19, 0, v60 + 2LL);
        memmove(v17, Src, v60);
      }
    }
    memset(v64, 0, sizeof(v64));
    v53 = 0LL;
    LODWORD(v64[0]) = 56;
    v64[3] = 0x100000001LL;
    v64[4] = a1;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, _QWORD *, __int64 *))(WdfFunctions_01015
                                                                                                  + 656))(
           WdfDriverGlobals,
           a1,
           0LL,
           (unsigned int)ExDefaultNonPagedPoolType,
           v64,
           &v53) < 0 )
      v55 = 0LL;
    else
      v55 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                               WdfDriverGlobals,
                               v53,
                               0LL);
    v20 = *(_QWORD *)(v2 + 16);
    v21 = &v66;
    v22 = 5LL;
    v23 = (unsigned __int16 *)(v20 + 314);
    v65 = *(unsigned __int16 *)(v20 + 312);
    do
    {
      v24 = *v23++;
      *(_DWORD *)v21 = v24;
      v21 += 4;
      --v22;
    }
    while ( v22 );
    v25 = *(_BYTE *)(v20 + 232);
    if ( v25 < 6u )
      *(&v65 + v25) = *(unsigned __int16 *)(v2 + 48);
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 8) != 0 )
    {
      v26 = *(_QWORD *)(v3 + 8);
      v62 = v26;
      v27 = *(_DWORD *)(v26 + 204);
      if ( (v27 & 2) != 0 )
        v42 = *(_BYTE *)(v26 + 1341);
      else
        v42 = 0;
      v28 = *(_DWORD *)(v20 + 160);
      v52 = v28;
      if ( v28 == 1 )
      {
        v44 = *(_WORD *)(v20 + 176);
        v46 = *(_DWORD *)(v20 + 168);
        v47 = *(_DWORD *)(v20 + 188);
        v48 = *(_DWORD *)(v20 + 184);
        v49 = *(_DWORD *)(v20 + 180);
        v45 = *(_DWORD *)(v20 + 172);
      }
      else
      {
        LOBYTE(v44) = 0;
        LOBYTE(v47) = 0;
        LOBYTE(v48) = 0;
        LOBYTE(v49) = 0;
        LOBYTE(v45) = -1;
        LOBYTE(v46) = -1;
      }
      v29 = *(_QWORD *)(v3 + 2016);
      v63 = v29;
      if ( v29 )
        v50 = *(_WORD *)(v29 + 2);
      else
        v50 = 0;
      v30 = 0LL;
      v43 = (v27 & 2) != 0;
      if ( v28 == 2 )
        v30 = (const char *)(v20 + 178);
      v31 = 0LL;
      if ( v28 == 2 )
        v31 = (const char *)(v20 + 173);
      v32 = 0LL;
      if ( v28 == 2 )
        v32 = (const char *)(v20 + 168);
      v17 = v54;
      McTemplateK0ppqzznhCR6zcqQ6qqqqqqqqqsssccx(
        (__int64)v32,
        &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_DEVICE_INFORMATION_V1,
        (const GUID *)(v20 + 756),
        *(_QWORD *)(*(_QWORD *)v3 + 240LL),
        *(_QWORD *)(v3 + 24),
        *(_WORD *)(v26 + 200),
        v55,
        v57,
        v41,
        v3 + 1988,
        v50,
        v63,
        v54,
        (*(_BYTE *)(v2 + 32) & 1) == 0,
        *(_BYTE *)(v20 + 232) + 1,
        (__int64)&v65,
        v49,
        v48,
        v47,
        v46,
        v45,
        v44,
        *(_DWORD *)(v56 + 384),
        *(_DWORD *)(v3 + 2224),
        v52,
        v32,
        v31,
        v30,
        v43,
        v42,
        *(_QWORD *)(v62 + 1416));
      v2 = v56;
      v16 = v57;
    }
    if ( v16 )
      ExFreePoolWithTag(v16, 0x64334855u);
    if ( v17 )
      ExFreePoolWithTag(v17, 0x64334855u);
    if ( v51 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    if ( v53 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    v4 = v58;
  }
  if ( (*(_DWORD *)(v3 + 1632) & 6) == 0 )
    WMI_RegisterDevice(a1);
  if ( *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    WdfDriverGlobals->Driver,
                    off_1C005B110)
                + 92) )
  {
    v33 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(WdfDriverGlobals, a1);
    v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
            WdfDriverGlobals,
            *(_QWORD *)(v2 + 16));
    v35 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(WdfDriverGlobals, v34);
    v36 = SleepstudyHelper_RegisterPdoWithParentPdo(*(_QWORD *)(v4 + 96), v35, v33, v2 + 392);
    if ( v36 < 0 )
    {
      LODWORD(v39) = v36;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        2u,
        0x50u,
        (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
        v39);
      *(_QWORD *)(v2 + 392) = 0LL;
    }
  }
LABEL_76:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    LODWORD(v38) = v7;
    McTemplateK0pq(v6, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_COMPLETE, 0LL, *(_QWORD *)(v3 + 24), v38);
  }
  LODWORD(v39) = *(_DWORD *)(v3 + 1644);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
    2u,
    5u,
    0x51u,
    (__int64)&WPP_0e6bdc1f81e733846865473e2191b11e_Traceguids,
    v39);
  return (unsigned int)v7;
}
