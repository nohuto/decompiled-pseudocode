/*
 * XREFs of PipCallDriverAddDevice @ 0x1405CE418
 * Callers:
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 *     PiProcessAddBootDevices @ 0x140646334 (PiProcessAddBootDevices.c)
 * Callees:
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140007610 (IoGetAttachedDeviceReferenceWithTag.c)
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     PipDmgIsConsoleLockPolicyActive @ 0x140145224 (PipDmgIsConsoleLockPolicyActive.c)
 *     IovUtilMarkStack @ 0x140146410 (IovUtilMarkStack.c)
 *     PipSetDevNodeState @ 0x140146914 (PipSetDevNodeState.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _CmOpenDeviceRegKey @ 0x140504BB4 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 *     _CmOpenInstallerClassRegKey @ 0x14056B408 (_CmOpenInstallerClassRegKey.c)
 *     PipClearDevNodeProblem @ 0x1405C73B4 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1405C7484 (PipSetDevNodeProblem.c)
 *     PnpRequestDeviceRemoval @ 0x1405C75A4 (PnpRequestDeviceRemoval.c)
 *     IopQueryLegacyBusInformation @ 0x1405CA928 (IopQueryLegacyBusInformation.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1405CD170 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1405CF254 (PnpCallDriverQueryServiceHelper.c)
 *     _CmSetDeviceRegProp @ 0x1405CF5C8 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x1405D1BFC (PipSetDevNodeFlags.c)
 *     _PnpSetObjectProperty @ 0x1405D2000 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1405D2454 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipDmgSaveDeviceDmarPolicy @ 0x1405E4D74 (PipDmgSaveDeviceDmarPolicy.c)
 *     PipDmgGetDeviceDmarPolicy @ 0x1405E4E34 (PipDmgGetDeviceDmarPolicy.c)
 *     PnpUnloadAttachedDriver @ 0x1405F5E0C (PnpUnloadAttachedDriver.c)
 *     IopBootLog @ 0x1405F6E00 (IopBootLog.c)
 *     PnpCallAddDevice @ 0x140604510 (PnpCallAddDevice.c)
 *     IopInsertLegacyBusDeviceNode @ 0x14064AC54 (IopInsertLegacyBusDeviceNode.c)
 *     IopSafebootDriverLoad @ 0x14071A6D0 (IopSafebootDriverLoad.c)
 *     PnpGetStableSystemBootTime @ 0x140727610 (PnpGetStableSystemBootTime.c)
 *     PipDmgEnforceConsoleLock @ 0x140729288 (PipDmgEnforceConsoleLock.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x14073FFBC (PiProcessDriversLoadedOnSecureDevice.c)
 */

