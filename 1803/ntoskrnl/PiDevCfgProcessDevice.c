/*
 * XREFs of PiDevCfgProcessDevice @ 0x1405D6D84
 * Callers:
 *     PipProcessStartPhase3 @ 0x1405CACE8 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405D9834 (IopInitializeDeviceInstanceKey.c)
 *     PiConfigureDevice @ 0x140739518 (PiConfigureDevice.c)
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x1400C8D00 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1400C8E84 (PnpDiagnosticTraceObjectWithStatus.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x14050CE64 (_CmIsRootEnumeratedDevice.c)
 *     PipClearDevNodeProblem @ 0x1405C73B4 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1405C7484 (PipSetDevNodeProblem.c)
 *     PiDevCfgConfigureDevice @ 0x1405CF9D8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgSetObjectProperty @ 0x1405D189C (PiDevCfgSetObjectProperty.c)
 *     PipClearDevNodeUserFlags @ 0x1405D48DC (PipClearDevNodeUserFlags.c)
 *     PiDevCfgFreeDeviceContext @ 0x1405D7334 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x1405D7378 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFindDeviceDriver @ 0x1405D749C (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405D91A0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDriverNode @ 0x1405D9EBC (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1405DA00C (PiDevCfgSetDeviceRegProp.c)
 *     PipSetDevNodeUserFlags @ 0x14060509C (PipSetDevNodeUserFlags.c)
 *     PiDevCfgMigrateRootDevice @ 0x14072D164 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x14072E104 (PiDevCfgRequestDriverConfigurations.c)
 */

