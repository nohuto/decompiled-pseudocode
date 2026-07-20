/*
 * XREFs of SmpLoadDataFromRegistry @ 0x140007064
 * Callers:
 *     SmpInit @ 0x14000A1E0 (SmpInit.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140001C58 (RtlStringCbPrintfW.c)
 *     SmpExecuteCommand @ 0x1400025E0 (SmpExecuteCommand.c)
 *     SmpTranslateSystemPartitionInformation @ 0x1400051B0 (SmpTranslateSystemPartitionInformation.c)
 *     SmpConfigureSharedSessionData @ 0x140005FBC (SmpConfigureSharedSessionData.c)
 *     SmpInitializeKnownDlls @ 0x140006C40 (SmpInitializeKnownDlls.c)
 *     SmpProcessFileRenames @ 0x140006F00 (SmpProcessFileRenames.c)
 *     SmpNtSerializeBoot @ 0x140007034 (SmpNtSerializeBoot.c)
 *     SmpEventWrite @ 0x140007660 (SmpEventWrite.c)
 *     SmpInitializeSessionManagement @ 0x14000768C (SmpInitializeSessionManagement.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x1400078A0 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpInitializeDosDevices @ 0x140008C2C (SmpInitializeDosDevices.c)
 *     SmpDeallocSavedRegistryEntry @ 0x140008DB4 (SmpDeallocSavedRegistryEntry.c)
 *     SmpCreateProtectedPrefixes @ 0x14000B620 (SmpCreateProtectedPrefixes.c)
 *     SmpFinalizePathStrings @ 0x14000C3E0 (SmpFinalizePathStrings.c)
 *     SmpGetPlatformBinary @ 0x14000C4B0 (SmpGetPlatformBinary.c)
 *     SmpReadSafeBootOption @ 0x14000C534 (SmpReadSafeBootOption.c)
 *     __security_check_cookie @ 0x14000C6C0 (__security_check_cookie.c)
 *     SmpPlatformBinaryTableExists @ 0x140012848 (SmpPlatformBinaryTableExists.c)
 *     SmpSendPlatformBinaryStatus @ 0x140012984 (SmpSendPlatformBinaryStatus.c)
 */

