/*
 * XREFs of IopIsPciRootBus @ 0x140696750
 * Callers:
 *     IopMemQueryConflict @ 0x140696850 (IopMemQueryConflict.c)
 * Callees:
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IoGetDeviceProperty @ 0x14055AE70 (IoGetDeviceProperty.c)
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
