/*
 * XREFs of PipProcessStartPhase3 @ 0x140552400
 * Callers:
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PipSetDevNodeState @ 0x1400E0004 (PipSetDevNodeState.c)
 *     PpvUtilTestStartedPdoStack @ 0x1400FB750 (PpvUtilTestStartedPdoStack.c)
 *     PnpSetDeviceInstanceStartedEvent @ 0x1400FB770 (PnpSetDeviceInstanceStartedEvent.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     McTemplateK0qz @ 0x14020097C (McTemplateK0qz.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PnpQueryID @ 0x14051A1B0 (PnpQueryID.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x140525090 (RtlGUIDFromString.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14052DAE4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _PnpSetObjectProperty @ 0x14052F8B4 (_PnpSetObjectProperty.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14053A2B0 (SeAuditingWithTokenForSubcategory.c)
 *     PnpSetPlugPlayEvent @ 0x14054DC8C (PnpSetPlugPlayEvent.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14054E090 (PiDcUpdateDeviceContainerMembership.c)
 *     PnpGenerateDeviceIdsHash @ 0x14054F690 (PnpGenerateDeviceIdsHash.c)
 *     _CmSetDeviceRegProp @ 0x140551244 (_CmSetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1405513AC (PnpDeviceObjectToDeviceInstance.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14055226C (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PiCreateDriverSwDevices @ 0x140552348 (PiCreateDriverSwDevices.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14055285C (PnpStartedDeviceNodeDependencyCheck.c)
 *     PiProcessQueryDeviceState @ 0x140552C70 (PiProcessQueryDeviceState.c)
 *     PipSetDevNodeFlags @ 0x140553748 (PipSetDevNodeFlags.c)
 *     PnpCheckDeviceIdsChanged @ 0x14056CD1C (PnpCheckDeviceIdsChanged.c)
 *     PiDevCfgProcessDevice @ 0x1405A0E30 (PiDevCfgProcessDevice.c)
 *     PiAuditDeviceStart @ 0x1406D431C (PiAuditDeviceStart.c)
 */

