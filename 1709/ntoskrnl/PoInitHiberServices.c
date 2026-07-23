/*
 * XREFs of PoInitHiberServices @ 0x1405AD774
 * Callers:
 *     NtInitializeRegistry @ 0x1405AD498 (NtInitializeRegistry.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ZwQuerySystemInformation @ 0x14017DF80 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     EmClientQueryRuleState @ 0x140424330 (EmClientQueryRuleState.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopEnableHiberFile @ 0x1405AD8E0 (PopEnableHiberFile.c)
 *     PopBcdClearPendingResume @ 0x1405ADF4C (PopBcdClearPendingResume.c)
 *     BcdOpenStore @ 0x1405AE300 (BcdOpenStore.c)
 *     PopBcdEstablishResumeObject @ 0x1405AE3A8 (PopBcdEstablishResumeObject.c)
 *     BcdCloseStore @ 0x1405AE528 (BcdCloseStore.c)
 *     PoDisableSleepStates @ 0x1405F12C0 (PoDisableSleepStates.c)
 *     PoShutdownBugCheck @ 0x1406FC900 (PoShutdownBugCheck.c)
 */

void __fastcall PoInitHiberServices(char a1)
{
  _DWORD *v1; // rdi
  bool v2; // bp
  UNICODE_STRING *v3; // rcx
  HANDLE v4; // rbx
  _DWORD *PoolWithTag; // rax
  ULONG v6; // eax
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  ULONG ReturnLength; // [rsp+50h] [rbp+8h] BYREF
  HANDLE BcdStoreHandle; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(ReturnLength) = a1;
  v1 = 0LL;
  v2 = PopHiberEnabledReg == 0;
  EmClientQueryRuleState(&GUID_EM_REMOVE_BAD_S3_PAGE_RULE, &BcdStoreHandle);
  if ( BcdOpenStore(v3, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, &BcdStoreHandle) >= 0 )
  {
    v4 = BcdStoreHandle;
    PopBcdEstablishResumeObject(BcdStoreHandle);
    PopBcdClearPendingResume(v4);
    BcdCloseStore(v4);
  }
  if ( ZwQuerySystemInformation(SystemVhdBootInformation, 0LL, 0, &ReturnLength) == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ReturnLength, 0x72626968u);
    v1 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( ZwQuerySystemInformation(SystemVhdBootInformation, PoolWithTag, ReturnLength, &ReturnLength) >= 0 )
      {
        v6 = ReturnLength - 2;
        ReturnLength -= 2;
        if ( *(_BYTE *)v1 )
        {
          if ( v1[1] <= v6 )
          {
            v2 = 1;
            PoDisableSleepStates(2LL, 8LL, &BcdStoreHandle);
          }
        }
      }
    }
  }
  v7 = 0;
  v8 = 0LL;
  do
  {
    if ( *(_DWORD *)((char *)&PopHiberForceDisabledReg + v8) )
    {
      v2 = 1;
      if ( (int)PoDisableSleepStates(
                  *(unsigned int *)((char *)PopHiberForceDisabledReasonMap + v8),
                  8LL,
                  &BcdStoreHandle) < 0 )
      {
        LOBYTE(v10) = 1;
        PoShutdownBugCheck(v10, 160LL, 272LL, 0LL, 0LL, 0LL);
      }
    }
    ++v7;
    v8 += 4LL;
  }
  while ( v7 < 2 );
  KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
  PopAcquirePolicyLock();
  LOBYTE(v9) = !v2;
  PopEnableHiberFile(v9, 0LL);
  PopReleasePolicyLock();
  KeSetEvent(&PopTransitionLock, 0, 0);
  if ( *((_QWORD *)&xmmword_14038D4C0 + 1) )
    (*((void (**)(void))&xmmword_14038D4C0 + 1))();
  if ( v1 )
    ExFreePoolWithTag(v1, 0x72626968u);
}
