/*
 * XREFs of IopGetInterruptConnectionData @ 0x14059A6A4
 * Callers:
 *     IopConnectMessageBasedInterrupt @ 0x1404EC474 (IopConnectMessageBasedInterrupt.c)
 *     IoConnectInterruptEx @ 0x14059A470 (IoConnectInterruptEx.c)
 *     IopConnectLineBasedInterrupt @ 0x1405EB7F4 (IopConnectLineBasedInterrupt.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IoGetDevicePropertyData @ 0x14054F460 (IoGetDevicePropertyData.c)
 */

NTSTATUS __fastcall IopGetInterruptConnectionData(PDEVICE_OBJECT Pdo, _QWORD *a2)
{
  NTSTATUS result; // eax
  _DWORD *Data; // rbx
  NTSTATUS DevicePropertyData; // edi
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp+10h] BYREF
  ULONG Type; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 0LL;
  result = IoGetDevicePropertyData(Pdo, &INTERRUPT_CONNECTION_DATA_PKEY, 0, 0, 0, 0LL, (PULONG)&NumberOfBytes, &Type);
  if ( result == -1073741789 && (unsigned int)NumberOfBytes >= 0x60 )
  {
    Data = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6F697050u);
    if ( !Data )
      return -1073741670;
    DevicePropertyData = IoGetDevicePropertyData(
                           Pdo,
                           &INTERRUPT_CONNECTION_DATA_PKEY,
                           0,
                           0,
                           NumberOfBytes,
                           Data,
                           (PULONG)&NumberOfBytes,
                           &Type);
    if ( DevicePropertyData >= 0 )
    {
      if ( (unsigned int)NumberOfBytes >= 88 * *Data + 8 )
      {
        *a2 = Data;
        return DevicePropertyData;
      }
      DevicePropertyData = -1073741762;
    }
    ExFreePoolWithTag(Data, 0);
    return DevicePropertyData;
  }
  return result;
}
