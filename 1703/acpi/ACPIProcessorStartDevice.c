/*
 * XREFs of ACPIProcessorStartDevice @ 0x1C0022DD0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C000F2AC (WPP_RECORDER_SF_Dqss.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C0016B14 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C0022F58 (ACPIInternalSetDeviceInterface.c)
 *     ACPIInternalEvaluateOST @ 0x1C0050074 (ACPIInternalEvaluateOST.c)
 *     ACPICheckModuleStarted @ 0x1C005138C (ACPICheckModuleStarted.c)
 *     WPP_RECORDER_SF_ddqss @ 0x1C005575C (WPP_RECORDER_SF_ddqss.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C0091C64 (ACPIProcessorGetInitialApicId.c)
 *     ACPIProcessorBuildBootApicIds @ 0x1C00920BC (ACPIProcessorBuildBootApicIds.c)
 */

__int64 __fastcall ACPIProcessorStartDevice(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rbx
  NTSTATUS InitialApicId; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  KIRQL v10; // r8
  __int64 i; // rdx
  __int64 v13; // rax
  const char *v14; // rdi
  void *v15; // rdx
  USHORT v16; // ax
  int started; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  const char *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  _QWORD *v23; // rbx
  _QWORD *v24; // rax
  _DWORD v25[4]; // [rsp+50h] [rbp-10h] BYREF
  USHORT NodeNumber; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int Data; // [rsp+A8h] [rbp+48h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v5 = DeviceExtension;
  if ( *((_QWORD *)AcpiInformation + 4) )
  {
    InitialApicId = ACPIProcessorGetInitialApicId(DeviceExtension, &Data);
    if ( InitialApicId < 0 )
      goto LABEL_20;
    v7 = AcpiBootProcessorApicIds;
    *(_DWORD *)(v5 + 192) = Data;
    if ( !v7 )
    {
      InitialApicId = ACPIProcessorBuildBootApicIds();
      if ( InitialApicId < 0 )
        goto LABEL_20;
      v7 = AcpiBootProcessorApicIds;
    }
    v8 = 0LL;
    v25[0] = 0;
    if ( AcpiBootProcessorCount )
    {
      while ( *(_DWORD *)(v7 + 4 * v8) != Data )
      {
        v8 = (unsigned int)(v8 + 1);
        v25[0] = v8;
        if ( (unsigned int)v8 >= AcpiBootProcessorCount )
          goto LABEL_24;
      }
    }
    else
    {
LABEL_24:
      v13 = *(_QWORD *)(v5 + 8);
      if ( (v13 & 0x4000) == 0 )
      {
        v14 = (const char *)&unk_1C0066CD0;
        v15 = &unk_1C0066CD0;
        if ( (v13 & 0x200000000000LL) != 0 )
          v15 = *(void **)(v5 + 560);
        WPP_RECORDER_SF_ddqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v15, AcpiBootProcessorCount, Data);
        if ( IoGetDeviceNumaNode(PhysicalDeviceObject, &NodeNumber) )
        {
          v16 = -1;
          NodeNumber = -1;
        }
        else
        {
          v16 = NodeNumber;
        }
        started = KeStartDynamicProcessor(*(unsigned int *)(v5 + 196), Data, v16, v25);
        if ( started >= 0 )
        {
          v21 = 0LL;
        }
        else
        {
          v19 = *(_QWORD *)(v5 + 8);
          v20 = (const char *)&unk_1C0066CD0;
          if ( (v19 & 0x200000000000LL) != 0 )
          {
            v14 = *(const char **)(v5 + 560);
            if ( (v19 & 0x400000000000LL) != 0 )
              v20 = *(const char **)(v5 + 568);
          }
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0xDu,
            (__int64)&WPP_69b4a5494da73df60ed55ee92cf4d44d_Traceguids,
            started,
            v5,
            v14,
            v20);
          v21 = 163LL;
        }
        ACPIInternalEvaluateOST(v5, v18, v21);
      }
    }
  }
  else
  {
    Data = -1;
  }
  ACPIThermalAcquireCoolingInterfaces(v5);
  if ( (*(_DWORD *)(v5 + 8) & 0x4000LL) != 0 )
  {
    InitialApicId = IoSetDevicePropertyData(PhysicalDeviceObject, &DEVPKEY_Spare_Processor_Apic_Id, 0, 0, 7u, 4u, &Data);
  }
  else
  {
    InitialApicId = ACPIInternalSetDeviceInterface(PhysicalDeviceObject, &GUID_DEVICE_PROCESSOR);
    if ( InitialApicId < 0 )
      goto LABEL_20;
  }
  if ( InitialApicId >= 0 )
    *(_DWORD *)(v5 + 320) = 2;
  v9 = *(_QWORD *)(v5 + 744);
  if ( (*(_QWORD *)(v9 + 8) & 0x2000000000LL) != 0 )
    ACPICheckModuleStarted(v9, (unsigned int)InitialApicId);
  v10 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( !AcpiProcessorContainerHierarchyLocked )
  {
    for ( i = *(_QWORD *)(v5 + 744); i; i = *(_QWORD *)(i + 744) )
    {
      if ( (*(_QWORD *)(i + 952) & 0x8000000000LL) != 0 )
      {
        v22 = i + 216;
        v23 = (_QWORD *)(v5 + 200);
        v24 = *(_QWORD **)(v22 + 8);
        if ( *v24 != v22 )
          __fastfail(3u);
        *v23 = v22;
        v23[1] = v24;
        *v24 = v23;
        *(_QWORD *)(v22 + 8) = v23;
        break;
      }
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
LABEL_20:
  Irp->IoStatus.Status = InitialApicId;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)InitialApicId;
}
