/*
 * XREFs of MmIsVerifierEnabled @ 0x14080F2D0
 * Callers:
 *     InitializePagedPool @ 0x1408ACF98 (InitializePagedPool.c)
 *     MiInitializeBootDefaults @ 0x1408C69EC (MiInitializeBootDefaults.c)
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
