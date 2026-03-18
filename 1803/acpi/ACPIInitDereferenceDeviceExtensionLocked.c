/*
 * XREFs of ACPIInitDereferenceDeviceExtensionLocked @ 0x1C00286A0
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x1C000A5D4 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0011568 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0028704 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitResetDeviceExtension @ 0x1C0028D74 (ACPIInitResetDeviceExtension.c)
 *     ACPITableNotifyFreeObject @ 0x1C003B510 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     ACPIInitDeleteDeviceExtension @ 0x1C0028364 (ACPIInitDeleteDeviceExtension.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionLocked(ULONG_PTR BugCheckParameter4)
{
  if ( _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter4 + 684)) )
    return 0;
  if ( (*(_QWORD *)(BugCheckParameter4 + 8) & 0x200000000000000LL) != 0 )
  {
    if ( *(_DWORD *)(BugCheckParameter4 + 196) )
      KeBugCheckEx(0xA3u, 2uLL, 0x9034AuLL, 0LL, BugCheckParameter4);
  }
  ACPIInitDeleteDeviceExtension((volatile signed __int32 *)BugCheckParameter4);
  return 1;
}
