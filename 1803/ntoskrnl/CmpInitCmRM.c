/*
 * XREFs of CmpInitCmRM @ 0x140561DC4
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400070F8 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x14062E4B0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1406309E0 (CmpMountPreloadedHives.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     ExDeleteResourceLite @ 0x1400E29B0 (ExDeleteResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwCreateResourceManager @ 0x1401A8BC0 (ZwCreateResourceManager.c)
 *     ZwCreateTransactionManager @ 0x1401A8CE0 (ZwCreateTransactionManager.c)
 *     ZwOpenResourceManager @ 0x1401A9920 (ZwOpenResourceManager.c)
 *     ZwRecoverResourceManager @ 0x1401AA100 (ZwRecoverResourceManager.c)
 *     ZwRecoverTransactionManager @ 0x1401AA120 (ZwRecoverTransactionManager.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     HvMarkBaseBlockDirty @ 0x14049360C (HvMarkBaseBlockDirty.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14049BD64 (CmpQueryFileSecurityDescriptor.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140518D58 (RtlStringFromGUIDEx.c)
 *     ExpAllocateStringRoutine @ 0x140518FA0 (ExpAllocateStringRoutine.c)
 *     CmpQueryNameString @ 0x140561CB8 (CmpQueryNameString.c)
 *     CmpUuidCreate @ 0x1405624F4 (CmpUuidCreate.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     CmpStartRMLog @ 0x1405F4564 (CmpStartRMLog.c)
 *     CmpLogTxrInitEvent @ 0x1406F9944 (CmpLogTxrInitEvent.c)
 */

