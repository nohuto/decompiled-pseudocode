/*
 * XREFs of LdrControlFlowGuardEnforcedWithExportSuppression @ 0x18002990C
 * Callers:
 *     RtlValidateUserCallTarget @ 0x1800014D4 (RtlValidateUserCallTarget.c)
 *     LdrpDoPostSnapWork @ 0x18001C2FC (LdrpDoPostSnapWork.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180022944 (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlUnwindEx @ 0x180026F90 (RtlUnwindEx.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800293D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrResolveDelayLoadedAPI @ 0x180029F10 (LdrResolveDelayLoadedAPI.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002B994 (LdrpCfgProcessLoadConfig.c)
 *     RtlGuardRestoreContext @ 0x180078800 (RtlGuardRestoreContext.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800DB92C (AvrfMiniLoadDll.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800F69A0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     <none>
 */

__int64 LdrControlFlowGuardEnforcedWithExportSuppression()
{
  __int64 result; // rax

  if ( !LdrSystemDllInitBlock.CfgBitMap )
    return 0LL;
  result = 1LL;
  if ( (LdrSystemDllInitBlock.Flags & 1) != 0 || (BYTE5(LdrSystemDllInitBlock.MitigationOptionsMap.Map[0]) & 3) != 3 )
    return 0LL;
  return result;
}
