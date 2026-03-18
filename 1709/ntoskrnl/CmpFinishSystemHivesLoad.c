/*
 * XREFs of CmpFinishSystemHivesLoad @ 0x1405C09E0
 * Callers:
 *     NtInitializeRegistry @ 0x1405AD498 (NtInitializeRegistry.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwCreateKey @ 0x14017DC60 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     CmpLinkHiveToMaster @ 0x1404E46C4 (CmpLinkHiveToMaster.c)
 *     CmpInitCmRM @ 0x14050A840 (CmpInitCmRM.c)
 *     CmpAddToHiveFileList @ 0x14059A274 (CmpAddToHiveFileList.c)
 *     RtlAppendStringToString @ 0x14059B940 (RtlAppendStringToString.c)
 *     CmRmFinalizeRecovery @ 0x14059BF00 (CmRmFinalizeRecovery.c)
 *     CmpLinkKeyToHive @ 0x1405C0F68 (CmpLinkKeyToHive.c)
 *     CmpCreatePerfKeys @ 0x1405C104C (CmpCreatePerfKeys.c)
 *     CmpSetVersionData @ 0x1405C1254 (CmpSetVersionData.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405C1760 (CmpHiveRootSecurityDescriptor.c)
 *     PsBootPhaseComplete @ 0x1405C1C0C (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x1405C1F1C (ExpRefreshSystemTime.c)
 *     CmpInterlockedFunction @ 0x1405C2DE8 (CmpInterlockedFunction.c)
 *     CmpMountPreloadedHives @ 0x1405C2F10 (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1405C2FF0 (CmpAdminSystemSecurityDescriptor.c)
 *     HvSyncHive @ 0x140697218 (HvSyncHive.c)
 */