__int64 __fastcall PipCallDriverAddDevice(__int64 a1, __int64 a2)
{
  char v4; // r15
  char v5; // r13
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rdx
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  int ObjectProperty; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  PVOID PoolWithTag; // rbx
  int DeviceRegProp; // eax
  __int64 *v20; // rsi
  __int64 v21; // rdi
  PVOID *v22; // r14
  PVOID v23; // r12
  __int64 v25; // rdx
  unsigned int DeviceDmarPolicy; // r14d
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rdx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  const WNF_STATE_NAME *v33; // rbx
  unsigned int v34; // esi
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  HANDLE v38; // rbx
  __int64 v39; // r14
  unsigned __int8 i; // bl
  _QWORD *v41; // r15
  _QWORD *j; // rsi
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rdx
  BOOL v46; // r9d
  int v47; // r11d
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned int NumberOfBytes; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+64h] [rbp-9Ch] BYREF
  char v53; // [rsp+68h] [rbp-98h]
  int v54; // [rsp+6Ch] [rbp-94h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  int v56; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v57; // [rsp+7Ch] [rbp-84h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  int v59; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v60; // [rsp+90h] [rbp-70h] BYREF
  _WORD v61[2]; // [rsp+98h] [rbp-68h] BYREF
  LOGICAL v62; // [rsp+9Ch] [rbp-64h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-60h]
  PVOID AttachedDeviceReferenceWithTag; // [rsp+A8h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v66; // [rsp+C0h] [rbp-40h]
  _QWORD v67[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v68; // [rsp+110h] [rbp+10h] BYREF
  ACL SourceString[10]; // [rsp+120h] [rbp+20h] BYREF

  v53 = 0;
  v60 = 0LL;
  v54 = 0;
  v57 = 0;
  v4 = 0;
  Handle = 0LL;
  v5 = 0;
  memset(v67, 0, sizeof(v67));
  v6 = 6LL;
  *(_WORD *)&SourceString[0].AclRevision = 0;
  v66 = 6LL;
  P = 0LL;
  Object = 0LL;
  AttachedDeviceReferenceWithTag = 0LL;
  if ( !*(_BYTE *)(a1 + 688) || *(_BYTE *)(a2 + 4) )
  {
    v8 = *(_QWORD *)(a1 + 48);
    *(_BYTE *)(a1 + 688) = 0;
    v7 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v8, 0x10u, 0, 131097, 0, (__int64)&Handle, 0LL);
    if ( v7 < 0 )
      goto LABEL_47;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x2000000) != 0
      && ((int)PnpGetObjectProperty(
                 *(__int64 *)&PiPnpRtlCtx,
                 *(_QWORD *)(a1 + 48),
                 1u,
                 (__int64)Handle,
                 0LL,
                 (__int64)&DEVPKEY_Device_DebuggerSafe,
                 (__int64)&v59,
                 (__int64)&v57,
                 4,
                 (__int64)&NumberOfBytes_4,
                 0) < 0
       || v59 != 7
       || NumberOfBytes_4 != 4
       || !v57) )
    {
      v9 = 53;
LABEL_11:
      v10 = 0;
      goto LABEL_12;
    }
    if ( *(_DWORD *)(a1 + 660) == -1 )
    {
      if ( PnpQueryProximityNode
        && (int)PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(a1 + 48),
                  1u,
                  (__int64)Handle,
                  0LL,
                  (__int64)&DEVPKEY_Device_Numa_Proximity_Domain,
                  (__int64)&v59,
                  (__int64)&v57,
                  4,
                  (__int64)&NumberOfBytes_4,
                  0) >= 0
        && v57 <= 0xFF
        && (int)((__int64 (__fastcall *)(_QWORD, _WORD *))PnpQueryProximityNode)(v57, v61) >= 0 )
      {
        *(_DWORD *)(a1 + 660) = v61[0];
      }
      v11 = *(_DWORD *)(a1 + 660);
      if ( v11 == -1 )
      {
        v12 = *(_QWORD *)(a1 + 16);
        if ( v12 )
        {
          v11 = *(_DWORD *)(v12 + 660);
          *(_DWORD *)(a1 + 660) = v11;
        }
        else
        {
          *(_DWORD *)(a1 + 660) = -2;
          v11 = -2;
        }
      }
      if ( v11 != -2 )
      {
        v13 = *(_QWORD *)(a1 + 48);
        v57 = v11;
        PnpSetObjectProperty(PiPnpRtlCtx, v13, 1, 0LL, (__int64)&DEVPKEY_Device_Numa_Node, 7, (__int64)&v57, 4, 0);
      }
    }
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(a1 + 48),
                       1u,
                       (__int64)Handle,
                       0LL,
                       (__int64)&DEVPKEY_Device_PreventDriverLoad,
                       (__int64)&v59,
                       (__int64)&v68,
                       8,
                       (__int64)&NumberOfBytes_4,
                       0);
    if ( ((int)(ObjectProperty + 0x80000000) < 0 || ObjectProperty == -1073741789)
      && (int)PnpGetStableSystemBootTime(&DestinationString) >= 0 )
    {
      if ( ObjectProperty != -1073741789
        && v59 == 16
        && NumberOfBytes_4 == 8
        && !PnpBootMode
        && *(_QWORD *)&DestinationString.Length == v68 )
      {
        goto LABEL_46;
      }
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_PreventDriverLoad,
        0,
        0LL,
        0,
        0);
    }
    v15 = *(_QWORD *)(a1 + 48);
    NumberOfBytes = 78;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v15,
                (__int64)Handle,
                9,
                (__int64)&v56,
                (__int64)SourceString,
                (__int64)&NumberOfBytes,
                0) >= 0
      && v56 == 1
      && NumberOfBytes )
    {
      RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)SourceString);
      if ( InitSafeBootMode )
      {
        if ( !(unsigned __int8)IopSafebootDriverLoad(&DestinationString) )
        {
          NumberOfBytes = 256;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x6E657050u);
          if ( PoolWithTag )
          {
            DeviceRegProp = CmGetDeviceRegProp(
                              *(__int64 *)&PiPnpRtlCtx,
                              *(_QWORD *)(a1 + 48),
                              (__int64)Handle,
                              1,
                              (__int64)&v56,
                              (__int64)PoolWithTag,
                              (__int64)&NumberOfBytes,
                              0);
            if ( DeviceRegProp == -1073741789 )
            {
              ExFreePoolWithTag(PoolWithTag, 0);
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x6E657050u);
            }
            else if ( DeviceRegProp >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, (PCWSTR)PoolWithTag);
            }
          }
          IopBootLog(&DestinationString);
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          goto LABEL_46;
        }
        v4 = v53;
      }
      CmOpenInstallerClassRegKey(
        *(__int64 *)&PiPnpRtlCtx,
        (__int64)SourceString,
        v16,
        v17,
        131097,
        0,
        (__int64)&v60,
        0LL);
    }
    v25 = *(_QWORD *)(a1 + 48);
    NumberOfBytes = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v25,
                (__int64)Handle,
                11,
                (__int64)&v56,
                (__int64)&v54,
                (__int64)&NumberOfBytes,
                0) < 0
      || v56 != 4
      || NumberOfBytes != 4 )
    {
      v54 = 0;
    }
    v67[1] = a2;
    v67[0] = a1;
    NumberOfBytes = 512;
    v7 = 0;
    P = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x6E657050u);
    DeviceDmarPolicy = 2;
    if ( P )
    {
      if ( (v54 & 0x80000) == 0 )
        goto LABEL_97;
      if ( v60 )
      {
        v27 = PnpCallDriverQueryServiceHelper(
                (unsigned int)&P,
                (unsigned int)&NumberOfBytes,
                0,
                (unsigned int)&DEVPKEY_DeviceClass_ConfigFilters,
                (__int64)SourceString,
                (__int64)v60,
                1,
                0,
                v4,
                (__int64)v67);
        v7 = v27;
        if ( v27 == -1073741772 || v27 == -1073741275 )
          v7 = 0;
        if ( v7 >= 0 )
        {
          do
          {
            v7 = PnpGetObjectProperty(
                   *(__int64 *)&PiPnpRtlCtx,
                   (__int64)SourceString,
                   2u,
                   (__int64)v60,
                   0LL,
                   (__int64)&DEVPKEY_DeviceClass_ConfigNotifyWnfTriggers,
                   (__int64)&v62,
                   (__int64)P,
                   NumberOfBytes,
                   (__int64)&NumberOfBytes_4,
                   0);
            if ( v7 != -1073741789 )
              goto LABEL_84;
            if ( NumberOfBytes_4 <= NumberOfBytes )
            {
              v7 = -1073741823;
              goto LABEL_88;
            }
            ExFreePoolWithTag(P, 0);
            NumberOfBytes = NumberOfBytes_4;
            P = ExAllocatePoolWithTag(PagedPool, NumberOfBytes_4, 0x6E657050u);
          }
          while ( P );
          v7 = -1073741670;
LABEL_84:
          if ( v7 >= 0 )
          {
            if ( v62 == 4099 && (NumberOfBytes_4 & 7) == 0 && NumberOfBytes_4 )
            {
              v33 = (const WNF_STATE_NAME *)P;
              v34 = NumberOfBytes_4 >> 3;
              do
              {
                ZwUpdateWnfStateData(v33++, 0LL, 0, 0LL, 0LL, 0, 0);
                --v34;
              }
              while ( v34 );
              v9 = 56;
              goto LABEL_11;
            }
          }
          else if ( v7 == -1073741772 || v7 == -1073741275 )
          {
            v7 = 0;
          }
        }
      }
LABEL_88:
      if ( !v67[2] )
      {
        v28 = *(_QWORD *)(a1 + 48);
        NumberOfBytes_4 = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v28,
                    (__int64)Handle,
                    11,
                    (__int64)&v56,
                    (__int64)&v54,
                    (__int64)&NumberOfBytes_4,
                    0) >= 0
          && v56 == 4
          && NumberOfBytes_4 == 4
          && (v54 & 0x80000) != 0 )
        {
          v29 = *(_QWORD *)(a1 + 48);
          v54 &= ~0x80000u;
          CmSetDeviceRegProp(PiPnpRtlCtx, v29, (_DWORD)Handle, 11, 4, (__int64)&v54, 4, 0);
        }
      }
      if ( v7 >= 0 )
      {
LABEL_97:
        if ( (*(_DWORD *)(a1 + 396) & 0x4000000) == 0 )
        {
          v30 = PnpCallDriverQueryServiceHelper(
                  (unsigned int)&P,
                  (unsigned int)&NumberOfBytes,
                  19,
                  0,
                  *(_QWORD *)(a1 + 48),
                  (__int64)Handle,
                  0,
                  1,
                  v4,
                  (__int64)v67);
          v7 = v30;
          if ( v30 == -1073741772 || v30 == -1073741275 )
          {
            PipSetDevNodeFlags(a1, 0x4000000LL);
            v7 = 0;
          }
        }
        if ( v7 >= 0 )
        {
          if ( v60 )
          {
            if ( (*(_DWORD *)(a1 + 396) & 0x8000000) == 0 )
            {
              v31 = PnpCallDriverQueryServiceHelper(
                      (unsigned int)&P,
                      (unsigned int)&NumberOfBytes,
                      19,
                      0,
                      (__int64)SourceString,
                      (__int64)v60,
                      1,
                      2,
                      v4,
                      (__int64)v67);
              v7 = v31;
              if ( v31 == -1073741772 || v31 == -1073741275 )
              {
                PipSetDevNodeFlags(a1, 0x8000000LL);
                v7 = 0;
              }
            }
          }
          if ( v7 >= 0 )
          {
            if ( (*(_DWORD *)(a1 + 396) & 0x10000000) != 0 )
            {
              v7 = -1073741772;
            }
            else
            {
              v32 = PnpCallDriverQueryServiceHelper(
                      (unsigned int)&P,
                      (unsigned int)&NumberOfBytes,
                      5,
                      0,
                      *(_QWORD *)(a1 + 48),
                      (__int64)Handle,
                      0,
                      3,
                      v4,
                      (__int64)v67);
              v7 = v32;
              if ( v32 == -1073741772 || v32 == -1073741275 )
              {
                v7 = -1073741772;
                PipSetDevNodeFlags(a1, 0x10000000LL);
              }
            }
          }
        }
      }
    }
    else
    {
      v7 = -1073741670;
    }
    v35 = *(_DWORD *)(a1 + 396);
    if ( (v35 & 0x1000) != 0 )
    {
LABEL_120:
      v7 = 0;
      goto LABEL_47;
    }
    if ( v7 < 0 )
    {
      if ( v7 != -1073741772 )
        goto LABEL_47;
      if ( (*(_DWORD *)(a1 + 560) & 0x100) == 0 )
        goto LABEL_46;
      PipClearDevNodeProblem(a1);
      v35 = *(_DWORD *)(a1 + 396);
      v7 = 0;
      v5 = 1;
    }
    else if ( *(_QWORD *)(v67[5] + 8LL) )
    {
      PipSetDevNodeProblem(a1, 19, -1073741438);
LABEL_46:
      v7 = -1073741823;
      goto LABEL_47;
    }
    if ( (v35 & 0x20000000) == 0 )
    {
      v36 = PnpCallDriverQueryServiceHelper(
              (unsigned int)&P,
              (unsigned int)&NumberOfBytes,
              18,
              0,
              *(_QWORD *)(a1 + 48),
              (__int64)Handle,
              0,
              4,
              v4,
              (__int64)v67);
      v7 = v36;
      if ( v36 == -1073741772 || v36 == -1073741275 )
      {
        PipSetDevNodeFlags(a1, 0x20000000LL);
        v7 = 0;
      }
    }
    if ( v7 < 0 )
      goto LABEL_47;
    if ( v60 && (*(_DWORD *)(a1 + 396) & 0x40000000) == 0 )
    {
      v37 = PnpCallDriverQueryServiceHelper(
              (unsigned int)&P,
              (unsigned int)&NumberOfBytes,
              18,
              0,
              (__int64)SourceString,
              (__int64)v60,
              1,
              5,
              v4,
              (__int64)v67);
      v7 = v37;
      if ( v37 == -1073741772 || v37 == -1073741275 )
      {
        PipSetDevNodeFlags(a1, 0x40000000LL);
        v7 = 0;
      }
      else if ( v37 >= 0 )
      {
        goto LABEL_140;
      }
    }
    if ( v7 < 0 )
      goto LABEL_47;
