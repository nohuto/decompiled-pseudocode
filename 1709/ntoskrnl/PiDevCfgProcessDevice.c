/*
 * XREFs of PiDevCfgProcessDevice @ 0x1405A0E30
 * Callers:
 *     PiConfigureDevice @ 0x14044EA84 (PiConfigureDevice.c)
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x140552400 (PipProcessStartPhase3.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405BA584 (IopInitializeDeviceInstanceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PnpDiagnosticTraceObject @ 0x1400FBA44 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x14012D114 (PnpDiagnosticTraceObjectWithStatus.c)
 *     memset @ 0x140192F40 (memset.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x140523128 (_PnpGetObjectProperty.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     PipClearDevNodeUserFlags @ 0x140552DC0 (PipClearDevNodeUserFlags.c)
 *     PipSetDevNodeProblem @ 0x14055DCFC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x14055DF68 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeUserFlags @ 0x14055E900 (PipSetDevNodeUserFlags.c)
 *     PiDevCfgSetObjectProperty @ 0x14058A470 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgInitDeviceContext @ 0x14058AA6C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x14058ABD0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDeviceContext @ 0x14058B72C (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14059BF64 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgFreeDriverNode @ 0x1405A1298 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x1405A13E0 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateRootDevice @ 0x1406C66B8 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x1406C7608 (PiDevCfgRequestDriverConfigurations.c)
 */