__int64 __fastcall CmpInitCmRM(__int64 a1, char a2)
{
  __int64 result; // rax
  char v5; // si
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v10; // rcx
  _QWORD *v11; // r14
  struct _ERESOURCE *v12; // rdx
  __int64 v13; // rcx
  char *v14; // r8
  char *v15; // rdx
  char *v16; // rdx
  UUID v17; // xmm6
  char *v18; // rdx
  void *v19; // r12
  __int64 v20; // rcx
  int v21; // esi
  UNICODE_STRING *p_Source; // rbx
  PSECURITY_DESCRIPTOR v23; // rbx
  struct _CLFS_MGMT_POLICY *v24; // rax
  struct _CLFS_MGMT_POLICY *v25; // r12
  size_t v26; // r8
  ULONG v27; // ebx
  const void *v28; // rdx
  NTSTATUS v29; // eax
  GUID v30; // xmm0
  HANDLE *v31; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v33; // rax
  __int64 *v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rax
  PVOID v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  void *v43; // rcx
  void *v44; // rcx
  void *v45; // rcx
  char v46; // [rsp+68h] [rbp-A0h]
  int v47; // [rsp+6Ch] [rbp-9Ch]
  UNICODE_STRING Destination; // [rsp+70h] [rbp-98h] BYREF
  FILE_OBJECT *pplfoLog; // [rsp+80h] [rbp-88h] BYREF
  PVOID ClientCookie; // [rsp+88h] [rbp-80h] BYREF
  ULONG CreateOptions; // [rsp+90h] [rbp-78h]
  UNICODE_STRING GuidString; // [rsp+98h] [rbp-70h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING Source; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING LogFileName; // [rsp+C0h] [rbp-48h] BYREF
  PSECURITY_DESCRIPTOR P; // [rsp+D0h] [rbp-38h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  PVOID v58; // [rsp+108h] [rbp+0h] BYREF
  PERESOURCE Resource; // [rsp+110h] [rbp+8h]
  _CLFS_MGMT_CLIENT_REGISTRATION RegistrationData; // [rsp+120h] [rbp+18h] BYREF
  GUID ResourceManagerGuid; // [rsp+158h] [rbp+50h] BYREF
  UUID Uuid; // [rsp+168h] [rbp+60h] BYREF
  UUID v63; // [rsp+178h] [rbp+70h] BYREF
  __int64 v64; // [rsp+188h] [rbp+80h]
  __int64 v65; // [rsp+190h] [rbp+88h]

  v46 = a2;
  result = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  Object = 0LL;
  v64 = 0LL;
  v5 = 0;
  v65 = 0LL;
  *(_QWORD *)&ResourceManagerGuid.Data1 = 0LL;
  *(_QWORD *)ResourceManagerGuid.Data4 = 0LL;
  GuidString.Buffer = 0LL;
  *(_DWORD *)&Source.Length = 0;
  Source.Buffer = 0LL;
  *(_DWORD *)&Destination.Length = 0;
  Destination.Buffer = 0LL;
  pplfoLog = 0LL;
  *(_DWORD *)&LogFileName.Length = 0;
  LogFileName.Buffer = 0LL;
  CreateOptions = 0;
  P = 0LL;
  ClientCookie = 0LL;
  v47 = 0;
  if ( CmpMiniNTBoot )
    return result;
  v6 = qword_140396A80;
  if ( a1 )
    v6 = a1;
  if ( (*(_DWORD *)(v6 + 160) & 0x8001) != 0 )
    return result;
  v8 = CmpUuidCreate(&Uuid);
  if ( v8 < 0 || (v8 = CmpUuidCreate(&v63), v8 < 0) )
  {
    *(_DWORD *)(v6 + 4200) = 1;
    *(_DWORD *)(v6 + 4204) = v8;
    CmpLogTxrInitEvent(v7, v6, (unsigned int)v8);
    return (unsigned int)v8;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x6D524D43u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    *(_DWORD *)(v6 + 4200) = 1;
LABEL_70:
    v21 = -1073741670;
    *(_DWORD *)(v6 + 4204) = -1073741670;
    CmpLogTxrInitEvent(v10, v6, 3221225626LL);
    return (unsigned int)v21;
  }
  memset(PoolWithTag, 0, 0x88uLL);
  Resource = (PERESOURCE)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C724D43u);
  v12 = Resource;
  if ( !Resource )
  {
    ExFreePoolWithTag(v11, 0x6D524D43u);
    *(_DWORD *)(v6 + 4200) = 2;
    goto LABEL_70;
  }
  v11[3] = v11 + 2;
  v11[2] = v11 + 2;
  v11[11] = 0LL;
  v11[12] = 0LL;
  *((_DWORD *)v11 + 26) = a2 != 0 ? 4 : 0;
  *(_QWORD *)((char *)v11 + 108) = 0LL;
  *((_DWORD *)v11 + 17) = 0;
  v11[9] = 0LL;
  v11[16] = v12;
  ExInitializeResourceLite(v12);
  v13 = *(_QWORD *)(v6 + 64);
  if ( *(_DWORD *)(v13 + 164) != 1836346738 )
  {
    v17 = Uuid;
    *(_DWORD *)(v13 + 164) = 1836346738;
    goto LABEL_86;
  }
  v14 = (char *)Object;
  v15 = (char *)Object - *(_QWORD *)(v13 + 148);
  if ( Object == *(PVOID *)(v13 + 148) )
    v15 = (char *)Object - *(_QWORD *)(v13 + 156);
  if ( !v15 )
  {
    v47 = 1;
    v5 = 1;
    *(UUID *)(v13 + 148) = v63;
    v13 = *(_QWORD *)(v6 + 64);
  }
  v16 = &v14[-*(_QWORD *)(v13 + 112)];
  if ( v14 == *(char **)(v13 + 112) )
    v16 = &v14[-*(_QWORD *)(v13 + 120)];
  v17 = Uuid;
  if ( !v16 )
  {
    *(UUID *)(v13 + 112) = Uuid;
    v13 = *(_QWORD *)(v6 + 64);
    v5 = 1;
  }
  v18 = &v14[-*(_QWORD *)(v13 + 128)];
  if ( v14 == *(char **)(v13 + 128) )
    v18 = &v14[-*(_QWORD *)(v13 + 136)];
  if ( !v18 )
  {
    v5 = 1;
    *(_OWORD *)(v13 + 128) = *(_OWORD *)(v13 + 112);
  }
  while ( 1 )
  {
    if ( v5 )
    {
      CmpLockRegistry();
      ExAcquirePushLockSharedEx(v6 + 72, 0LL);
      ExAcquirePushLockExclusiveEx(v6 + 80, 0LL);
      HvMarkBaseBlockDirty(v6);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 80), v39, v40, v41);
      KeAbPostRelease(v6 + 80);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v6 + 72));
      KeAbPostRelease(v6 + 72);
      CmpUnlockRegistry();
      v17 = Uuid;
    }
    v19 = *(void **)(v6 + 1536);
    v21 = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(v6 + 64) + 148LL), &GuidString, 1u);
    if ( v21 < 0 )
    {
      *(_DWORD *)(v6 + 4200) = 3;
      goto LABEL_102;
    }
    if ( a1 )
    {
      v21 = CmpQueryNameString(*(void **)(a1 + 1536), &Source);
      if ( v21 < 0 )
      {
        *(_DWORD *)(v6 + 4200) = 4;
        goto LABEL_102;
      }
      p_Source = &Source;
    }
    else
    {
      p_Source = (UNICODE_STRING *)&CmpLogPath;
      CreateOptions = 52;
    }
    Destination.MaximumLength = GuidString.Length + CmpClfsLogPrefix.Length + TmLogExt.Length + p_Source->Length;
    Destination.Buffer = (wchar_t *)ExpAllocateStringRoutine(Destination.MaximumLength);
    if ( !Destination.Buffer )
    {
      v21 = -1073741670;
      *(_DWORD *)(v6 + 4200) = 5;
LABEL_102:
      CmpLogTxrInitEvent(v20, v6, (unsigned int)v21);
      if ( ClientCookie )
      {
        ClfsMgmtDeregisterManagedClient(ClientCookie);
        ClientCookie = 0LL;
      }
      if ( pplfoLog )
        ClfsCloseLogFileObject(pplfoLog);
      if ( GuidString.Buffer )
        RtlFreeAnsiString(&GuidString);
      if ( Source.Buffer )
        RtlFreeAnsiString(&Source);
      if ( Destination.Buffer )
        RtlFreeAnsiString(&Destination);
      if ( v11 )
      {
        v43 = (void *)v11[6];
        if ( v43 )
          ZwClose(v43);
        v44 = (void *)v11[5];
        if ( v44 )
          ObfDereferenceObject(v44);
        v45 = (void *)v11[4];
        if ( v45 )
          ZwClose(v45);
        ExFreePoolWithTag(v11, 0x6D524D43u);
      }
      ExDeleteResourceLite(Resource);
      ExFreePoolWithTag(Resource, 0);
      *(_DWORD *)(v6 + 4204) = v21;
      return (unsigned int)v21;
    }
    RtlAppendUnicodeStringToString(&Destination, &CmpClfsLogPrefix);
    RtlAppendUnicodeStringToString(&Destination, p_Source);
    RtlAppendUnicodeStringToString(&Destination, &GuidString);
    RtlAppendUnicodeStringToString(&Destination, &TmLogExt);
    RtlFreeAnsiString(&GuidString);
    if ( a1 )
      RtlFreeAnsiString(&Source);
    v21 = CmpQueryFileSecurityDescriptor(v19, &P);
    if ( v21 < 0 )
    {
      *(_DWORD *)(v6 + 4200) = 6;
      goto LABEL_102;
    }
    v23 = P;
    v21 = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0000000, 7u, P, 3u, 8u, 0, 0x200u, 0LL, 0);
    ExFreePoolWithTag(v23, 0);
    if ( v21 >= 0 )
      break;
    if ( v47 )
    {
      *(_DWORD *)(v6 + 4200) = 7;
      goto LABEL_102;
    }
    RtlFreeAnsiString(&Destination);
    CmpLogTxrInitEvent(v42, v6, (unsigned int)v21);
