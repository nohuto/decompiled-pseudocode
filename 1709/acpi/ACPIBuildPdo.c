/*
 * XREFs of ACPIBuildPdo @ 0x1C0022C94
 * Callers:
 *     ACPIDetectDockDevices @ 0x1C0010748 (ACPIDetectDockDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0010B84 (ACPIDetectPdoDevices.c)
 * Callees:
 *     AMLIIsNamedChildPresent @ 0x1C00058A0 (AMLIIsNamedChildPresent.c)
 *     AcpiEvaluateBiosMethodsOnPciRootBus @ 0x1C0022FF8 (AcpiEvaluateBiosMethodsOnPciRootBus.c)
 *     ACPIAddInitializationDependencies @ 0x1C00230C0 (ACPIAddInitializationDependencies.c)
 *     ACPIIsDebuggingDevice @ 0x1C0092404 (ACPIIsDebuggingDevice.c)
 *     AcpiArblibFreeArbiterInstance @ 0x1C009FA80 (AcpiArblibFreeArbiterInstance.c)
 *     AcpiArblibInitializeArbiter @ 0x1C009FAEC (AcpiArblibInitializeArbiter.c)
 */

NTSTATUS __fastcall ACPIBuildPdo(struct _DRIVER_OBJECT *a1, __int64 a2, struct _DEVICE_OBJECT *a3, char a4)
{
  __int64 *v4; // rsi
  PDEVICE_OBJECT AttachedDeviceReference; // r15
  NTSTATUS result; // eax
  int v10; // esi
  KIRQL v11; // r14
  PDEVICE_OBJECT v12; // rcx
  __int64 v13; // rcx
  char *v14; // rax
  unsigned int *v15; // r14
  unsigned int v16; // edi
  PVOID *v17; // rbx
  unsigned int v18; // esi
  __int64 v19; // rdi
  char **v20; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp+38h] BYREF

  v4 = *(__int64 **)(a2 + 712);
  DeviceObject = 0LL;
  AttachedDeviceReference = 0LL;
  result = IoCreateDevice(a1, 0, 0LL, 0x32u, 0x180u, 0, &DeviceObject);
  if ( result < 0 )
    return result;
  if ( a4 )
  {
    if ( (*(_DWORD *)(a2 + 8) & 0x100000) != 0 )
    {
      a4 = 0;
    }
    else
    {
      AttachedDeviceReference = IoGetAttachedDeviceReference(a3);
      if ( !AttachedDeviceReference )
      {
        v10 = -1073741810;
LABEL_22:
        IoDeleteDevice(DeviceObject);
        return v10;
      }
    }
  }
  if ( (*(_QWORD *)(a2 + 8) & 0x2000000000LL) != 0 )
  {
    if ( AMLIIsNamedChildPresent(v4, 1397900127) )
    {
      *(_BYTE *)(a2 + 184) = 1;
      v15 = (unsigned int *)&AcpiArbiterResourceTypes;
      v16 = 0;
      while ( 1 )
      {
        v10 = AcpiArblibInitializeArbiter(a2, *v15, a2 + 192 + 8LL * v16);
        if ( v10 < 0 )
          break;
        ++v16;
        ++v15;
        if ( v16 >= 3 )
          goto LABEL_10;
      }
      if ( v16 )
      {
        v17 = (PVOID *)(a2 + 8LL * v16 + 192);
        do
        {
          AcpiArblibFreeArbiterInstance(*--v17);
          --v16;
        }
        while ( v16 );
      }
      goto LABEL_22;
    }
    *(_BYTE *)(a2 + 184) = 0;
  }
LABEL_10:
  v11 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  DeviceObject->DeviceExtension = (void *)a2;
  v12 = DeviceObject;
  *(_QWORD *)(a2 + 720) = DeviceObject;
  *(_QWORD *)(a2 + 736) = v12;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 684));
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFC00uLL);
  _InterlockedOr64((volatile signed __int64 *)(a2 + 8), 0x20uLL);
  LODWORD(v12) = *(_DWORD *)(a2 + 320);
  *(_QWORD *)(a2 + 8) |= 0x800uLL;
  *(_QWORD *)(a2 + 952) |= 0x800uLL;
  *(_QWORD *)(a2 + 24) = &AcpiPdoIrpDispatch;
  *(_DWORD *)(a2 + 324) = (_DWORD)v12;
  *(_DWORD *)(a2 + 320) = 0;
  if ( a4 )
  {
    *(_QWORD *)(a2 + 728) = AttachedDeviceReference;
    _InterlockedOr64((volatile signed __int64 *)(a2 + 8), 0x40uLL);
    *(_QWORD *)(a2 + 24) = &AcpiBusFilterIrpDispatch;
    DeviceObject->StackSize = AttachedDeviceReference->StackSize + 1;
    DeviceObject->AlignmentRequirement = AttachedDeviceReference->AlignmentRequirement;
    if ( (AttachedDeviceReference->Flags & 0x2000) != 0 )
      DeviceObject->Flags |= 0x2000u;
  }
  v13 = *(_QWORD *)(a2 + 8);
  if ( (v13 & 0x1000000000LL) != 0 )
  {
    v14 = (char *)&AcpiProcessorIrpDispatch;
  }
  else if ( (v13 & 0x8000000) != 0 )
  {
    v14 = (char *)&AcpiThermalZoneIrpDispatch;
  }
  else if ( (*(_QWORD *)(a2 + 952) & 0x10000000000LL) != 0 )
  {
    v14 = (char *)&AcpiPepIrpDispatch;
  }
  else
  {
    if ( (v13 & 0x200000000000LL) == 0 )
      goto LABEL_36;
    if ( !*(_QWORD *)(a2 + 560) )
      goto LABEL_36;
    v18 = 0;
    if ( !AcpiInternalDeviceTable )
      goto LABEL_36;
    v19 = 0LL;
    v20 = &AcpiInternalDeviceTable;
    while ( !strstr(*(const char **)(a2 + 560), *v20) )
    {
      v20 = &(&AcpiInternalDeviceTable)[2 * ++v18];
      v19 = v18;
      if ( !*v20 )
        goto LABEL_36;
    }
    v14 = (&AcpiInternalDeviceTable)[2 * v19 + 1];
  }
  *(_QWORD *)(a2 + 24) = v14;
LABEL_36:
  if ( (*(_QWORD *)(a2 + 8) & 0x8000000040000LL) == 0x8000000040000LL )
    FixedButtonDeviceObject = (__int64)DeviceObject;
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
  ACPIAddInitializationDependencies(a2);
  if ( (*(_BYTE *)(a2 + 952) & 0x40) != 0 )
    *(_QWORD *)(a2 + 24) = &AcpiDepPdoIrpDispatch;
  AcpiEvaluateBiosMethodsOnPciRootBus(a2);
  if ( (*(_QWORD *)(a2 + 8) & 0x8000000000000LL) == 0 && (int)ACPIIsDebuggingDevice(DeviceObject) >= 0 )
    DeviceObject->Flags |= 0x2000000u;
  DeviceObject->Flags &= ~0x80u;
  if ( (*(_QWORD *)(a2 + 8) & 0x10000000000000LL) != 0 )
    DeviceObject->Flags |= 8u;
  return 0;
}