__int64 __fastcall PiDevCfgProcessDevice(__int64 a1, __int64 a2, char a3)
{
  int v3; // r12d
  __int64 v6; // r13
  __int64 v7; // r15
  int v8; // esi
  bool v9; // di
  int inited; // r14d
  char v11; // al
  void *v12; // r14
  int DeviceDriver; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  char v17; // al
  __int64 v18; // rdx
  int DeviceRegProp; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rbx
  const WCHAR *v23; // r8
  __int64 v25; // rdx
  int ObjectProperties; // eax
  __int64 v27; // rdx
  char v28; // di
  int v29; // eax
  int v30; // [rsp+28h] [rbp-D8h]
  int v31; // [rsp+28h] [rbp-D8h]
  int v32; // [rsp+28h] [rbp-D8h]
  int v33; // [rsp+28h] [rbp-D8h]
  int v34; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v35; // [rsp+64h] [rbp-9Ch] BYREF
  int v36; // [rsp+68h] [rbp-98h] BYREF
  int v37; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  __int64 v41; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v42[10]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v43[18]; // [rsp+F0h] [rbp-10h] BYREF
  char v44; // [rsp+190h] [rbp+90h]
  __int64 v46; // [rsp+198h] [rbp+98h]
  int v48; // [rsp+1A8h] [rbp+A8h] BYREF

  v3 = 0;
  LODWORD(v42[0]) = 0;
  v6 = 0LL;
  memset(&v42[1], 0, 0x40uLL);
  *(_DWORD *)&UnicodeString.Length = 0;
  v7 = 0LL;
  UnicodeString.Buffer = 0LL;
  v8 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  v9 = 0;
  DestinationString.Buffer = 0LL;
  v38 = 0LL;
  v48 = 0;
  v37 = 0;
  v44 = 0;
  v35 = 0;
  v36 = 1;
  v34 = 0;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_44;
  }
  v6 = a1 + 40;
  PnpDiagnosticTraceObject(&KMPnPEvt_DeviceConfig_Start, (unsigned __int16 *)(a1 + 40));
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), a2, v42);
  if ( inited < 0 )
    goto LABEL_44;
  v11 = v42[0];
  if ( (a3 & 1) != 0 )
  {
    v11 = LOBYTE(v42[0]) | 1;
    LODWORD(v42[0]) |= 1u;
  }
  v12 = (void *)a2;
  if ( !a2 )
    v12 = (void *)v42[2];
  v46 = (__int64)v12;
  if ( (v11 & 1) != 0 || PnpBootMode )
    goto LABEL_8;
  memset(v43, 0, 0x50uLL);
  HIDWORD(v43[3]) = 6;
  LODWORD(v43[1]) = 8210;
  v43[0] = &DEVPKEY_Device_PendingConfigurationIds;
  LODWORD(v43[6]) = 8210;
  v25 = *(_QWORD *)(a1 + 48);
  v43[2] = &UnicodeString;
  v43[5] = &DEVPKEY_Device_RequestConfigurationIds;
  v43[7] = &DestinationString;
  HIDWORD(v43[8]) = 6;
  ObjectProperties = PiDevCfgQueryObjectProperties(6LL, v25, 1u, v12, (__int64)v43, 2u);
  v15 = 0LL;
  inited = ObjectProperties;
  if ( ObjectProperties < 0 )
    goto LABEL_44;
  if ( SLODWORD(v43[4]) < 0 )
  {
    RtlInitUnicodeString(&UnicodeString, 0LL);
    v15 = 0LL;
  }
  if ( SLODWORD(v43[9]) < 0 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v15 = 0LL;
  }
  if ( !UnicodeString.Buffer || *UnicodeString.Buffer )
  {
LABEL_8:
    DeviceDriver = PiDevCfgFindDeviceDriver(v42, UnicodeString.Buffer, &v38);
    v7 = v38;
    v15 = 0LL;
    inited = DeviceDriver;
    if ( DeviceDriver >= 0 )
    {
      if ( DestinationString.Buffer )
      {
        inited = PiDevCfgRequestDriverConfigurations(v42, v38, 0LL);
        v15 = 0LL;
      }
      else
      {
        v16 = PiDevCfgConfigureDevice(a1, v42, v38, &v48, &v37);
        v15 = 0LL;
        inited = v16;
        if ( v16 >= 0 )
        {
          v8 = v48;
          v44 = 1;
        }
      }
    }
  }
  else
  {
    v9 = 1;
    v3 = -1073740656;
  }
  if ( UnicodeString.Buffer && (v7 || v9) )
  {
    PiDevCfgSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      v42,
      *(const WCHAR **)(a1 + 48),
      1,
      v46,
      v30,
      (__int64)&DEVPKEY_Device_PendingConfigurationIds,
      0,
      0LL,
      0);
    v15 = 0LL;
  }
  if ( !DestinationString.Buffer )
  {
    if ( !UnicodeString.Buffer )
    {
      if ( v9 )
      {
LABEL_86:
        inited = PiDevCfgConfigureDevice(a1, v42, 0LL, &v48, &v37);
        if ( inited >= 0 )
        {
          v8 = v48;
          v17 = 1;
          v44 = 1;
          if ( v3 != -1073740656 )
          {
            switch ( v3 )
            {
              case -1073740655:
                v35 = -536870320;
                break;
              case -1073740654:
                v35 = -536870319;
                break;
              case -1073740653:
                v35 = -536870318;
                break;
              case -1073740652:
                v35 = -536870375;
                break;
            }
LABEL_20:
            if ( PnpBootMode || (a3 & 2) != 0 )
              v8 |= 0x40000u;
            if ( (v8 & 0x40) != 0 )
              *(_DWORD *)(a1 + 704) &= ~1u;
            else
              *(_DWORD *)(a1 + 704) |= 1u;
LABEL_24:
            v18 = *(_QWORD *)(a1 + 48);
            v34 = 4;
            DeviceRegProp = CmGetDeviceRegProp(
                              *(__int64 *)&PiPnpRtlCtx,
                              v18,
                              v46,
                              11,
                              (__int64)&v36,
                              (__int64)&v48,
                              (__int64)&v34,
                              0);
            v15 = 0LL;
            if ( DeviceRegProp < 0 || v36 != 4 || v34 != 4 )
              v48 = 0;
            if ( inited < 0 )
            {
              if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 )
              {
                v14 = *(unsigned int *)(a1 + 404);
                if ( (_DWORD)v14 == 1 || (_DWORD)v14 == 18 )
                  PipSetDevNodeProblem(a1, v14, inited);
              }
              v22 = v46;
              goto LABEL_37;
            }
            v48 &= 0xFFF7FB9F;
            v8 &= ~0x20u;
            if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0
              && ((v20 = *(unsigned int *)(a1 + 404), (_DWORD)v20 == 1) || (_DWORD)v20 == 28)
              || (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && ((v29 = *(_DWORD *)(a1 + 404), v29 == 18) || v29 == 56) )
            {
              PipClearDevNodeProblem(a1);
              v15 = 0LL;
            }
            if ( ((*(_DWORD *)(a1 + 300) - 770) & 0xFFFFFFEF) == 0 )
            {
              v21 = *(_DWORD *)(a1 + 396);
              if ( (v21 & 0x6000) != 0 )
              {
                if ( (v21 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 && (v37 & 2) == 0 )
                {
                  PipClearDevNodeProblem(a1);
                  PipClearDevNodeUserFlags(a1, 4);
                  goto LABEL_111;
                }
              }
              else
              {
                if ( (v37 & 2) != 0 && !PnpBootMode )
                {
                  PipSetDevNodeProblem(a1, 14, -1073741102);
                  PipSetDevNodeUserFlags(a1, 4);
LABEL_111:
                  v15 = 0LL;
                  goto LABEL_34;
                }
                if ( (v8 & 0x40) != 0 )
                {
                  PipSetDevNodeProblem(a1, 28, v3);
                  goto LABEL_111;
                }
              }
            }
LABEL_34:
            if ( v35 && (v8 & 0x40) != 0 )
            {
              v22 = v46;
              PiDevCfgSetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                v42,
                *(const WCHAR **)(v6 + 8),
                1,
                v46,
                v31,
                (__int64)&DEVPKEY_Device_InstallError,
                23,
                &v35,
                4);
            }
            else
            {
              v22 = v46;
              if ( (v42[0] & 1) == 0 )
                PiDevCfgSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  v42,
                  *(const WCHAR **)(v6 + 8),
                  1,
                  v46,
                  v31,
                  (__int64)&DEVPKEY_Device_InstallError,
                  0,
                  0LL,
                  0);
            }
LABEL_37:
            if ( v44 || v8 )
            {
              v48 |= v8;
              PiDevCfgSetDeviceRegProp(v20, (__int64)v42, 0xBu, 4, (__int64)&v48, 4);
              if ( v44 )
              {
                v23 = *(const WCHAR **)(v6 + 8);
                v41 = MEMORY[0xFFFFF78000000014];
                PiDevCfgSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  v42,
                  v23,
                  1,
                  v22,
                  v32,
                  (__int64)&DEVPKEY_Device_InstallDate,
                  16,
                  (unsigned int *)&v41,
                  8);
                if ( (unsigned int)PnpGetObjectProperty(
                                     *(__int64 *)&PiPnpRtlCtx,
                                     *(_QWORD *)(v6 + 8),
                                     1u,
                                     v22,
                                     0LL,
                                     (__int64)&DEVPKEY_Device_FirstInstallDate,
                                     (__int64)&v36,
                                     0LL,
                                     0,
                                     (__int64)&v34,
                                     0) != -1073741789
                  || v34 != 8 )
                {
                  PiDevCfgSetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    v42,
                    *(const WCHAR **)(v6 + 8),
                    1,
                    v22,
                    v33,
                    (__int64)&DEVPKEY_Device_FirstInstallDate,
                    16,
                    (unsigned int *)&v41,
                    8);
                }
                v7 = v38;
              }
            }
            goto LABEL_42;
          }
          v35 = -536870360;
