/*
 * XREFs of PipCallDriverAddDevice @ 0x14051DC78
 * Callers:
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 *     PiProcessAddBootDevices @ 0x1405DAED8 (PiProcessAddBootDevices.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1400DE5E8 (IoGetAttachedDeviceReferenceWithTag.c)
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     PipSetDevNodeState @ 0x1400E0004 (PipSetDevNodeState.c)
 *     PipDmgIsConsoleLockPolicyActive @ 0x1400FF29C (PipDmgIsConsoleLockPolicyActive.c)
 *     IovUtilMarkStack @ 0x14012D5CC (IovUtilMarkStack.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14051B03C (PnpCallDriverQueryServiceHelper.c)
 *     _CmOpenInstallerClassRegKey @ 0x14051D7B8 (_CmOpenInstallerClassRegKey.c)
 *     _CmOpenDeviceRegKey @ 0x140520CAC (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x140523128 (_PnpGetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14052DAE4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _PnpSetObjectProperty @ 0x14052F8B4 (_PnpSetObjectProperty.c)
 *     _CmSetDeviceRegProp @ 0x140551244 (_CmSetDeviceRegProp.c)
 *     PnpCallAddDevice @ 0x140552E6C (PnpCallAddDevice.c)
 *     PipSetDevNodeFlags @ 0x140553748 (PipSetDevNodeFlags.c)
 *     PnpUnloadAttachedDriver @ 0x14055DBD0 (PnpUnloadAttachedDriver.c)
 *     PipSetDevNodeProblem @ 0x14055DCFC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x14055DF68 (PipClearDevNodeProblem.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1405767CC (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PipDmgSaveDeviceDmarPolicy @ 0x14058C660 (PipDmgSaveDeviceDmarPolicy.c)
 *     PipDmgGetDeviceDmarPolicy @ 0x14058C704 (PipDmgGetDeviceDmarPolicy.c)
 *     IopQueryLegacyBusInformation @ 0x1405973D8 (IopQueryLegacyBusInformation.c)
 *     IopBootLog @ 0x14059BC30 (IopBootLog.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1405DE778 (IopInsertLegacyBusDeviceNode.c)
 *     PnpRequestDeviceRemoval @ 0x1405EDBB0 (PnpRequestDeviceRemoval.c)
 *     IopSafebootDriverLoad @ 0x1406B5A20 (IopSafebootDriverLoad.c)
 *     PipDmgEnforceConsoleLock @ 0x1406C31A8 (PipDmgEnforceConsoleLock.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1406D555C (PiProcessDriversLoadedOnSecureDevice.c)
 */

