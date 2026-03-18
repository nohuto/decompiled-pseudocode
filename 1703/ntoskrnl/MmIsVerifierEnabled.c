/*
 * XREFs of MmIsVerifierEnabled @ 0x1407622B0
 * Callers:
 *     MiInitializeBootDefaults @ 0x140812ADC (MiInitializeBootDefaults.c)
 *     InitializePagedPool @ 0x140814FA8 (InitializePagedPool.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall MmIsVerifierEnabled(PULONG VerifierFlags)
{
  if ( ViVerifierDriverAddedThunkListHead )
  {
    *VerifierFlags = MmVerifierData;
    return 0;
  }
  else
  {
    *VerifierFlags = 0;
    return -1073741637;
  }
}