LABEL_86:
    v5 = 1;
    v47 = 1;
    *(UUID *)(*(_QWORD *)(v6 + 64) + 148LL) = v63;
    *(UUID *)(*(_QWORD *)(v6 + 64) + 112LL) = v17;
    *(UUID *)(*(_QWORD *)(v6 + 64) + 128LL) = v17;
    if ( !a1 )
      v46 = 1;
  }
  memset(&RegistrationData, 0, sizeof(RegistrationData));
  RegistrationData.Version = 1;
  v21 = ClfsMgmtRegisterManagedClient(pplfoLog, &RegistrationData, &ClientCookie);
  if ( v21 < 0 )
  {
    *(_DWORD *)(v6 + 4200) = 8;
    goto LABEL_102;
  }
  v24 = (struct _CLFS_MGMT_POLICY *)ExAllocatePoolWithTag(
                                      PagedPool,
                                      (unsigned __int16)TmContainerExt + 24LL,
                                      0x6D524D43u);
  v25 = v24;
  if ( !v24 )
  {
    *(_DWORD *)(v6 + 4200) = 9;
    goto LABEL_102;
  }
  v26 = (unsigned __int16)TmContainerExt;
  *(_QWORD *)&v24->Version = 0LL;
  *(_QWORD *)&v24->PolicyFlags = 0LL;
  v24->PolicyParameters.NewContainerSuffix.NextContainerSuffix = 0LL;
  v27 = v26 + 24;
  v24->PolicyParameters.NewContainerPrefix.PrefixLengthInBytes = v26;
  v28 = off_140398668;
  v24->LengthInBytes = v26 + 24;
  v24->Version = 1;
  v24->PolicyType = ClfsMgmtPolicyNewContainerExtension;
  memmove((char *)&v24->PolicyParameters + 2, v28, v26);
  v21 = ClfsMgmtInstallPolicy(pplfoLog, v25, v27);
  ExFreePoolWithTag(v25, 0);
  if ( v21 < 0 )
  {
    *(_DWORD *)(v6 + 4200) = 10;
    goto LABEL_102;
  }
  LogFileName.Length = Destination.Length - CmpClfsLogPrefix.Length;
  ObjectAttributes.Length = 48;
  LogFileName.MaximumLength = Destination.MaximumLength - CmpClfsLogPrefix.Length;
  LogFileName.Buffer = (wchar_t *)((char *)Destination.Buffer + CmpClfsLogPrefix.Length);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v29 = ZwCreateTransactionManager((PHANDLE)v11 + 4, 0xF003Fu, &ObjectAttributes, &LogFileName, CreateOptions, 0);
  v21 = v29;
  if ( v29 == -1073741771 )
  {
    if ( Destination.Buffer )
      RtlFreeAnsiString(&Destination);
    if ( pplfoLog )
    {
      ClfsCloseLogFileObject(pplfoLog);
      pplfoLog = 0LL;
    }
    if ( ClientCookie )
    {
      ClfsMgmtDeregisterManagedClient(ClientCookie);
      ClientCookie = 0LL;
    }
    if ( v47 )
      goto LABEL_38;
    goto LABEL_86;
  }
  if ( v29 >= 0 )
    v21 = ZwRecoverTransactionManager((HANDLE)v11[4]);