__int64 __fastcall PipCallDriverAddDevice(__int64 a1, __int64 a2)
{
  char v4; // r13
  __int64 v5; // rax
  void *v6; // r15
  __int64 v7; // rdx
  int ObjectProperty; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 *v13; // rsi
  __int64 v14; // rdi
  PVOID v15; // r12
  int v17; // eax
  int v18; // eax
  PVOID *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  HANDLE v25; // rbx
  unsigned int DeviceDmarPolicy; // eax
  __int64 v27; // r14
  unsigned __int8 i; // bl
  __int64 v29; // r15
  _QWORD *v30; // rsi
  BOOL v31; // r9d
  int v32; // eax
  __int64 v33; // rdx
  _DWORD *v34; // rbx
  _DWORD *v35; // rsi
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // r8
  __int64 v39; // r9
  PVOID PoolWithTag; // rbx
  int DeviceRegProp; // eax
  int v42; // eax
  PVOID v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rdx
  const WNF_STATE_NAME *v46; // rbx
  unsigned int v47; // esi
  unsigned int v48; // r11d
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // rdx
  unsigned int NumberOfBytes; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+64h] [rbp-9Ch] BYREF
  int v54; // [rsp+68h] [rbp-98h] BYREF
  int v55; // [rsp+6Ch] [rbp-94h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v57; // [rsp+78h] [rbp-88h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v59; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v60; // [rsp+90h] [rbp-70h] BYREF
  int v61; // [rsp+98h] [rbp-68h] BYREF
  LOGICAL v62; // [rsp+9Ch] [rbp-64h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-48h]
  __int64 v66[8]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR SourceString[40]; // [rsp+100h] [rbp+0h] BYREF

  v60 = 0LL;
  v54 = 0;
  v57 = 0;
  Handle = 0LL;
  v4 = 0;
  memset(v66, 0, sizeof(v66));
  v5 = 6LL;
  SourceString[0] = 0;
  v6 = 0LL;
  v65 = 6LL;
  P = 0LL;
  Object = 0LL;
  if ( *(_BYTE *)(a1 + 688) && !*(_BYTE *)(a2 + 4) )
  {
    ObjectProperty = -1073741823;
    goto LABEL_28;
  }
  v7 = *(_QWORD *)(a1 + 48);
  *(_BYTE *)(a1 + 688) = 0;
  ObjectProperty = CmOpenDeviceRegKey(PiPnpRtlCtx, v7, 16, 0, 131097, 0, (__int64)&Handle, 0LL);
  if ( ObjectProperty < 0 )
    goto LABEL_27;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x2000000) != 0
    && ((int)PnpGetObjectProperty(
               PiPnpRtlCtx,
               *(_QWORD *)(a1 + 48),
               1,
               (_DWORD)Handle,
               0LL,
               (__int64)&DEVPKEY_Device_DebuggerSafe,
               (__int64)&v61,
               (__int64)&v57,
               4,
               (__int64)&NumberOfBytes_4,
               0) < 0
     || v61 != 7
     || NumberOfBytes_4 != 4
     || !v57) )
  {
    v38 = 53LL;
LABEL_116:
    v39 = 0LL;
    goto LABEL_118;
  }
  if ( *(_DWORD *)(a1 + 660) == -1 )
  {
    if ( PnpQueryProximityNode
      && (int)PnpGetObjectProperty(
                PiPnpRtlCtx,
                *(_QWORD *)(a1 + 48),
                1,
                (_DWORD)Handle,
                0LL,
                (__int64)&DEVPKEY_Device_Numa_Proximity_Domain,
                (__int64)&v61,
                (__int64)&v57,
                4,
                (__int64)&NumberOfBytes_4,
                0) >= 0
      && v57 <= 0xFF
      && (int)((__int64 (__fastcall *)(_QWORD, unsigned __int16 *))PnpQueryProximityNode)(v57, &v59) >= 0 )
    {
      *(_DWORD *)(a1 + 660) = v59;
    }
    if ( *(_DWORD *)(a1 + 660) == -1 )
    {
      v20 = *(_QWORD *)(a1 + 16);
      if ( v20 )
        *(_DWORD *)(a1 + 660) = *(_DWORD *)(v20 + 660);
      else
        *(_DWORD *)(a1 + 660) = -2;
    }
    if ( *(_DWORD *)(a1 + 660) != -2 )
    {
      v21 = *(_QWORD *)(a1 + 48);
      v57 = *(_DWORD *)(a1 + 660);
      PnpSetObjectProperty(PiPnpRtlCtx, v21, 1, 0LL, (__int64)&DEVPKEY_Device_Numa_Node, 7, (__int64)&v57, 4, 0);
    }
  }
  v9 = *(_QWORD *)(a1 + 48);
  NumberOfBytes = 78;
  if ( (int)CmGetDeviceRegProp(
              PiPnpRtlCtx,
              v9,
              (_DWORD)Handle,
              9,
              (__int64)&v55,
              (__int64)SourceString,
              (__int64)&NumberOfBytes,
              0) >= 0
    && v55 == 1
    && NumberOfBytes )
  {
    RtlInitUnicodeStringEx(&DestinationString, SourceString);
    if ( InitSafeBootMode && !(unsigned __int8)IopSafebootDriverLoad(&DestinationString) )
    {
      NumberOfBytes = 256;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x6E657050u);
      if ( PoolWithTag )
      {
        DeviceRegProp = CmGetDeviceRegProp(
                          PiPnpRtlCtx,
                          *(_QWORD *)(a1 + 48),
                          (_DWORD)Handle,
                          1,
                          (__int64)&v55,
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
      goto LABEL_26;
    }
    CmOpenInstallerClassRegKey(PiPnpRtlCtx, (int)SourceString, v10, v11, 131097, 0, (__int64)&v60, 0LL);
  }
  v12 = *(_QWORD *)(a1 + 48);
  NumberOfBytes = 4;
  if ( (int)CmGetDeviceRegProp(
              PiPnpRtlCtx,
              v12,
              (_DWORD)Handle,
              11,
              (__int64)&v55,
              (__int64)&v54,
              (__int64)&NumberOfBytes,
              0) < 0
    || v55 != 4
    || NumberOfBytes != 4 )
  {
    v54 = 0;
  }
  v66[0] = a1;
  ObjectProperty = 0;
  v66[1] = a2;
  NumberOfBytes = 512;
  P = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x6E657050u);
  if ( P )
  {
    if ( (v54 & 0x80000) == 0 )
      goto LABEL_158;
    if ( v60 )
    {
      v42 = PnpCallDriverQueryServiceHelper(
              (__int64 *)&P,
              (int *)&NumberOfBytes,
              0,
              (__int64)&DEVPKEY_DeviceClass_ConfigFilters,
              (__int64)SourceString,
              (__int64)v60,
              1,
              0,
              v66);
      ObjectProperty = v42;
      if ( v42 == -1073741772 || v42 == -1073741275 )
        ObjectProperty = 0;
      if ( ObjectProperty >= 0 )
      {
        do
        {
          v43 = P;
          ObjectProperty = PnpGetObjectProperty(
                             PiPnpRtlCtx,
                             (unsigned int)SourceString,
                             2,
                             (_DWORD)v60,
                             0LL,
                             (__int64)&DEVPKEY_DeviceClass_ConfigNotifyWnfTriggers,
                             (__int64)&v62,
                             (__int64)P,
                             NumberOfBytes,
                             (__int64)&NumberOfBytes_4,
                             0);
          if ( ObjectProperty != -1073741789 )
            goto LABEL_139;
          if ( NumberOfBytes_4 <= NumberOfBytes )
          {
            ObjectProperty = -1073741823;
            goto LABEL_143;
          }
          ExFreePoolWithTag(v43, 0);
          NumberOfBytes = NumberOfBytes_4;
          P = ExAllocatePoolWithTag(PagedPool, NumberOfBytes_4, 0x6E657050u);
        }
        while ( P );
        ObjectProperty = -1073741670;
LABEL_139:
        if ( ObjectProperty >= 0 )
        {
          if ( v62 == 4099 && (NumberOfBytes_4 & 7) == 0 && NumberOfBytes_4 )
          {
            v46 = (const WNF_STATE_NAME *)P;
            v47 = NumberOfBytes_4 >> 3;
            do
            {
              ZwUpdateWnfStateData(v46++, 0LL, 0, 0LL, 0LL, 0, 0);
              --v47;
            }
            while ( v47 );
            v38 = 56LL;
            goto LABEL_116;
          }
        }
        else if ( ObjectProperty == -1073741772 || ObjectProperty == -1073741275 )
        {
          ObjectProperty = 0;
        }
      }
    }
LABEL_143:
    if ( !v66[2] )
    {
      v44 = *(_QWORD *)(a1 + 48);
      NumberOfBytes_4 = 4;
      if ( (int)CmGetDeviceRegProp(
                  PiPnpRtlCtx,
                  v44,
                  (_DWORD)Handle,
                  11,
                  (__int64)&v55,
                  (__int64)&v54,
                  (__int64)&NumberOfBytes_4,
                  0) >= 0
        && v55 == 4
        && NumberOfBytes_4 == 4
        && (v54 & 0x80000) != 0 )
      {
        v45 = *(_QWORD *)(a1 + 48);
        v54 &= ~0x80000u;
        CmSetDeviceRegProp(PiPnpRtlCtx, v45, (_DWORD)Handle, 11, 4, (__int64)&v54, 4, 0);
      }
    }
    if ( ObjectProperty >= 0 )
    {
LABEL_158:
      if ( (*(_DWORD *)(a1 + 396) & 0x4000000) == 0 )
      {
        v22 = PnpCallDriverQueryServiceHelper(
                (__int64 *)&P,
                (int *)&NumberOfBytes,
                19,
                0LL,
                *(_QWORD *)(a1 + 48),
                (__int64)Handle,
                0,
                1,
                v66);
        ObjectProperty = v22;
        if ( v22 == -1073741275 || v22 == -1073741772 )
        {
          PipSetDevNodeFlags(a1, 0x4000000LL);
          ObjectProperty = 0;
        }
      }
      if ( ObjectProperty >= 0 )
      {
        if ( v60 )
        {
          if ( (*(_DWORD *)(a1 + 396) & 0x8000000) == 0 )
          {
            v18 = PnpCallDriverQueryServiceHelper(
                    (__int64 *)&P,
                    (int *)&NumberOfBytes,
                    19,
                    0LL,
                    (__int64)SourceString,
                    (__int64)v60,
                    1,
                    2,
                    v66);
            ObjectProperty = v18;
            if ( v18 == -1073741275 || v18 == -1073741772 )
            {
              PipSetDevNodeFlags(a1, 0x8000000LL);
              ObjectProperty = 0;
            }
          }
        }
        if ( ObjectProperty >= 0 )
        {
          if ( (*(_DWORD *)(a1 + 396) & 0x10000000) != 0 )
          {
            ObjectProperty = -1073741772;
          }
          else
          {
            v17 = PnpCallDriverQueryServiceHelper(
                    (__int64 *)&P,
                    (int *)&NumberOfBytes,
                    5,
                    0LL,
                    *(_QWORD *)(a1 + 48),
                    (__int64)Handle,
                    0,
                    3,
                    v66);
            ObjectProperty = v17;
            if ( v17 == -1073741275 || v17 == -1073741772 )
            {
              ObjectProperty = -1073741772;
              PipSetDevNodeFlags(a1, 0x10000000LL);
            }
          }
        }
      }
    }
  }
  else
  {
    ObjectProperty = -1073741670;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x1000) != 0 )
  {
LABEL_87:
    ObjectProperty = 0;
    goto LABEL_27;
  }
  if ( ObjectProperty >= 0 )
  {
    if ( *(_QWORD *)(v66[5] + 8) )
    {
      PipSetDevNodeProblem(a1, 19LL, 3221225858LL);
LABEL_26:
      ObjectProperty = -1073741823;
      goto LABEL_27;
    }
  }
  else
  {
    if ( ObjectProperty != -1073741772 )
      goto LABEL_27;
    if ( (*(_DWORD *)(a1 + 560) & 0x100) == 0 )
      goto LABEL_26;
    PipClearDevNodeProblem(a1);
    ObjectProperty = 0;
    v4 = 1;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x20000000) == 0 )
  {
    v23 = PnpCallDriverQueryServiceHelper(
            (__int64 *)&P,
            (int *)&NumberOfBytes,
            18,
            0LL,
            *(_QWORD *)(a1 + 48),
            (__int64)Handle,
            0,
            4,
            v66);
    ObjectProperty = v23;
    if ( v23 == -1073741275 || v23 == -1073741772 )
    {
      PipSetDevNodeFlags(a1, 0x20000000LL);
      ObjectProperty = 0;
    }
  }
  if ( ObjectProperty < 0 )
    goto LABEL_27;
  if ( v60 )
  {
    if ( (*(_DWORD *)(a1 + 396) & 0x40000000) == 0 )
    {
      v24 = PnpCallDriverQueryServiceHelper(
              (__int64 *)&P,
              (int *)&NumberOfBytes,
              18,
              0LL,
              (__int64)SourceString,
              (__int64)v60,
              1,
              5,
              v66);
      ObjectProperty = v24;
      if ( v24 == -1073741275 || v24 == -1073741772 )
      {
        PipSetDevNodeFlags(a1, 0x40000000LL);
        ObjectProperty = 0;
      }
    }
  }
  if ( ObjectProperty < 0 )
    goto LABEL_27;
  v25 = Handle;
  DeviceDmarPolicy = PipDmgGetDeviceDmarPolicy(v66);
  ObjectProperty = PipDmgSaveDeviceDmarPolicy(v66[0], v25, DeviceDmarPolicy);
  if ( ObjectProperty < 0 )
    goto LABEL_27;
  v27 = 0LL;
  *(_QWORD *)&DestinationString.Length = IoGetAttachedDeviceReferenceWithTag(*(PDEVICE_OBJECT *)(a1 + 32), 0x65706E50u);
  for ( i = 0; i < 6u; ++i )
  {
    if ( i == 3 )
    {
      Object = IoGetAttachedDeviceReferenceWithTag(*(PDEVICE_OBJECT *)(a1 + 32), 0x65706E50u);
      if ( v4 )
      {
        if ( !v66[5] )
          PipSetDevNodeState(a1, 771);
      }
    }
    v29 = v66[i + 2];
    v30 = (_QWORD *)v29;
    if ( v29 )
    {
      do
      {
        v37 = PnpCallAddDevice(a1, *v30, *(_QWORD *)(*(_QWORD *)(*v30 + 48LL) + 8LL), i);
        *(_DWORD *)(*v30 + 16LL) |= 0x400u;
        if ( v37 < 0 )
        {
          if ( i == 3 )
          {
            v6 = *(void **)&DestinationString.Length;
            IovUtilMarkStack(*(_QWORD *)(a1 + 32), *(_QWORD *)(*(_QWORD *)&DestinationString.Length + 24LL), v27, 0);
            v39 = v48;
            *(_DWORD *)(a1 + 392) = v48;
            v38 = 31LL;
LABEL_118:
            PnpRequestDeviceRemoval(a1, 0LL, v38, v39);
            ObjectProperty = -1073741106;
            goto LABEL_27;
          }
        }
        else
        {
          if ( i == 3 )
            v27 = *((_QWORD *)Object + 3);
          PipSetDevNodeState(a1, 771);
        }
        v30 = (_QWORD *)v30[1];
      }
      while ( v30 );
    }
    if ( !i )
    {
      if ( v29 )
      {
        v49 = *(_QWORD *)(a1 + 48);
        NumberOfBytes_4 = 4;
        v50 = CmGetDeviceRegProp(
                PiPnpRtlCtx,
                v49,
                (_DWORD)Handle,
                11,
                (__int64)&v55,
                (__int64)&v54,
                (__int64)&NumberOfBytes_4,
                0);
        if ( v50 >= 0 && v55 == 4 && NumberOfBytes_4 == 4 && (v54 & 0x80000) != 0 )
        {
          v51 = *(_QWORD *)(a1 + 48);
          v54 &= ~0x80000u;
          CmSetDeviceRegProp(PiPnpRtlCtx, v51, (_DWORD)Handle, 11, 4, (__int64)&v54, 4, 0);
        }
      }
    }
  }
  v31 = !v27 || v4;
  v6 = *(void **)&DestinationString.Length;
  IovUtilMarkStack(*(_QWORD *)(a1 + 32), *(_QWORD *)(*(_QWORD *)&DestinationString.Length + 24LL), v27, v31);
  v32 = PipChangeDeviceObjectFromRegistryProperties(
          *(_QWORD *)(a1 + 32),
          (_DWORD)Handle,
          (unsigned int)SourceString,
          (_DWORD)v60,
          v4);
  if ( v32 < 0 )
  {
    v39 = (unsigned int)v32;
    v38 = 50LL;
    goto LABEL_118;
  }
  v34 = (_DWORD *)(a1 + 452);
  v35 = (_DWORD *)(a1 + 448);
  if ( (int)IopQueryLegacyBusInformation(*(_QWORD *)(a1 + 32), v33, a1 + 448, a1 + 452) >= 0 )
  {
    IopInsertLegacyBusDeviceNode(a1, (unsigned int)*v35, (unsigned int)*v34);
  }
  else
  {
    *v35 = -1;
    *v34 = -16;
  }
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v36, *(_QWORD *)(a1 + 48), 23LL);
  if ( (*(_DWORD *)(a1 + 560) & 0x100000) == 0
    || (ObjectProperty = PiProcessDriversLoadedOnSecureDevice(a1), ObjectProperty >= 0) )
  {
    if ( *(_QWORD *)(a1 + 720) && PipDmgIsConsoleLockPolicyActive() )
    {
      ObjectProperty = PipDmgEnforceConsoleLock(a1);
      goto LABEL_27;
    }
    goto LABEL_87;
  }
LABEL_27:
  v5 = 6LL;
LABEL_28:
  v13 = &v66[2];
  do
  {
    v14 = *v13;
    if ( *v13 )
    {
      do
      {
        v19 = (PVOID *)v14;
        v14 = *(_QWORD *)(v14 + 8);
        if ( PnPBootDriversInitialized )
          PnpUnloadAttachedDriver(*v19);
        ObfDereferenceObject(*v19);
        ExFreePoolWithTag(v19, 0);
      }
      while ( v14 );
      v5 = v65;
    }
    ++v13;
    v65 = --v5;
  }
  while ( v5 );
  v15 = Object;
  if ( Handle )
    ZwClose(Handle);
  if ( v60 )
    ZwClose(v60);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x65706E50u);
  if ( v15 )
    ObfDereferenceObjectWithTag(v15, 0x65706E50u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)ObjectProperty;
}