void __fastcall CmpFinishSystemHivesLoad(__int64 a1)
{
  struct _KWAIT_BLOCK *WaitBlockArray; // rbx
  PVOID *v3; // rax
  unsigned int v4; // edi
  PVOID *v5; // r13
  __int64 v6; // r14
  __int64 v7; // r8
  char *v8; // rdx
  PVOID *v9; // rcx
  struct _KEVENT *v10; // r15
  char v11; // si
  wchar_t **v12; // rbx
  const WCHAR *v13; // rdx
  char v14; // si
  __int64 v15; // r8
  int v16; // eax
  ULONG_PTR v17; // rsi
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  PVOID v20; // rcx
  wchar_t *v21; // rdx
  wchar_t *v22; // rax
  wchar_t *v23; // rcx
  const WCHAR *v24; // rdx
  const WCHAR *v25; // rcx
  wchar_t *v26; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v28; // edi
  char *v29; // rbx
  char v30; // [rsp+60h] [rbp-A0h]
  unsigned __int16 Length; // [rsp+62h] [rbp-9Eh]
  STRING Destination; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  PVOID PoolWithTag; // [rsp+80h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp-68h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  char v39; // [rsp+E0h] [rbp-20h] BYREF

  *(_DWORD *)&Destination.Length = 0x800000;
  CmpNoWrite = 0;
  Destination.Buffer = &v39;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\");
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  Length = Destination.Length;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x150uLL, 0x20204D43u);
  WaitBlockArray = (struct _KWAIT_BLOCK *)PoolWithTag;
  v3 = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x20204D43u);
  v4 = 0;
  v5 = v3;
  if ( !WaitBlockArray || !v3 )
    KeBugCheckEx(0x74u, 2uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  CmpMountThread = (__int64)KeGetCurrentThread();
  P = (PVOID)CmpHiveRootSecurityDescriptor();
  v6 = 7LL;
  CmpAdminSystemFileSecurityDescriptor = (PSECURITY_DESCRIPTOR)CmpAdminSystemSecurityDescriptor();
  v7 = 7LL;
  v8 = (char *)&unk_140353D18;
  v9 = v5;
  do
  {
    *v9 = v8;
    v8 += 152;
    ++v9;
    --v7;
  }
  while ( v7 );
  if ( !a1 )
  {
    KeWaitForSingleObject(&stru_140353EE0, Executive, 0, 0, 0LL);
    KeSetEvent(&stru_140353EE0, 0, 0);
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem);
    }
  }
  v10 = &stru_140353D30;
  while ( 2 )
  {
    KeWaitForMultipleObjects(7u, v5, WaitAny, Executive, 0, 0, 0LL, WaitBlockArray);
    v11 = 0;
    v30 = 0;
    CmpLockRegistryExclusive();
    v12 = &off_140353CC8;
    do
    {
      if ( *((_BYTE *)v12 + 48) )
        goto LABEL_13;
      if ( *((_BYTE *)v12 + 49) != 1 )
      {
        v11 = 1;
        v30 = 1;
        goto LABEL_13;
      }
      v13 = *v12;
      v14 = 0;
      Destination.Length = Length;
      RtlInitUnicodeString(&DestinationString, v13);
      RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
      if ( *(_WORD *)&Destination.Buffer[2 * ((unsigned __int64)Destination.Length >> 1) - 2] == 92 )
      {
        RtlInitUnicodeString(&DestinationString, v12[1]);
        RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
      }
      if ( !v12[2] )
      {
        v15 = (__int64)v12[5];
        if ( v15 )
        {
          v16 = CmpLinkHiveToMaster(
                  (__int64)&Destination,
                  0LL,
                  v15,
                  *((_BYTE *)v12 + 51),
                  *((_DWORD *)v12 + 8),
                  0,
                  0LL,
                  (__int64)P,
                  0LL,
                  0LL,
                  1);
          v17 = v16;
          if ( v16 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
            {
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              KeBugCheckEx(0x73u, 1uLL, v17, v4, (ULONG_PTR)&Destination);
            }
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            CmpLoadingSystemHivesActive = 0;
            CmpMountThread = 0LL;
            CmpUnlockRegistry();
            v28 = 0;
            v29 = (char *)&unk_140353CF8;
            do
            {
              if ( *((_DWORD *)v29 + 3) && !*v29 )
              {
                if ( !v29[1] )
                  KeWaitForSingleObject((char *)&unk_140353D18 + 152 * v28, Executive, 0, 0, 0LL);
                KeSetEvent((struct _KEVENT *)((char *)&stru_140353D30 + 152 * v28), 0, 0);
              }
              ++v28;
              v29 += 152;
            }
            while ( v28 < 7 );
            ExFreePoolWithTag(P, 0);
            ExFreePoolWithTag(PoolWithTag, 0);
            ExFreePoolWithTag(v5, 0);
            return;
          }
          if ( *((_BYTE *)v12 + 51) == 1 )
            HvSyncHive((ULONG_PTR)v12[5]);
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
          v18 = (_QWORD *)qword_1407F3DD0;
          v19 = v12[5] + 1364;
          if ( *(__int64 **)qword_1407F3DD0 != &CmpHiveListHead )
            __fastfail(3u);
          *v19 = &CmpHiveListHead;
          v19[1] = v18;
          *v18 = v19;
          qword_1407F3DD0 = (__int64)v19;
          ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
          v20 = CmRmSystem;
          if ( !CmRmSystem )
            goto LABEL_30;
          v21 = v12[5];
          if ( !v21 || (*((_DWORD *)v21 + 36) & 2) != 0 || *((_QWORD *)v21 + 675) )
          {
            v26 = v12[2];
            if ( !v26 || (*((_DWORD *)v26 + 36) & 2) != 0 || *((_QWORD *)v26 + 675) )
              goto LABEL_30;
            ++*((_DWORD *)CmRmSystem + 16);
            v22 = v12[2];
          }
          else
          {
            ++*((_DWORD *)CmRmSystem + 16);
            v22 = v12[5];
          }
          *((_QWORD *)v22 + 675) = v20;
LABEL_30:
          RtlInitUnicodeString(&DestinationString, *(v12 - 1));
          v14 = 0;
        }
      }
      v23 = v12[5];
      if ( v23 )
        CmpAddToHiveFileList(v23);
      *((_BYTE *)v12 + 48) = 1;
      CmpNoMasterCreates = 0;
      switch ( v4 )
      {
        case 3u:
          if ( a1 )
            goto LABEL_37;
          CmpMountPreloadedHives();
          CmpInterlockedFunction();
          KeSetEvent(&stru_140353EF8, 0, 0);
          v14 = 1;
          if ( !byte_140353E28 || !CmFastBoot )
            goto LABEL_37;
          CmpUnlockRegistry();
          ExpRefreshSystemTime();
          PsBootPhaseComplete();
          goto LABEL_54;
        case 2u:
          CmpUnlockRegistry();
          if ( !a1 )
          {
            KeSetEvent(&stru_140353E60, 0, 0);
            v14 = 1;
            if ( byte_140353EC0 && CmFastBoot )
            {
              ExpRefreshSystemTime();
              PsBootPhaseComplete();
            }
            CmpSetVersionData();
          }
          CmpCreatePerfKeys();
LABEL_54:
          CmpLockRegistryExclusive();
          goto LABEL_37;
        case 1u:
          v24 = L"\\Registry\\Machine\\SAM\\SAM";
          v25 = L"\\Registry\\Machine\\Security\\SAM";
          break;
        case 4u:
          v24 = L"\\Registry\\User\\.Default";
          v25 = L"\\Registry\\User\\S-1-5-18";
          break;
        default:
          goto LABEL_37;
      }
      CmpLinkKeyToHive(v25, v24);
LABEL_37:
      CmpNoMasterCreates = 1;
      if ( !a1 && !v14 )
        KeSetEvent((struct _KEVENT *)((char *)&stru_140353D30 + 152 * v4), 0, 0);
      v11 = v30;
LABEL_13:
      ++v4;
      v12 += 19;
    }
    while ( v4 < 7 );
    if ( v11 == 1 )
    {
      CmpUnlockRegistry();
      WaitBlockArray = (struct _KWAIT_BLOCK *)PoolWithTag;
      v4 = 0;
      continue;
    }
    break;
  }
  CmpSpecialBootCondition = 0;
  ExFreePoolWithTag(P, 0);
  ExFreePoolWithTag(PoolWithTag, 0);
  ExFreePoolWithTag(v5, 0);
  if ( CmpShareSystemHives )
    CmpVEEnabled = 0;
  else
    CmpVEEnabled = CmVEEnabled == 1;
  CmpUnlockRegistry();
  if ( a1 )
  {
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem);
    }
    CmpLockRegistryExclusive();
    CmpMountPreloadedHives();
    CmpInterlockedFunction();
    CmpUnlockRegistry();
    do
    {
      KeSetEvent(v10, 0, 0);
      v10 = (struct _KEVENT *)((char *)v10 + 152);
      --v6;
    }
    while ( v6 );
    if ( CmFastBoot )
    {
      ExpRefreshSystemTime();
      PsBootPhaseComplete();
    }
    CmpSetVersionData();
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpConfigurationManagerKeyName;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
  {
    ObReferenceObjectByHandle(KeyHandle, 2u, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
    CmpConfigurationManagerKeyObject = (__int64)Object;
    ZwClose(KeyHandle);
  }
  CmpLoadingSystemHivesActive = 0;
  CmpMountThread = 0LL;
}
