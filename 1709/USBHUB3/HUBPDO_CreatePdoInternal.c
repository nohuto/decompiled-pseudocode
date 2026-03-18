/*
 * XREFs of HUBPDO_CreatePdoInternal @ 0x1C006B6F4
 * Callers:
 *     HUBPDO_CreatePdo @ 0x1C006C82C (HUBPDO_CreatePdo.c)
 *     HUBPDO_CreateUnknownPdo @ 0x1C006C8F0 (HUBPDO_CreateUnknownPdo.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C000136C (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0ppqq @ 0x1C0010AE4 (McTemplateK0ppqq.c)
 *     WPP_RECORDER_SF_qDDDdddddd @ 0x1C0011398 (WPP_RECORDER_SF_qDDDdddddd.c)
 *     HUBPDO_RegisterForPowerSettingsForDevice @ 0x1C0015ED4 (HUBPDO_RegisterForPowerSettingsForDevice.c)
 *     HUBPDO_RegisterForPowerSettingsForHub @ 0x1C0016020 (HUBPDO_RegisterForPowerSettingsForHub.c)
 *     HUBIDLE_AddEvent @ 0x1C00341EC (HUBIDLE_AddEvent.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00391C0 (memset.c)
 *     HUBPDO_MakePdoName @ 0x1C006B420 (HUBPDO_MakePdoName.c)
 *     HUBPDO_AssignPDOIds @ 0x1C006B4FC (HUBPDO_AssignPDOIds.c)
 *     WMI_FireNotification @ 0x1C0075028 (WMI_FireNotification.c)
 */