__int64 __fastcall PiDevCfgProcessDevice(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 *v5; // r13
  __int64 v6; // r15
  int v7; // esi
  bool v8; // di
  int v9; // r12d
  int inited; // r14d
  char v11; // al
  __int64 v12; // r14
  int DeviceDriver; // eax
  char v14; // al
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  int v19; // eax
  __int64 v20; // r8
  __int64 v22; // rdx
  int v23; // edx
  char v24; // di
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // [rsp+28h] [rbp-D8h]
  int v29; // [rsp+28h] [rbp-D8h]
  int v30; // [rsp+28h] [rbp-D8h]
  int v31; // [rsp+28h] [rbp-D8h]
  int v32; // [rsp+60h] [rbp-A0h] BYREF
  int v33; // [rsp+64h] [rbp-9Ch] BYREF
  int v34; // [rsp+68h] [rbp-98h] BYREF
  int v35; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  __int64 v39; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v40[10]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v41[18]; // [rsp+F0h] [rbp-10h] BYREF
  char v42; // [rsp+190h] [rbp+90h]
  __int64 v44; // [rsp+198h] [rbp+98h]
  int v46; // [rsp+1A8h] [rbp+A8h] BYREF

  v5 = 0LL;
  memset(v40, 0, 0x48uLL);
  v34 = 1;
  v6 = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  v7 = 0;
  UnicodeString.Buffer = 0LL;
  v8 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  v9 = 0;
  DestinationString.Buffer = 0LL;
  v36 = 0LL;
  v46 = 0;
  v35 = 0;
  v42 = 0;
  v33 = 0;
  v32 = 0;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_46;
  }
  v5 = (unsigned __int16 *)(a1 + 40);
  PnpDiagnosticTraceObject(&KMPnPEvt_DeviceConfig_Start, (unsigned __int16 *)(a1 + 40));
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), a2, v40);
  if ( inited < 0 )
    goto LABEL_46;
  v11 = v40[0];
  if ( (a3 & 1) != 0 )
  {
    v11 = LOBYTE(v40[0]) | 1;
    LODWORD(v40[0]) |= 1u;
  }
  v12 = a2;
  if ( !a2 )
    v12 = v40[2];
  v44 = v12;
  if ( (v11 & 1) != 0 || PnpBootMode )
    goto LABEL_8;
  memset(v41, 0, 0x50uLL);
  HIDWORD(v41[3]) = 6;
  LODWORD(v41[1]) = 8210;
  v41[0] = &DEVPKEY_Device_PendingConfigurationIds;
  LODWORD(v41[6]) = 8210;
  v22 = *(_QWORD *)(a1 + 48);
  v41[2] = &UnicodeString;
  v41[5] = &DEVPKEY_Device_RequestConfigurationIds;
  v41[7] = &DestinationString;
  HIDWORD(v41[8]) = 6;
  inited = PiDevCfgQueryObjectProperties(6, v22, 1, v12, (__int64)v41, 2);
  if ( inited < 0 )
    goto LABEL_46;
  if ( SLODWORD(v41[4]) < 0 )
    RtlInitUnicodeString(&UnicodeString, 0LL);
  if ( SLODWORD(v41[9]) < 0 )
    RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !UnicodeString.Buffer || *UnicodeString.Buffer )
  {
LABEL_8:
    DeviceDriver = PiDevCfgFindDeviceDriver(v40, UnicodeString.Buffer, &v36);
    v6 = v36;
    inited = DeviceDriver;
    if ( DeviceDriver >= 0 )
    {
      if ( DestinationString.Buffer )
      {
        inited = PiDevCfgRequestDriverConfigurations(v40, v36);
      }
      else
      {
        inited = PiDevCfgConfigureDevice(a1, (__int64)v40, v36, &v46, &v35);
        if ( inited >= 0 )
        {
          v7 = v46;
          v42 = 1;
        }
      }
    }
  }
  else
  {
    v8 = 1;
    v9 = -1073740656;
  }
  if ( UnicodeString.Buffer && (v6 || v8) )
    PiDevCfgSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      v40,
      *(_QWORD *)(a1 + 48),
      1u,
      v44,
      v28,
      (__int64)&DEVPKEY_Device_PendingConfigurationIds,
      0,
      0LL,
      0,
      0);
  if ( !DestinationString.Buffer )
  {
    if ( !UnicodeString.Buffer )
    {
      if ( v8 )
      {
LABEL_94:
        inited = PiDevCfgConfigureDevice(a1, (__int64)v40, 0LL, &v46, &v35);
        if ( inited >= 0 )
        {
          v7 = v46;
          v14 = 1;
          v42 = 1;
          if ( v9 != -1073740656 )
          {
            switch ( v9 )
            {
              case -1073740655:
                v33 = -536870320;
                break;
              case -1073740654:
                v33 = -536870319;
                break;
              case -1073740653:
                v33 = -536870318;
                break;
              case -1073740652:
                v33 = -536870375;
                break;
            }
            goto LABEL_20;
          }
          v33 = -536870360;
LABEL_19:
          if ( !v14 )
          {
LABEL_25:
            v17 = *(_QWORD *)(a1 + 48);
            v32 = 4;
            if ( (int)CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v17,
                        v44,
                        11,
                        (__int64)&v34,
                        (__int64)&v46,
                        (__int64)&v32,
                        0) < 0
              || v34 != 4
              || v32 != 4 )
            {
              v46 = 0;
            }
            v18 = *(_DWORD *)(a1 + 396) & 0x2000;
            if ( inited < 0 )
            {
              if ( v18 )
              {
                v23 = *(_DWORD *)(a1 + 404);
                if ( v23 == 1 || v23 == 18 )
                  PipSetDevNodeProblem(a1, v23, inited);
              }
            }
            else
            {
              v46 &= 0xFFF7FB9F;
              v7 &= ~0x20u;
              if ( v18 )
              {
                if ( *(_DWORD *)(a1 + 404) == 1
                  || (v26 = *(unsigned int *)(a1 + 404), (unsigned int)v26 <= 0x38)
                  && (v27 = 0x100000010040000LL, _bittest64(&v27, v26)) )
                {
                  PipClearDevNodeProblem(a1);
                }
              }
              if ( ((*(_DWORD *)(a1 + 300) - 770) & 0xFFFFFFEF) == 0 )
              {
                v19 = *(_DWORD *)(a1 + 396);
                if ( (v19 & 0x6000) != 0 )
                {
                  if ( (v19 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 && (v35 & 2) == 0 )
                  {
                    PipClearDevNodeProblem(a1);
                    PipClearDevNodeUserFlags(a1, 4);
                  }
                }
                else if ( (v35 & 2) == 0 || PnpBootMode )
                {
                  if ( (v7 & 0x40) != 0 )
                    PipSetDevNodeProblem(a1, 28, v9);
                }
                else
                {
                  PipSetDevNodeProblem(a1, 14, -1073741102);
                  PipSetDevNodeUserFlags(a1, 4LL);
                }
              }
              if ( v33 && (v7 & 0x40) != 0 )
              {
                PiDevCfgSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  v40,
                  *(_QWORD *)(a1 + 48),
                  1u,
                  v44,
                  v29,
                  (__int64)&DEVPKEY_Device_InstallError,
                  23,
                  (__int64)&v33,
                  4,
                  0);
              }
              else if ( (v40[0] & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  v40,
                  *(_QWORD *)(a1 + 48),
                  1u,
                  v44,
                  v29,
                  (__int64)&DEVPKEY_Device_InstallError,
                  0,
                  0LL,
                  0,
                  0);
              }
            }
            if ( v42 || v7 )
            {
              v46 |= v7;
              PiDevCfgSetDeviceRegProp(4, (unsigned int)v40, 11, 4, (__int64)&v46, 4);
              if ( v42 )
              {
                v20 = *(_QWORD *)(a1 + 48);
                v39 = MEMORY[0xFFFFF78000000014];
                PiDevCfgSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  v40,
                  v20,
                  1u,
                  v44,
                  v30,
                  (__int64)&DEVPKEY_Device_InstallDate,
                  16,
                  (__int64)&v39,
                  8,
                  0);
                if ( (unsigned int)PnpGetObjectProperty(
                                     *(__int64 *)&PiPnpRtlCtx,
                                     *(_QWORD *)(a1 + 48),
                                     1u,
                                     v44,
                                     0LL,
                                     (__int64)&DEVPKEY_Device_FirstInstallDate,
                                     (__int64)&v34,
                                     0LL,
                                     0,
                                     (__int64)&v32,
                                     0) != -1073741789
                  || v32 != 8 )
                {
                  PiDevCfgSetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    v40,
                    *(_QWORD *)(a1 + 48),
                    1u,
                    v44,
                    v31,
                    (__int64)&DEVPKEY_Device_FirstInstallDate,
                    16,
                    (__int64)&v39,
                    8,
                    0);
                }
                v6 = v36;
              }
            }
            goto LABEL_44;
          }
LABEL_20:
          if ( PnpBootMode || (a3 & 2) != 0 )
            v7 |= 0x40000u;
          v15 = *(_DWORD *)(a1 + 704);
          if ( (v7 & 0x40) != 0 )
            v16 = v15 & 0xFFFFFFFE;
          else
            v16 = v15 | 1;
          *(_DWORD *)(a1 + 704) = v16;
          goto LABEL_25;
        }
