/*
 * XREFs of PiDevCfgProcessDevice @ 0x14059040C
 * Callers:
 *     PipProcessStartPhase3 @ 0x1404A7014 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140559998 (IopInitializeDeviceInstanceKey.c)
 *     PiConfigureDevice @ 0x1406A69EC (PiConfigureDevice.c)
 * Callees:
 *     PnpDiagnosticTraceObjectWithStatus @ 0x140036914 (PnpDiagnosticTraceObjectWithStatus.c)
 *     PnpDiagnosticTraceObject @ 0x1400682D8 (PnpDiagnosticTraceObject.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PipClearDevNodeProblem @ 0x14045D5E8 (PipClearDevNodeProblem.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x140484E40 (_PnpGetObjectProperty.c)
 *     PipClearDevNodeUserFlags @ 0x1404A7AF4 (PipClearDevNodeUserFlags.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     PiDevCfgFreeDeviceContext @ 0x14055947C (PiDevCfgFreeDeviceContext.c)
 *     PipSetDevNodeProblem @ 0x140570490 (PipSetDevNodeProblem.c)
 *     PiDevCfgInitDeviceContext @ 0x14058EA58 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgResolveDriverDependencies @ 0x14058EB78 (PiDevCfgResolveDriverDependencies.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14058EC68 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgFreeDriverNode @ 0x14058EDB0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x14058EEF8 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgConfigureDevice @ 0x140590890 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgSetObjectProperty @ 0x1405917F0 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405C7908 (PiDevCfgQueryObjectProperties.c)
 *     PipSetDevNodeUserFlags @ 0x1405CC2B8 (PipSetDevNodeUserFlags.c)
 *     PiDevCfgMigrateRootDevice @ 0x14069AA94 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x14069B9E4 (PiDevCfgRequestDriverConfigurations.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x14069C020 (PiDevCfgResolveDeviceDependencies.c)
 */

