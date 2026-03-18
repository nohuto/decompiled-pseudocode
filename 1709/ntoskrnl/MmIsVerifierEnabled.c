/*
 * XREFs of MmIsVerifierEnabled @ 0x1407A22A0
 * Callers:
 *     InitializePagedPool @ 0x14082DD0C (InitializePagedPool.c)
 *     MiInitializeBootDefaults @ 0x14082F394 (MiInitializeBootDefaults.c)
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
