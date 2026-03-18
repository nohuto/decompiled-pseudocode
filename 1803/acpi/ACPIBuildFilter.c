/*
 * XREFs of ACPIBuildFilter @ 0x1C000B204
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0018468 (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIAddInitializationDependencies @ 0x1C0009A60 (ACPIAddInitializationDependencies.c)
 *     ACPIIsFilterDebuggingDevice @ 0x1C008B620 (ACPIIsFilterDebuggingDevice.c)
 */

NTSTATUS __fastcall ACPIBuildFilter(struct _DRIVER_OBJECT *a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  NTSTATUS result; // eax
  PDEVICE_OBJECT v6; // rdi
  KIRQL v7; // dl
  int v8; // eax
  unsigned int Flags; // eax
  __int64 v10; // rcx
  PDEVICE_OBJECT SourceDevice; // [rsp+68h] [rbp+28h] BYREF

  SourceDevice = 0LL;
  result = IoCreateDevice(a1, 0, 0LL, 0x32u, 0x100u, 0, &SourceDevice);
  if ( result >= 0 )
  {
    v6 = IoAttachDeviceToDeviceStack(SourceDevice, a3);
    if ( v6 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      SourceDevice->DeviceExtension = (void *)a2;
      *(_QWORD *)(a2 + 720) = SourceDevice;
      *(_QWORD *)(a2 + 736) = a3;
      *(_QWORD *)(a2 + 728) = v6;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 684));
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFC00uLL);
      _InterlockedOr64((volatile signed __int64 *)(a2 + 8), 0x40uLL);
      v8 = *(_DWORD *)(a2 + 320);
      *(_DWORD *)(a2 + 320) = 0;
      *(_DWORD *)(a2 + 324) = v8;
      *(_QWORD *)(a2 + 24) = AcpiFilterIrpDispatch;
      _InterlockedOr64((volatile signed __int64 *)(a2 + 8), 0x800uLL);
      SourceDevice->StackSize = v6->StackSize + 1;
      SourceDevice->AlignmentRequirement = v6->AlignmentRequirement;
      Flags = v6->Flags;
      if ( (Flags & 0x2000) != 0 )
      {
        SourceDevice->Flags |= 0x2000u;
        Flags = v6->Flags;
      }
      if ( (Flags & 0x10) != 0 )
      {
        SourceDevice->Flags |= 0x10u;
        Flags = v6->Flags;
      }
      if ( (Flags & 4) != 0 )
        SourceDevice->Flags |= 4u;
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
      ACPIAddInitializationDependencies(a2);
      if ( (*(_BYTE *)(a2 + 952) & 0x40) != 0 )
        *(_QWORD *)(a2 + 24) = AcpiDepFilterIrpDispatch;
      if ( (unsigned __int8)ACPIIsFilterDebuggingDevice(a2) && AcpiRetainDebugDeviceInD0 )
      {
        do
        {
          v10 = *(_QWORD *)(a2 + 744);
          _InterlockedOr64((volatile signed __int64 *)(a2 + 8), 0x680000uLL);
          _InterlockedOr64((volatile signed __int64 *)(a2 + 952), 0x1000000000uLL);
          if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
            break;
          a2 = v10;
        }
        while ( v10 );
      }
      SourceDevice->Flags &= ~0x80u;
      return 0;
    }
    else
    {
      IoDeleteDevice(SourceDevice);
      return -1073741583;
    }
  }
  return result;
}
