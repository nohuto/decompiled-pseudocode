/*
 * XREFs of VfSettingsCheckForChanges @ 0x14077BD7C
 * Callers:
 *     VfSetVerifierInformation @ 0x14078808C (VfSetVerifierInformation.c)
 * Callees:
 *     ViHalApplySettings @ 0x14076C4F4 (ViHalApplySettings.c)
 *     VfKeCheckForChanges @ 0x140778050 (VfKeCheckForChanges.c)
 *     ViDeadlockDetectionApplySettings @ 0x14077A6D0 (ViDeadlockDetectionApplySettings.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x14077BD60 (VfSettingsApplyMiscellaneousChecks.c)
 *     ViSettingsEnableKernelHandleChecking @ 0x14077BE9C (ViSettingsEnableKernelHandleChecking.c)
 *     ViSettingsIoCheckForChanges @ 0x14077BF00 (ViSettingsIoCheckForChanges.c)
 */

void __fastcall VfSettingsCheckForChanges(unsigned __int16 a1, __int16 a2, unsigned __int16 a3, unsigned int a4)
{
  BOOL v8; // eax
  BOOL v9; // ecx
  BOOL v10; // eax
  _BOOL8 v11; // rcx

  VfKeCheckForChanges(a4);
  if ( (a2 & 8) != 0 )
  {
    v8 = (a1 & 8) == 0;
    v9 = v8;
  }
  else
  {
    if ( ((unsigned __int8)a3 & (unsigned __int8)a1 & 8) == 0 )
      goto LABEL_9;
    v8 = 1;
    v9 = 0;
  }
  if ( v8 )
  {
    if ( v9 )
      MmTrackLockedPages = 1;
    else
      MmTrackLockedPages |= 0x10000000u;
  }
LABEL_9:
  ViSettingsIoCheckForChanges(a4);
  if ( (a2 & 0x20) != 0 )
  {
    if ( (a1 & 0x20) != 0 )
      goto LABEL_14;
  }
  else if ( ((unsigned __int8)a3 & (unsigned __int8)a1 & 0x20) == 0 )
  {
    goto LABEL_14;
  }
  ViDeadlockDetectionApplySettings();
LABEL_14:
  if ( (a2 & 0x80u) == 0 )
  {
    if ( ((unsigned __int8)a3 & (unsigned __int8)a1 & 0x80) == 0 )
      goto LABEL_19;
  }
  else if ( (a1 & 0x80) != 0 )
  {
    goto LABEL_19;
  }
  ViHalApplySettings();
LABEL_19:
  if ( (a2 & 0x800) != 0 )
  {
    v10 = (a1 & 0x800) == 0;
    v11 = (a1 & 0x800) == 0;
  }
  else
  {
    if ( (a3 & a1 & 0x800) == 0 )
      goto LABEL_25;
    v10 = 1;
    v11 = 0LL;
  }
  if ( v10 )
  {
    ViSettingsEnableKernelHandleChecking(v11);
    VfSettingsApplyMiscellaneousChecks(~a3 & (a2 | a1));
  }
LABEL_25:
  VfPendingCheckForChanges(a4);
}
