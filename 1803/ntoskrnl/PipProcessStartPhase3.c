/*
 * XREFs of PipProcessStartPhase3 @ 0x1405CACE8
 * Callers:
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     PpvUtilTestStartedPdoStack @ 0x140146478 (PpvUtilTestStartedPdoStack.c)
 *     PnpSetDeviceInstanceStartedEvent @ 0x140146498 (PnpSetDeviceInstanceStartedEvent.c)
 *     PipSetDevNodeState @ 0x140146914 (PipSetDevNodeState.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     McTemplateK0qz @ 0x14023D790 (McTemplateK0qz.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1404ECCC0 (SeAuditingWithTokenForSubcategory.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x140508E70 (RtlGUIDFromString.c)
 *     PiPnpRtlBeginOperation @ 0x1405097B4 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140509BA8 (PiPnpRtlEndOperation.c)
 *     PiCreateDriverSwDevices @ 0x1405CAA60 (PiCreateDriverSwDevices.c)
 *     PnpSetPlugPlayEvent @ 0x1405CB15C (PnpSetPlugPlayEvent.c)
 *     PiUpdateDevicePanel @ 0x1405CB3B0 (PiUpdateDevicePanel.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1405CC040 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1405CC244 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PnpQueryID @ 0x1405CD96C (PnpQueryID.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1405CDBC8 (PnpDeviceObjectToDeviceInstance.c)
 *     _CmSetDeviceRegProp @ 0x1405CF5C8 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x1405D1BFC (PipSetDevNodeFlags.c)
 *     _PnpSetObjectProperty @ 0x1405D2000 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1405D2454 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PiProcessQueryDeviceState @ 0x1405D4790 (PiProcessQueryDeviceState.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1405D5280 (PiDcUpdateDeviceContainerMembership.c)
 *     PiDevCfgProcessDevice @ 0x1405D6D84 (PiDevCfgProcessDevice.c)
 *     PnpGenerateDeviceIdsHash @ 0x1405E41CC (PnpGenerateDeviceIdsHash.c)
 *     PnpCheckDeviceIdsChanged @ 0x140602BF8 (PnpCheckDeviceIdsChanged.c)
 *     PiAuditDeviceStart @ 0x14073C760 (PiAuditDeviceStart.c)
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
      || (int)PnpDeviceObjectToDeviceInstance(*(_QWORD *)(a1 + 32), &Handle, 131097LL) < 0 )
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
        PiUpdateDevicePanel(a1, 0LL);
        PnpSetPlugPlayEvent(&GUID_DEVICE_ARRIVAL, *(_QWORD *)(a1 + 32));
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
    PnpQueryID(a1, 1LL, &P, &v28);
    PnpQueryID(a1, 2LL, &v31, &v29);
    v10 = v31;
    v11 = P;
    PnpGenerateDeviceIdsHash(P, v31, a1 + 684);
    if ( !v11 && !v10 )
    {
LABEL_38:
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_HardwareConfigurationIndex,
        7,
        (__int64)&PnpCurrentHardwareConfigurationIndex,
        4,
        0);
      RtlInitUnicodeString(&DestinationString, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
      RtlGUIDFromString(&DestinationString, (GUID *)(a1 + 664));
      PipSetDevNodeFlags(a1, 32LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      PiDcUpdateDeviceContainerMembership(*(_QWORD *)(a1 + 48), Handle, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      PiUpdateDevicePanel(a1, Handle);
      ZwClose(Handle);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v22, *(_QWORD *)(a1 + 48), 1LL);
      PnpSetPlugPlayEvent(&GUID_DEVICE_ENUMERATED, *(_QWORD *)(a1 + 32));
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
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 2, 7, (__int64)v17, v16, 0);
      ExFreePoolWithTag(v17, 0);
    }
    if ( v19 )
    {
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 3, 7, (__int64)v19, v18, 0);
      ExFreePoolWithTag(v19, 0);
    }
    if ( v36 )
      CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(a1 + 48), (_DWORD)Handle, 11, 4, (__int64)&v24, 4, 0);
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
