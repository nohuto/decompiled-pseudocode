/*
 * XREFs of ACPIInitDereferenceDeviceExtensionLocked @ 0x1C0011088
 * Callers:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0011024 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0014E10 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C00444A8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x1C004F564 (ACPIInitResetDeviceExtension.c)
 *     ACPITableNotifyFreeObject @ 0x1C0058680 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F024 (ACPIInitDeleteDeviceExtension.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionLocked(ULONG_PTR BugCheckParameter4)
{
  if ( _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter4 + 684)) )
    return 0;
  if ( (*(_QWORD *)(BugCheckParameter4 + 8) & 0x200000000000000LL) != 0 )
  {
    if ( *(_DWORD *)(BugCheckParameter4 + 196) )
      KeBugCheckEx(0xA3u, 2uLL, 0x90336uLL, 0LL, BugCheckParameter4);
  }
  ACPIInitDeleteDeviceExtension((PVOID)BugCheckParameter4);
  return 1;
}
