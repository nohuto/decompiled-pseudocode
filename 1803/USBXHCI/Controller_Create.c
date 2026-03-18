/*
 * XREFs of Controller_Create @ 0x1C0052A48
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0056AA0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     RtlStringCchCopyA @ 0x1C0004E34 (RtlStringCchCopyA.c)
 *     RtlStringCchPrintfA @ 0x1C0004EAC (RtlStringCchPrintfA.c)
 *     Controller_QuerySupportedDSMs @ 0x1C0009270 (Controller_QuerySupportedDSMs.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C00092EC (Controller_ReferenceTrustletProcess.c)
 *     Device_IsSecureDevice @ 0x1C000CF80 (Device_IsSecureDevice.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     DynamicLock_Create @ 0x1C003E2B0 (DynamicLock_Create.c)
 *     Controller_CreateSecureObject @ 0x1C00534EC (Controller_CreateSecureObject.c)
 *     Controller_GetDeviceEnumerator @ 0x1C0054418 (Controller_GetDeviceEnumerator.c)
 *     Controller_PopulateDeviceFlags @ 0x1C00545F4 (Controller_PopulateDeviceFlags.c)
 *     Controller_RetrieveAcpiData @ 0x1C00553D4 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrievePciData @ 0x1C00555F4 (Controller_RetrievePciData.c)
 *     Controller_RetrieveUrsData @ 0x1C0055830 (Controller_RetrieveUrsData.c)
 *     Controller_SetLogIdentifier @ 0x1C005602C (Controller_SetLogIdentifier.c)
 */

