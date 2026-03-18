/*
 * XREFs of AcpiUnregisterDeviceFirmwareLockHandler @ 0x1C00A0B5C
 * Callers:
 *     ACPIIoctlUnregisterDeviceFirmwareLockHandler @ 0x1C00518A8 (ACPIIoctlUnregisterDeviceFirmwareLockHandler.c)
 * Callees:
 *     DereferenceDeviceFirmwareLockHandlerEntry @ 0x1C0047AA4 (DereferenceDeviceFirmwareLockHandlerEntry.c)
 *     FindDeviceFirmwareLockHandlerEntry @ 0x1C0047CA4 (FindDeviceFirmwareLockHandlerEntry.c)
 */

__int64 __fastcall AcpiUnregisterDeviceFirmwareLockHandler(int a1, __int64 a2)
{
  __int64 DeviceFirmwareLockHandlerEntry; // rax
  unsigned int v3; // ebx

  DeviceFirmwareLockHandlerEntry = FindDeviceFirmwareLockHandlerEntry(a1, a2, 0LL);
  v3 = 0;
  if ( DeviceFirmwareLockHandlerEntry )
  {
    _InterlockedDecrement((volatile signed __int32 *)(DeviceFirmwareLockHandlerEntry + 64));
    DereferenceDeviceFirmwareLockHandlerEntry((PVOID **)DeviceFirmwareLockHandlerEntry, 1);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v3;
}
