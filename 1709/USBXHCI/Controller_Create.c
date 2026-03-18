/*
 * XREFs of Controller_Create @ 0x1C0055B84
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0059AB0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     RtlStringCchCopyA @ 0x1C000E06C (RtlStringCchCopyA.c)
 *     RtlStringCchPrintfA @ 0x1C000E0D8 (RtlStringCchPrintfA.c)
 *     Controller_QuerySupportedDSMs @ 0x1C0011EDC (Controller_QuerySupportedDSMs.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C0011F58 (Controller_ReferenceTrustletProcess.c)
 *     Device_IsSecureDevice @ 0x1C0014A64 (Device_IsSecureDevice.c)
 *     DynamicLock_Create @ 0x1C003FC00 (DynamicLock_Create.c)
 *     Controller_InitializeDeviceFlags @ 0x1C0055008 (Controller_InitializeDeviceFlags.c)
 *     Controller_CreateSecureObject @ 0x1C00565B8 (Controller_CreateSecureObject.c)
 *     Controller_GetDeviceEnumerator @ 0x1C00574A8 (Controller_GetDeviceEnumerator.c)
 *     Controller_PopulateDeviceFlags @ 0x1C0057684 (Controller_PopulateDeviceFlags.c)
 *     Controller_RetrieveAcpiData @ 0x1C0058448 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrievePciData @ 0x1C0058670 (Controller_RetrievePciData.c)
 *     Controller_RetrieveUrsData @ 0x1C00588A8 (Controller_RetrieveUrsData.c)
 *     Controller_SetLogIdentifier @ 0x1C00590A0 (Controller_SetLogIdentifier.c)
 */

