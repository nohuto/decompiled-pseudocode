/*
 * XREFs of ACPIProcessorStartDevice @ 0x1C0036300
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIInternalEvaluateOST @ 0x1C0029B5C (ACPIInternalEvaluateOST.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C002A4D4 (ACPIInternalSetDeviceInterface.c)
 *     ACPICheckModuleStarted @ 0x1C002E4E4 (ACPICheckModuleStarted.c)
 *     WPP_RECORDER_SF_ddqss @ 0x1C0036574 (WPP_RECORDER_SF_ddqss.c)
 *     ACPIProcessorContainerLinkChildProcessor @ 0x1C0036D00 (ACPIProcessorContainerLinkChildProcessor.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C003BA14 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIProcessorBuildBootApicIds @ 0x1C0081528 (ACPIProcessorBuildBootApicIds.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C00817A4 (ACPIProcessorGetInitialApicId.c)
 */

__int64 __fastcall ACPIProcessorStartDevice(PDEVICE_OBJECT PhysicalDeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rbx
  NTSTATUS InitialApicId; // edi
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // rax
  const char *v10; // rdi
  void *v11; // rdx
  USHORT v12; // ax
  int started; // eax
  __int64 v14; // rdx
  const char *v15; // rcx
  int v16; // r8d
  __int64 v17; // rcx
  USHORT NodeNumber; // [rsp+98h] [rbp+48h] BYREF
  unsigned int Data; // [rsp+A0h] [rbp+50h] BYREF
  int v21; // [rsp+A8h] [rbp+58h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)PhysicalDeviceObject);
  v5 = DeviceExtension;
  if ( *((_QWORD *)AcpiInformation + 4) )
  {
    InitialApicId = ACPIProcessorGetInitialApicId(DeviceExtension, &Data);
    if ( InitialApicId < 0 )
      goto LABEL_32;
    v7 = AcpiBootProcessorApicIds == 0;
    *(_DWORD *)(v5 + 192) = Data;
    if ( v7 )
    {
      InitialApicId = ACPIProcessorBuildBootApicIds();
      if ( InitialApicId < 0 )
        goto LABEL_32;
    }
    v21 = 0;
    if ( AcpiBootProcessorCount )
    {
      v8 = 0LL;
      while ( *(_DWORD *)(AcpiBootProcessorApicIds + 4 * v8) != Data )
      {
        v8 = (unsigned int)(v8 + 1);
        v21 = v8;
        if ( (unsigned int)v8 >= AcpiBootProcessorCount )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      v9 = *(_QWORD *)(v5 + 8);
      if ( (v9 & 0x4000) == 0 )
      {
        v10 = (const char *)&unk_1C005B1F0;
        v11 = &unk_1C005B1F0;
        if ( (v9 & 0x200000000000LL) != 0 )
          v11 = *(void **)(v5 + 560);
        WPP_RECORDER_SF_ddqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v11, AcpiBootProcessorCount, Data);
        if ( IoGetDeviceNumaNode(PhysicalDeviceObject, &NodeNumber) )
        {
          v12 = -1;
          NodeNumber = -1;
        }
        else
        {
          v12 = NodeNumber;
        }
        started = KeStartDynamicProcessor(*(unsigned int *)(v5 + 196), Data, v12, &v21);
        if ( started >= 0 )
        {
          v16 = 0;
        }
        else
        {
          v14 = *(_QWORD *)(v5 + 8);
          v15 = (const char *)&unk_1C005B1F0;
          if ( (v14 & 0x200000000000LL) != 0 )
          {
            v10 = *(const char **)(v5 + 560);
            if ( (v14 & 0x400000000000LL) != 0 )
              v15 = *(const char **)(v5 + 568);
          }
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0xDu,
            (__int64)&WPP_72dd1c1115013f02fe06a3c7ab98b878_Traceguids,
            started,
            v5,
            v10,
            v15);
          v16 = 163;
        }
        ACPIInternalEvaluateOST(v5, 0, v16);
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
      goto LABEL_32;
  }
  if ( InitialApicId >= 0 )
    *(_DWORD *)(v5 + 320) = 2;
  v17 = *(_QWORD *)(v5 + 744);
  if ( (*(_QWORD *)(v17 + 8) & 0x2000000000LL) != 0 )
    ACPICheckModuleStarted(v17, InitialApicId);
  ACPIProcessorContainerLinkChildProcessor(v5);
LABEL_32:
  Irp->IoStatus.Status = InitialApicId;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)InitialApicId;
}