__int64 __fastcall HUBPDO_CreatePdoInternal(__int64 a1, char a2)
{
  int v3; // r14d
  char v4; // si
  char v5; // r13
  char v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // r9
  int PdoName; // eax
  __int64 v13; // r9
  unsigned __int16 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // r14
  int v21; // edi
  __int64 v22; // rax
  char v23; // cl
  __int64 v24; // rax
  int v25; // eax
  unsigned __int16 v26; // r9
  __int64 v27; // r9
  __int64 v28; // r9
  __int64 v29; // r9
  __int64 v30; // r9
  __int64 v31; // r12
  __int16 v32; // cx
  int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdi
  int v38; // r8d
  bool v39; // zf
  int v40; // edx
  BOOL v41; // eax
  BOOL v42; // eax
  __int64 v43; // rax
  _QWORD *v44; // r15
  int v45; // eax
  unsigned __int16 v46; // r9
  struct _KEVENT *v47; // rax
  int v48; // eax
  __int64 v49; // r8
  int *v50; // rdx
  unsigned __int16 *v51; // rcx
  int v52; // eax
  unsigned __int8 v53; // al
  unsigned int v54; // edi
  __int64 v55; // rax
  ULONG RemlockSize[2]; // [rsp+28h] [rbp-E0h]
  int RemlockSizea; // [rsp+28h] [rbp-E0h]
  __int64 v59; // [rsp+30h] [rbp-D8h]
  __int64 v60; // [rsp+30h] [rbp-D8h]
  char v61; // [rsp+88h] [rbp-80h]
  char v62; // [rsp+89h] [rbp-7Fh]
  __int64 v64; // [rsp+98h] [rbp-70h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v66; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v67[7]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v68[3]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v69[6]; // [rsp+100h] [rbp-8h] BYREF
  _QWORD v70[5]; // [rsp+130h] [rbp+28h] BYREF
  _BYTE v71[16]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v72[8]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v73[18]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v74[12]; // [rsp+238h] [rbp+130h] BYREF
  _QWORD v75[18]; // [rsp+298h] [rbp+190h] BYREF
  _QWORD v76[10]; // [rsp+328h] [rbp+220h] BYREF
  _QWORD v77[6]; // [rsp+378h] [rbp+270h] BYREF
  int v78; // [rsp+3A8h] [rbp+2A0h]
  int v79; // [rsp+3ACh] [rbp+2A4h] BYREF
  _DWORD v80[2]; // [rsp+3C0h] [rbp+2B8h] BYREF
  char v81; // [rsp+3C8h] [rbp+2C0h]

  v61 = 0;
  v64 = 0LL;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( a2 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 2u);
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFFD);
    v7 = *(_QWORD *)a1;
    if ( (*(_DWORD *)(v7 + 40) & 0x40000) == 0 || (*(_DWORD *)(a1 + 1632) & 0x20) == 0 )
      WMI_FireNotification(v7, *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL), 0LL);
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)a1);
  v65 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1680))(WdfDriverGlobals, v8);
  if ( v65 )
  {
    v5 = 1;
    memset(v73, 0, sizeof(v73));
    v73[1] = HUBPDO_EvtDeviceD0Entry;
    v73[3] = HUBPDO_EvtDeviceD0Exit;
    v73[5] = HUBPDO_EvtDevicePrepareHardware;
    v73[6] = HUBPDO_EvtDeviceReleaseHardware;
    v73[12] = HUBPDO_EvtDeviceSurpriseRemoval;
    v73[9] = HUBPDO_EvtDeviceSelfManagedIoInit;
    v73[11] = HUBPDO_EvtDeviceSelfManagedIoInit;
    v73[10] = HUBPDO_EvtDeviceSelfManagedIoSuspend;
    v73[17] = HUBPDO_EvtDeviceUsageNotificationEx;
    v73[14] = HUBPDO_EvtDeviceQueryStop;
    v73[13] = HUBPDO_EvtDeviceQueryRemove;
    LODWORD(v73[0]) = 144;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(
      WdfDriverGlobals,
      v65,
      v73);
    memset(v72, 0, sizeof(v72));
    v72[5] = HUBPDO_EvtDeviceEnableWakeAtBus;
    v72[6] = HUBPDO_EvtDeviceDisableWakeAtBus;
    v72[7] = HUBPDO_EvtDeviceReportedMissing;
    v72[2] = HUBPDO_EvtDeviceResourceRequirementsQuery;
    LODWORD(v72[0]) = 64;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1688))(
      WdfDriverGlobals,
      v65,
      v72);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 528))(
      WdfDriverGlobals,
      v65,
      34LL);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 496))(
      WdfDriverGlobals,
      v65,
      0LL);
    LOBYTE(v11) = 15;
    PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
                WdfDriverGlobals,
                v65,
                HUBPDO_EvtDeviceWdmIrpPreprocess,
                v11,
                0LL,
                0);
    v10 = PdoName;
    if ( PdoName >= 0 )
    {
      LOBYTE(v13) = 14;
      PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
                  WdfDriverGlobals,
                  v65,
                  HUBPDO_EvtDeviceWdmIrpPreprocess,
                  v13,
                  0LL,
                  0);
      v10 = PdoName;
      if ( PdoName >= 0 )
      {
        v80[0] = 419564552;
        LOBYTE(v15) = 27;
        v80[1] = 336271104;
        v81 = 19;
        PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _DWORD *, int))(WdfFunctions_01015 + 584))(
                    WdfDriverGlobals,
                    v65,
                    HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess,
                    v15,
                    v80,
                    9);
        v10 = PdoName;
        if ( PdoName >= 0 )
        {
          LOBYTE(v80[0]) = 2;
          LOBYTE(v16) = 22;
          PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _DWORD *, int))(WdfFunctions_01015 + 584))(
                      WdfDriverGlobals,
                      v65,
                      HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess,
                      v16,
                      v80,
                      1);
          v10 = PdoName;
          if ( PdoName >= 0 )
          {
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3136))(WdfDriverGlobals, v65);
            v66 = 0x100000008LL;
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 3224))(
              WdfDriverGlobals,
              v65,
              &v66);
            PdoName = HUBPDO_AssignPDOIds(a1, v65);
            v10 = PdoName;
            if ( PdoName >= 0 )
            {
              if ( (*(_DWORD *)(a1 + 1636) & 2) == 0 )
              {
                v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01015 + 1744))(
                        WdfDriverGlobals,
                        v65,
                        &GUID_DEVCLASS_UNKNOWN);
                if ( v17 < 0 )
                {
                  LODWORD(v60) = v17;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                    3u,
                    2u,
                    0x70u,
                    (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
                    v60);
                }
              }
              memset(v67, 0, sizeof(v67));
              v67[6] = off_1C005B070;
              v67[1] = HUBPDO_EvtDeviceCleanup;
              LODWORD(v67[0]) = 56;
              v67[3] = 0x100000001LL;
              v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                      WdfDriverGlobals,
                      a1);
              (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
                WdfDriverGlobals,
                v18,
                "DSM PDO Tag",
                8078LL,
                "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
              v6 = 1;
              v62 = 1;
              while ( 1 )
              {
                PdoName = HUBPDO_MakePdoName(a1, v65);
                v10 = PdoName;
                if ( PdoName < 0 )
                  break;
                PdoName = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const UNICODE_STRING *))(WdfFunctions_01015 + 544))(
                            WdfDriverGlobals,
                            v65,
                            &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R);
                v10 = PdoName;
                if ( PdoName < 0 )
                {
                  v14 = 114;
                  goto LABEL_70;
                }
                v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015 + 600))(
                        WdfDriverGlobals,
                        &v65,
                        v67,
                        &v64);
                v10 = v19;
                if ( v19 >= 0 )
                {
                  v61 = 1;
                  v6 = 0;
                  v62 = 0;
LABEL_28:
                  if ( v19 < 0 )
                  {
                    LODWORD(v60) = v19;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                      2u,
                      2u,
                      0x73u,
                      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
                      v60);
LABEL_30:
                    v4 = v61;
                    goto LABEL_71;
                  }
                  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                          WdfDriverGlobals,
                          v64,
                          off_1C005B070);
                  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v20 + 416), 0x55535257u, 0, 0, 0x20u);
                  v21 = *(_DWORD *)(a1 + 1632);
                  if ( (v21 & 2) != 0 )
                  {
                    memset(v75, 0, 0x88uLL);
                    v75[3] = HUBFDO_GetPortStatusForDebuggingComplete;
                    v22 = *(_QWORD *)a1;
                    v75[2] = HUBFDO_GetPortStatusForDebuggingComplete;
                    v5 = 1;
                    LODWORD(v75[0]) = 66388104;
                    v23 = *(_BYTE *)(v22 + 232);
                    LODWORD(v75[6]) = *(_DWORD *)(a1 + 172);
                    v24 = *(_QWORD *)(a1 + 24);
                    LOBYTE(v75[4]) = v23 + 1;
                    BYTE5(v75[6]) = (v21 & 0x1000) != 0;
                    v75[5] = v24;
                    v75[16] = 0LL;
                    memset(v69, 0, sizeof(v69));
                    v69[1] = v75;
                    v69[2] = &GUID_HUB_PARENT_INTERFACE;
                    v69[4] = HUBPDO_EvtDeviceProcessQueryInterfaceRequest;
                    LODWORD(v69[0]) = 48;
                    LOBYTE(v69[5]) = 1;
                    v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1824))(
                            WdfDriverGlobals,
                            v64,
                            v69);
                    v10 = v25;
                    if ( v25 < 0 )
                    {
                      v26 = 116;
LABEL_34:
                      LODWORD(v60) = v25;
                      WPP_RECORDER_SF_d(
                        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                        2u,
                        2u,
                        v26,
                        (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
                        v60);
                      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(
                        WdfDriverGlobals,
                        v64);
                      goto LABEL_30;
                    }
                  }
                  else
                  {
                    v5 = 1;
                  }
                  memset(v70, 0, sizeof(v70));
                  LODWORD(v70[0]) = 65576;
                  v70[2] = HUBFDO_GetPortStatusForDebuggingComplete;
                  v70[1] = a1;
                  v70[3] = HUBFDO_GetPortStatusForDebuggingComplete;
                  v70[4] = HUBPDO_GetLocationString;
                  memset(v69, 0, sizeof(v69));
                  v69[1] = v70;
                  v69[2] = &GUID_PNP_LOCATION_INTERFACE;
                  LODWORD(v69[0]) = 48;
                  v69[4] = 0LL;
                  v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1824))(
                          WdfDriverGlobals,
                          v64,
                          v69);
                  v10 = v25;
                  if ( v25 < 0 )
                  {
                    v26 = 117;
                    goto LABEL_34;
                  }
                  LOBYTE(v27) = 1;
                  v5 = 0;
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
                    WdfDriverGlobals,
                    v64,
                    1LL,
                    v27);
                  LOBYTE(v28) = 1;
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
                    WdfDriverGlobals,
                    v64,
                    2LL,
                    v28);
                  LOBYTE(v29) = 1;
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
                    WdfDriverGlobals,
                    v64,
                    3LL,
                    v29);
                  LOBYTE(v30) = 1;
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
                    WdfDriverGlobals,
                    v64,
                    4LL,
                    v30);
                  *(_QWORD *)(v20 + 24) = a1;
                  v31 = 5LL;
                  *(_QWORD *)(v20 + 16) = *(_QWORD *)a1;
                  v32 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 200LL);
                  *(_DWORD *)(v20 + 388) = -1;
                  *(_WORD *)(v20 + 48) = v32;
                  *(_DWORD *)(v20 + 384) = 5;
                  if ( a2 )
                    *(_QWORD *)(v20 + 8) = *(_QWORD *)(*(_QWORD *)a1 + 2440LL);
                  else
                    *(_BYTE *)v20 = 1;
                  *(_QWORD *)(a1 + 16) = v20;
                  memset(v74, 0, sizeof(v74));
                  LODWORD(v74[1]) = 0;
                  BYTE5(v74[1]) = 1;
                  v74[0] = 0x100000060LL;
                  v74[6] = HUBPDO_EvtIoInternalDeviceControl;
                  v74[5] = HUBPDO_EvtIoDeviceControl;
                  v33 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, _BYTE *))(WdfFunctions_01015 + 1216))(
                          WdfDriverGlobals,
                          v64,
                          v74,
                          0LL,
                          v71);
                  v10 = v33;
                  if ( v33 < 0 )
                  {
                    LODWORD(v60) = v33;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                      2u,
                      2u,
                      0x76u,
                      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
                      v60);