__int64 __fastcall Controller_Create(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 (__fastcall *v7)(PWDF_DRIVER_GLOBALS, __int64, void *); // rax
  __int64 v8; // rax
  char IsSecureDevice; // r13
  int v10; // r12d
  __int64 v11; // rdx
  char *v12; // rcx
  signed __int64 v13; // r8
  char v14; // al
  char *v15; // rax
  int DeviceEnumerator; // eax
  int v17; // eax
  int SecureObject; // ebx
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
  __int64 v35; // rcx
  __int64 v37; // [rsp+28h] [rbp-D8h]
  __int64 v38; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+38h] [rbp-C8h] BYREF
  void *v40; // [rsp+40h] [rbp-C0h]
  __int64 v41; // [rsp+48h] [rbp-B8h]
  _QWORD v42[7]; // [rsp+50h] [rbp-B0h] BYREF
  int v43; // [rsp+88h] [rbp-78h] BYREF
  int v44; // [rsp+8Ch] [rbp-74h]
  __int64 v45; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v46[5]; // [rsp+98h] [rbp-68h] BYREF
  __int64 *v47; // [rsp+C0h] [rbp-40h]
  _BYTE v48[56]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v49[32]; // [rsp+100h] [rbp+0h] BYREF
  char pszSrc[8]; // [rsp+200h] [rbp+100h] BYREF
  char v51[4]; // [rsp+208h] [rbp+108h] BYREF
  __int16 v52; // [rsp+20Ch] [rbp+10Ch]
  char v53; // [rsp+20Eh] [rbp+10Eh]
  __int64 v54; // [rsp+210h] [rbp+110h]
  __int64 v55; // [rsp+218h] [rbp+118h]
  __int64 v56; // [rsp+220h] [rbp+120h]
  char v57; // [rsp+228h] [rbp+128h]
  int v58; // [rsp+22Ch] [rbp+12Ch]
  char pszDest[16]; // [rsp+230h] [rbp+130h] BYREF

  v45 = -1LL;
  v47 = a4;
  v7 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616);
  v44 = a3;
  v8 = v7(WdfDriverGlobals, a1, off_1C004E408);
  IsSecureDevice = Device_IsSecureDevice(v8);
  *(_QWORD *)pszSrc = 0LL;
  *(_DWORD *)v51 = 0;
  v52 = 0;
  v53 = 0;
  memset(v48, 0, sizeof(v48));
  v54 = 48LL;
  v58 = 16;
  pszDest[0] = 0;
  v56 = 0LL;
  v57 = 0;
  v55 = 512LL;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d RUNDOWN", a3);
  memset(v42, 0, sizeof(v42));
  v10 = 1;
  v42[6] = off_1C004E430;
  LODWORD(v42[0]) = 56;
  v42[1] = Controller_WdfEvtCleanupCallback;
  v42[3] = 0x100000001LL;
  memset(v49, 0, 0xF8uLL);
  v49[0] = -4294967048LL;
  *(_QWORD *)((char *)&v49[9] + 4) = 0x7FFFFFFF7FFFFFFFLL;
  v11 = 40LL;
  v12 = (char *)&v49[14] + 3;
  LODWORD(v49[9]) = 0;
  v13 = "USBXHCI" - ((char *)&v49[14] + 3);
  BYTE4(v49[12]) = 0;
  BYTE1(v49[13]) = 0;
  BYTE6(v49[13]) = 0;
  WORD2(v49[10]) = 0;
  v49[11] = 0LL;
  LODWORD(v49[12]) = 0;
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
  v49[4] = UsbDevice_UcxEvtDeviceAdd;
  v49[3] = Controller_UcxEvtGetCurrentFrameNumber;
  v49[5] = Controller_UcxEvtReset;
  v49[1] = Controller_UcxEvtQueryUsbCapability;
  v49[28] = Controller_UcxEvtStartTrackingForTimeSync;
  v49[29] = Controller_UcxEvtStopTrackingForTimeSync;
  v49[30] = Controller_UcxEvtGetFrameNumberAndQpcForTimeSync;
  if ( IsSecureDevice )
  {
    memset(&v49[6], 0, 24);
  }
  else
  {
    v49[7] = Crashdump_UcxEvtGetDumpData;
    v49[8] = Crashdump_UcxEvtFreeDumpData;
    v49[6] = Controller_UcxEvtEnableForwardProgress;
  }
  DeviceEnumerator = Controller_GetDeviceEnumerator(a1, a2, v13);
  if ( !DeviceEnumerator )
  {
    v17 = Controller_RetrievePciData(a1, a2, v48, &v45);
    SecureObject = v17;
    if ( v17 < 0 )
    {
      WPP_RECORDER_SF_d(a2, 2u, 4u, 0x5Cu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v17);
      return (unsigned int)SecureObject;
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
      WPP_RECORDER_SF_d(a2, 2u, 4u, 0x5Du, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, AcpiData);
      return (unsigned int)SecureObject;
    }
    goto LABEL_20;
  }
  UrsData = Controller_RetrieveUrsData(a1, a2, (int)&v43, (int)pszSrc, v48, (__int64)&v45);
  SecureObject = UrsData;
  if ( UrsData < 0 )
  {
    LODWORD(v37) = UrsData;
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x5Eu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v37);
    return (unsigned int)SecureObject;
  }
  v10 = v43;
  if ( v43 == 2 )
  {
LABEL_20:
    LODWORD(v49[9]) = 2;
    RtlStringCchCopyA((NTSTRSAFE_PSTR)&v49[12] + 4, 5uLL, pszSrc);
    RtlStringCchCopyA((NTSTRSAFE_PSTR)&v49[13] + 1, 5uLL, &pszSrc[5]);
    RtlStringCchCopyA((NTSTRSAFE_PSTR)&v49[13] + 6, 5uLL, &v51[2]);
    goto LABEL_21;
  }
LABEL_19:
  *(_QWORD *)((char *)&v49[9] + 4) = *(_QWORD *)v48;
  WORD2(v49[10]) = *(_WORD *)&v48[8];
  v49[11] = *(_QWORD *)&v48[12];
  LODWORD(v49[12]) = *(_DWORD *)&v48[20];
  LODWORD(v49[9]) = 1;
