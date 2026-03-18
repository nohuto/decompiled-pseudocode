/*
 * XREFs of IopIsPciRootBus @ 0x1406C2310
 * Callers:
 *     IopMemQueryConflict @ 0x1406C2410 (IopMemQueryConflict.c)
 * Callees:
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IoGetDeviceProperty @ 0x140556EB0 (IoGetDeviceProperty.c)
 */

NTSTATUS __fastcall IopIsPciRootBus(PDEVICE_OBJECT DeviceObject, _BYTE *a2)
{
  NTSTATUS result; // eax
  _WORD *PoolWithTag; // rdi
  NTSTATUS DeviceProperty; // ebx
  const wchar_t *v7; // rbx
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0;
  result = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, 0, 0LL, (PULONG)&NumberOfBytes);
  if ( result == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20207050u);
    if ( PoolWithTag )
    {
      DeviceProperty = IoGetDeviceProperty(
                         DeviceObject,
                         DevicePropertyHardwareID,
                         NumberOfBytes,
                         PoolWithTag,
                         (PULONG)&NumberOfBytes);
      if ( DeviceProperty >= 0 )
      {
        v7 = PoolWithTag;
        if ( *PoolWithTag )
        {
          while ( wcsicmp(v7, L"ACPI\\PNP0A03") && wcsicmp(v7, L"ACPI\\PNP0A08") )
          {
            while ( *v7 )
              ++v7;
            if ( !*++v7 )
              goto LABEL_9;
          }
          *a2 = 1;
        }
LABEL_9:
        DeviceProperty = 0;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      return DeviceProperty;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