LABEL_43:
                    v4 = v61;
                    goto LABEL_71;
                  }
                  memset(v77, 0, sizeof(v77));
                  v34 = *(_DWORD *)(a1 + 1632);
                  LODWORD(v77[1]) = 2;
                  LODWORD(v77[2]) = 2;
                  v77[3] = 2LL;
                  v77[4] = 0x200000002LL;
                  v77[5] = -1LL;
                  HIDWORD(v77[1]) = ((v34 >> 5) & 1) == 0;
                  v35 = *(_QWORD *)(a1 + 8);
                  v77[0] = 0x200000030LL;
                  HIDWORD(v77[2]) = (v34 >> 6) & 1;
                  LODWORD(v77[5]) = *(unsigned __int16 *)(v35 + 200);
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 664))(
                    WdfDriverGlobals,
                    v64,
                    v77);
                  memset(v76, 0, sizeof(v76));
                  v36 = 2LL;
                  LODWORD(v76[0]) = 80;
                  v37 = *(_QWORD *)a1;
                  *(_QWORD *)((char *)&v76[3] + 4) = 0x500000005LL;
                  v38 = 2;
                  *(_QWORD *)((char *)&v76[4] + 4) = 0x500000005LL;
                  *(_QWORD *)((char *)&v76[5] + 4) = 0x500000005LL;
                  HIDWORD(v76[6]) = 5;
                  v39 = (*(_DWORD *)(a1 + 1632) & 0x102) == 0;
                  v76[8] = -1LL;
                  v76[9] = 0x5FFFFFFFFLL;
                  *(_QWORD *)((char *)v76 + 4) = 0x200000002LL;
                  *(_QWORD *)((char *)&v76[1] + 4) = 0x200000002LL;
                  *(_QWORD *)((char *)&v76[2] + 4) = 0x200000002LL;
                  v76[7] = 0x700000005LL;
                  v40 = *(_DWORD *)(v37 + 732);
                  HIDWORD(v76[7]) = v40;
                  LODWORD(v76[4]) = 1;
                  v76[8] = 0LL;
                  LODWORD(v76[9]) = 0;
                  if ( v39 )
                  {
                    LODWORD(v76[7]) = 1;
                    *(_QWORD *)((char *)&v76[1] + 4) = 1LL;
                    *(_QWORD *)((char *)&v76[2] + 4) = 0LL;
                    *(_QWORD *)((char *)v76 + 4) = 0LL;
                    while ( 1 )
                    {
                      v41 = v38++ > v40;
                      *((_DWORD *)&v76[3] + ++v36) = v41 + 3;
                      if ( v36 > 6 )
                        break;
                      v40 = HIDWORD(v76[7]);
                    }
                    goto LABEL_57;
                  }
                  LODWORD(v76[7]) = 3;
                  *(_QWORD *)((char *)&v76[1] + 4) = 0x100000001LL;
                  *(_QWORD *)((char *)&v76[2] + 4) = 1LL;
                  *(_QWORD *)((char *)v76 + 4) = 0x100000001LL;
                  while ( 1 )
                  {
                    v42 = v38++ > v40;
                    *((_DWORD *)&v76[3] + ++v36) = v42 + 3;
                    if ( v36 > 6 )
                      break;
                    v40 = HIDWORD(v76[7]);
                  }
                  if ( (*(_DWORD *)(a1 + 1456) & 0x800) != 0 )
                  {
                    memset(v67, 0, sizeof(v67));
                    v67[3] = 0x100000001LL;
                    v67[6] = off_1C005B208;
                    v67[4] = v64;
                    LODWORD(v67[0]) = 56;
                    v43 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
                            WdfDriverGlobals,
                            *(_QWORD *)(v37 + 16));
                    v44 = (_QWORD *)(v20 + 264);
                    v45 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64))(WdfFunctions_01015 + 1976))(
                            WdfDriverGlobals,
                            v67,
                            v43,
                            v20 + 264);
                    v10 = v45;
                    if ( v45 >= 0 )
                    {
                      v47 = (struct _KEVENT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                                                WdfDriverGlobals,
                                                *v44,
                                                off_1C005B208);
                      KeInitializeEvent(v47 + 1, NotificationEvent, 0);
                      goto LABEL_57;
                    }
                    v46 = 119;