LABEL_38:
  RtlFreeAnsiString(&Destination);
  if ( v21 < 0 )
  {
    *(_DWORD *)(v6 + 4200) = 11;
    goto LABEL_102;
  }
  if ( pplfoLog )
  {
    ClfsCloseLogFileObject(pplfoLog);
    pplfoLog = 0LL;
  }
  if ( ClientCookie )
  {
    ClfsMgmtDeregisterManagedClient(ClientCookie);
    ClientCookie = 0LL;
  }
  v21 = ObReferenceObjectByHandle(
          (HANDLE)v11[4],
          0xF003Fu,
          (POBJECT_TYPE)TmTransactionManagerObjectType,
          0,
          &Object,
          0LL);
  v11[5] = Object;
  if ( v21 < 0 )
  {
    *(_DWORD *)(v6 + 4200) = 12;
    goto LABEL_102;
  }
  v30 = *(GUID *)(*(_QWORD *)(v6 + 64) + 112LL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  v31 = (HANDLE *)(v11 + 6);
  ResourceManagerGuid = v30;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v21 = ZwCreateResourceManager(
          (PHANDLE)v11 + 6,
          0x1F007Fu,
          (HANDLE)v11[4],
          &ResourceManagerGuid,
          &ObjectAttributes,
          0,
          0LL);
  if ( v21 == -1073741771 )
    v21 = ZwOpenResourceManager((PHANDLE)v11 + 6, 0x1F007Fu, (HANDLE)v11[4], &ResourceManagerGuid, &ObjectAttributes);
  if ( v21 < 0 )
  {
    *(_DWORD *)(v6 + 4200) = 13;
    goto LABEL_102;
  }
  v21 = ZwRecoverResourceManager(*v31);
  if ( v21 < 0 )
  {
    *(_DWORD *)(v6 + 4200) = 14;
    goto LABEL_102;
  }
  v21 = ObReferenceObjectByHandle(*v31, 0x1F007Fu, (POBJECT_TYPE)TmResourceManagerObjectType, 0, &v58, 0LL);
  v11[7] = v58;
  if ( v21 < 0 )
  {
    *(_DWORD *)(v6 + 4200) = 15;
    goto LABEL_102;
  }
  if ( a1 )
  {
    *(_QWORD *)(a1 + 4192) = v11;
    *((_DWORD *)v11 + 16) = 1;
    goto LABEL_51;
  }
  CmRmSystem = v11;
  v34 = &qword_1403968B8;
  v35 = 7LL;
  while ( 2 )
  {
    v36 = v34[3];
    if ( v36 && (*(_DWORD *)(v36 + 160) & 2) == 0 )
    {
      v37 = CmRmSystem;
      ++*((_DWORD *)CmRmSystem + 16);
      v38 = v34[3];
      goto LABEL_63;
    }
    if ( *v34 && (*(_DWORD *)(*v34 + 160) & 2) == 0 )
    {
      v37 = CmRmSystem;
      ++*((_DWORD *)CmRmSystem + 16);
      v38 = *v34;
LABEL_63:
      *(_QWORD *)(v38 + 4192) = v37;
    }
    v34 += 19;
    if ( --v35 )
      continue;
    break;
  }
  *((_QWORD *)CmpMasterHive + 524) = CmRmSystem;
  ++*((_DWORD *)CmRmSystem + 16);
LABEL_51:
  v11[10] = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpRmListLock);
  v33 = (_QWORD *)qword_1403CA128;
  if ( *(__int64 **)qword_1403CA128 != &CmpRmListHead )
    __fastfail(3u);
  *v11 = &CmpRmListHead;
  v11[1] = v33;
  *v33 = v11;
  qword_1403CA128 = (__int64)v11;
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v46 )
    CmpStartRMLog(v11, 0LL);
  return 0LL;
}
