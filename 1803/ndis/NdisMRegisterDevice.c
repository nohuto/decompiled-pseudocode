/*
 * XREFs of NdisMRegisterDevice @ 0x1C010ED00
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 */

NDIS_STATUS __stdcall NdisMRegisterDevice(
        NDIS_HANDLE NdisWrapperHandle,
        PNDIS_STRING DeviceName,
        PNDIS_STRING SymbolicName,
        PDRIVER_DISPATCH *MajorFunctions,
        PDEVICE_OBJECT *pDeviceObject,
        NDIS_HANDLE *NdisDeviceHandle)
{
  PDEVICE_OBJECT *v6; // r15
  NDIS_HANDLE *v7; // r12
  PDRIVER_OBJECT *DriverObjectExtension; // rax
  PDRIVER_OBJECT *v11; // rbp
  NTSTATUS Device; // edi
  unsigned int v13; // ebx
  PDEVICE_OBJECT v14; // r13
  _DRIVER_OBJECT **p_DriverObject; // rbx
  _LIST_ENTRY *v16; // rcx
  KSPIN_LOCK *v17; // rsi
  KIRQL v18; // al
  _DEVICE_OBJECT *v19; // rbp
  _DRIVER_OBJECT *v20; // rcx

  v6 = pDeviceObject;
  v7 = NdisDeviceHandle;
  *pDeviceObject = 0LL;
  *v7 = 0LL;
  DriverObjectExtension = (PDRIVER_OBJECT *)IoGetDriverObjectExtension(
                                              *(PDRIVER_OBJECT *)NdisWrapperHandle,
                                              (PVOID)0x4E4D4944);
  v11 = DriverObjectExtension;
  if ( !DriverObjectExtension )
    return -1073741637;
  Device = IoCreateDevice(
             DriverObjectExtension[5],
             DeviceName->Length + 308 + SymbolicName->Length,
             DeviceName,
             0x12u,
             0x100u,
             0,
             (PDEVICE_OBJECT *)&pDeviceObject);
  if ( Device >= 0 )
  {
    *((_DWORD *)pDeviceObject + 12) &= ~0x80u;
    Device = IoCreateSymbolicLink(SymbolicName, DeviceName);
    if ( Device >= 0 )
    {
      v13 = DeviceName->Length + 308 + SymbolicName->Length;
      v14 = pDeviceObject[8];
      memset(v14, 0, v13);
      v14->Size = v13;
      v14->Type = 265;
      p_DriverObject = &v14->DriverObject;
      v14->NextDevice = (_DEVICE_OBJECT *)&v14->DriverObject;
      v14->DriverObject = (_DRIVER_OBJECT *)&v14->DriverObject;
      v14->AttachedDevice = (_DEVICE_OBJECT *)v11;
      v14->CurrentIrp = (_IRP *)pDeviceObject;
      *(_OWORD *)&v14->Flags = *(_OWORD *)MajorFunctions;
      *(_OWORD *)&v14->DeviceExtension = *((_OWORD *)MajorFunctions + 1);
      v14->Queue.ListEntry = (_LIST_ENTRY)*((_OWORD *)MajorFunctions + 2);
      *(_OWORD *)&v14->Queue.Wcb.NumberOfChannels = *((_OWORD *)MajorFunctions + 3);
      *(_OWORD *)&v14->Queue.Wcb.DeviceContext = *((_OWORD *)MajorFunctions + 4);
      *(_OWORD *)&v14->Queue.Wcb.DeviceObject = *((_OWORD *)MajorFunctions + 5);
      *(_OWORD *)&v14->Queue.Wcb.BufferChainingDpc = *((_OWORD *)MajorFunctions + 6);
      *(_OWORD *)&v14->DeviceQueue.Type = *((_OWORD *)MajorFunctions + 7);
      *(_OWORD *)&v14->DeviceQueue.DeviceListHead.Blink = *((_OWORD *)MajorFunctions + 8);
      *(_OWORD *)&v14->DeviceQueue.Busy = *((_OWORD *)MajorFunctions + 9);
      *(_OWORD *)&v14->Dpc.DpcListEntry.Next = *((_OWORD *)MajorFunctions + 10);
      *(_OWORD *)&v14->Dpc.DeferredRoutine = *((_OWORD *)MajorFunctions + 11);
      *(_OWORD *)&v14->Dpc.SystemArgument1 = *((_OWORD *)MajorFunctions + 12);
      v14->Dpc.DpcData = MajorFunctions[26];
      *(_QWORD *)&v14->DeviceLock.Header.Lock = &v14->SectorSize;
      LOWORD(v14->SecurityDescriptor) = DeviceName->Length;
      WORD1(v14->SecurityDescriptor) = DeviceName->Length + 2;
      memmove(&v14->SectorSize, DeviceName->Buffer, DeviceName->Length);
      v16 = (_LIST_ENTRY *)(*(_QWORD *)&v14->DeviceLock.Header.Lock + WORD1(v14->SecurityDescriptor));
      v14->DeviceLock.Header.WaitListHead.Blink = v16;
      LOWORD(v14->DeviceLock.Header.WaitListHead.Flink) = SymbolicName->Length;
      WORD1(v14->DeviceLock.Header.WaitListHead.Flink) = SymbolicName->Length + 2;
      memmove(v16, SymbolicName->Buffer, SymbolicName->Length);
      ndisReferencePackage((__int64)&ndisPkgs);
      v17 = (KSPIN_LOCK *)(v11 + 49);
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v11 + 49);
      v19 = (_DEVICE_OBJECT *)(v11 + 10);
      v20 = *(_DRIVER_OBJECT **)&v19->Type;
      if ( *(_DEVICE_OBJECT **)(*(_QWORD *)&v19->Type + 8LL) != v19 )
        __fastfail(3u);
      *p_DriverObject = v20;
      v14->NextDevice = v19;
      v20->DeviceObject = (_DEVICE_OBJECT *)p_DriverObject;
      *(_QWORD *)&v19->Type = p_DriverObject;
      KeReleaseSpinLock(v17, v18);
      ndisDereferencePackage((__int64)&ndisPkgs);
      *v6 = (PDEVICE_OBJECT)pDeviceObject;
      *v7 = v14;
    }
    else
    {
      IoDeleteDevice((PDEVICE_OBJECT)pDeviceObject);
    }
  }
  return Device;
}