LABEL_54:
                    LODWORD(v60) = v45;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                      2u,
                      2u,
                      v46,
                      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
                      v60);
                    v4 = v61;
                    *v44 = 0LL;
                  }
                  else
                  {
LABEL_57:
                    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 672))(
                      WdfDriverGlobals,
                      v64,
                      v76);
                    KeInitializeSpinLock((PKSPIN_LOCK)(v20 + 208));
                    *(_DWORD *)(v20 + 216) = 6000;
                    *(_DWORD *)(v20 + 232) = 6000;
                    *(_QWORD *)(v20 + 224) = &ISMStateTable;
                    memset(v67, 0, sizeof(v67));
                    v67[6] = off_1C005B1E0;
                    v44 = (_QWORD *)(v20 + 256);
                    v67[4] = v64;
                    v67[3] = 0x100000001LL;
                    v68[1] = HUBIDLE_EvtIdleWorkItem;
                    v68[2] = 1LL;
                    LODWORD(v67[0]) = 56;
                    v68[0] = 24LL;
                    v45 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 3032))(
                            WdfDriverGlobals,
                            v68,
                            v67,
                            v20 + 256);
                    v10 = v45;
                    if ( v45 < 0 )
                    {
                      v46 = 120;
                      goto LABEL_54;
                    }
                    HUBIDLE_AddEvent(v20 + 72, 6009, 0LL);
                    _InterlockedOr((volatile signed __int32 *)(v20 + 32), 0x1000u);
                    v48 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 1064))(
                            WdfDriverGlobals,
                            *(_QWORD *)(*(_QWORD *)a1 + 16LL),
                            v64);
                    v10 = v48;
                    if ( v48 < 0 )
                    {
                      LODWORD(v60) = v48;
                      WPP_RECORDER_SF_d(
                        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                        2u,
                        2u,
                        0x79u,
                        (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
                        v60);
                      v6 = v62;
                      goto LABEL_43;
                    }
                    v49 = *(_QWORD *)(v20 + 16);
                    v50 = &v79;
                    v51 = (unsigned __int16 *)(v49 + 314);
                    v78 = *(unsigned __int16 *)(v49 + 312);
                    do
                    {
                      v52 = *v51++;
                      *v50++ = v52;
                      --v31;
                    }
                    while ( v31 );
                    v53 = *(_BYTE *)(v49 + 232);
                    if ( v53 < 6u )
                      *(&v78 + v53) = *(unsigned __int16 *)(v20 + 48);
                    HIDWORD(v59) = HIDWORD(a1);
                    WPP_RECORDER_SF_qDDDdddddd(
                      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                      *(unsigned __int16 *)(a1 + 2000),
                      *(unsigned __int16 *)(a1 + 1998),
                      *(unsigned __int16 *)(a1 + 1996),
                      RemlockSizea);
                    v4 = 0;
                    _InterlockedOr((volatile signed __int32 *)(a1 + 2220), 1u);
                    _InterlockedOr((volatile signed __int32 *)(a1 + 2220), 2u);
                    _InterlockedOr((volatile signed __int32 *)(a1 + 2220), 4u);
                    _InterlockedOr((volatile signed __int32 *)(a1 + 2220), 0x10u);
                    _InterlockedOr((volatile signed __int32 *)(a1 + 2220), 8u);
                    _InterlockedOr((volatile signed __int32 *)(a1 + 2220), 0x20u);
                    if ( (*(_DWORD *)(a1 + 1632) & 2) != 0 )
                      HUBPDO_RegisterForPowerSettingsForHub(v20);
                    else
                      HUBPDO_RegisterForPowerSettingsForDevice(v20);
                  }
                  v6 = v62;
                  goto LABEL_71;
                }
                ++v3;
                if ( v19 != -1073741771 )
                  goto LABEL_28;
              }
              v14 = 113;
            }
            else
            {
              v14 = 111;
            }
          }
          else
          {
            v14 = 110;
          }
        }
        else
        {
          v14 = 109;
        }
      }
      else
      {
        v14 = 108;
      }
    }
    else
    {
      v14 = 107;
    }
