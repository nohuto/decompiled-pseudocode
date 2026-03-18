/*
 * XREFs of MmValidateUserCallTarget @ 0x1406BD808
 * Callers:
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     MmCheckForSafeExecution @ 0x1406B80F0 (MmCheckForSafeExecution.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x14006341C (MiIsProcessCfgEnabled.c)
 */

__int64 MmValidateUserCallTarget()
{
  int v0; // r8d
  unsigned __int64 v1; // r9
  __int64 v3; // rdx
  const signed __int64 **v4; // rdx

  if ( !MiIsProcessCfgEnabled() )
    return 1LL;
  v3 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  if ( v0 )
    v4 = (const signed __int64 **)(v3 + 296);
  else
    v4 = (const signed __int64 **)(v3 + 272);
  return MiValidateUserCallTarget(v1, v4);
}