__int64 __fastcall Controller_Create(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 (__fastcall *v7)(PWDF_DRIVER_GLOBALS, __int64, void *); // rax
  __int64 v8; // rax
  char IsSecureDevice; // r12
  int v10; // r13d
  __int64 v11; // rdx
  char *v12; // rcx
  signed __int64 v13; // r8
  char v14; // al
  char *v15; // rax
  int DeviceEnumerator; // eax
  int v17; // eax
  unsigned int SecureObject; // ebx
  int AcpiData; // eax
  int UrsData; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdi
  PWDF_DRIVER_GLOBALS v24; // rcx
  __int64 v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rbx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  __int64 v38; // [rsp+28h] [rbp-D8h]
  __int64 v39; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v40; // [rsp+38h] [rbp-C8h] BYREF
  void *v41; // [rsp+40h] [rbp-C0h]
  __int64 v42; // [rsp+48h] [rbp-B8h]
  _QWORD v43[7]; // [rsp+50h] [rbp-B0h] BYREF
  int v44; // [rsp+88h] [rbp-78h] BYREF
  int v45; // [rsp+8Ch] [rbp-74h]
  __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v47[5]; // [rsp+98h] [rbp-68h] BYREF
  __int64 *v48; // [rsp+C0h] [rbp-40h]
  _BYTE v49[56]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v50[32]; // [rsp+100h] [rbp+0h] BYREF
  char pszSrc[8]; // [rsp+200h] [rbp+100h] BYREF
  char v52[4]; // [rsp+208h] [rbp+108h] BYREF
  __int16 v53; // [rsp+20Ch] [rbp+10Ch]
  char v54; // [rsp+20Eh] [rbp+10Eh]
  __int64 v55; // [rsp+210h] [rbp+110h]
  __int64 v56; // [rsp+218h] [rbp+118h]
  __int64 v57; // [rsp+220h] [rbp+120h]
  char v58; // [rsp+228h] [rbp+128h]
  int v59; // [rsp+22Ch] [rbp+12Ch]
  char pszDest[16]; // [rsp+230h] [rbp+130h] BYREF

  v46 = -1LL;
  v48 = a4;
  v7 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616);
  v45 = a3;
  v8 = v7(WdfDriverGlobals, a1, off_1C004B408);
  IsSecureDevice = Device_IsSecureDevice(v8);
  *(_QWORD *)pszSrc = 0LL;
  *(_DWORD *)v52 = 0;
  v53 = 0;
  v54 = 0;
  memset(v49, 0, sizeof(v49));
  v55 = 48LL;
  v59 = 16;
  pszDest[0] = 0;
  v57 = 0LL;
  v58 = 0;
  v56 = 512LL;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d RUNDOWN", a3);
  memset(v43, 0, sizeof(v43));
  v10 = 1;
  v43[6] = off_1C004B430;
  LODWORD(v43[0]) = 56;
  v43[1] = Controller_WdfEvtCleanupCallback;
  v43[3] = 0x100000001LL;
  memset(v50, 0, 0xF8uLL);
  v50[0] = -4294967048LL;
  *(_QWORD *)((char *)&v50[9] + 4) = 0x7FFFFFFF7FFFFFFFLL;
  v11 = 40LL;
  v12 = (char *)&v50[14] + 3;
  LODWORD(v50[9]) = 0;
  v13 = "USBXHCI" - ((char *)&v50[14] + 3);
  BYTE4(v50[12]) = 0;
  BYTE1(v50[13]) = 0;
  BYTE6(v50[13]) = 0;
  WORD2(v50[10]) = 0;
  v50[11] = 0LL;
  LODWORD(v50[12]) = 0;
  do
  {
    if ( v11 == -2147483606 )
      break;
    v14 = v12[v13];
    if ( !v14 )
      break;
    *v12++ = v14;
    --v11;
  }
  while ( v11 );
  v15 = v12 - 1;
  if ( v11 )
    v15 = v12;
  *v15 = 0;
  v50[4] = UsbDevice_UcxEvtDeviceAdd;
  v50[3] = Controller_UcxEvtGetCurrentFrameNumber;
  v50[5] = Controller_UcxEvtReset;
  v50[1] = Controller_UcxEvtQueryUsbCapability;
  v50[28] = Controller_UcxEvtStartTrackingForTimeSync;
  v50[29] = Controller_UcxEvtStopTrackingForTimeSync;
  v50[30] = Controller_UcxEvtGetFrameNumberAndQpcForTimeSync;
  if ( IsSecureDevice )
  {
    memset(&v50[6], 0, 24);
  }
  else
  {
    v50[7] = Crashdump_UcxEvtGetDumpData;
    v50[8] = Crashdump_UcxEvtFreeDumpData;
    v50[6] = Controller_UcxEvtEnableForwardProgress;
  }
  DeviceEnumerator = Controller_GetDeviceEnumerator(a1, a2, v13);
  if ( !DeviceEnumerator )
  {
    v17 = Controller_RetrievePciData(a1, a2, v49, &v46);
    SecureObject = v17;
    if ( v17 < 0 )
    {
      WPP_RECORDER_SF_d(a2, 2u, 4u, 0x5Cu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v17);
      return SecureObject;
    }
    goto LABEL_19;
  }
  if ( DeviceEnumerator == 1 )
  {
    v10 = 2;
    AcpiData = Controller_RetrieveAcpiData(a1, a2, pszSrc);
    SecureObject = AcpiData;
    if ( AcpiData < 0 )
    {
      WPP_RECORDER_SF_d(a2, 2u, 4u, 0x5Du, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, AcpiData);
      return SecureObject;
    }
  }
  else
  {
    UrsData = Controller_RetrieveUrsData(a1, a2, (int)&v44, (int)pszSrc, v49, (__int64)&v46);
    SecureObject = UrsData;
    if ( UrsData < 0 )
    {
      LODWORD(v38) = UrsData;
      WPP_RECORDER_SF_d(a2, 2u, 4u, 0x5Eu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v38);
      return SecureObject;
    }
    v10 = v44;
    if ( v44 != 2 )
    {
LABEL_19:
      *(_QWORD *)((char *)&v50[9] + 4) = *(_QWORD *)v49;
      WORD2(v50[10]) = *(_WORD *)&v49[8];
      v50[11] = *(_QWORD *)&v49[12];
      LODWORD(v50[12]) = *(_DWORD *)&v49[20];
      LODWORD(v50[9]) = 1;
      goto LABEL_21;
    }
  }
  LODWORD(v50[9]) = 2;
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v50[12] + 4, 5uLL, pszSrc);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v50[13] + 1, 5uLL, &pszSrc[5]);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v50[13] + 6, 5uLL, &v52[2]);
LABEL_21:
  v21 = v43[3];
  if ( IsSecureDevice )
    v21 = 2;
  LODWORD(v43[3]) = v21;
  v22 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD *, _QWORD *, __int64 *))qword_1C004C848)(
          *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
          a1,
          v50,
          v43,
          &v39);
  SecureObject = v22;
  if ( v22 < 0 )
  {
    LODWORD(v38) = v22;
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x5Fu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v38);
    return SecureObject;
  }
  v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          v39,
          off_1C004B430);
  *(_QWORD *)(v23 + 32) = v23 + 24;
  *(_QWORD *)(v23 + 24) = v23 + 24;
  *(_QWORD *)v23 = a1;
  *(_QWORD *)(v23 + 8) = v39;
  *(_QWORD *)(v23 + 264) = v46;
  v24 = WdfDriverGlobals;
  *(_QWORD *)(v23 + 72) = a2;
  *(_DWORD *)(v23 + 176) = v45;
  v25 = WdfFunctions_01023;
  *(_DWORD *)(v23 + 180) = v10;
  *(_BYTE *)(v23 + 441) = IsSecureDevice;
  *(_QWORD *)(v23 + 112) = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(v25 + 1616))(
                                         v24,
                                         a1,
                                         off_1C004B408)
                                     + 40);
  if ( *(_DWORD *)(v23 + 180) == 1 )
  {
    v26 = *(_OWORD *)&v49[16];
    *(_OWORD *)(v23 + 184) = *(_OWORD *)v49;
    v27 = *(_OWORD *)&v49[32];
    *(_OWORD *)(v23 + 200) = v26;
    *(_QWORD *)&v26 = *(_QWORD *)&v49[48];
    *(_OWORD *)(v23 + 216) = v27;
    *(_QWORD *)(v23 + 232) = v26;
    *(_BYTE *)(v23 + 240) = 0;
    *(_BYTE *)(v23 + 245) = 0;
    *(_BYTE *)(v23 + 250) = 0;
  }
  else
  {
    *(_QWORD *)(v23 + 240) = *(_QWORD *)pszSrc;
    *(_DWORD *)(v23 + 248) = *(_DWORD *)v52;
    *(_WORD *)(v23 + 252) = v53;
    *(_BYTE *)(v23 + 254) = v54;
    *(_DWORD *)(v23 + 184) = 0x7FFFFFFF;
    *(_DWORD *)(v23 + 188) = 0x7FFFFFFF;
    *(_WORD *)(v23 + 192) = 0;
    *(_QWORD *)(v23 + 196) = 0LL;
    *(_DWORD *)(v23 + 204) = 0;
  }
  Controller_SetLogIdentifier(v23);
  *v48 = v23;
  memset(v43, 0, sizeof(v43));
  LODWORD(v43[0]) = 56;
  v43[3] = 0x100000001LL;
  memset(v47, 0, sizeof(v47));
  LODWORD(v47[0]) = 40;
  v47[1] = Controller_WdfEvtWatchdogTimerFunc;
  BYTE4(v47[2]) = 1;
  if ( IsSecureDevice )
  {
    LODWORD(v47[2]) = 0;
    LODWORD(v43[3]) = 2;
  }
  else
  {
    LODWORD(v47[2]) = 5000;
  }
  v43[4] = v39;
  LODWORD(v47[3]) = 1000;
  v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01023 + 2544))(
          WdfDriverGlobals,
          v47,
          v43,
          v23 + 296);
  SecureObject = v28;
  if ( v28 < 0 )
  {
    LODWORD(v38) = v28;
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x60u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v38);
    return SecureObject;
  }
  memset(v43, 0, sizeof(v43));
  v43[4] = v39;
  LODWORD(v43[0]) = 56;
  v41 = Controller_IdleTimeoutUpdateWorker;
  v43[3] = 0x100000001LL;
  v40 = 24LL;
  v42 = 1LL;
  v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64))(WdfFunctions_01023 + 3032))(
          WdfDriverGlobals,
          &v40,
          v43,
          v23 + 408);
  SecureObject = v29;
  if ( v29 < 0 )
  {
    LODWORD(v38) = v29;
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x61u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v38);
    return SecureObject;
  }
  memset(v43, 0, sizeof(v43));
  v43[6] = off_1C004B110;
  v43[4] = v39;
  v41 = Controller_TelemetryReportWorker;
  v43[3] = 0x100000001LL;
  v42 = 1LL;
  LODWORD(v43[0]) = 56;
  v40 = 24LL;
  v30 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64))(WdfFunctions_01023 + 3032))(
          WdfDriverGlobals,
          &v40,
          v43,
          v23 + 304);
  SecureObject = v30;
  if ( v30 < 0 )
  {
    LODWORD(v38) = v30;
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x62u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v38);
    return SecureObject;
  }
  v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
          WdfDriverGlobals,
          *(_QWORD *)(v23 + 304),
          off_1C004B110);
  KeInitializeMutex((PRKMUTEX)(v31 + 24), 0);
  *(_QWORD *)(v31 + 8) = v31;
  *(_QWORD *)v31 = v31;
  KeInitializeSpinLock((PKSPIN_LOCK)(v31 + 16));
  v32 = DynamicLock_Create(v39, a2, IsSecureDevice != 0, (__int64 *)(v23 + 560));
  SecureObject = v32;
  if ( v32 < 0 )
  {
    LODWORD(v38) = v32;
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x63u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v38);
    return SecureObject;
  }
  memset(v43, 0, sizeof(v43));
  v43[4] = v39;
  LODWORD(v43[0]) = 56;
  v43[3] = 0x100000001LL;
  v33 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64))(WdfFunctions_01023 + 104))(
          WdfDriverGlobals,
          v43,
          v23 + 576);
  SecureObject = v33;
  if ( v33 < 0 )
  {
    LODWORD(v38) = v33;
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x64u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v38);
    return SecureObject;
  }
  memset(v43, 0, sizeof(v43));
  v43[6] = off_1C004B110;
  v43[4] = v39;
  v41 = Controller_TimeSyncStartTrackingWorker;
  LODWORD(v43[0]) = 56;
  v43[3] = 0x100000001LL;
  v40 = 24LL;
  v42 = 1LL;
  v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64))(WdfFunctions_01023 + 3032))(
          WdfDriverGlobals,
          &v40,
          v43,
          v23 + 600);
  SecureObject = v34;
  if ( v34 < 0 )
  {
    LODWORD(v38) = v34;
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x65u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v38);
    return SecureObject;
  }
  *(_QWORD *)(v23 + 592) = v23 + 584;
  *(_QWORD *)(v23 + 584) = v23 + 584;
  *(_BYTE *)(v23 + 608) = 0;
  *(_BYTE *)(v23 + 552) = 0;
  KeQueryPerformanceCounter((PLARGE_INTEGER)(v23 + 672));
  *(_QWORD *)(v23 + 680) = 0LL;
  *(_QWORD *)(v23 + 688) = 0LL;
  *(_DWORD *)(v23 + 696) = 0;
  *(_DWORD *)(v23 + 568) = 0;
  Controller_QuerySupportedDSMs(v23);
  *(_QWORD *)(v23 + 272) = 0LL;
  *(_QWORD *)(v23 + 280) = 0LL;
  Controller_PopulateDeviceFlags(v23);
  if ( (*(_BYTE *)(v23 + 272) & 0x10) != 0 )
  {
    SecureObject = -1073741637;
    WPP_RECORDER_SF_(a2, 2u, 4u, 0x66u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids);
    return SecureObject;
  }
  if ( IsSecureDevice )
  {
    SecureObject = Controller_ReferenceTrustletProcess((_QWORD *)v23);
    if ( (SecureObject & 0x80000000) != 0 )
      return SecureObject;
    SecureObject = Controller_CreateSecureObject(v23);
    if ( (SecureObject & 0x80000000) != 0 )
      return SecureObject;
    v35 = (*(_DWORD *)(v23 + 448) != 1) + 1;
  }
  else
  {
    v35 = 0;
  }
  *(_DWORD *)(v23 + 444) = v35;
  *(_QWORD *)(v23 + 532) = 0LL;
  v36 = DynamicLock_Create(v39, a2, IsSecureDevice != 0, (__int64 *)(v23 + 544));
  SecureObject = v36;
  if ( v36 < 0 )
  {
    LODWORD(v38) = v36;
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x67u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v38);
  }
  return SecureObject;
}
