/*
 * XREFs of PiCMReleaseRegistryInputData @ 0x14050B204
 * Callers:
 *     PiCMOpenObjectKey @ 0x14050C084 (PiCMOpenObjectKey.c)
 *     PiCMOpenClassKey @ 0x14056AD20 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1405731B0 (PiCMOpenDeviceKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x140737C88 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14006E290 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseRegistryInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
