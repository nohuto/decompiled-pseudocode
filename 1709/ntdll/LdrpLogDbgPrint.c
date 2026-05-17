/*
 * XREFs of LdrpLogDbgPrint @ 0x1800D0E14
 * Callers:
 *     LdrpInitializationFailure @ 0x180002208 (LdrpInitializationFailure.c)
 *     LdrpGenericExceptionFilter @ 0x180002B68 (LdrpGenericExceptionFilter.c)
 *     LdrpDetectDetour @ 0x180006720 (LdrpDetectDetour.c)
 *     LdrpUnloadNode @ 0x180010B14 (LdrpUnloadNode.c)
 *     LdrpProcessDetachNode @ 0x180012198 (LdrpProcessDetachNode.c)
 *     LdrpInitShimEngine @ 0x1800154C4 (LdrpInitShimEngine.c)
 *     LdrpLoadShimEngine @ 0x18001566C (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x180015900 (LdrpInitializeShimDllDependencies.c)
 *     LdrpGetShimEngineInterface @ 0x180015A3C (LdrpGetShimEngineInterface.c)
 *     LdrpInitializeTls @ 0x18001C128 (LdrpInitializeTls.c)
 *     LdrpDoPostSnapWork @ 0x18001C2FC (LdrpDoPostSnapWork.c)
 *     LdrpAllocateTls @ 0x18001C850 (LdrpAllocateTls.c)
 *     LdrpSendPostSnapNotifications @ 0x180020F14 (LdrpSendPostSnapNotifications.c)
 *     LdrpDynamicShimModule @ 0x1800217FC (LdrpDynamicShimModule.c)
 *     LdrpPrepareModuleForExecution @ 0x180021864 (LdrpPrepareModuleForExecution.c)
 *     LdrpCompleteMapModule @ 0x180021F28 (LdrpCompleteMapModule.c)
 *     LdrpMinimalMapModule @ 0x180022288 (LdrpMinimalMapModule.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180022944 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpHandleProtectedDelayload @ 0x180026850 (LdrpHandleProtectedDelayload.c)
 *     LdrpSnapModule @ 0x180027FC0 (LdrpSnapModule.c)
 *     LdrpGetProcedureAddress @ 0x180028E78 (LdrpGetProcedureAddress.c)
 *     LdrpNameToOrdinal @ 0x1800291EC (LdrpNameToOrdinal.c)
 *     LdrResolveDelayLoadedAPI @ 0x180029F10 (LdrResolveDelayLoadedAPI.c)
 *     LdrpLoadDllInternal @ 0x18002DFFC (LdrpLoadDllInternal.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     LdrpCallTlsInitializers @ 0x180031350 (LdrpCallTlsInitializers.c)
 *     LdrpPreprocessDllName @ 0x1800318FC (LdrpPreprocessDllName.c)
 *     LdrpFindLoadedDllInternal @ 0x180035624 (LdrpFindLoadedDllInternal.c)
 *     LdrGetDllHandleEx @ 0x180035770 (LdrGetDllHandleEx.c)
 *     LdrpInitializeDllPath @ 0x180035884 (LdrpInitializeDllPath.c)
 *     LdrLoadDll @ 0x180035920 (LdrLoadDll.c)
 *     LdrpProcessWork @ 0x18004B260 (LdrpProcessWork.c)
 *     LdrpSearchPath @ 0x18004D43C (LdrpSearchPath.c)
 *     LdrpFindKnownDll @ 0x18004D750 (LdrpFindKnownDll.c)
 *     LdrpResolveDllName @ 0x18004DA64 (LdrpResolveDllName.c)
 *     LdrpReportError @ 0x180052C64 (LdrpReportError.c)
 *     LdrpInitializeNode @ 0x180072C90 (LdrpInitializeNode.c)
 *     LdrpMergeNodes @ 0x180074C34 (LdrpMergeNodes.c)
 *     LdrShutdownProcess @ 0x180076200 (LdrShutdownProcess.c)
 *     LdrpFindDllActivationContext @ 0x1800770D8 (LdrpFindDllActivationContext.c)
 *     _LdrpInitialize @ 0x180078E70 (_LdrpInitialize.c)
 *     LdrpComputeLazyDllPath @ 0x18007DED8 (LdrpComputeLazyDllPath.c)
 *     LdrpRedirectDelayloadFailure @ 0x180083A48 (LdrpRedirectDelayloadFailure.c)
 *     LdrpLoadWow64 @ 0x1800846F4 (LdrpLoadWow64.c)
 *     LdrpRelocateImage @ 0x180084884 (LdrpRelocateImage.c)
 *     LdrpProtectAndRelocateImage @ 0x180084964 (LdrpProtectAndRelocateImage.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085378 (LdrpInitializePerUserWindowsDirectory.c)
 *     LdrGetKnownDllSectionHandle @ 0x180085A50 (LdrGetKnownDllSectionHandle.c)
 *     LdrInitShimEngineDynamic @ 0x1800D2880 (LdrInitShimEngineDynamic.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D2BD4 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D2DEC (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D321C (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x1800D6034 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpIsSubstringFound @ 0x1800D60D4 (LdrpIsSubstringFound.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D61A0 (LdrpIsVerifierActivationFilterMatched.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x18006C604 (vDbgPrintExWithPrefixInternal.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     StringCbPrintfA @ 0x1800D10D0 (StringCbPrintfA.c)
 */

struct _TEB *LdrpLogDbgPrint(_DWORD a1, _DWORD a2, const char *a3, int a4, char *a5, ...)
{
  struct _TEB *result; // rax
  char pszDest[256]; // [rsp+40h] [rbp-118h] BYREF
  va_list va; // [rsp+188h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0 || (result = NtCurrentTeb(), (result->SameTebFlags & 0x20) != 0) )
  {
    StringCbPrintfA(
      pszDest,
      0x100uLL,
      "%04x:%04x @ %08d - %s - %s: ",
      LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
      LODWORD(NtCurrentTeb()->ClientId.UniqueThread),
      (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24,
      a3,
      (&off_180113668)[2 * a4]);
    return (struct _TEB *)vDbgPrintExWithPrefixInternal(pszDest, 0x55u, 0, a5, va, 1);
  }
  return result;
}
