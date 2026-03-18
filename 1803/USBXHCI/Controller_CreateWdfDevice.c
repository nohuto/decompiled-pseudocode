/*
 * XREFs of Controller_CreateWdfDevice @ 0x1C0053594
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0056AA0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Device_CheckIsSecureDevice @ 0x1C000CD48 (Device_CheckIsSecureDevice.c)
 *     Device_IsSecureDevice @ 0x1C000CF80 (Device_IsSecureDevice.c)
 *     RtlUnicodeStringPrintf @ 0x1C000D7BC (RtlUnicodeStringPrintf.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C000DCB0 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall Controller_CreateWdfDevice(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  unsigned int v8; // r14d
  __int64 v9; // r9
  NTSTATUS v10; // ebx
  __int64 v11; // r9
  unsigned __int16 v12; // ax
  NTSTATUS v13; // ecx
  __int64 v14; // r9
  int v15; // eax
  __int64 v17; // rbx
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // r9
  NTSTATUS v22; // eax
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  char *v28; // [rsp+20h] [rbp-E0h]
  __int64 v29; // [rsp+28h] [rbp-D8h]
  char v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v33; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v34[7]; // [rsp+70h] [rbp-90h] BYREF
  int v35; // [rsp+A8h] [rbp-58h] BYREF
  __int64 (__fastcall *v36)(__int64, __int64, __int64); // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall *v38)(__int64); // [rsp+C0h] [rbp-40h]
  int v39; // [rsp+C8h] [rbp-38h]
  int v40; // [rsp+CCh] [rbp-34h]
  _QWORD v41[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v42[8]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v43[8]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v44[18]; // [rsp+170h] [rbp+70h] BYREF
  _DWORD v45[12]; // [rsp+200h] [rbp+100h] BYREF
  GUID v46; // [rsp+230h] [rbp+130h] BYREF
  __int64 v47; // [rsp+240h] [rbp+140h]
  char v48; // [rsp+250h] [rbp+150h] BYREF
  char v49; // [rsp+2A0h] [rbp+1A0h] BYREF

  v31 = a1;
  DestinationString.Buffer = (wchar_t *)&v48;
  *(_DWORD *)&DestinationString.Length = 5242880;
  v33.Buffer = (wchar_t *)&v49;
  *(_DWORD *)&v33.Length = 5242880;
  v8 = 0;
  memset(v44, 0, sizeof(v44));
  v44[5] = Controller_WdfEvtDevicePrepareHardware;
  LODWORD(v44[0]) = 144;
  v44[6] = Controller_WdfEvtDeviceReleaseHardware;
  v44[15] = Controller_WdfEvtDeviceUsageNotification;
  v44[1] = Controller_WdfEvtDeviceD0Entry;
  v44[2] = Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled;
  v44[4] = Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled;
  v44[3] = Controller_WdfEvtDeviceD0Exit;
  v44[9] = Controller_WdfEvtDeviceSelfManagedIoInit;
  v44[7] = Controller_WdfEvtDeviceSelfManagedIoCleanup;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 440))(WdfDriverGlobals, a1, v44);
  memset(v42, 0, sizeof(v42));
  v42[1] = Controller_WdfEvtDeviceArmWakeFromS0;
  v42[2] = Controller_WdfEvtDeviceDisarmWakeFromS0;
  v42[3] = Controller_WdfEvtDeviceWakeFromS0Triggered;
  v42[4] = Controller_WdfEvtDeviceArmWakeFromSx;
  v42[5] = Controller_WdfEvtDeviceDisarmWakeFromSx;
  LODWORD(v42[0]) = 64;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 448))(
    WdfDriverGlobals,
    v31,
    v42);
  memset(v41, 0, sizeof(v41));
  v41[2] = Controller_WdfEvtDeviceFilterRemoveResourceRequirements;
  LODWORD(v41[0]) = 32;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 1024))(
    WdfDriverGlobals,
    v31,
    v41);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 3440))(
    WdfDriverGlobals,
    v31,
    2LL);
  v30 = 2;
  LOBYTE(v9) = 22;
  v28 = &v30;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01023 + 584))(
          WdfDriverGlobals,
          v31,
          Controller_WdfEvtPreprocessSetPowerIrp,
          v9);
  if ( v10 < 0 )
  {
    v12 = 34;
LABEL_13:
    v13 = v10;
    goto LABEL_14;
  }
  if ( *(_BYTE *)(WPP_MAIN_CB.DeviceQueue.Lock + 28) )
  {
    LOBYTE(v11) = 15;
    LODWORD(v28) = 0;
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64))(WdfFunctions_01023 + 584))(
            WdfDriverGlobals,
            v31,
            Controller_EvtIoInternalDeviceControl,
            v11);
    v13 = v10;
    if ( v10 < 0 )
    {
      v12 = 35;
LABEL_14:
      WPP_RECORDER_SF_d(a2, 2u, 4u, v12, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v13);
      imp_WppRecorderLogDelete(WPP_GLOBAL_Control, a2);
      goto LABEL_15;
    }
  }
  v37 = 0LL;
  v35 = 40;
  v39 = 0;
  v36 = Controller_EvtDeviceFileCreate;
  v40 = -2147483644;
  v38 = Controller_EvtDeviceFileClose;
  memset(v34, 0, sizeof(v34));
  v34[6] = off_1C004B3E0;
  LODWORD(v34[0]) = 56;
  v34[3] = 0x100000001LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, int *, _QWORD *))(WdfFunctions_01023 + 568))(
    WdfDriverGlobals,
    v31,
    &v35,
    v34);
  memset(v34, 0, sizeof(v34));
  v14 = 0LL;
  v34[6] = off_1C004B408;
  v34[1] = Device_WdfEvtCleanupCallback;
  LODWORD(v34[0]) = 56;
  v34[3] = 0x100000001LL;
  while ( 1 )
  {
    v10 = RtlUnicodeStringPrintf(&DestinationString, L"%ws%d", L"\\Device\\USBFDO-", v14);
    if ( v10 < 0 )
    {
      v12 = 36;
      goto LABEL_13;
    }
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01023 + 536))(
            WdfDriverGlobals,
            v31,
            &DestinationString);
    v13 = v10;
    if ( v10 < 0 )
    {
      v12 = 37;
      goto LABEL_14;
    }
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const UNICODE_STRING *))(WdfFunctions_01023 + 544))(
            WdfDriverGlobals,
            v31,
            &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R);
    v13 = v10;
    if ( v10 < 0 )
    {
      v12 = 38;
      goto LABEL_14;
    }
    memset(v43, 0, 0x38uLL);
    v43[6] = off_1C004B098;
    LODWORD(v43[0]) = 56;
    v43[3] = 0x100000001LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 576))(
      WdfDriverGlobals,
      v31,
      v43);
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, _QWORD *))(WdfFunctions_01023 + 600))(
            WdfDriverGlobals,
            &v31,
            v34,
            a3);
    v10 = v15;
    v13 = v15;
    if ( v15 != -1073741771 )
      break;
    WPP_RECORDER_SF_d(a2, 3u, 4u, 0x27u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
    v14 = ++v8;
  }
  if ( v15 < 0 )
  {
    v12 = 40;
    goto LABEL_14;
  }
  v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          *a3,
          off_1C004B408);
  *(_QWORD *)(v17 + 16) = a2;
  *(_QWORD *)(v17 + 32) = *a3;
  Device_CheckIsSecureDevice(v17);
  if ( !Device_IsSecureDevice(v17) )
  {
    LOBYTE(v18) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01023 + 392))(
      WdfDriverGlobals,
      *a3,
      1LL,
      v18);
    LOBYTE(v19) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01023 + 392))(
      WdfDriverGlobals,
      *a3,
      2LL,
      v19);
    LOBYTE(v20) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01023 + 392))(
      WdfDriverGlobals,
      *a3,
      3LL,
      v20);
    LOBYTE(v21) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01023 + 392))(
      WdfDriverGlobals,
      *a3,
      4LL,
      v21);
  }
  v22 = RtlUnicodeStringPrintf(&v33, L"%ws%d", L"\\DosDevices\\HCD", v8);
  v10 = v22;
  if ( v22 >= 0 )
  {
    v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *))(WdfFunctions_01023 + 640))(
            WdfDriverGlobals,
            *a3,
            &v33);
    v10 = v23;
    if ( v23 >= 0 )
    {
      WPP_RECORDER_SF_S(a2, 4u, v24, 0x2Bu, (int)v28, v33.Buffer);
      v25 = *a3;
      v46 = GUID_BUS_TYPE_USB;
      v47 = 15LL;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01023 + 680))(
        WdfDriverGlobals,
        v25,
        &v46);
      v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, GUID *, _QWORD))(WdfFunctions_01023 + 616))(
              WdfDriverGlobals,
              *a3,
              &GUID_DEVINTERFACE_USB_HOST_CONTROLLER,
              0LL);
      v10 = v26;
      if ( v26 >= 0 )
      {
        memset(v45, 0, sizeof(v45));
        v27 = *a3;
        v45[5] = 2;
        v45[6] = 2;
        v45[8] = 2;
        v45[9] = 2;
        v45[10] = -1;
        v45[11] = -1;
        v45[0] = 48;
        *(__m128i *)&v45[1] = _mm_load_si128((const __m128i *)&_xmm);
        v45[7] = 1;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01023 + 664))(
          WdfDriverGlobals,
          v27,
          v45);
      }
      else
      {
        LODWORD(v29) = v26;
        WPP_RECORDER_SF_d(a2, 2u, 4u, 0x2Cu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v29);
      }
    }
    else
    {
      WPP_RECORDER_SF_d(a2, 2u, 4u, 0x2Au, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v23);
    }
  }
  else
  {
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x29u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v22);
  }
LABEL_15:
  *a4 = v8;
  return (unsigned int)v10;
}