__int64 __fastcall PiDevCfgProcessDevice(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r13
  __int64 v6; // r15
  int v7; // r14d
  bool v8; // si
  int v9; // r12d
  int inited; // edi
  char v11; // al
  __int64 v12; // rcx
  int DeviceDriver; // eax
  char v14; // al
  __int64 v15; // rdx
  int DeviceRegProp; // eax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v24; // rdx
  __int64 v25; // rdx
  char v26; // si
  int v27; // eax
  int v28; // edx
  int v29; // [rsp+28h] [rbp-D8h]
  int v30; // [rsp+28h] [rbp-D8h]
  int v31; // [rsp+28h] [rbp-D8h]
  int v32; // [rsp+28h] [rbp-D8h]
  int v33; // [rsp+28h] [rbp-D8h]
  int v34; // [rsp+28h] [rbp-D8h]
  int v35; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+64h] [rbp-9Ch] BYREF
  int v37; // [rsp+68h] [rbp-98h] BYREF
  int v38; // [rsp+6Ch] [rbp-94h] BYREF
  int v39; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v43[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v44[10]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v45[18]; // [rsp+100h] [rbp+0h] BYREF
  char v46; // [rsp+1A0h] [rbp+A0h]
  __int64 v48; // [rsp+1A8h] [rbp+A8h]
  char v50; // [rsp+1B8h] [rbp+B8h] BYREF

  LODWORD(v44[0]) = 0;
  v5 = 0LL;
  memset(&v44[1], 0, 0x40uLL);
  v38 = 1;
  v6 = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  v7 = 0;
  UnicodeString.Buffer = 0LL;
  v8 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  v9 = 0;
  DestinationString.Buffer = 0LL;
  v40 = 0LL;
  v35 = 0;
  v39 = 0;
  v46 = 0;
  v37 = 0;
  v50 = 0;
  v36 = 0;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_45;
  }
  v5 = a1 + 40;
  PnpDiagnosticTraceObject(&KMPnPEvt_DeviceConfig_Start, (unsigned __int16 *)(a1 + 40));
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), a2, v44);
  if ( inited < 0 )
    goto LABEL_45;
  v11 = v44[0];
  if ( (a3 & 1) != 0 )
  {
    v11 = LOBYTE(v44[0]) | 1;
    LODWORD(v44[0]) |= 1u;
  }
  v12 = a2;
  if ( !a2 )
    v12 = v44[2];
  v48 = v12;
  if ( (v11 & 1) == 0 )
  {
    inited = PiDevCfgResolveDeviceDependencies(v44, &v50);
    if ( inited < 0 )
      goto LABEL_45;
    if ( !v50 )
    {
      inited = 0;
      goto LABEL_45;
    }
    if ( !PnpBootMode )
    {
      memset(v45, 0, 0x50uLL);
      v45[0] = &DEVPKEY_Device_PendingConfigurationIds;
      LODWORD(v45[1]) = 8210;
      v45[2] = &UnicodeString;
      v45[5] = &DEVPKEY_Device_RequestConfigurationIds;
      LODWORD(v45[6]) = 8210;
      v24 = *(_QWORD *)(a1 + 48);
      v45[7] = &DestinationString;
      HIDWORD(v45[3]) = 6;
      HIDWORD(v45[8]) = 6;
      inited = PiDevCfgQueryObjectProperties(6, v24, 1, v48, (__int64)v45, 2);
      if ( inited < 0 )
        goto LABEL_45;
      if ( SLODWORD(v45[4]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( SLODWORD(v45[9]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( UnicodeString.Buffer && !*UnicodeString.Buffer )
      {
        v8 = 1;
        v9 = -1073740656;
        goto LABEL_14;
      }
    }
  }
  DeviceDriver = PiDevCfgFindDeviceDriver((__int64)v44, UnicodeString.Buffer, &v40);
  v6 = v40;
  inited = DeviceDriver;
  if ( DeviceDriver < 0 )
  {
LABEL_14:
    if ( UnicodeString.Buffer && (v6 || v8) )
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        (unsigned int)v44,
        *(_QWORD *)(a1 + 48),
        1,
        v48,
        v29,
        (__int64)&DEVPKEY_Device_PendingConfigurationIds,
        0,
        0LL,
        0);
    if ( DestinationString.Buffer )
      goto LABEL_43;
    if ( !UnicodeString.Buffer )
    {
      if ( v8 )
      {
LABEL_91:
        inited = PiDevCfgConfigureDevice(a1, v44, 0LL, &v35, &v39);
        if ( inited >= 0 )
        {
          v7 = v35;
          v14 = 1;
          v46 = 1;
          if ( v9 != -1073740656 )
          {
            switch ( v9 )
            {
              case -1073740655:
                v37 = -536870320;
                break;
              case -1073740654:
                v37 = -536870319;
                break;
              case -1073740653:
                v37 = -536870318;
                break;
              case -1073740652:
                v37 = -536870375;
                break;
            }
LABEL_22:
            if ( PnpBootMode || (a3 & 2) != 0 )
              v7 |= 0x40000u;
            if ( (v7 & 0x40) == 0 )
              *(_DWORD *)(a1 + 704) |= 1u;
LABEL_26:
            v15 = *(_QWORD *)(a1 + 48);
            v36 = 4;
            DeviceRegProp = CmGetDeviceRegProp(
                              *(__int64 *)&PiPnpRtlCtx,
                              v15,
                              v48,
                              11,
                              (__int64)&v38,
                              (__int64)&v35,
                              (__int64)&v36,
                              0);
            v17 = 0LL;
            if ( DeviceRegProp < 0 || v38 != 4 || v36 != 4 )
              v35 = 0;
            v18 = *(_DWORD *)(a1 + 396);
            if ( inited < 0 )
            {
              v27 = *(_DWORD *)(a1 + 396) & 0x2000;
              if ( v27 && (v28 = *(_DWORD *)(a1 + 404), v28 == 1) || v27 && (v28 = *(_DWORD *)(a1 + 404), v28 == 18) )
                PipSetDevNodeProblem(a1, v28, inited);
              goto LABEL_38;
            }
            v35 &= 0xFFFFFB9F;
            v7 &= ~0x20u;
            v19 = v18 & 0x2000;
            if ( v19 && *(_DWORD *)(a1 + 404) == 1
              || v19 && (*(_DWORD *)(a1 + 404) == 28 || *(_DWORD *)(a1 + 404) == 18) )
            {
              PipClearDevNodeProblem(a1);
              v17 = 0LL;
            }
            if ( ((*(_DWORD *)(a1 + 300) - 770) & 0xFFFFFFEF) == 0 )
            {
              v20 = *(_DWORD *)(a1 + 396);
              if ( (v20 & 0x6000) != 0 )
              {
                if ( (v20 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 && (v39 & 2) == 0 )
                {
                  PipClearDevNodeProblem(a1);
                  PipClearDevNodeUserFlags(a1, 4);
                  goto LABEL_113;
                }
              }
              else
              {
                if ( (v39 & 2) != 0 && !PnpBootMode )
                {
                  PipSetDevNodeProblem(a1, 14, -1073741102);
                  PipSetDevNodeUserFlags(a1);
LABEL_113:
                  v17 = 0LL;
                  goto LABEL_36;
                }
                if ( (v7 & 0x40) != 0 )
                {
                  PipSetDevNodeProblem(a1, 28, v9);
                  goto LABEL_113;
                }
              }
            }
LABEL_36:
            if ( v37 && (v7 & 0x40) != 0 )
            {
              v21 = v48;
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                (unsigned int)v44,
                *(_QWORD *)(v5 + 8),
                1,
                v48,
                v30,
                (__int64)&DEVPKEY_Device_InstallError,
                23,
                (__int64)&v37,
                4);
            }
            else
            {
              v21 = v48;
              if ( (v44[0] & 1) != 0 )
              {
LABEL_38:
                if ( v46 || v7 )
                {
                  v35 |= v7;
                  PiDevCfgSetDeviceRegProp(v17, (__int64)v44, 0xBu, 4, (__int64)&v35, 4);
                  if ( v46 )
                  {
                    v22 = *(_QWORD *)(v5 + 8);
                    v43[0] = MEMORY[0xFFFFF78000000014];
                    PiDevCfgSetObjectProperty(
                      PiPnpRtlCtx,
                      (unsigned int)v44,
                      v22,
                      1,
                      v48,
                      v31,
                      (__int64)&DEVPKEY_Device_InstallDate,
                      16,
                      (__int64)v43,
                      8);
                    if ( (unsigned int)PnpGetObjectProperty(
                                         *(__int64 *)&PiPnpRtlCtx,
                                         *(_QWORD *)(v5 + 8),
                                         1u,
                                         v48,
                                         0LL,
                                         (__int64)&DEVPKEY_Device_FirstInstallDate,
                                         (__int64)&v38,
                                         0LL,
                                         0,
                                         (__int64)&v36,
                                         0) != -1073741789
                      || v36 != 8 )
                    {
                      PiDevCfgSetObjectProperty(
                        PiPnpRtlCtx,
                        (unsigned int)v44,
                        *(_QWORD *)(v5 + 8),
                        1,
                        v48,
                        v32,
                        (__int64)&DEVPKEY_Device_FirstInstallDate,
                        16,
                        (__int64)v43,
                        8);
                    }
                    v6 = v40;
                  }
                }
                goto LABEL_43;
              }
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                (unsigned int)v44,
                *(_QWORD *)(v5 + 8),
                1,
                v48,
                v30,
                (__int64)&DEVPKEY_Device_InstallError,
                0,
                0LL,
                0);
            }
            v17 = 0LL;
            if ( (v44[0] & 1) == 0 )
            {
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                (unsigned int)v44,
                *(_QWORD *)(v5 + 8),
                1,
                v21,
                v33,
                (__int64)&DEVPKEY_Device_FirmwareDependencies,
                0,
                0LL,
                0);
              PiDevCfgSetObjectProperty(
                PiPnpRtlCtx,
                (unsigned int)v44,
                *(_QWORD *)(v5 + 8),
                1,
                v21,
                v34,
                (__int64)&DEVPKEY_Device_DependencyBootSession,
                0,
                0LL,
                0);
            }
            goto LABEL_38;
          }
          v37 = -536870360;
LABEL_21:
          if ( !v14 )
            goto LABEL_26;
          goto LABEL_22;
        }
LABEL_20:
        v14 = v46;
        goto LABEL_21;
      }
      if ( v6 )
      {
        if ( *(int *)(v6 + 396) >= 0 )
          goto LABEL_20;
        v8 = 1;
        v9 = *(_DWORD *)(v6 + 396);
      }
      else
      {
        if ( inited != -1073740656 || (PiDevCfgMode & 2) == 0 )
          goto LABEL_20;
        if ( !PnpBootMode || (*(_DWORD *)(a1 + 560) & 0x100) != 0 )
        {
          if ( *(_QWORD *)(a1 + 16) == IopRootDeviceNode )
          {
            v25 = *(_QWORD *)(a1 + 48);
            v36 = 4;
            if ( (int)CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v25,
                        v48,
                        11,
                        (__int64)&v38,
                        (__int64)&v35,
                        (__int64)&v36,
                        0) >= 0
              && v38 == 4
              && v36 == 4 )
            {
              v26 = v35;
            }
            else
            {
              v26 = 0;
              v35 = 0;
            }
            v8 = (v26 & 0x20) != 0;
          }
          else
          {
            v8 = 1;
          }
        }
        else
        {
          v7 = 32;
        }
        if ( *(_QWORD *)(a1 + 16) == IopRootDeviceNode && (int)PiDevCfgMigrateRootDevice(a1, v44, &v35) >= 0 )
        {
          v7 |= v35;
          if ( (v35 & 1) != 0 )
          {
            v8 = 0;
            v7 &= ~0x20u;
          }
        }
        v9 = -1073740656;
      }
    }
    if ( !v8 )
      goto LABEL_20;
    goto LABEL_91;
  }
  if ( DestinationString.Buffer )
  {
    inited = PiDevCfgRequestDriverConfigurations(v44, v40);
    goto LABEL_14;
  }
  inited = PiDevCfgResolveDriverDependencies(v40, &v50);
  if ( inited >= 0 )
  {
    if ( v50 )
    {
      inited = PiDevCfgConfigureDevice(a1, v44, v6, &v35, &v39);
      if ( inited >= 0 )
      {
        v7 = v35;
        v46 = 1;
      }
      goto LABEL_14;
    }
    inited = 0;
  }
LABEL_43:
  if ( v6 )
    PiDevCfgFreeDriverNode(v6);
LABEL_45:
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&DestinationString);
  PiDevCfgFreeDeviceContext((__int64)v44);
  if ( v5 )
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DeviceConfig_Stop, (unsigned __int16 *)v5, inited);
  return (unsigned int)inited;
}
