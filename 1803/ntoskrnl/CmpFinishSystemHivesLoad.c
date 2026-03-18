/*
 * XREFs of CmpFinishSystemHivesLoad @ 0x14062E4B0
 * Callers:
 *     <none>
 * Callees:
 *     CmpRecheckHiveVolumePolicy @ 0x140006AD0 (CmpRecheckHiveVolumePolicy.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401A7860 (ZwCreateKey.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpLinkHiveToMaster @ 0x140557540 (CmpLinkHiveToMaster.c)
 *     CmpInitCmRM @ 0x140561DC4 (CmpInitCmRM.c)
 *     CmpAddToHiveFileList @ 0x140581F48 (CmpAddToHiveFileList.c)
 *     CmRmFinalizeRecovery @ 0x1405824E8 (CmRmFinalizeRecovery.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     RtlAppendStringToString @ 0x1406105D0 (RtlAppendStringToString.c)
 *     CmpLinkKeyToHive @ 0x14062EA60 (CmpLinkKeyToHive.c)
 *     CmpCreatePerfKeys @ 0x14062EB44 (CmpCreatePerfKeys.c)
 *     CmpSetVersionData @ 0x14062ED3C (CmpSetVersionData.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14062F244 (CmpHiveRootSecurityDescriptor.c)
 *     PsBootPhaseComplete @ 0x14062F6F0 (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x14062FA00 (ExpRefreshSystemTime.c)
 *     CmpInterlockedFunction @ 0x1406308B8 (CmpInterlockedFunction.c)
 *     CmpMountPreloadedHives @ 0x1406309E0 (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140630AC0 (CmpAdminSystemSecurityDescriptor.c)
 */

void __fastcall CmpFinishSystemHivesLoad(PRKEVENT Event)
{
  struct _KEVENT *v1; // r14
  struct _KWAIT_BLOCK *WaitBlockArray; // rbx
  PVOID *v3; // rax
  unsigned int v4; // edi
  PVOID *v5; // r13
  __int64 v6; // r12
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
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  PVOID v21; // rcx
  wchar_t *v22; // rdx
  wchar_t *v23; // rax
  __int64 v24; // rcx
  const WCHAR *v25; // rdx
  const WCHAR *v26; // rcx
  wchar_t *v27; // rdx
  unsigned int v28; // edi
  char *v29; // rbx
  char v30; // [rsp+68h] [rbp-A0h]
  unsigned __int16 Length; // [rsp+6Ah] [rbp-9Eh]
  STRING Destination; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+80h] [rbp-88h]
  PVOID PoolWithTag; // [rsp+88h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp-68h] BYREF
  PRKEVENT v37; // [rsp+A8h] [rbp-60h]
  PVOID Object; // [rsp+B0h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v40[48]; // [rsp+E8h] [rbp-20h] BYREF
  char v41; // [rsp+118h] [rbp+10h] BYREF

  v1 = Event;
  v37 = Event;
  *(_DWORD *)&Destination.Length = 0x800000;
  CmpNoWrite = 0;
  Destination.Buffer = &v41;
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
  v8 = (char *)&unk_1403968F8;
  v9 = v5;
  do
  {
    *v9 = v8;
    v8 += 152;
    ++v9;
    --v7;
  }
  while ( v7 );
  if ( !v1 )
  {
    KeWaitForSingleObject(&stru_140396AC0, Executive, 0, 0, 0LL);
    KeSetEvent(&stru_140396AC0, 0, 0);
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v40);
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    KiUnstackDetachProcess((__int64)v40, 0LL);
    if ( CmRmSystem )
    {
      TmEnableCallbacks(*((PKRESOURCEMANAGER *)CmRmSystem + 7), (PTM_RM_NOTIFICATION)CmKtmNotification, CmRmSystem);
      CmRmFinalizeRecovery((__int64)CmRmSystem);
    }
  }
  v10 = &stru_140396910;
  while ( 2 )
  {
    KeWaitForMultipleObjects(7u, v5, WaitAny, Executive, 0, 0, 0LL, WaitBlockArray);
    v11 = 0;
    v30 = 0;
    CmpLockRegistryExclusive();
    v12 = &off_1403968A8;
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
          if ( v16 )
          {
            if ( (CmpShutdownRundown & 1) == 0 )
              KeBugCheckEx(0x73u, 1uLL, v16, v4, (ULONG_PTR)&Destination);
            CmpLoadingSystemHivesActive = 0;
            CmpMountThread = 0LL;
            CmpUnlockRegistry();
            v28 = 0;
            v29 = (char *)&unk_1403968D8;
            do
            {
              if ( *((_DWORD *)v29 + 3) && !*v29 )
              {
                if ( !v29[1] )
                  KeWaitForSingleObject((char *)&unk_1403968F8 + 152 * v28, Executive, 0, 0, 0LL);
                KeSetEvent((struct _KEVENT *)((char *)&stru_140396910 + 152 * v28), 0, 0);
              }
              ++v28;
              v29 += 152;
            }
            while ( v28 < 7 );
            ExFreePoolWithTag(P, 0);
            ExFreePoolWithTag(PoolWithTag, 0);
            ExFreePoolWithTag(v5, 0);
            v1 = v37;
            goto LABEL_60;
          }
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
          v19 = (_QWORD *)qword_140862710;
          v20 = v12[5] + 800;
          if ( *(__int64 **)qword_140862710 != &CmpHiveListHead )
            __fastfail(3u);
          *v20 = &CmpHiveListHead;
          v20[1] = v19;
          *v19 = v20;
          qword_140862710 = (__int64)v20;
          ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL, v17, v18);
          CmpRecheckHiveVolumePolicy((__int64)v12[5]);
          v21 = CmRmSystem;
          if ( !CmRmSystem )
            goto LABEL_28;
          v22 = v12[5];
          if ( !v22 || (*((_DWORD *)v22 + 40) & 2) != 0 || *((_QWORD *)v22 + 524) )
          {
            v27 = v12[2];
            if ( !v27 || (*((_DWORD *)v27 + 40) & 2) != 0 || *((_QWORD *)v27 + 524) )
              goto LABEL_28;
            ++*((_DWORD *)CmRmSystem + 16);
            v23 = v12[2];
          }
          else
          {
            ++*((_DWORD *)CmRmSystem + 16);
            v23 = v12[5];
          }
          *((_QWORD *)v23 + 524) = v21;
