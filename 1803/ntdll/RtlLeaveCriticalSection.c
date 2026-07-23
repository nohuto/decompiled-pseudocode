/*
 * XREFs of RtlLeaveCriticalSection @ 0x18001E290
 * Callers:
 *     sub_180006360 @ 0x180006360 (sub_180006360.c)
 *     sub_18000881C @ 0x18000881C (sub_18000881C.c)
 *     sub_180013AC8 @ 0x180013AC8 (sub_180013AC8.c)
 *     sub_180013D40 @ 0x180013D40 (sub_180013D40.c)
 *     sub_180013F50 @ 0x180013F50 (sub_180013F50.c)
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     sub_18001EE04 @ 0x18001EE04 (sub_18001EE04.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     sub_18001F834 @ 0x18001F834 (sub_18001F834.c)
 *     RtlUnlockHeap @ 0x18001FB70 (RtlUnlockHeap.c)
 *     sub_180022498 @ 0x180022498 (sub_180022498.c)
 *     RtlQueryEnvironmentVariable @ 0x180022780 (RtlQueryEnvironmentVariable.c)
 *     sub_180027040 @ 0x180027040 (sub_180027040.c)
 *     RtlProtectHeap @ 0x18002A2B0 (RtlProtectHeap.c)
 *     sub_18002A46C @ 0x18002A46C (sub_18002A46C.c)
 *     sub_18002D1D8 @ 0x18002D1D8 (sub_18002D1D8.c)
 *     sub_18002D32C @ 0x18002D32C (sub_18002D32C.c)
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180032530 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180034D10 (RtlpCreateProcessRegistryInfo.c)
 *     LdrShutdownThread @ 0x180038A30 (LdrShutdownThread.c)
 *     sub_18003D190 @ 0x18003D190 (sub_18003D190.c)
 *     sub_18003D640 @ 0x18003D640 (sub_18003D640.c)
 *     sub_180042660 @ 0x180042660 (sub_180042660.c)
 *     sub_1800426E8 @ 0x1800426E8 (sub_1800426E8.c)
 *     sub_18004334C @ 0x18004334C (sub_18004334C.c)
 *     sub_1800435B4 @ 0x1800435B4 (sub_1800435B4.c)
 *     sub_180046AE0 @ 0x180046AE0 (sub_180046AE0.c)
 *     sub_180046F60 @ 0x180046F60 (sub_180046F60.c)
 *     sub_180047B2C @ 0x180047B2C (sub_180047B2C.c)
 *     RtlExitUserProcess @ 0x180047D70 (RtlExitUserProcess.c)
 *     RtlCreateProcessParametersEx @ 0x18004B3F0 (RtlCreateProcessParametersEx.c)
 *     RtlCreateEnvironmentEx @ 0x18004BA60 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18004BDF0 (RtlSetEnvironmentVar.c)
 *     sub_180054338 @ 0x180054338 (sub_180054338.c)
 *     sub_1800559B0 @ 0x1800559B0 (sub_1800559B0.c)
 *     sub_180059DC0 @ 0x180059DC0 (sub_180059DC0.c)
 *     sub_18005FD84 @ 0x18005FD84 (sub_18005FD84.c)
 *     sub_180060204 @ 0x180060204 (sub_180060204.c)
 *     sub_180060E04 @ 0x180060E04 (sub_180060E04.c)
 *     RtlGetUserInfoHeap @ 0x1800634E0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180063860 (RtlSetUserValueHeap.c)
 *     sub_18006DF50 @ 0x18006DF50 (sub_18006DF50.c)
 *     sub_18006E740 @ 0x18006E740 (sub_18006E740.c)
 *     sub_1800709B0 @ 0x1800709B0 (sub_1800709B0.c)
 *     RtlValidateHeap @ 0x1800723C0 (RtlValidateHeap.c)
 *     LdrAddLoadAsDataTable @ 0x180072E40 (LdrAddLoadAsDataTable.c)
 *     sub_180073218 @ 0x180073218 (sub_180073218.c)
 *     LdrRemoveLoadAsDataTable @ 0x180073DE0 (LdrRemoveLoadAsDataTable.c)
 *     sub_1800746F8 @ 0x1800746F8 (sub_1800746F8.c)
 *     RtlSleepConditionVariableCS @ 0x180075E10 (RtlSleepConditionVariableCS.c)
 *     RtlSetCurrentDirectory_U @ 0x180076700 (RtlSetCurrentDirectory_U.c)
 *     sub_180076898 @ 0x180076898 (sub_180076898.c)
 *     RtlGetCurrentDirectory_U @ 0x180076950 (RtlGetCurrentDirectory_U.c)
 *     sub_180076A28 @ 0x180076A28 (sub_180076A28.c)
 *     RtlReleasePebLock @ 0x180079C50 (RtlReleasePebLock.c)
 *     sub_18007AE58 @ 0x18007AE58 (sub_18007AE58.c)
 *     RtlSetHeapInformation @ 0x18007B300 (RtlSetHeapInformation.c)
 *     sub_18007B3C0 @ 0x18007B3C0 (sub_18007B3C0.c)
 *     RtlCreateTagHeap @ 0x18007D190 (RtlCreateTagHeap.c)
 *     sub_1800801CC @ 0x1800801CC (sub_1800801CC.c)
 *     RtlSetEnvironmentStrings @ 0x180080C50 (RtlSetEnvironmentStrings.c)
 *     sub_180081044 @ 0x180081044 (sub_180081044.c)
 *     sub_180082F40 @ 0x180082F40 (sub_180082F40.c)
 *     LdrRegisterDllNotification @ 0x180082F90 (LdrRegisterDllNotification.c)
 *     sub_18008781C @ 0x18008781C (sub_18008781C.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180087CA0 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x180089300 (RtlGetProcessPreferredUILanguages.c)
 *     RtlSetCurrentEnvironment @ 0x18008A8E0 (RtlSetCurrentEnvironment.c)
 *     LdrDeleteEnclave @ 0x1800C9790 (LdrDeleteEnclave.c)
 *     LdrInitializeEnclave @ 0x1800C9810 (LdrInitializeEnclave.c)
 *     sub_1800C98F0 @ 0x1800C98F0 (sub_1800C98F0.c)
 *     LdrLoadEnclaveModule @ 0x1800C9990 (LdrLoadEnclaveModule.c)
 *     sub_1800C9C98 @ 0x1800C9C98 (sub_1800C9C98.c)
 *     sub_1800C9D70 @ 0x1800C9D70 (sub_1800C9D70.c)
 *     LdrCallEnclave_0 @ 0x1800CA210 (LdrCallEnclave_0.c)
 *     LdrUnregisterDllNotification @ 0x1800CAE90 (LdrUnregisterDllNotification.c)
 *     sub_1800D0858 @ 0x1800D0858 (sub_1800D0858.c)
 *     RtlCloneUserProcess @ 0x1800D1660 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D1950 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D1BD0 (RtlPrepareForProcessCloning.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D27B0 (RtlQueryProcessHeapInformation.c)
 *     sub_1800D3CE8 @ 0x1800D3CE8 (sub_1800D3CE8.c)
 *     sub_1800D4850 @ 0x1800D4850 (sub_1800D4850.c)
 *     sub_1800D989C @ 0x1800D989C (sub_1800D989C.c)
 *     sub_1800D9AD8 @ 0x1800D9AD8 (sub_1800D9AD8.c)
 *     sub_1800D9B6C @ 0x1800D9B6C (sub_1800D9B6C.c)
 *     sub_1800D9C9C @ 0x1800D9C9C (sub_1800D9C9C.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E8720 (RtlpCleanupRegistryKeys.c)
 *     RtlCompactHeap @ 0x1800EAF00 (RtlCompactHeap.c)
 *     RtlQueryTagHeap @ 0x1800EB580 (RtlQueryTagHeap.c)
 *     sub_1800EB750 @ 0x1800EB750 (sub_1800EB750.c)
 *     RtlSetUserFlagsHeap @ 0x1800EB820 (RtlSetUserFlagsHeap.c)
 *     sub_1800ED18C @ 0x1800ED18C (sub_1800ED18C.c)
 *     RtlZeroHeap @ 0x1800EEA80 (RtlZeroHeap.c)
 *     sub_1800EF2CC @ 0x1800EF2CC (sub_1800EF2CC.c)
 *     RtlTraceDatabaseAdd @ 0x1800F7890 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1800F7AC0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1800F7B90 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseUnlock @ 0x1800F7C40 (RtlTraceDatabaseUnlock.c)
 *     RtlTraceDatabaseValidate @ 0x1800F7C60 (RtlTraceDatabaseValidate.c)
 *     sub_1800FF610 @ 0x1800FF610 (sub_1800FF610.c)
 *     sub_1800FF9D0 @ 0x1800FF9D0 (sub_1800FF9D0.c)
 *     sub_1800FFE08 @ 0x1800FFE08 (sub_1800FFE08.c)
 *     sub_180100000 @ 0x180100000 (sub_180100000.c)
 *     sub_180100300 @ 0x180100300 (sub_180100300.c)
 *     sub_1801004A0 @ 0x1801004A0 (sub_1801004A0.c)
 *     sub_1801005E4 @ 0x1801005E4 (sub_1801005E4.c)
 *     sub_180100B78 @ 0x180100B78 (sub_180100B78.c)
 *     sub_180100D3C @ 0x180100D3C (sub_180100D3C.c)
 *     sub_180100ECC @ 0x180100ECC (sub_180100ECC.c)
 *     sub_1801010D0 @ 0x1801010D0 (sub_1801010D0.c)
 *     sub_180106B9C @ 0x180106B9C (sub_180106B9C.c)
 * Callees:
 *     sub_18004AE34 @ 0x18004AE34 (sub_18004AE34.c)
 *     sub_18009A320 @ 0x18009A320 (sub_18009A320.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E2150 (RtlpNotOwnerCriticalSection.c)
 */

NTSTATUS __cdecl RtlLeaveCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  bool v1; // zf
  signed __int32 v3; // edi
  HANDLE LockSemaphore; // r8
  int v5; // edx
  signed __int32 v6; // eax

  v1 = CriticalSection->RecursionCount-- == 1;
  if ( v1 )
  {
    CriticalSection->OwningThread = 0LL;
    v3 = _InterlockedCompareExchange(&CriticalSection->LockCount, -1, -2);
    if ( v3 != -2 )
    {
      if ( (CriticalSection->LockCount & 1) != 0 )
        RtlpNotOwnerCriticalSection(CriticalSection);
      LockSemaphore = CriticalSection->LockSemaphore;
      if ( !LockSemaphore )
        LockSemaphore = (HANDLE)sub_18004AE34(CriticalSection);
      do
      {
        v5 = v3 & 2 | 1;
        v6 = _InterlockedCompareExchange(&CriticalSection->LockCount, v5 + v3, v3);
        v1 = v3 == v6;
        v3 = v6;
      }
      while ( !v1 );
      if ( (v5 & 2) != 0 )
        sub_18009A320(CriticalSection, LockSemaphore);
    }
  }
  return 0;
}
