/*
 * XREFs of Controller_CreateWdfDevice @ 0x1C0056650
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0059AB0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Device_CheckIsSecureDevice @ 0x1C001482C (Device_CheckIsSecureDevice.c)
 *     Device_IsSecureDevice @ 0x1C0014A64 (Device_IsSecureDevice.c)
 *     RtlUnicodeStringPrintf @ 0x1C0014CC8 (RtlUnicodeStringPrintf.c)
 *     WPP_RECORDER_SF_S @ 0x1C0015010 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall Controller_CreateWdfDevice(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  unsigned int v8; // r12d
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // r9
  unsigned int v12; // ebx
  int v13; // eax
  NTSTATUS i; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v19; // rbx
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // r9
  NTSTATUS v24; // eax
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rdx
  char *v30; // [rsp+20h] [rbp-E0h]
  __int64 v31; // [rsp+28h] [rbp-D8h]
  char v32; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v35; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v36[7]; // [rsp+70h] [rbp-90h] BYREF
  int v37; // [rsp+A8h] [rbp-58h] BYREF
  __int64 (__fastcall *v38)(__int64, __int64, __int64); // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall *v40)(__int64); // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C8h] [rbp-38h]
  int v42; // [rsp+CCh] [rbp-34h]
  _QWORD v43[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v44[8]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v45[8]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v46[18]; // [rsp+170h] [rbp+70h] BYREF
  _DWORD v47[12]; // [rsp+200h] [rbp+100h] BYREF
  GUID v48; // [rsp+230h] [rbp+130h] BYREF
  int v49; // [rsp+240h] [rbp+140h]
  int v50; // [rsp+244h] [rbp+144h]
  char v51; // [rsp+250h] [rbp+150h] BYREF
  char v52; // [rsp+2A0h] [rbp+1A0h] BYREF

  v33 = a1;
  DestinationString.Buffer = (wchar_t *)&v51;
  *(_DWORD *)&DestinationString.Length = 5242880;
  v35.Buffer = (wchar_t *)&v52;
  *(_DWORD *)&v35.Length = 5242880;
  v8 = 0;
  memset(v46, 0, sizeof(v46));
  v46[5] = Controller_WdfEvtDevicePrepareHardware;
  LODWORD(v46[0]) = 144;
  v46[6] = Controller_WdfEvtDeviceReleaseHardware;
  v46[15] = Controller_WdfEvtDeviceUsageNotification;
  v46[1] = Controller_WdfEvtDeviceD0Entry;
  v46[2] = Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled;
  v46[4] = Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled;
  v46[3] = Controller_WdfEvtDeviceD0Exit;
  v46[9] = Controller_WdfEvtDeviceSelfManagedIoInit;
  v46[7] = Controller_WdfEvtDeviceSelfManagedIoCleanup;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(WdfDriverGlobals, a1, v46);
  memset(v44, 0, sizeof(v44));
  v44[1] = Controller_WdfEvtDeviceArmWakeFromS0;
  v44[2] = Controller_WdfEvtDeviceDisarmWakeFromS0;
  v44[3] = Controller_WdfEvtDeviceWakeFromS0Triggered;
  v44[4] = Controller_WdfEvtDeviceArmWakeFromSx;
  v44[5] = Controller_WdfEvtDeviceDisarmWakeFromSx;
  LODWORD(v44[0]) = 64;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 448))(
    WdfDriverGlobals,
    v33,
    v44);
  memset(v43, 0, sizeof(v43));
  v43[2] = Controller_WdfEvtDeviceFilterRemoveResourceRequirements;
  LODWORD(v43[0]) = 32;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1024))(
    WdfDriverGlobals,
    v33,
    v43);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 3440))(
    WdfDriverGlobals,
    v33,
    2LL);
  v32 = 2;
  LOBYTE(v9) = 22;
  v30 = &v32;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v33,
          Controller_WdfEvtPreprocessSetPowerIrp,
          v9);
  v12 = v10;
  if ( v10 < 0 )
  {
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x22u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v10);
LABEL_13:
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control, a2);
    goto LABEL_14;
  }
  if ( *(_BYTE *)(WPP_MAIN_CB.DeviceQueue.Lock + 28) )
  {
    LOBYTE(v11) = 15;
    LODWORD(v30) = 0;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64))(WdfFunctions_01015 + 584))(
            WdfDriverGlobals,
            v33,
            Controller_EvtIoInternalDeviceControl,
            v11);
    v12 = v13;
    if ( v13 < 0 )
    {
      WPP_RECORDER_SF_d(a2, 2u, 4u, 0x23u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v13);
      goto LABEL_13;
    }
  }
  v37 = 40;
  v38 = Controller_EvtDeviceFileCreate;
  v39 = 0LL;
  v40 = Controller_EvtDeviceFileClose;
  v41 = 0;
  v42 = -2147483644;
  memset(v36, 0, sizeof(v36));
  v36[6] = off_1C004E3E0;
  LODWORD(v36[0]) = 56;
  v36[3] = 0x100000001LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *, _QWORD *))(WdfFunctions_01015 + 568))(
    WdfDriverGlobals,
    v33,
    &v37,
    v36);
  memset(v36, 0, sizeof(v36));
  v36[6] = off_1C004E408;
  LODWORD(v36[0]) = 56;
  v36[1] = Device_WdfEvtCleanupCallback;
  v36[3] = 0x100000001LL;
  for ( i = RtlUnicodeStringPrintf(&DestinationString, L"%ws%d", L"\\Device\\USBFDO-", 0LL);
        ;
        i = RtlUnicodeStringPrintf(&DestinationString, L"%ws%d", L"\\Device\\USBFDO-", v8) )
  {
    v12 = i;
    if ( i < 0 )
    {
      WPP_RECORDER_SF_d(a2, 2u, 4u, 0x24u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, i);
      goto LABEL_13;
    }
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 536))(
            WdfDriverGlobals,
            v33,
            &DestinationString);
    v12 = v15;
    if ( v15 < 0 )
    {
      WPP_RECORDER_SF_d(a2, 2u, 4u, 0x25u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v15);
      goto LABEL_13;
    }
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const UNICODE_STRING *))(WdfFunctions_01015 + 544))(
            WdfDriverGlobals,
            v33,
            &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R);
    v12 = v16;
    if ( v16 < 0 )
    {
      WPP_RECORDER_SF_d(a2, 2u, 4u, 0x26u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v16);
      goto LABEL_13;
    }
    memset(v45, 0, 0x38uLL);
    v45[3] = 0x100000001LL;
    v45[6] = off_1C004E098;
    LODWORD(v45[0]) = 56;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 576))(
      WdfDriverGlobals,
      v33,
      v45);
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, _QWORD *))(WdfFunctions_01015 + 600))(
            WdfDriverGlobals,
            &v33,
            v36,
            a3);
    v12 = v17;
    if ( v17 != -1073741771 )
      break;
    WPP_RECORDER_SF_d(a2, 3u, 4u, 0x27u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
    ++v8;
  }
  if ( v17 < 0 )
  {
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x28u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v17);
    goto LABEL_13;
  }
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          *a3,
          off_1C004E408);
  *(_QWORD *)(v19 + 16) = a2;
  *(_QWORD *)(v19 + 32) = *a3;
  Device_CheckIsSecureDevice(v19);
  if ( !Device_IsSecureDevice(v19) )
  {
    LOBYTE(v20) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      *a3,
      1LL,
      v20);
    LOBYTE(v21) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      *a3,
      2LL,
      v21);
    LOBYTE(v22) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      *a3,
      3LL,
      v22);
    LOBYTE(v23) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      *a3,
      4LL,
      v23);
  }
  v24 = RtlUnicodeStringPrintf(&v35, L"%ws%d", L"\\DosDevices\\HCD", v8);
  v12 = v24;
  if ( v24 >= 0 )
  {
    v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *))(WdfFunctions_01015 + 640))(
            WdfDriverGlobals,
            *a3,
            &v35);
    v12 = v25;
    if ( v25 >= 0 )
    {
      WPP_RECORDER_SF_S(a2, 4u, v26, 0x2Bu, (int)v30, v35.Buffer);
      v50 = 0;
      v27 = *a3;
      v48 = GUID_BUS_TYPE_USB;
      v49 = 15;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01015 + 680))(
        WdfDriverGlobals,
        v27,
        &v48);
      v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, GUID *, _QWORD))(WdfFunctions_01015 + 616))(
              WdfDriverGlobals,
              *a3,
              &GUID_DEVINTERFACE_USB_HOST_CONTROLLER,
              0LL);
      v12 = v28;
      if ( v28 >= 0 )
      {
        memset(v47, 0, sizeof(v47));
        v29 = *a3;
        v47[5] = 2;
        v47[6] = 2;
        v47[8] = 2;
        v47[9] = 2;
        v47[10] = -1;
        v47[11] = -1;
        v47[0] = 48;
        *(__m128i *)&v47[1] = _mm_load_si128((const __m128i *)&_xmm);
        v47[7] = 1;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 664))(
          WdfDriverGlobals,
          v29,
          v47);
      }
      else
      {
        LODWORD(v31) = v28;
        WPP_RECORDER_SF_d(a2, 2u, 4u, 0x2Cu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v31);
      }
    }
    else
    {
      WPP_RECORDER_SF_d(a2, 2u, 4u, 0x2Au, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v25);
    }
  }
  else
  {
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x29u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v24);
  }
LABEL_14:
  *a4 = v8;
  return v12;
}
