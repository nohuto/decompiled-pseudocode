/*
 * XREFs of PipCallDriverAddDevice @ 0x1404E1D64
 * Callers:
 *     PipProcessDevNodeTree @ 0x14048B768 (PipProcessDevNodeTree.c)
 *     PiProcessAddBootDevices @ 0x14059CE7C (PiProcessAddBootDevices.c)
 * Callees:
 *     IovUtilMarkStack @ 0x1400375C0 (IovUtilMarkStack.c)
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     PipSetDevNodeState @ 0x1400810C0 (PipSetDevNodeState.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140081554 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopQueryLegacyBusInformation @ 0x140457CCC (IopQueryLegacyBusInformation.c)
 *     IopBootLog @ 0x14045B6F8 (IopBootLog.c)
 *     PipClearDevNodeProblem @ 0x14045D5E8 (PipClearDevNodeProblem.c)
 *     _CmOpenDeviceRegKey @ 0x14048307C (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x140484E40 (_PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x1404DDABC (_PnpSetObjectProperty.c)
 *     PnpQueryInterface @ 0x1404DDD80 (PnpQueryInterface.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404DE7F4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _CmOpenInstallerClassRegKey @ 0x1404E2590 (_CmOpenInstallerClassRegKey.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1404E2D2C (PnpCallDriverQueryServiceHelper.c)
 *     PipSetDevNodeFlags @ 0x1404E2E9C (PipSetDevNodeFlags.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404E3894 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PnpRequestDeviceRemoval @ 0x14056DB8C (PnpRequestDeviceRemoval.c)
 *     PipSetDevNodeProblem @ 0x140570490 (PipSetDevNodeProblem.c)
 *     PnpCallAddDevice @ 0x1405C6CE0 (PnpCallAddDevice.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1405CB8AC (IopInsertLegacyBusDeviceNode.c)
 *     PnpUnloadAttachedDriver @ 0x1405CBF9C (PnpUnloadAttachedDriver.c)
 *     IopSafebootDriverLoad @ 0x140689D60 (IopSafebootDriverLoad.c)
 */

