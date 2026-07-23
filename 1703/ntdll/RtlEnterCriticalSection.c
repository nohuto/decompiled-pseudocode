/*
 * XREFs of RtlEnterCriticalSection @ 0x18002F9C0
 * Callers:
 *     LdrRegisterDllNotification @ 0x1800041A0 (LdrRegisterDllNotification.c)
 *     sub_180005870 @ 0x180005870 (sub_180005870.c)
 *     sub_1800059EC @ 0x1800059EC (sub_1800059EC.c)
 *     sub_18000C298 @ 0x18000C298 (sub_18000C298.c)
 *     RtlProtectHeap @ 0x18000D6A0 (RtlProtectHeap.c)
 *     sub_18000D844 @ 0x18000D844 (sub_18000D844.c)
 *     sub_180011E90 @ 0x180011E90 (sub_180011E90.c)
 *     sub_1800141D4 @ 0x1800141D4 (sub_1800141D4.c)
 *     Callback @ 0x180018970 (Callback.c)
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 *     sub_180019FC0 @ 0x180019FC0 (sub_180019FC0.c)
 *     sub_18001A2D0 @ 0x18001A2D0 (sub_18001A2D0.c)
 *     sub_18001A338 @ 0x18001A338 (sub_18001A338.c)
 *     sub_18001AE14 @ 0x18001AE14 (sub_18001AE14.c)
 *     RtlLockHeap @ 0x18001F870 (RtlLockHeap.c)
 *     sub_180022088 @ 0x180022088 (sub_180022088.c)
 *     sub_1800222E0 @ 0x1800222E0 (sub_1800222E0.c)
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 *     sub_18002F924 @ 0x18002F924 (sub_18002F924.c)
 *     sub_180038D24 @ 0x180038D24 (sub_180038D24.c)
 *     sub_1800397BC @ 0x1800397BC (sub_1800397BC.c)
 *     sub_180039848 @ 0x180039848 (sub_180039848.c)
 *     RtlQueryEnvironmentVariable @ 0x18003B180 (RtlQueryEnvironmentVariable.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180040520 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180040DB0 (RtlpCreateProcessRegistryInfo.c)
 *     LdrShutdownThread @ 0x1800411F0 (LdrShutdownThread.c)
 *     sub_18004D108 @ 0x18004D108 (sub_18004D108.c)
 *     sub_1800514A0 @ 0x1800514A0 (sub_1800514A0.c)
 *     sub_18005304C @ 0x18005304C (sub_18005304C.c)
 *     sub_18005D2C8 @ 0x18005D2C8 (sub_18005D2C8.c)
 *     sub_180060180 @ 0x180060180 (sub_180060180.c)
 *     RtlCreateProcessParametersEx @ 0x180062490 (RtlCreateProcessParametersEx.c)
 *     RtlCreateEnvironmentEx @ 0x180062AD0 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x180062E60 (RtlSetEnvironmentVar.c)
 *     RtlSetProcessPreferredUILanguages @ 0x18006C0F0 (RtlSetProcessPreferredUILanguages.c)
 *     sub_18006C280 @ 0x18006C280 (sub_18006C280.c)
 *     sub_18006C54C @ 0x18006C54C (sub_18006C54C.c)
 *     sub_18006DC8C @ 0x18006DC8C (sub_18006DC8C.c)
 *     sub_18006F0A0 @ 0x18006F0A0 (sub_18006F0A0.c)
 *     RtlExitUserProcess @ 0x18006F940 (RtlExitUserProcess.c)
 *     RtlSleepConditionVariableCS @ 0x180071240 (RtlSleepConditionVariableCS.c)
 *     sub_1800751BC @ 0x1800751BC (sub_1800751BC.c)
 *     sub_180076144 @ 0x180076144 (sub_180076144.c)
 *     RtlGetUserInfoHeap @ 0x180076E40 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180077230 (RtlSetUserValueHeap.c)
 *     RtlValidateHeap @ 0x180077E50 (RtlValidateHeap.c)
 *     LdrAddLoadAsDataTable @ 0x180078680 (LdrAddLoadAsDataTable.c)
 *     sub_180078CB0 @ 0x180078CB0 (sub_180078CB0.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800791B0 (LdrRemoveLoadAsDataTable.c)
 *     RtlSetCurrentDirectory_U @ 0x18007ADF0 (RtlSetCurrentDirectory_U.c)
 *     sub_18007B108 @ 0x18007B108 (sub_18007B108.c)
 *     RtlSetHeapInformation @ 0x18007EF50 (RtlSetHeapInformation.c)
 *     sub_18007F010 @ 0x18007F010 (sub_18007F010.c)
 *     RtlAcquirePebLock @ 0x18007F0D0 (RtlAcquirePebLock.c)
 *     RtlCreateTagHeap @ 0x180081820 (RtlCreateTagHeap.c)
 *     RtlSetEnvironmentStrings @ 0x180085E10 (RtlSetEnvironmentStrings.c)
 *     sub_1800874C4 @ 0x1800874C4 (sub_1800874C4.c)
 *     sub_180088F00 @ 0x180088F00 (sub_180088F00.c)
 *     sub_18008AB60 @ 0x18008AB60 (sub_18008AB60.c)
 *     sub_18008E2C4 @ 0x18008E2C4 (sub_18008E2C4.c)
 *     RtlSetCurrentEnvironment @ 0x18008E990 (RtlSetCurrentEnvironment.c)
 *     sub_180090C78 @ 0x180090C78 (sub_180090C78.c)
 *     sub_18009100C @ 0x18009100C (sub_18009100C.c)
 *     RtlQueryProcessHeapInformation @ 0x180095000 (RtlQueryProcessHeapInformation.c)
 *     LdrUnregisterDllNotification @ 0x1800D5A60 (LdrUnregisterDllNotification.c)
 *     RtlCloneUserProcess @ 0x1800D86D0 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D8C40 (RtlPrepareForProcessCloning.c)
 *     sub_1800DA5D0 @ 0x1800DA5D0 (sub_1800DA5D0.c)
 *     sub_1800DB0B0 @ 0x1800DB0B0 (sub_1800DB0B0.c)
 *     sub_1800E0020 @ 0x1800E0020 (sub_1800E0020.c)
 *     sub_1800E0260 @ 0x1800E0260 (sub_1800E0260.c)
 *     sub_1800E02F0 @ 0x1800E02F0 (sub_1800E02F0.c)
 *     sub_1800E0420 @ 0x1800E0420 (sub_1800E0420.c)
 *     RtlGetProcessPreferredUILanguages @ 0x1800EBAB0 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC730 (RtlpCleanupRegistryKeys.c)
 *     RtlCompactHeap @ 0x1800EF180 (RtlCompactHeap.c)
 *     sub_1800EF328 @ 0x1800EF328 (sub_1800EF328.c)
 *     RtlQueryTagHeap @ 0x1800EF530 (RtlQueryTagHeap.c)
 *     sub_1800EF700 @ 0x1800EF700 (sub_1800EF700.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF7D0 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800F1D20 (RtlZeroHeap.c)
 *     RtlTraceDatabaseAdd @ 0x1800F98B0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x1800F9AE0 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1800F9BC0 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x1800F9C40 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x1800F9C90 (RtlTraceDatabaseValidate.c)
 *     sub_180100E1C @ 0x180100E1C (sub_180100E1C.c)
 *     sub_180101254 @ 0x180101254 (sub_180101254.c)
 *     sub_18010144C @ 0x18010144C (sub_18010144C.c)
 *     sub_1801015EC @ 0x1801015EC (sub_1801015EC.c)
 *     sub_180101730 @ 0x180101730 (sub_180101730.c)
 *     sub_180101C9C @ 0x180101C9C (sub_180101C9C.c)
 *     sub_180101E60 @ 0x180101E60 (sub_180101E60.c)
 *     sub_180101FF0 @ 0x180101FF0 (sub_180101FF0.c)
 *     sub_1801021F4 @ 0x1801021F4 (sub_1801021F4.c)
 *     sub_18010492C @ 0x18010492C (sub_18010492C.c)
 *     sub_18010CAF8 @ 0x18010CAF8 (sub_18010CAF8.c)
 *     sub_18010CFA0 @ 0x18010CFA0 (sub_18010CFA0.c)
 * Callees:
 *     sub_18002FA10 @ 0x18002FA10 (sub_18002FA10.c)
 */

NTSTATUS __cdecl RtlEnterCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  struct _TEB *v1; // rax
  signed __int8 v2; // cf
  HANDLE UniqueThread; // rax
  NTSTATUS result; // eax

  v1 = NtCurrentTeb();
  v2 = _interlockedbittestandreset(&CriticalSection->LockCount, 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v2 )
  {
    CriticalSection->OwningThread = UniqueThread;
    result = 0;
    CriticalSection->RecursionCount = 1;
  }
  else if ( CriticalSection->OwningThread == UniqueThread )
  {
    ++CriticalSection->RecursionCount;
    return 0;
  }
  else
  {
    return sub_18002FA10();
  }
  return result;
}
