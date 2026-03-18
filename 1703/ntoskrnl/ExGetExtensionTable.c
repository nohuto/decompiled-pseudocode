/*
 * XREFs of ExGetExtensionTable @ 0x140117428
 * Callers:
 *     IopIoRateStartRateControl @ 0x140003BAC (IopIoRateStartRateControl.c)
 *     IoStopIoRateControl @ 0x140003CE0 (IoStopIoRateControl.c)
 *     PsQueryActivityModerationUserSettings @ 0x140004C9C (PsQueryActivityModerationUserSettings.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14008FC20 (ExpAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x1400913C0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140091CD0 (ExpBoostIoAfterAcquire.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     PsUpdateComponentPower @ 0x140116230 (PsUpdateComponentPower.c)
 *     KiAbProcessThreadLocks @ 0x14011EB5C (KiAbProcessThreadLocks.c)
 *     BCryptCloseAlgorithmProvider @ 0x140156F90 (BCryptCloseAlgorithmProvider.c)
 *     PsSetExeModerationState @ 0x140238E10 (PsSetExeModerationState.c)
 *     BCryptDecrypt @ 0x1402462F8 (BCryptDecrypt.c)
 *     BCryptDestroyKey @ 0x1402463B4 (BCryptDestroyKey.c)
 *     BCryptEncrypt @ 0x140246408 (BCryptEncrypt.c)
 *     BCryptGenRandom @ 0x1402464D8 (BCryptGenRandom.c)
 *     LsaFreeReturnBuffer @ 0x14045CDC0 (LsaFreeReturnBuffer.c)
 *     PspCallProcessNotifyRoutines @ 0x1404FA068 (PspCallProcessNotifyRoutines.c)
 *     BCryptGetProperty @ 0x140548CBC (BCryptGetProperty.c)
 *     BCryptDestroyHash @ 0x140548D48 (BCryptDestroyHash.c)
 *     BCryptFinishHash @ 0x140548D98 (BCryptFinishHash.c)
 *     BCryptCreateHash @ 0x140548E0C (BCryptCreateHash.c)
 *     BCryptHashData @ 0x140548E9C (BCryptHashData.c)
 *     PcwAddInstance @ 0x140548F20 (PcwAddInstance.c)
 *     PcwCreateInstance @ 0x140575160 (PcwCreateInstance.c)
 *     PcwCloseInstance @ 0x140575FE0 (PcwCloseInstance.c)
 *     BCryptOpenAlgorithmProvider @ 0x1405B70B0 (BCryptOpenAlgorithmProvider.c)
 *     PcwRegister @ 0x1405C53B0 (PcwRegister.c)
 *     LsaLookupAuthenticationPackage @ 0x1405D39F0 (LsaLookupAuthenticationPackage.c)
 *     LsaRegisterLogonProcess @ 0x1405D44D0 (LsaRegisterLogonProcess.c)
 *     PspNetRateControlDispatch @ 0x1406E1760 (PspNetRateControlDispatch.c)
 *     BCryptGenerateSymmetricKey @ 0x1406F072C (BCryptGenerateSymmetricKey.c)
 *     BCryptImportKeyPair @ 0x1406F07CC (BCryptImportKeyPair.c)
 *     BCryptSetProperty @ 0x1406F0854 (BCryptSetProperty.c)
 *     LsaCallAuthenticationPackage @ 0x1406F08E0 (LsaCallAuthenticationPackage.c)
 *     LsaDeregisterLogonProcess @ 0x1406F0990 (LsaDeregisterLogonProcess.c)
 *     LsaLogonUser @ 0x1406F09E0 (LsaLogonUser.c)
 *     PcwUnregister @ 0x14071F240 (PcwUnregister.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall ExGetExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  if ( a1 && ExAcquireRundownProtection(a1 + 8) )
    return a1[10].Count;
  else
    return 0LL;
}
