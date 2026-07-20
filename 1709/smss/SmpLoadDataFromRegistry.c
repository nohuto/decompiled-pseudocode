/*
 * XREFs of SmpLoadDataFromRegistry @ 0x140007224
 * Callers:
 *     SmpInit @ 0x140009F54 (SmpInit.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140001C54 (RtlStringCbPrintfW.c)
 *     SmpExecuteCommand @ 0x1400025D8 (SmpExecuteCommand.c)
 *     SmpTranslateSystemPartitionInformation @ 0x1400051A0 (SmpTranslateSystemPartitionInformation.c)
 *     SmpConfigureSharedSessionData @ 0x140006178 (SmpConfigureSharedSessionData.c)
 *     SmpInitializeKnownDlls @ 0x140006E00 (SmpInitializeKnownDlls.c)
 *     SmpProcessFileRenames @ 0x1400070C0 (SmpProcessFileRenames.c)
 *     SmpNtSerializeBoot @ 0x1400071F4 (SmpNtSerializeBoot.c)
 *     SmpEventWrite @ 0x140007820 (SmpEventWrite.c)
 *     SmpInitializeSessionManagement @ 0x14000784C (SmpInitializeSessionManagement.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x140007C04 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpInitializeDosDevices @ 0x140008E7C (SmpInitializeDosDevices.c)
 *     SmpDeallocSavedRegistryEntry @ 0x140009004 (SmpDeallocSavedRegistryEntry.c)
 *     SmpCreateProtectedPrefixes @ 0x14000B450 (SmpCreateProtectedPrefixes.c)
 *     SmpFinalizePathStrings @ 0x14000C210 (SmpFinalizePathStrings.c)
 *     SmpGetPlatformBinary @ 0x14000C2E0 (SmpGetPlatformBinary.c)
 *     SmpReadSafeBootOption @ 0x14000C364 (SmpReadSafeBootOption.c)
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 *     SmpPlatformBinaryTableExists @ 0x14001263C (SmpPlatformBinaryTableExists.c)
 *     SmpSendPlatformBinaryStatus @ 0x140012778 (SmpSendPlatformBinaryStatus.c)
 */

