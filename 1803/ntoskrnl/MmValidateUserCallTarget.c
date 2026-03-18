/*
 * XREFs of MmValidateUserCallTarget @ 0x1407546D0
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     MmCheckForSafeExecution @ 0x14074F190 (MmCheckForSafeExecution.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x14003E8C4 (MiIsProcessCfgEnabled.c)
 *     MiValidateUserCallTarget @ 0x140580C04 (MiValidateUserCallTarget.c)
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
    v4 = (const signed __int64 **)(v3 + 400);
  else
    v4 = (const signed __int64 **)(v3 + 376);
  return MiValidateUserCallTarget(v1, v4);
}
