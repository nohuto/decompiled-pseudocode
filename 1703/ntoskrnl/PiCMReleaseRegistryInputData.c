/*
 * XREFs of PiCMReleaseRegistryInputData @ 0x14043E104
 * Callers:
 *     PiCMOpenClassKey @ 0x14043DC08 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x14043DDA0 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x14043DF64 (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14059AAF8 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14004D524 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseRegistryInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