int __fastcall SmpLoadDataFromRegistry(HANDLE EventHandle, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 NtSystemRoot; // rax
  int result; // eax
  __int64 v8; // rax
  __int64 v9; // r14
  int PlatformBinary; // eax
  int v11; // edi
  PVOID *v12; // rbx
  __int64 v13; // r8
  PVOID *v14; // rsi
  PVOID *v15; // rcx
  PVOID **v16; // rax
  __int64 v17; // r8
  PVOID *v18; // rbx
  BOOL v19; // ebx
  int DynamicEnvironmentVariables; // ebx
  __int64 v21; // r8
  PVOID *v22; // rbx
  PVOID *v23; // rsi
  PVOID *v24; // rcx
  PVOID **v25; // rax
  int v26; // eax
  int v27; // eax
  __int64 v28; // r8
  unsigned int v29; // ebx
  int v30; // eax
  __int64 v31; // r8
  PVOID *v32; // rdi
  PVOID *v33; // rcx
  PVOID **v34; // rax
  __int64 v35; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+80h] [rbp-88h]
  PWSTR OldEnvironment; // [rsp+88h] [rbp-80h] BYREF
  __int64 v41; // [rsp+90h] [rbp-78h] BYREF
  __int64 v42; // [rsp+98h] [rbp-70h] BYREF
  int v43; // [rsp+A0h] [rbp-68h] BYREF
  const wchar_t *v44; // [rsp+A8h] [rbp-60h]
  int v45; // [rsp+B0h] [rbp-58h] BYREF
  const wchar_t *v46; // [rsp+B8h] [rbp-50h]
  struct _UNICODE_STRING ValueName; // [rsp+C0h] [rbp-48h] BYREF
  int v48; // [rsp+D0h] [rbp-38h] BYREF
  const wchar_t *v49; // [rsp+D8h] [rbp-30h]
  struct _UNICODE_STRING Destination; // [rsp+E0h] [rbp-28h] BYREF
  char v51; // [rsp+F8h] [rbp-10h] BYREF
  HANDLE Object; // [rsp+100h] [rbp-8h]
  HANDLE ThreadHandle; // [rsp+108h] [rbp+0h]
  char v54; // [rsp+14Eh] [rbp+46h]
  wchar_t pszDest[256]; // [rsp+168h] [rbp+60h] BYREF

  v43 = 7602290;
  v44 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT";
  v48 = 1310738;
  v49 = L"\\Sessions";
  v45 = 10354844;
  v46 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Environment";
  *(_DWORD *)&ValueName.Length = 2752552;
  ValueName.Buffer = L"NUMBER_OF_PROCESSORS";
  v5 = 0LL;
  qword_140021188 = (__int64)&SmpBootExecuteList;
  qword_140021198 = (__int64)&SmpBootExecuteNoPnpSyncList;
  SmpBootExecuteNoPnpSyncList = &SmpBootExecuteNoPnpSyncList;
  qword_1400211A8 = (__int64)&SmpSetupExecuteList;
  SmpSetupExecuteList = &SmpSetupExecuteList;
  qword_1400212A8 = (__int64)&SmpPagingFileList;
  SmpPagingFileList = &SmpPagingFileList;
  qword_1400211B8 = (__int64)&SmpDosDevicesList;
  SmpDosDevicesList = &SmpDosDevicesList;
  qword_1400211C8 = (__int64)&SmpFileRenameList;
  SmpFileRenameList = &SmpFileRenameList;
  qword_1400211D8 = (__int64)&SmpKnownDllsList;
  SmpKnownDllsList = &SmpKnownDllsList;
  qword_1400211E8 = (__int64)&SmpExcludeKnownDllsList;
  SmpExcludeKnownDllsList = &SmpExcludeKnownDllsList;
  qword_1400211F8 = (__int64)&SmpSubSystemsRequired;
  SmpSubSystemsRequired = (__int64)&SmpSubSystemsRequired;
  qword_140021208 = (__int64)&SmpSubSystemsToDefer;
  SmpSubSystemsToDefer = (__int64)&SmpSubSystemsToDefer;
  qword_140021298 = (__int64)&SmpExistingPageFilesList;
  SmpExistingPageFilesList = &SmpExistingPageFilesList;
  SmpBootExecuteList = &SmpBootExecuteList;
  SmpClearTempFiles = 0;
  NtSystemRoot = RtlGetNtSystemRoot(EventHandle, a2, a3, a4);
  RtlStringCbPrintfW(SmpTempDirNameBuffer, 0x20AuLL, L"\\??\\%s", NtSystemRoot);
  RtlInitUnicodeString(&SmpTempFilesDir, SmpTempDirNameBuffer);
  result = RtlCreateEnvironment(1u, &SmpDefaultEnvironment);
  if ( result >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v43;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      NtClose(KeyHandle);
      SmpMiniNTBoot = 1;
    }
    SmpReadSafeBootOption();
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v45;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      NtDeleteValueKey(KeyHandle, (PUNICODE_STRING)&SmpSafeBootEnvironmentValue);
      RtlStringCbPrintfW(pszDest, 0x200uLL, L"%u", (unsigned int)byte_140021278);
      v8 = -1LL;
      do
        ++v8;
      while ( pszDest[v8] );
      result = NtSetValueKey(KeyHandle, &ValueName, 0, 1u, pszDest, 2 * v8 + 2);
      if ( result >= 0 )
      {
        RtlSetCurrentEnvironment(SmpDefaultEnvironment, &OldEnvironment);
        result = RtlQueryRegistryValuesEx(2LL, L"Session Manager", &SmpRegistryConfigurationTable, 0LL, 0LL);
        if ( result >= 0 )
        {
          result = SmpFinalizePathStrings();
          if ( result >= 0 )
          {
            result = SmpInitializeKnownDlls();
            if ( result >= 0 )
            {
              result = SmpInitializeSessionManagement();
              if ( result >= 0 )
              {
                RtlSetCurrentEnvironment(OldEnvironment, &SmpDefaultEnvironment);
                result = SmpInitializeDosDevices();
                if ( result >= 0 )
                {
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v48;
                  ObjectAttributes.SecurityDescriptor = SmpPrimarySecurityDescriptor;
                  ObjectAttributes.RootDirectory = 0LL;
                  ObjectAttributes.Attributes = 208;
                  ObjectAttributes.SecurityQualityOfService = 0LL;
                  result = NtCreateDirectoryObject(&SmpSessionsObjectDirectory, 0xF000Fu, &ObjectAttributes);
                  if ( result >= 0 )
                  {
                    result = SmpCreateProtectedPrefixes();
                    if ( result >= 0 )
                    {
                      v9 = 0LL;
                      v39 = 0LL;
                      if ( SmpHostSmss )
                      {
                        if ( SmpMiniNTBoot || SmpSafeBootOption != -1 || SmpDisableWpbtExecution )
                        {
                          v11 = -1073741823;
                          if ( (unsigned __int8)SmpPlatformBinaryTableExists() )
                            SmpSendPlatformBinaryStatus(2LL, 0LL, 0LL, 0LL);
                        }
                        else
                        {
                          PlatformBinary = SmpGetPlatformBinary(&Destination);
                          v9 = v39;
                          v11 = PlatformBinary;
                        }
                      }
                      else
                      {
                        v11 = -1073741823;
                      }
                      v12 = (PVOID *)SmpBootExecuteList;
                      if ( SmpBootExecuteList != &SmpBootExecuteList
                        && (*(PVOID **)SmpBootExecuteList != &SmpBootExecuteList
                         || !RtlEqualUnicodeString(
                               (PCUNICODE_STRING)SmpBootExecuteList + 1,
                               &SmpAutoChkDefaultCommand,
                               0))
                        || SmpSetupExecuteList != &SmpSetupExecuteList
                        || v11 >= 0 )
                      {
                        SmpNtSerializeBoot();
                      }
                      SmpEventWrite(&SmssEvt_BootExecuteList_Start);
                      while ( v12 != &SmpBootExecuteList )
                      {
                        v14 = v12;
                        SmpExecuteCommand((__int64)(v12 + 2), 0, v13, 0, 0LL);
                        v15 = (PVOID *)*v12;
                        v12 = (PVOID *)*v12;
                        if ( *((PVOID **)*v14 + 1) != v14 || (v16 = (PVOID **)v14[1], *v16 != v14) )
                          __fastfail(3u);
                        *v16 = v15;
                        v15[1] = v16;
                        SmpDeallocSavedRegistryEntry(v14);
                      }
                      SmpEventWrite(&SmssEvt_BootExecuteList_Stop);
                      SmpEventWrite(&SmssEvt_BootExecuteNoPnpSyncList_Start);
                      v18 = (PVOID *)SmpBootExecuteNoPnpSyncList;
                      while ( v18 != &SmpBootExecuteNoPnpSyncList )
                      {
                        v23 = v18;
                        SmpExecuteCommand((__int64)(v18 + 2), 0, v17, 0, 0LL);
                        v24 = (PVOID *)*v18;
                        v18 = (PVOID *)*v18;
                        if ( *((PVOID **)*v23 + 1) != v23 || (v25 = (PVOID **)v23[1], *v25 != v23) )
                          __fastfail(3u);
                        *v25 = v24;
                        v24[1] = v25;
                        SmpDeallocSavedRegistryEntry(v23);
                      }
                      SmpEventWrite(&SmssEvt_BootExecuteNoPnpSyncList_Stop);
                      if ( EventHandle )
                        NtSetEvent(EventHandle, 0LL);
                      SmpEventWrite(&SmssEvt_InitializeRegistry_Start);
                      NtInitializeRegistry(0);
                      SmpEventWrite(&SmssEvt_InitializeRegistry_Stop);
                      if ( v11 >= 0 )
                      {
                        v26 = RtlQueryPerformanceFrequency(&v35);
                        v35 &= -(__int64)(v26 != 0);
                        v27 = RtlQueryPerformanceCounter(&v42);
                        v35 &= -(__int64)(v27 != 0);
                        if ( (int)SmpExecuteCommand(
                                    (__int64)&Destination,
                                    0,
                                    v28,
                                    32,
                                    (PRTL_USER_PROCESS_PARAMETERS)&v51) < 0 )
                        {
                          v29 = 1;
                        }
                        else
                        {
                          if ( v54 >= 0 )
                          {
                            v29 = 3;
                            NtTerminateProcess(Object, -1073740760);
                          }
                          else
                          {
                            v29 = 0;
                            NtResumeThread(ThreadHandle, 0LL);
                            NtWaitForSingleObject(Object, 0, 0LL);
                          }
                          NtClose(Object);
                          NtClose(ThreadHandle);
                        }
                        v30 = RtlQueryPerformanceCounter(&v41);
                        v31 = v35 & -(__int64)(v30 != 0);
                        v35 = v31;
                        if ( v31 > 0 )
                          v5 = 1000 * (v41 - v42) / v31;
                        SmpSendPlatformBinaryStatus(v29, v9, v5, &Destination);
                        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Destination.Buffer);
                      }
                      v19 = 0;
                      if ( (unsigned __int8)RtlIsStateSeparationEnabled() )
                        v19 = (int)RtlQueryRegistryValuesEx(
                                     0LL,
                                     L"\\REGISTRY\\MACHINE\\OSDATA\\Session Manager",
                                     &SmpRegistryConfigurationTable2,
                                     0LL,
                                     0LL) >= 0;
                      if ( !SmpMiniNTBoot )
                        SmpProcessFileRenames(v19);
                      v37 = 0LL;
                      result = TpAllocWork(&v37, SmpAsyncMemoryConfiguration, 0LL, &SmpCallbackEnviron);
                      if ( result >= 0 )
                      {
                        TpPostWork(v37);
                        if ( SmpWaitForPagingFiles )
                          TpWaitForWork(v37, 0LL);
                        TpReleaseWork(v37);
                        DynamicEnvironmentVariables = SmpCreateDynamicEnvironmentVariables(KeyHandle);
                        NtClose(KeyHandle);
                        if ( DynamicEnvironmentVariables < 0 )
                        {
                          return DynamicEnvironmentVariables;
                        }
                        else
                        {
                          SmpEventWrite(&SmssEvt_SetupExecuteList_Start);
                          v22 = (PVOID *)SmpSetupExecuteList;
                          while ( v22 != &SmpSetupExecuteList )
                          {
                            v32 = v22;
                            SmpExecuteCommand((__int64)(v22 + 2), 0, v21, 0, 0LL);
                            v33 = (PVOID *)*v22;
                            v22 = (PVOID *)*v22;
                            if ( *((PVOID **)*v32 + 1) != v32 || (v34 = (PVOID **)v32[1], *v34 != v32) )
                              __fastfail(3u);
                            *v34 = v33;
                            v33[1] = v34;
                            SmpDeallocSavedRegistryEntry(v32);
                          }
                          SmpEventWrite(&SmssEvt_SetupExecuteList_Stop);
                          result = SmpConfigureSharedSessionData();
                          if ( result >= 0 )
                          {
                            SmpTranslateSystemPartitionInformation();
                            return 0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