LABEL_21:
  v21 = v42[3];
  if ( IsSecureDevice )
    v21 = 2;
  LODWORD(v42[3]) = v21;
  v22 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD *, _QWORD *, __int64 *))qword_1C004F848)(
          *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
          a1,
          v49,
          v42,
          &v38);
  SecureObject = v22;
  if ( v22 >= 0 )
  {
    v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            v38,
            off_1C004E430);
    *(_QWORD *)(v23 + 32) = v23 + 24;
    *(_QWORD *)(v23 + 24) = v23 + 24;
    *(_QWORD *)v23 = a1;
    *(_QWORD *)(v23 + 8) = v38;
    *(_QWORD *)(v23 + 264) = v45;
    v24 = WdfDriverGlobals;
    *(_QWORD *)(v23 + 72) = a2;
    *(_DWORD *)(v23 + 176) = v44;
    v25 = WdfFunctions_01015;
    *(_DWORD *)(v23 + 180) = v10;
    *(_BYTE *)(v23 + 441) = IsSecureDevice;
    *(_QWORD *)(v23 + 112) = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(v25 + 1616))(
                                           v24,
                                           a1,
                                           off_1C004E408)
                                       + 40);
    if ( *(_DWORD *)(v23 + 180) == 1 )
    {
      v26 = *(_OWORD *)&v48[16];
      *(_OWORD *)(v23 + 184) = *(_OWORD *)v48;
      v27 = *(_OWORD *)&v48[32];
      *(_OWORD *)(v23 + 200) = v26;
      *(_QWORD *)&v26 = *(_QWORD *)&v48[48];
      *(_OWORD *)(v23 + 216) = v27;
      *(_QWORD *)(v23 + 232) = v26;
      *(_BYTE *)(v23 + 240) = 0;
      *(_BYTE *)(v23 + 245) = 0;
      *(_BYTE *)(v23 + 250) = 0;
    }
    else
    {
      *(_QWORD *)(v23 + 240) = *(_QWORD *)pszSrc;
      *(_DWORD *)(v23 + 248) = *(_DWORD *)v51;
      *(_WORD *)(v23 + 252) = v52;
      *(_BYTE *)(v23 + 254) = v53;
      *(_DWORD *)(v23 + 184) = 0x7FFFFFFF;
      *(_DWORD *)(v23 + 188) = 0x7FFFFFFF;
      *(_WORD *)(v23 + 192) = 0;
      *(_QWORD *)(v23 + 196) = 0LL;
      *(_DWORD *)(v23 + 204) = 0;
    }
    Controller_SetLogIdentifier(v23);
    *v47 = v23;
    memset(v42, 0, sizeof(v42));
    LODWORD(v42[0]) = 56;
    v42[3] = 0x100000001LL;
    memset(v46, 0, sizeof(v46));
    LODWORD(v46[0]) = 40;
    v46[1] = Controller_WdfEvtWatchdogTimerFunc;
    BYTE4(v46[2]) = 1;
    if ( IsSecureDevice )
    {
      LODWORD(v46[2]) = 0;
      LODWORD(v42[3]) = 2;
    }
    else
    {
      LODWORD(v46[2]) = 5000;
    }
    v42[4] = v38;
    LODWORD(v46[3]) = 1000;
    v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 2544))(
            WdfDriverGlobals,
            v46,
            v42,
            v23 + 296);
    SecureObject = v28;
    if ( v28 >= 0 )
    {
      memset(v42, 0, sizeof(v42));
      v42[4] = v38;
      LODWORD(v42[0]) = 56;
      v40 = Controller_IdleTimeoutUpdateWorker;
      v42[3] = 0x100000001LL;
      v39 = 24LL;
      v41 = 1LL;
      v29 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64))(WdfFunctions_01015 + 3032))(
              WdfDriverGlobals,
              &v39,
              v42,
              v23 + 408);
      SecureObject = v29;
      if ( v29 >= 0 )
      {
        memset(v42, 0, sizeof(v42));
        v42[6] = off_1C004E110;
        v42[4] = v38;
        v40 = Controller_TelemetryReportWorker;
        v42[3] = 0x100000001LL;
        v41 = 1LL;
        LODWORD(v42[0]) = 56;
        v39 = 24LL;
        v30 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64))(WdfFunctions_01015 + 3032))(
                WdfDriverGlobals,
                &v39,
                v42,
                v23 + 304);
        SecureObject = v30;
        if ( v30 >= 0 )
        {
          v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  *(_QWORD *)(v23 + 304),
                  off_1C004E110);
          KeInitializeMutex((PRKMUTEX)(v31 + 24), 0);
          *(_QWORD *)(v31 + 8) = v31;
          *(_QWORD *)v31 = v31;
          KeInitializeSpinLock((PKSPIN_LOCK)(v31 + 16));
          v32 = DynamicLock_Create(v38, a2, IsSecureDevice != 0, (__int64 *)(v23 + 544));
          SecureObject = v32;
          if ( v32 >= 0 )
          {
            memset(v42, 0, sizeof(v42));
            v42[4] = v38;
            LODWORD(v42[0]) = 56;
            v42[3] = 0x100000001LL;
            v33 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64))(WdfFunctions_01015 + 104))(
                    WdfDriverGlobals,
                    v42,
                    v23 + 560);
            SecureObject = v33;
            if ( v33 >= 0 )
            {
              memset(v42, 0, sizeof(v42));
              v42[6] = off_1C004E110;
              v42[4] = v38;
              v40 = Controller_TimeSyncStartTrackingWorker;
              LODWORD(v42[0]) = 56;
              v42[3] = 0x100000001LL;
              v39 = 24LL;
              v41 = 1LL;
              v34 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64))(WdfFunctions_01015
                                                                                                 + 3032))(
                      WdfDriverGlobals,
                      &v39,
                      v42,
                      v23 + 584);
              SecureObject = v34;
              if ( v34 >= 0 )
              {
                *(_QWORD *)(v23 + 576) = v23 + 568;
                *(_QWORD *)(v23 + 568) = v23 + 568;
                *(_BYTE *)(v23 + 592) = 0;
                *(_BYTE *)(v23 + 536) = 0;
                KeQueryPerformanceCounter((PLARGE_INTEGER)(v23 + 656));
                *(_QWORD *)(v23 + 664) = 0LL;
                *(_QWORD *)(v23 + 672) = 0LL;
                *(_DWORD *)(v23 + 680) = 0;
                *(_DWORD *)(v23 + 552) = 0;
                Controller_QuerySupportedDSMs(v23);
                Controller_InitializeDeviceFlags(v23);
                Controller_PopulateDeviceFlags(v35);
                if ( (*(_BYTE *)(v23 + 272) & 0x10) != 0 )
                {
                  SecureObject = -1073741637;
                  WPP_RECORDER_SF_(a2, 2u, 4u, 0x66u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
                }
                else if ( !IsSecureDevice
                       || (SecureObject = Controller_ReferenceTrustletProcess((_QWORD *)v23), SecureObject >= 0)
                       && (SecureObject = Controller_CreateSecureObject(v23), SecureObject >= 0) )
                {
                  *(_DWORD *)(v23 + 524) = 0;
                }
              }
              else
              {
                LODWORD(v37) = v34;
                WPP_RECORDER_SF_d(a2, 2u, 4u, 0x65u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v37);
              }
            }
            else
            {
              LODWORD(v37) = v33;
              WPP_RECORDER_SF_d(a2, 2u, 4u, 0x64u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v37);
            }
          }
          else
          {
            LODWORD(v37) = v32;
            WPP_RECORDER_SF_d(a2, 2u, 4u, 0x63u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v37);
          }
        }
        else
        {
          LODWORD(v37) = v30;
          WPP_RECORDER_SF_d(a2, 2u, 4u, 0x62u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v37);
        }
      }
      else
      {
        LODWORD(v37) = v29;
        WPP_RECORDER_SF_d(a2, 2u, 4u, 0x61u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v37);
      }
    }
    else
    {
      LODWORD(v37) = v28;
      WPP_RECORDER_SF_d(a2, 2u, 4u, 0x60u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v37);
    }
  }
  else
  {
    LODWORD(v37) = v22;
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x5Fu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v37);
  }
  return (unsigned int)SecureObject;
}