int __fastcall SmpLoadDataFromRegistry(HANDLE EventHandle)
{
  __int64 v2; // r12
  __int64 NtSystemRoot; // rax
  int result; // eax
  __int64 v5; // rax
  __int64 v6; // r14
  int PlatformBinary; // eax
  int v8; // edi
  PVOID *v9; // rbx
  __int64 v10; // r8
  PVOID *v11; // rsi
  PVOID *v12; // rax
  PVOID **v13; // rcx
  __int64 v14; // r8
  PVOID *v15; // rbx
  BOOL v16; // ebx
  int DynamicEnvironmentVariables; // ebx
  __int64 v18; // r8
  PVOID *v19; // rbx
  PVOID *v20; // rsi
  PVOID *v21; // rax
  PVOID **v22; // rcx
  int v23; // eax
  int v24; // eax
  __int64 v25; // r8
  unsigned int v26; // ebx
  int v27; // eax
  __int64 v28; // r8
  PVOID *v29; // rdi
  PVOID *v30; // rax
  PVOID **v31; // rcx
  __int64 v32; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+80h] [rbp-88h]
  PWSTR OldEnvironment; // [rsp+88h] [rbp-80h] BYREF
  __int64 v38; // [rsp+90h] [rbp-78h] BYREF
  __int64 v39; // [rsp+98h] [rbp-70h] BYREF
  int v40; // [rsp+A0h] [rbp-68h] BYREF
  const wchar_t *v41; // [rsp+A8h] [rbp-60h]
  int v42; // [rsp+B0h] [rbp-58h] BYREF
  const wchar_t *v43; // [rsp+B8h] [rbp-50h]
  struct _UNICODE_STRING ValueName; // [rsp+C0h] [rbp-48h] BYREF
  int v45; // [rsp+D0h] [rbp-38h] BYREF
  const wchar_t *v46; // [rsp+D8h] [rbp-30h]
  struct _UNICODE_STRING Destination; // [rsp+E0h] [rbp-28h] BYREF
  char v48; // [rsp+F8h] [rbp-10h] BYREF
  HANDLE Object; // [rsp+100h] [rbp-8h]
  HANDLE ThreadHandle; // [rsp+108h] [rbp+0h]
  char v51; // [rsp+14Eh] [rbp+46h]
  wchar_t pszDest[256]; // [rsp+168h] [rbp+60h] BYREF

  v40 = 7602290;
  v41 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT";
  v45 = 1310738;
  v46 = L"\\Sessions";
  v42 = 10354844;
  v43 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Environment";
  *(_DWORD *)&ValueName.Length = 2752552;
  ValueName.Buffer = L"NUMBER_OF_PROCESSORS";
  v2 = 0LL;
  qword_140021188 = (__int64)&SmpBootExecuteList;
  qword_140021198 = (__int64)&SmpBootExecuteNoPnpSyncList;
  SmpBootExecuteNoPnpSyncList = &SmpBootExecuteNoPnpSyncList;
  qword_1400211A8 = (__int64)&SmpSetupExecuteList;
  SmpSetupExecuteList = &SmpSetupExecuteList;
  qword_1400212C8 = (__int64)&SmpPagingFileList;
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
  qword_1400212B8 = (__int64)&SmpExistingPageFilesList;
  SmpExistingPageFilesList = &SmpExistingPageFilesList;
  SmpBootExecuteList = &SmpBootExecuteList;
  SmpClearTempFiles = 0;
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlStringCbPrintfW(SmpTempDirNameBuffer, 0x20AuLL, L"\\??\\%s", NtSystemRoot);
  RtlInitUnicodeString(&SmpTempFilesDir, SmpTempDirNameBuffer);
  result = RtlCreateEnvironment(1u, &SmpDefaultEnvironment);
  if ( result >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v40;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      NtClose(KeyHandle);
      SmpMiniNTBoot = 1;
    }
    SmpReadSafeBootOption();
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v42;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      NtDeleteValueKey(KeyHandle, (PUNICODE_STRING)&SmpSafeBootEnvironmentValue);
      RtlStringCbPrintfW(pszDest, 0x200uLL, L"%u", (unsigned int)byte_140021298);
      v5 = -1LL;
      do
        ++v5;
      while ( pszDest[v5] );
      result = NtSetValueKey(KeyHandle, &ValueName, 0, 1u, pszDest, 2 * v5 + 2);
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
                  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v45;
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
                      v6 = 0LL;
                      v36 = 0LL;
                      if ( SmpHostSmss )
                      {
                        if ( SmpMiniNTBoot || SmpSafeBootOption != -1 || SmpDisableWpbtExecution )
                        {
                          v8 = -1073741823;
                          if ( (unsigned __int8)SmpPlatformBinaryTableExists() )
                            SmpSendPlatformBinaryStatus(2LL, 0LL, 0LL, 0LL);
                        }
                        else
                        {
                          PlatformBinary = SmpGetPlatformBinary(&Destination);
                          v6 = v36;
                          v8 = PlatformBinary;
                        }
                      }
                      else
                      {
                        v8 = -1073741823;
                      }
                      v9 = (PVOID *)SmpBootExecuteList;
                      if ( SmpBootExecuteList != &SmpBootExecuteList
                        && (*(PVOID **)SmpBootExecuteList != &SmpBootExecuteList
                         || !RtlEqualUnicodeString(
                               (PCUNICODE_STRING)SmpBootExecuteList + 1,
                               &SmpAutoChkDefaultCommand,
                               0))
                        || SmpSetupExecuteList != &SmpSetupExecuteList
                        || v8 >= 0 )
                      {
                        SmpNtSerializeBoot();
                      }
                      SmpEventWrite(&SmssEvt_BootExecuteList_Start);
                      while ( v9 != &SmpBootExecuteList )
                      {
                        v11 = v9;
                        SmpExecuteCommand((__int64)(v9 + 2), 0, v10, 0, 0LL);
                        v12 = (PVOID *)*v9;
                        v9 = v12;
                        if ( v12[1] != v11 || (v13 = (PVOID **)v11[1], *v13 != v11) )
                          __fastfail(3u);
                        *v13 = v12;
                        v12[1] = v13;
                        SmpDeallocSavedRegistryEntry(v11);
                      }
                      SmpEventWrite(&SmssEvt_BootExecuteList_Stop);
                      SmpEventWrite(&SmssEvt_BootExecuteNoPnpSyncList_Start);
                      v15 = (PVOID *)SmpBootExecuteNoPnpSyncList;
                      while ( v15 != &SmpBootExecuteNoPnpSyncList )
                      {
                        v20 = v15;
                        SmpExecuteCommand((__int64)(v15 + 2), 0, v14, 0, 0LL);
                        v21 = (PVOID *)*v15;
                        v15 = v21;
                        if ( v21[1] != v20 || (v22 = (PVOID **)v20[1], *v22 != v20) )
                          __fastfail(3u);
                        *v22 = v21;
                        v21[1] = v22;
                        SmpDeallocSavedRegistryEntry(v20);
                      }
                      SmpEventWrite(&SmssEvt_BootExecuteNoPnpSyncList_Stop);
                      if ( EventHandle )
                        NtSetEvent(EventHandle, 0LL);
                      SmpEventWrite(&SmssEvt_InitializeRegistry_Start);
                      NtInitializeRegistry(0);
                      SmpEventWrite(&SmssEvt_InitializeRegistry_Stop);
                      if ( v8 >= 0 )
                      {
                        v23 = RtlQueryPerformanceFrequency(&v32);
                        v32 &= -(__int64)(v23 != 0);
                        v24 = RtlQueryPerformanceCounter(&v39);
                        v32 &= -(__int64)(v24 != 0);
                        if ( (int)SmpExecuteCommand(
                                    (__int64)&Destination,
                                    0,
                                    v25,
                                    32,
                                    (PRTL_USER_PROCESS_PARAMETERS)&v48) < 0 )
                        {
                          v26 = 1;
                        }
                        else
                        {
                          if ( v51 >= 0 )
                          {
                            v26 = 3;
                            NtTerminateProcess(Object, -1073740760);
                          }
                          else
                          {
                            v26 = 0;
                            NtResumeThread(ThreadHandle, 0LL);
                            NtWaitForSingleObject(Object, 0, 0LL);
                          }
                          NtClose(Object);
                          NtClose(ThreadHandle);
                        }
                        v27 = RtlQueryPerformanceCounter(&v38);
                        v28 = v32 & -(__int64)(v27 != 0);
                        v32 = v28;
                        if ( v28 > 0 )
                          v2 = 1000 * (v38 - v39) / v28;
                        SmpSendPlatformBinaryStatus(v26, v6, v2, &Destination);
                        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Destination.Buffer);
                      }
                      v16 = 0;
                      if ( (unsigned __int8)RtlIsStateSeparationEnabled() )
                        v16 = (int)RtlQueryRegistryValuesEx(
                                     0LL,
                                     L"\\REGISTRY\\MACHINE\\OSDATA\\Session Manager",
                                     &SmpRegistryConfigurationTable2,
                                     0LL,
                                     0LL) >= 0;
                      if ( !SmpMiniNTBoot )
                        SmpProcessFileRenames(v16);
                      v34 = 0LL;
                      result = TpAllocWork(&v34, SmpAsyncMemoryConfiguration, 0LL, &SmpCallbackEnviron);
                      if ( result >= 0 )
                      {
                        TpPostWork(v34);
                        if ( SmpWaitForPagingFiles )
                          TpWaitForWork(v34, 0LL);
                        TpReleaseWork(v34);
                        DynamicEnvironmentVariables = SmpCreateDynamicEnvironmentVariables(KeyHandle);
                        NtClose(KeyHandle);
                        if ( DynamicEnvironmentVariables < 0 )
                        {
                          return DynamicEnvironmentVariables;
                        }
                        else
                        {
                          SmpEventWrite(&SmssEvt_SetupExecuteList_Start);
                          v19 = (PVOID *)SmpSetupExecuteList;
                          while ( v19 != &SmpSetupExecuteList )
                          {
                            v29 = v19;
                            SmpExecuteCommand((__int64)(v19 + 2), 0, v18, 0, 0LL);
                            v30 = (PVOID *)*v19;
                            v19 = v30;
                            if ( v30[1] != v29 || (v31 = (PVOID **)v29[1], *v31 != v29) )
                              __fastfail(3u);
                            *v31 = v30;
                            v30[1] = v31;
                            SmpDeallocSavedRegistryEntry(v29);
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
