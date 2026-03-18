/*
 * XREFs of FindDeviceFirmwareLockHandlerEntry @ 0x1C001944C
 * Callers:
 *     AcquireDeviceFirmwareLock @ 0x1C0018FB0 (AcquireDeviceFirmwareLock.c)
 *     AcpiUnregisterDeviceFirmwareLockHandler @ 0x1C0079580 (AcpiUnregisterDeviceFirmwareLockHandler.c)
 * Callees:
 *     FindDeviceFirmwareLockHandlerEntryLocked @ 0x1C00194AC (FindDeviceFirmwareLockHandlerEntryLocked.c)
 */

__int64 __fastcall FindDeviceFirmwareLockHandlerEntry(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 DeviceFirmwareLockHandlerEntryLocked; // rbx
  KIRQL v7; // r10

  KeAcquireSpinLockRaiseToDpc(&AcpiDeviceFirmwareLockGlobalLock);
  DeviceFirmwareLockHandlerEntryLocked = FindDeviceFirmwareLockHandlerEntryLocked(a1, a2, a3);
  KeReleaseSpinLock(&AcpiDeviceFirmwareLockGlobalLock, v7);
  return DeviceFirmwareLockHandlerEntryLocked;
}