LABEL_19:
          if ( !v17 )
            goto LABEL_24;
          goto LABEL_20;
        }
LABEL_18:
        v17 = v44;
        goto LABEL_19;
      }
      if ( v7 )
      {
        if ( *(int *)(v7 + 396) >= 0 )
          goto LABEL_18;
        v9 = 1;
        v3 = *(_DWORD *)(v7 + 396);
      }
      else
      {
        if ( inited != -1073740656 || (PiDevCfgMode & 2) == 0 )
          goto LABEL_18;
        if ( !PnpBootMode || (*(_DWORD *)(a1 + 560) & 0x100) != 0 )
        {
          if ( *(_QWORD *)(a1 + 16) == IopRootDeviceNode )
          {
            v27 = *(_QWORD *)(a1 + 48);
            v34 = 4;
            if ( (int)CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v27,
                        v46,
                        11,
                        (__int64)&v36,
                        (__int64)&v48,
                        (__int64)&v34,
                        0) >= 0
              && v36 == 4
              && v34 == 4 )
            {
              v28 = v48;
            }
            else
            {
              v28 = 0;
              v48 = 0;
            }
            v9 = (v28 & 0x20) != 0;
          }
          else
          {
            v9 = 1;
          }
        }
        else
        {
          v8 = 32;
        }
        if ( *(_QWORD *)(a1 + 16) == IopRootDeviceNode && (int)PiDevCfgMigrateRootDevice(a1, v42, &v48) >= 0 )
        {
          v8 |= v48;
          if ( (v48 & 1) != 0 )
          {
            v9 = 0;
            v8 &= ~0x20u;
          }
        }
        v3 = -1073740656;
      }
    }
    if ( !v9 )
      goto LABEL_18;
    goto LABEL_86;
  }
LABEL_42:
  if ( v7 )
    PiDevCfgFreeDriverNode(v7, v14, v15);
LABEL_44:
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&DestinationString);
  PiDevCfgFreeDeviceContext((__int64)v42);
  if ( v6 )
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DeviceConfig_Stop, (unsigned __int16 *)v6, inited);
  return (unsigned int)inited;
}