__int64 __fastcall PipProcessStartPhase3(__int64 a1, int a2, __int64 a3)
{
  int v3; // esi
  int DeviceState; // ebx
  __int64 v6; // r8
  void *v7; // r15
  PVOID v8; // rcx
  PVOID v10; // rsi
  PVOID v11; // rbx
  struct _KTHREAD *v12; // rax
  char v13; // r14
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // r12d
  PVOID v17; // rsi
  unsigned int v18; // r13d
  PVOID v19; // rbx
  int v20; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rcx
  int v23; // [rsp+20h] [rbp-59h]
  int v24; // [rsp+50h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-21h] BYREF
  int v26; // [rsp+60h] [rbp-19h] BYREF
  int v27; // [rsp+64h] [rbp-15h] BYREF
  unsigned int v28; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v29; // [rsp+6Ch] [rbp-Dh] BYREF
  PVOID P; // [rsp+70h] [rbp-9h] BYREF
  PVOID v31; // [rsp+78h] [rbp-1h] BYREF
  PVOID v32; // [rsp+80h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp+Fh] BYREF
  char v35; // [rsp+F0h] [rbp+77h] BYREF
  char v36; // [rsp+F8h] [rbp+7Fh]

  v3 = a2;
  v32 = 0LL;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x10000000) != 0 )
    McTemplateK0qz(a1, &KMPnPEvt_ProcessDeviceStart_Start, a3, 3, *(const wchar_t **)(a1 + 48));
  DeviceState = PiPnpRtlBeginOperation((__int64 **)&v32);
  if ( DeviceState >= 0 )
  {
    v7 = *(void **)(a1 + 32);
    if ( (*(_DWORD *)(a1 + 396) & 0x20) != 0
      || (int)PnpDeviceObjectToDeviceInstance(*(_QWORD *)(a1 + 32), (__int64)&Handle, 131097) < 0 )
    {
LABEL_5:
      if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 9 )
      {
        DeviceState = -1073741823;
      }
      else
      {
        if ( v3 )
          PipSetDevNodeFlags(a1, 8LL);
        PnpQueryAndSaveDeviceNodeCapabilities(a1);
        DeviceState = PiProcessQueryDeviceState(v7);
        PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ARRIVAL, *(_QWORD **)(a1 + 32));
        PnpSetDeviceInstanceStartedEvent(a1);
        if ( DeviceState >= 0 )
        {
          PpvUtilTestStartedPdoStack();
          PipSetDevNodeState(a1, 776);
          PnpStartedDeviceNodeDependencyCheck(a1);
          PiCreateDriverSwDevices(a1);
          if ( SeAuditingWithTokenForSubcategory(137, 0LL) )
            PiAuditDeviceStart(a1 + 40);
          DeviceState = 0;
        }
      }
      goto LABEL_12;
    }
    PnpQueryID(a1, 1, &P, &v28);
    PnpQueryID(a1, 2, &v31, &v29);
    v10 = v31;
    v11 = P;
    PnpGenerateDeviceIdsHash((__int64)P, (__int64)v31, (_DWORD *)(a1 + 684));
    if ( !v11 && !v10 )
    {
LABEL_38:
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1u,
        (__int64)Handle,
        0LL,
        (__int64)&DEVPKEY_Device_HardwareConfigurationIndex,
        7,
        (__int64)&PnpCurrentHardwareConfigurationIndex,
        4u,
        0);
      RtlInitUnicodeString(&DestinationString, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
      RtlGUIDFromString(&DestinationString, (GUID *)(a1 + 664));
      PipSetDevNodeFlags(a1, 32LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      PiDcUpdateDeviceContainerMembership(
        *(_QWORD *)(a1 + 48),
        (__int64)Handle,
        L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ZwClose(Handle);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v22, *(_QWORD *)(a1 + 48), 1);
      PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ENUMERATED, *(_QWORD **)(a1 + 32));
      v3 = a2;
      goto LABEL_5;
    }
    v12 = KeGetCurrentThread();
    v13 = 0;
    v35 = 0;
    v36 = 0;
    --v12->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v14 = *(_QWORD *)(a1 + 48);
    v26 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v14,
                (__int64)Handle,
                11,
                (__int64)&v27,
                (__int64)&v24,
                (__int64)&v26,
                0) >= 0
      && v27 == 4
      && v26 == 4 )
    {
      v15 = v24;
      if ( (v24 & 0x20) == 0 || (v24 & 1) != 0 )
        goto LABEL_23;
    }
    else
    {
      v15 = 0;
      v24 = 0;
    }
    v13 = 1;
LABEL_23:
    v16 = v28;
    v17 = P;
    v18 = v29;
    v19 = v31;
    if ( (v15 & 0x400) == 0 )
    {
      v20 = 0;
      if ( !P || (LOBYTE(v23) = 1, v20 = PnpCheckDeviceIdsChanged(a1, Handle, P, v28, v23, &v35), v15 = v24, !v35) )
      {
        if ( v19 )
        {
          LOBYTE(v23) = 0;
          v20 = PnpCheckDeviceIdsChanged(a1, Handle, v19, v18, v23, &v35);
          v15 = v24;
        }
      }
      if ( v20 >= 0 && v35 )
      {
        v36 = 1;
        v24 = v15 | 0x400;
        v13 = 1;
      }
    }
    if ( v17 )
    {
      CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (__int64)Handle, 2u, 7u, (__int64)v17, v16, 0);
      ExFreePoolWithTag(v17, 0);
    }
    if ( v19 )
    {
      CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (__int64)Handle, 3u, 7u, (__int64)v19, v18, 0);
      ExFreePoolWithTag(v19, 0);
    }
    if ( v36 )
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        (__int64)Handle,
        0xBu,
        4u,
        (__int64)&v24,
        4u,
        0);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v13 && PiDevCfgMode )
      PiDevCfgProcessDevice(a1, Handle, 0LL);
    goto LABEL_38;
  }
LABEL_12:
  v8 = v32;
  if ( v32 )
    PiPnpRtlEndOperation((PVOID **)v32);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x10000000) != 0 )
    McTemplateK0qz((__int64)v8, &KMPnPEvt_ProcessDeviceStart_Stop, v6, 3, *(const wchar_t **)(a1 + 48));
  return (unsigned int)DeviceState;
}
