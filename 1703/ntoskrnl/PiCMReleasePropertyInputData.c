/*
 * XREFs of PiCMReleasePropertyInputData @ 0x14048A7E8
 * Callers:
 *     PiCMSetObjectProperty @ 0x14045A4C0 (PiCMSetObjectProperty.c)
 *     PiCMGetObjectProperty @ 0x140482E3C (PiCMGetObjectProperty.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14004D524 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleasePropertyInputData(__int64 a1)
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
  v5 = *(void **)(a1 + 56);
  if ( v5 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, v5);
  return 0LL;
}
