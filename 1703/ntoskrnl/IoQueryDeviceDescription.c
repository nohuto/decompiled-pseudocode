/*
 * XREFs of IoQueryDeviceDescription @ 0x140587240
 * Callers:
 *     <none>
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopOpenRegistryKey @ 0x14044DB84 (IopOpenRegistryKey.c)
 *     pIoQueryBusDescription @ 0x1405866A8 (pIoQueryBusDescription.c)
 */

NTSTATUS __stdcall IoQueryDeviceDescription(
        PINTERFACE_TYPE BusType,
        PULONG BusNumber,
        PCONFIGURATION_TYPE ControllerType,
        PULONG ControllerNumber,
        PCONFIGURATION_TYPE PeripheralType,
        PULONG PeripheralNumber,
        PIO_QUERY_DEVICE_ROUTINE CalloutRoutine,
        PVOID Context)
{
  NTSTATUS v8; // ebx
  ULONG v10; // [rsp+20h] [rbp-49h]
  HANDLE Handle; // [rsp+30h] [rbp-39h] BYREF
  UNICODE_STRING Destination; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING v13; // [rsp+50h] [rbp-19h] BYREF
  unsigned int *v14[8]; // [rsp+60h] [rbp-9h] BYREF
  unsigned int v15; // [rsp+B0h] [rbp+47h] BYREF

  v15 = -1;
  if ( !BusType )
    return -1073741822;
  v14[4] = (unsigned int *)PeripheralType;
  v14[5] = PeripheralNumber;
  v14[6] = (unsigned int *)CalloutRoutine;
  v14[0] = (unsigned int *)BusType;
  v14[1] = BusNumber;
  v14[2] = (unsigned int *)ControllerType;
  v14[7] = (unsigned int *)Context;
  v14[3] = ControllerNumber;
  *(_DWORD *)&Destination.Length = 0x8000000;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x800uLL, 0x4E526F49u);
  if ( !Destination.Buffer )
    return -1073741670;
  RtlAppendUnicodeStringToString(&Destination, &CmRegistryMachineHardwareDescriptionSystemName);
  LOBYTE(v10) = 0;
  v8 = IopOpenRegistryKey(&Handle, 0LL, &Destination, 0x20019u, v10);
  if ( v8 >= 0 )
  {
    v13 = Destination;
    v8 = pIoQueryBusDescription(v14, &v13, Handle, &v15, 1);
    ZwClose(Handle);
  }
  ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v8 == -2147483622 )
    return -1073741772;
  return v8;
}