__int64 __fastcall PipCallDriverAddDevice(__int64 a1, __int64 a2)
{
  char v4; // r13
  void *v5; // r15
  PDEVICE_OBJECT v6; // r12
  __int64 v7; // r14
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // r9d
  __int64 *v12; // rsi
  __int64 v13; // rdi
  int v15; // eax
  int v16; // eax
  PVOID *v17; // r14
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 AttachedDevice; // r14
  unsigned __int8 i; // bl
  _QWORD *j; // rsi
  int v25; // r9d
  int v26; // eax
  __int64 v27; // rdx
  _DWORD *v28; // rbx
  _DWORD *v29; // rsi
  __int64 v30; // rcx
  int v31; // r15d
  PVOID PoolWithTag; // rbx
  int DeviceRegProp; // eax
  __int64 v34; // r9
  __int64 v35; // r8
  int v36; // [rsp+28h] [rbp-D8h]
  unsigned int NumberOfBytes; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 v40; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  PDEVICE_OBJECT AttachedDeviceReferenceWithTag; // [rsp+80h] [rbp-80h]
  int v43; // [rsp+88h] [rbp-78h] BYREF
  int v44; // [rsp+8Ch] [rbp-74h] BYREF
  int v45; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v46; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-50h]
  _QWORD v49[7]; // [rsp+B8h] [rbp-48h] BYREF
  USHORT v50; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v51; // [rsp+F8h] [rbp-8h]
  void (__fastcall *v52)(__int64); // [rsp+108h] [rbp+8h]
  WCHAR SourceString[40]; // [rsp+130h] [rbp+30h] BYREF

  v46 = 0LL;
  NumberOfBytes_4 = 0;
  Handle = 0LL;
  v4 = 0;
  memset(v49, 0, sizeof(v49));
  v5 = 0LL;
  SourceString[0] = 0;
  v6 = 0LL;
  P = 0LL;
  AttachedDeviceReferenceWithTag = 0LL;
  v7 = 5LL;
  v48 = 5LL;
  if ( *(_BYTE *)(a1 + 688) && !*(_BYTE *)(a2 + 4) )
    goto LABEL_21;
  *(_BYTE *)(a1 + 688) = 0;
  v8 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), 0x10u, 0, 131097, 0, (__int64)&Handle, 0LL);
  if ( v8 >= 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x2000000) != 0
      && ((int)PnpGetObjectProperty(
                 *(__int64 *)&PiPnpRtlCtx,
                 *(_QWORD *)(a1 + 48),
                 1u,
                 (__int64)Handle,
                 0LL,
                 (__int64)&DEVPKEY_Device_DebuggerSafe,
                 (__int64)&v44,
                 (__int64)&NumberOfBytes_4,
                 4,
                 (__int64)&v43,
                 0) < 0
       || v44 != 7
       || v43 != 4
       || !NumberOfBytes_4) )
    {
      PnpRequestDeviceRemoval(a1, 0LL, 53LL, 0LL);
      v8 = -1073741106;
      goto LABEL_22;
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
                  (__int64)&v44,
                  (__int64)&NumberOfBytes_4,
                  4,
                  (__int64)&v43,
                  0) >= 0
        && NumberOfBytes_4 <= 0xFF
        && (int)((__int64 (__fastcall *)(_QWORD, unsigned __int16 *))PnpQueryProximityNode)(NumberOfBytes_4, &v40) >= 0 )
      {
        *(_DWORD *)(a1 + 660) = v40;
      }
      if ( *(_DWORD *)(a1 + 660) == -1 )
      {
        v18 = *(_QWORD *)(a1 + 16);
        if ( v18 )
          *(_DWORD *)(a1 + 660) = *(_DWORD *)(v18 + 660);
        else
          *(_DWORD *)(a1 + 660) = -2;
      }
      if ( *(_DWORD *)(a1 + 660) != -2 )
      {
        NumberOfBytes_4 = *(_DWORD *)(a1 + 660);
        PnpSetObjectProperty(
          *(__int64 **)&PiPnpRtlCtx,
          *(_QWORD *)(a1 + 48),
          1u,
          (__int64)Handle,
          0LL,
          (__int64)&DEVPKEY_Device_Numa_Node,
          7,
          (__int64)&NumberOfBytes_4,
          4u,
          0);
      }
    }
    v9 = *(_QWORD *)(a1 + 48);
    v8 = 0;
    NumberOfBytes = 78;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v9,
                (__int64)Handle,
                9,
                (__int64)&v45,
                (__int64)SourceString,
                (__int64)&NumberOfBytes,
                0) >= 0
      && v45 == 1
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
                            *(__int64 *)&PiPnpRtlCtx,
                            *(_QWORD *)(a1 + 48),
                            (__int64)Handle,
                            1,
                            (__int64)&v45,
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
        IopBootLog(&DestinationString, 0);
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        goto LABEL_21;
      }
      CmOpenInstallerClassRegKey(PiPnpRtlCtx, (unsigned int)SourceString, v10, v11, 131097, 0, (__int64)&v46, 0LL);
    }
    v49[0] = a1;
    NumberOfBytes = 512;
    v49[1] = a2;
    P = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x6E657050u);
    if ( P )
    {
      if ( (*(_DWORD *)(a1 + 396) & 0x4000000) != 0 )
        goto LABEL_42;
      LOBYTE(v36) = 0;
      v19 = PnpCallDriverQueryServiceHelper(
              (unsigned int)&P,
              (unsigned int)&NumberOfBytes,
              19,
              *(_QWORD *)(a1 + 48),
              (__int64)Handle,
              v36,
              0,
              (__int64)v49);
      v8 = v19;
      if ( v19 == -1073741275 || v19 == -1073741772 )
      {
        PipSetDevNodeFlags(a1, 0x4000000LL);
        v8 = 0;
      }
      if ( v8 >= 0 )
      {
LABEL_42:
        if ( v46 )
        {
          if ( (*(_DWORD *)(a1 + 396) & 0x8000000) == 0 )
          {
            LOBYTE(v36) = 1;
            v16 = PnpCallDriverQueryServiceHelper(
                    (unsigned int)&P,
                    (unsigned int)&NumberOfBytes,
                    19,
                    (unsigned int)SourceString,
                    (__int64)v46,
                    v36,
                    1,
                    (__int64)v49);
            v8 = v16;
            if ( v16 == -1073741275 || v16 == -1073741772 )
            {
              PipSetDevNodeFlags(a1, 0x8000000LL);
              v8 = 0;
            }
          }
        }
        if ( v8 >= 0 )
        {
          if ( (*(_DWORD *)(a1 + 396) & 0x10000000) != 0 )
          {
            v8 = -1073741772;
          }
          else
          {
            LOBYTE(v36) = 0;
            v15 = PnpCallDriverQueryServiceHelper(
                    (unsigned int)&P,
                    (unsigned int)&NumberOfBytes,
                    5,
                    *(_QWORD *)(a1 + 48),
                    (__int64)Handle,
                    v36,
                    2,
                    (__int64)v49);
            v8 = v15;
            if ( v15 == -1073741275 || v15 == -1073741772 )
            {
              v8 = -1073741772;
              PipSetDevNodeFlags(a1, 0x10000000LL);
            }
          }
        }
      }
    }
    else
    {
      v8 = -1073741670;
    }
    if ( (*(_DWORD *)(a1 + 396) & 0x1000) != 0 )
    {
      v8 = 0;
      goto LABEL_22;
    }
    if ( v8 >= 0 )
    {
      if ( *(_QWORD *)(v49[4] + 8LL) )
      {
        PipSetDevNodeProblem(a1, 19LL, 3221225858LL);
        goto LABEL_21;
      }
    }
    else
    {
      if ( v8 != -1073741772 )
        goto LABEL_22;
      if ( (*(_DWORD *)(a1 + 560) & 0x100) == 0 )
      {
LABEL_21:
        v8 = -1073741823;
        goto LABEL_22;
      }
      PipClearDevNodeProblem(a1);
      v4 = 1;
      v8 = 0;
    }
    if ( (*(_DWORD *)(a1 + 396) & 0x20000000) == 0 )
    {
      LOBYTE(v36) = 0;
      v20 = PnpCallDriverQueryServiceHelper(
              (unsigned int)&P,
              (unsigned int)&NumberOfBytes,
              18,
              *(_QWORD *)(a1 + 48),
              (__int64)Handle,
              v36,
              3,
              (__int64)v49);
      v8 = v20;
      if ( v20 == -1073741275 || v20 == -1073741772 )
      {
        PipSetDevNodeFlags(a1, 0x20000000LL);
        v8 = 0;
      }
    }
    if ( v8 >= 0 )
    {
      if ( v46 )
      {
        if ( (*(_DWORD *)(a1 + 396) & 0x40000000) == 0 )
        {
          LOBYTE(v36) = 1;
          v21 = PnpCallDriverQueryServiceHelper(
                  (unsigned int)&P,
                  (unsigned int)&NumberOfBytes,
                  18,
                  (unsigned int)SourceString,
                  (__int64)v46,
                  v36,
                  4,
                  (__int64)v49);
          v8 = v21;
          if ( v21 == -1073741275 || v21 == -1073741772 )
          {
            PipSetDevNodeFlags(a1, 0x40000000LL);
            v8 = 0;
          }
        }
      }
      if ( v8 >= 0 )
      {
        AttachedDevice = 0LL;
        *(_QWORD *)&DestinationString.Length = IoGetAttachedDeviceReferenceWithTag(
                                                 *(PDEVICE_OBJECT *)(a1 + 32),
                                                 0x65706E50u);
        for ( i = 0; i < 5u; ++i )
        {
          if ( i == 2 )
          {
            AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(
                                               *(PDEVICE_OBJECT *)(a1 + 32),
                                               0x65706E50u);
            if ( v4 )
            {
              if ( !v49[4] )
                PipSetDevNodeState(a1, 771);
            }
          }
          for ( j = (_QWORD *)v49[i + 2]; j; j = (_QWORD *)j[1] )
          {
            v31 = PnpCallAddDevice(a1, *j, *(_QWORD *)(*(_QWORD *)(*j + 48LL) + 8LL), i);
            *(_DWORD *)(*j + 16LL) |= 0x400u;
            if ( v31 < 0 )
            {
              if ( i == 2 )
              {
                IovUtilMarkStack(
                  *(_QWORD *)(a1 + 32),
                  *(_QWORD *)(*(_QWORD *)&DestinationString.Length + 24LL),
                  AttachedDevice,
                  0);
                *(_DWORD *)(a1 + 392) = v31;
                PnpRequestDeviceRemoval(a1, 0LL, 31LL, (unsigned int)v31);
                v5 = *(void **)&DestinationString.Length;
                goto LABEL_125;
              }
            }
            else
            {
              if ( i == 2 )
                AttachedDevice = (__int64)AttachedDeviceReferenceWithTag->AttachedDevice;
              PipSetDevNodeState(a1, 771);
            }
          }
        }
        if ( !AttachedDevice || (v25 = 0, v4) )
          v25 = 1;
        v5 = *(void **)&DestinationString.Length;
        IovUtilMarkStack(
          *(_QWORD *)(a1 + 32),
          *(_QWORD *)(*(_QWORD *)&DestinationString.Length + 24LL),
          AttachedDevice,
          v25);
        v26 = PipChangeDeviceObjectFromRegistryProperties(
                *(_QWORD *)(a1 + 32),
                (_DWORD)Handle,
                (unsigned int)SourceString,
                (_DWORD)v46,
                v4);
        if ( v26 < 0 )
        {
          v34 = (unsigned int)v26;
          v35 = 50LL;
        }
        else
        {
          v28 = (_DWORD *)(a1 + 452);
          v29 = (_DWORD *)(a1 + 448);
          if ( (int)IopQueryLegacyBusInformation(*(_QWORD *)(a1 + 32), v27, (_DWORD *)(a1 + 448), (_DWORD *)(a1 + 452)) >= 0 )
          {
            IopInsertLegacyBusDeviceNode(a1, (unsigned int)*v29, (unsigned int)*v28);
          }
          else
          {
            *v29 = -1;
            *v28 = -16;
          }
          PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v30, *(_QWORD *)(a1 + 48), 23);
          if ( (*(_DWORD *)(a1 + 560) & 0x100000) == 0 )
          {
            v8 = 0;
LABEL_81:
            v6 = AttachedDeviceReferenceWithTag;
            v7 = 5LL;
            goto LABEL_22;
          }
          v8 = PnpQueryInterface(
                 *(PDEVICE_OBJECT *)(a1 + 32),
                 (ULONG_PTR)&GUID_SECURE_DRIVER_INTERFACE,
                 1u,
                 0x38u,
                 0LL,
                 &v50);
          if ( v8 >= 0 )
          {
            v52(v51);
            goto LABEL_81;
          }
          v34 = 3221225506LL;
          v35 = 48LL;
        }
        PnpRequestDeviceRemoval(a1, 0LL, v35, v34);
LABEL_125:
        v8 = -1073741106;
        goto LABEL_81;
      }
    }
  }
LABEL_22:
  v12 = &v49[2];
  do
  {
    v13 = *v12;
    if ( *v12 )
    {
      do
      {
        v17 = (PVOID *)v13;
        v13 = *(_QWORD *)(v13 + 8);
        if ( PnPBootDriversInitialized )
          PnpUnloadAttachedDriver(*v17);
        ObfDereferenceObject(*v17);
        ExFreePoolWithTag(v17, 0);
      }
      while ( v13 );
      v7 = v48;
    }
    ++v12;
    v48 = --v7;
  }
  while ( v7 );
  if ( Handle )
    ZwClose(Handle);
  if ( v46 )
    ZwClose(v46);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x65706E50u);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x65706E50u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v8;
}
