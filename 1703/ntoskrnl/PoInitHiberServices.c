/*
 * XREFs of PoInitHiberServices @ 0x1405A913C
 * Callers:
 *     NtInitializeRegistry @ 0x140585198 (NtInitializeRegistry.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ZwQuerySystemInformation @ 0x14017E600 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     EmClientQueryRuleState @ 0x140404750 (EmClientQueryRuleState.c)
 *     PopBcdClearPendingResume @ 0x140589704 (PopBcdClearPendingResume.c)
 *     BcdOpenStore @ 0x140589990 (BcdOpenStore.c)
 *     PopBcdEstablishResumeObject @ 0x1405899F4 (PopBcdEstablishResumeObject.c)
 *     BcdCloseStore @ 0x140589B74 (BcdCloseStore.c)
 *     PoDisableSleepStates @ 0x14059B1C0 (PoDisableSleepStates.c)
 *     PopEnableHiberFile @ 0x1405A92A4 (PopEnableHiberFile.c)
 *     PoShutdownBugCheck @ 0x1406C9EC0 (PoShutdownBugCheck.c)
 */

void __fastcall PoInitHiberServices(char a1)
{
  _DWORD *v1; // rdi
  bool v2; // bp
  BCD_OPEN_FLAGS v3; // edx
  UNICODE_STRING *v4; // rcx
  HANDLE v5; // rbx
  _DWORD *PoolWithTag; // rax
  ULONG v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  ULONG ReturnLength; // [rsp+50h] [rbp+8h] BYREF
  HANDLE BcdStoreHandle; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(ReturnLength) = a1;
  v1 = 0LL;
  v2 = PopHiberEnabledReg == 0;
  EmClientQueryRuleState(&GUID_EM_REMOVE_BAD_S3_PAGE_RULE, &BcdStoreHandle);
  if ( BcdOpenStore(v4, v3, &BcdStoreHandle) >= 0 )
  {
    v5 = BcdStoreHandle;
    PopBcdEstablishResumeObject(BcdStoreHandle, 0LL);
    PopBcdClearPendingResume(v5);
    BcdCloseStore(v5);
  }
  if ( ZwQuerySystemInformation(SystemVhdBootInformation, 0LL, 0, &ReturnLength) == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ReturnLength, 0x72626968u);
    v1 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( ZwQuerySystemInformation(SystemVhdBootInformation, PoolWithTag, ReturnLength, &ReturnLength) >= 0 )
      {
        v7 = ReturnLength - 2;
        ReturnLength -= 2;
        if ( *(_BYTE *)v1 )
        {
          if ( v1[1] <= v7 )
          {
            v2 = 1;
            PoDisableSleepStates(2, 8, &BcdStoreHandle);
          }
        }
      }
    }
  }
  v8 = 0;
  v9 = 0LL;
  do
  {
    if ( *(_DWORD *)((char *)&PopHiberForceDisabledReg + v9) )
    {
      v2 = 1;
      if ( (int)PoDisableSleepStates(*(_DWORD *)((char *)PopHiberForceDisabledReasonMap + v9), 8, &BcdStoreHandle) < 0 )
      {
        LOBYTE(v11) = 1;
        PoShutdownBugCheck(v11, 160LL, 272LL, 0LL, 0LL, 0LL);
      }
    }
    ++v8;
    v9 += 4LL;
  }
  while ( v8 < 2 );
  KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
  PopAcquirePolicyLock();
  LOBYTE(v10) = !v2;
  PopEnableHiberFile(v10, 0LL);
  PopReleasePolicyLock();
  KeSetEvent(&PopTransitionLock, 0, 0);
  if ( *(&xmmword_14036E6D0 + 1) )
    ((void (*)(void))*(&xmmword_14036E6D0 + 1))();
  if ( v1 )
    ExFreePoolWithTag(v1, 0x72626968u);
}