LABEL_28:
          RtlInitUnicodeString(&DestinationString, *(v12 - 1));
        }
      }
      v24 = (__int64)v12[5];
      if ( v24 )
        CmpAddToHiveFileList(v24);
      *((_BYTE *)v12 + 48) = 1;
      CmpNoMasterCreates = 0;
      switch ( v4 )
      {
        case 3u:
          if ( v1 )
            goto LABEL_35;
          CmpMountPreloadedHives();
          CmpInterlockedFunction();
          KeSetEvent(&stru_140396AD8, 0, 0);
          v14 = 1;
          if ( !byte_140396A08 || !CmFastBoot )
            goto LABEL_35;
          CmpUnlockRegistry();
          ExpRefreshSystemTime();
          PsBootPhaseComplete();
          goto LABEL_52;
        case 2u:
          CmpUnlockRegistry();
          if ( !v1 )
          {
            KeSetEvent(&stru_140396A40, 0, 0);
            v14 = 1;
            if ( byte_140396AA0 && CmFastBoot )
            {
              ExpRefreshSystemTime();
              PsBootPhaseComplete();
            }
            CmpSetVersionData();
          }
          CmpCreatePerfKeys();
LABEL_52:
          CmpLockRegistryExclusive();
          goto LABEL_35;
        case 1u:
          v25 = L"\\Registry\\Machine\\SAM\\SAM";
          v26 = L"\\Registry\\Machine\\Security\\SAM";
          break;
        case 4u:
          v25 = L"\\Registry\\User\\.Default";
          v26 = L"\\Registry\\User\\S-1-5-18";
          break;
        default:
          goto LABEL_35;
      }
      CmpLinkKeyToHive(v26, v25);
LABEL_35:
      CmpNoMasterCreates = 1;
      if ( !v1 && !v14 )
        KeSetEvent((struct _KEVENT *)((char *)&stru_140396910 + 152 * v4), 0, 0);
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
  if ( v1 )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v40);
    CmpInitCmRM(0LL, CmpInitRmLogOnLoad);
    KiUnstackDetachProcess((__int64)v40, 0LL);
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
LABEL_60:
  if ( v1 )
    KeSetEvent(v1, 0, 0);
}