LABEL_70:
    LODWORD(v60) = PdoName;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      2u,
      v14,
      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
      v60);
    v4 = 0;
  }
  else
  {
    v10 = -1073741670;
  }
LABEL_71:
  if ( a2 )
  {
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x40) != 0 )
    {
      LODWORD(v59) = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL);
      McTemplateK0ppqq(
        *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL),
        &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_COMPLETE,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(*(_QWORD *)a1 + 240LL),
        *(_QWORD *)(a1 + 24),
        v59,
        v10);
    }
  }
  else if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
  {
    RemlockSize[0] = v10;
    McTemplateK0pq(
      v9,
      &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_FAILED,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(*(_QWORD *)a1 + 240LL),
      *(_QWORD *)RemlockSize);
  }
  if ( (*(_DWORD *)(a1 + 1636) & 0x40) != 0 )
  {
    *(_QWORD *)(a1 + 1516) = 0LL;
    *(_QWORD *)(a1 + 1524) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFBF);
  }
  v54 = (v10 >> 31) & 0xFFFFFFF4;
  if ( v5 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 432))(WdfDriverGlobals, v65);
  if ( v4 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v64);
  if ( v6 )
  {
    v55 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v55,
      "DSM PDO Tag",
      8598LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  return v54 + 4077;
}