LABEL_140:
    v38 = Handle;
    if ( (*(_DWORD *)(v67[0] + 560LL) & 0x100000) == 0 )
      DeviceDmarPolicy = PipDmgGetDeviceDmarPolicy(v67);
    v7 = PipDmgSaveDeviceDmarPolicy(v67[0], v38, DeviceDmarPolicy);
    if ( v7 >= 0 )
    {
      v39 = 0LL;
      Object = IoGetAttachedDeviceReferenceWithTag(*(PDEVICE_OBJECT *)(a1 + 32), 0x65706E50u);
      for ( i = 0; i < 6u; ++i )
      {
        if ( i == 3 )
        {
          AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(
                                             *(PDEVICE_OBJECT *)(a1 + 32),
                                             0x65706E50u);
          if ( v5 )
          {
            if ( !v67[5] )
              PipSetDevNodeState(a1, 771);
          }
        }
        v41 = (_QWORD *)v67[i + 2];
        for ( j = v41; j; j = (_QWORD *)j[1] )
        {
          v43 = PnpCallAddDevice(a1, *j, *(_QWORD *)(*(_QWORD *)(*j + 48LL) + 8LL), i);
          *(_DWORD *)(*j + 16LL) |= 0x400u;
          if ( v43 < 0 )
          {
            if ( i == 3 )
            {
              IovUtilMarkStack(*(_QWORD *)(a1 + 32), *((_QWORD *)Object + 3), v39, 0);
              v10 = v47;
              *(_DWORD *)(a1 + 392) = v47;
              v9 = 31;
              goto LABEL_12;
            }
          }
          else
          {
            if ( i == 3 )
              v39 = *((_QWORD *)AttachedDeviceReferenceWithTag + 3);
            PipSetDevNodeState(a1, 771);
          }
        }
        if ( !i )
        {
          if ( v41 )
          {
            v44 = *(_QWORD *)(a1 + 48);
            NumberOfBytes_4 = 4;
            if ( (int)CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v44,
                        (__int64)Handle,
                        11,
                        (__int64)&v56,
                        (__int64)&v54,
                        (__int64)&NumberOfBytes_4,
                        0) >= 0
              && v56 == 4
              && NumberOfBytes_4 == 4
              && (v54 & 0x80000) != 0 )
            {
              v45 = *(_QWORD *)(a1 + 48);
              v54 &= ~0x80000u;
              CmSetDeviceRegProp(PiPnpRtlCtx, v45, (_DWORD)Handle, 11, 4, (__int64)&v54, 4, 0);
            }
          }
        }
      }
      v46 = !v39 || v5;
      IovUtilMarkStack(*(_QWORD *)(a1 + 32), *((_QWORD *)Object + 3), v39, v46);
      v48 = PipChangeDeviceObjectFromRegistryProperties(
              *(_QWORD *)(a1 + 32),
              (__int64)Handle,
              SourceString,
              (__int64)v60,
              v5);
      if ( v48 < 0 )
      {
        v10 = v48;
        v9 = 50;
LABEL_12:
        PnpRequestDeviceRemoval(a1, 0, v9, v10);
        v7 = -1073741106;
        goto LABEL_47;
      }
      if ( (int)IopQueryLegacyBusInformation(
                  *(struct _DEVICE_OBJECT **)(a1 + 32),
                  v49,
                  (_DWORD *)(a1 + 448),
                  (_DWORD *)(a1 + 452)) < 0 )
      {
        *(_DWORD *)(a1 + 448) = -1;
        *(_DWORD *)(a1 + 452) = -16;
      }
      else
      {
        IopInsertLegacyBusDeviceNode(a1, *(unsigned int *)(a1 + 448), *(unsigned int *)(a1 + 452));
      }
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v50, *(_QWORD *)(a1 + 48), 23LL);
      if ( (*(_DWORD *)(a1 + 560) & 0x100000) == 0 || (v7 = PiProcessDriversLoadedOnSecureDevice(a1), v7 >= 0) )
      {
        if ( *(_QWORD *)(a1 + 720) && PipDmgIsConsoleLockPolicyActive() )
        {
          v7 = PipDmgEnforceConsoleLock(a1);
          goto LABEL_47;
        }
        goto LABEL_120;
      }
    }
LABEL_47:
    v6 = 6LL;
    goto LABEL_48;
  }
  v7 = -1073741823;
LABEL_48:
  v20 = &v67[2];
  do
  {
    v21 = *v20;
    if ( *v20 )
    {
      do
      {
        v22 = (PVOID *)v21;
        v21 = *(_QWORD *)(v21 + 8);
        if ( PnPBootDriversInitialized )
          PnpUnloadAttachedDriver(*v22);
        ObfDereferenceObject(*v22);
        ExFreePoolWithTag(v22, 0);
      }
      while ( v21 );
      v6 = v66;
    }
    ++v20;
    v66 = --v6;
  }
  while ( v6 );
  v23 = Object;
  if ( Handle )
    ZwClose(Handle);
  if ( v60 )
    ZwClose(v60);
  if ( v23 )
    ObfDereferenceObjectWithTag(v23, 0x65706E50u);
  if ( AttachedDeviceReferenceWithTag )
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x65706E50u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v7;
}
