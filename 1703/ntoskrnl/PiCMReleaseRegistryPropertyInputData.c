/*
 * XREFs of PiCMReleaseRegistryPropertyInputData @ 0x14048A794
 * Callers:
 *     PiCMGetRegistryProperty @ 0x14048A5E0 (PiCMGetRegistryProperty.c)
 *     PiCMSetRegistryProperty @ 0x1406A5DC8 (PiCMSetRegistryProperty.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14004D524 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseRegistryPropertyInputData(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rdx
  char PreviousMode; // bl
  void *v5; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = *(void **)(a1 + 16);
  PreviousMode = CurrentThread->PreviousMode;
  if ( v3 )
    PiControlFreeUserModeCallersBuffer(CurrentThread->PreviousMode, v3);
  v5 = *(void **)(a1 + 40);
  if ( v5 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, v5);
  return 0LL;
}