LABEL_18:
        v14 = v42;
        goto LABEL_19;
      }
      if ( v6 )
      {
        if ( *(int *)(v6 + 396) >= 0 )
          goto LABEL_18;
        v8 = 1;
        v9 = *(_DWORD *)(v6 + 396);
      }
      else
      {
        if ( inited != -1073740656 || (PiDevCfgMode & 2) == 0 )
          goto LABEL_18;
        if ( !PnpBootMode || (*(_DWORD *)(a1 + 560) & 0x100) != 0 )
        {
          v24 = 0;
          if ( CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48)) )
          {
            v25 = *(_QWORD *)(a1 + 48);
            v32 = 4;
            if ( (int)CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v25,
                        v44,
                        11,
                        (__int64)&v34,
                        (__int64)&v46,
                        (__int64)&v32,
                        0) >= 0
              && v34 == 4
              && v32 == 4 )
            {
              v24 = v46;
            }
            else
            {
              v46 = 0;
            }
            v8 = (v24 & 0x20) != 0;
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
        if ( CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48)) )
        {
          if ( (int)PiDevCfgMigrateRootDevice(a1, v40, &v46) >= 0 )
          {
            v7 |= v46;
            if ( (v46 & 1) != 0 )
            {
              v8 = 0;
              v7 &= ~0x20u;
            }
          }
        }
        v9 = -1073740656;
      }
    }
    if ( !v8 )
      goto LABEL_18;
    goto LABEL_94;
  }
LABEL_44:
  if ( v6 )
    PiDevCfgFreeDriverNode(v6);
LABEL_46:
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&DestinationString);
  PiDevCfgFreeDeviceContext(v40);
  if ( v5 )
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DeviceConfig_Stop, v5, inited);
  return (unsigned int)inited;
}
