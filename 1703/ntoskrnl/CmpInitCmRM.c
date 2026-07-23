/*
 * XREFs of CmpInitCmRM @ 0x14054D650
 * Callers:
 *     CmpLoadKeyCommon @ 0x14007EF3C (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3DE0 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1405A67E8 (CmpMountPreloadedHives.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExDeleteResourceLite @ 0x14011B1A0 (ExDeleteResourceLite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwCreateResourceManager @ 0x14017F600 (ZwCreateResourceManager.c)
 *     ZwCreateTransactionManager @ 0x14017F720 (ZwCreateTransactionManager.c)
 *     ZwOpenResourceManager @ 0x140180320 (ZwOpenResourceManager.c)
 *     ZwRecoverResourceManager @ 0x140180AE0 (ZwRecoverResourceManager.c)
 *     ZwRecoverTransactionManager @ 0x140180B00 (ZwRecoverTransactionManager.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpStartRMLog @ 0x14042EC9C (CmpStartRMLog.c)
 *     RtlStringFromGUIDEx @ 0x1404C1BA0 (RtlStringFromGUIDEx.c)
 *     ExpAllocateStringRoutine @ 0x1404C1D30 (ExpAllocateStringRoutine.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1404D809C (CmpQueryFileSecurityDescriptor.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     CmpUuidCreate @ 0x14054D440 (CmpUuidCreate.c)
 *     CmpQueryNameString @ 0x14054DFB4 (CmpQueryNameString.c)
 *     HvMarkBaseBlockDirty @ 0x1405D0948 (HvMarkBaseBlockDirty.c)
 *     CmpLogTxrInitEvent @ 0x14066B86C (CmpLogTxrInitEvent.c)
 */

__int64 __fastcall CmpInitCmRM(ULONG_PTR a1, char a2)
{
  __int64 result; // rax
  char v5; // si
  ULONG_PTR v6; // rdi
  __int64 v7; // rcx
  NTSTATUS v8; // ebx
  _QWORD *PoolWithTag; // rax
  __int64 v10; // rcx
  _QWORD *v11; // r14
  struct _ERESOURCE *v12; // rbx
  __int64 v13; // rdx
  UUID v14; // xmm6
  UUID v15; // xmm7
  char *v16; // r8
  char *v17; // rcx
  __int64 v18; // rdx
  char *v19; // rcx
  __int64 v20; // rdx
  char *v21; // rcx
  void *v22; // r12
  __int64 v23; // rcx
  int v24; // esi
  UNICODE_STRING *p_Source; // rbx
  PSECURITY_DESCRIPTOR v26; // rbx
  struct _CLFS_MGMT_POLICY *v27; // rax
  struct _CLFS_MGMT_POLICY *v28; // r12
  size_t v29; // r8
  ULONG v30; // ebx
  const void *v31; // rdx
  NTSTATUS v32; // eax
  HANDLE *v33; // rbx
  GUID v34; // xmm0
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v36; // rax
  _DWORD *v37; // rcx
  __int64 *v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  void *v43; // rcx
  void *v44; // rcx
  void *v45; // rcx
  char v46; // [rsp+68h] [rbp-A0h]
  int v47; // [rsp+6Ch] [rbp-9Ch]
  UNICODE_STRING Destination; // [rsp+70h] [rbp-98h] BYREF
  FILE_OBJECT *pplfoLog; // [rsp+80h] [rbp-88h] BYREF
  PVOID ClientCookie; // [rsp+88h] [rbp-80h] BYREF
  ULONG CreateOptions[2]; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING GuidString; // [rsp+98h] [rbp-70h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING Source; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING LogFileName; // [rsp+C0h] [rbp-48h] BYREF
  PSECURITY_DESCRIPTOR P; // [rsp+D0h] [rbp-38h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  PERESOURCE Resource; // [rsp+108h] [rbp+0h]
  _CLFS_MGMT_CLIENT_REGISTRATION RegistrationData; // [rsp+110h] [rbp+8h] BYREF
  GUID ResourceManagerGuid; // [rsp+148h] [rbp+40h] BYREF
  UUID Uuid; // [rsp+158h] [rbp+50h] BYREF
  UUID v62; // [rsp+168h] [rbp+60h] BYREF

  v46 = a2;
  result = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  Object = 0LL;
  *(_QWORD *)&ResourceManagerGuid.Data1 = 0LL;
  v5 = 0;
  *(_QWORD *)ResourceManagerGuid.Data4 = 0LL;
  GuidString.Buffer = 0LL;
  *(_DWORD *)&Source.Length = 0;
  Source.Buffer = 0LL;
  *(_DWORD *)&Destination.Length = 0;
  Destination.Buffer = 0LL;
  pplfoLog = 0LL;
  *(_DWORD *)&LogFileName.Length = 0;
  LogFileName.Buffer = 0LL;
  CreateOptions[0] = 0;
  P = 0LL;
  ClientCookie = 0LL;
  v47 = 0;
  if ( CmpMiniNTBoot )
    return result;
  v6 = qword_14033BE70;
  if ( a1 )
    v6 = a1;
  if ( (*(_DWORD *)(v6 + 144) & 0x8001) != 0 )
    return result;
  v8 = CmpUuidCreate(&Uuid);
  if ( v8 < 0 || (v8 = CmpUuidCreate(&v62), v8 < 0) )
  {
    *(_DWORD *)(v6 + 5408) = 1;
    *(_DWORD *)(v6 + 5412) = v8;
    CmpLogTxrInitEvent(v7, v6, (unsigned int)v8);
    return (unsigned int)v8;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x6D524D43u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    *(_DWORD *)(v6 + 5408) = 1;
LABEL_71:
    v24 = -1073741670;
    *(_DWORD *)(v6 + 5412) = -1073741670;
    CmpLogTxrInitEvent(v10, v6, 3221225626LL);
    return (unsigned int)v24;
  }
  memset(PoolWithTag, 0, 0x88uLL);
  Resource = (PERESOURCE)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C724D43u);
  v12 = Resource;
  if ( !Resource )
  {
    ExFreePoolWithTag(v11, 0x6D524D43u);
    *(_DWORD *)(v6 + 5408) = 2;
    goto LABEL_71;
  }
  v11[3] = v11 + 2;
  v11[2] = v11 + 2;
  v11[11] = 0LL;
  v11[12] = 0LL;
  v11[16] = v12;
  *(_QWORD *)((char *)v11 + 108) = 0LL;
  *((_DWORD *)v11 + 26) = a2 != 0 ? 4 : 0;
  *((_DWORD *)v11 + 17) = 0;
  v11[9] = 0LL;
  ExInitializeResourceLite(v12);
  v13 = *(_QWORD *)(v6 + 64);
  v14 = Uuid;
  v15 = v62;
  if ( *(_DWORD *)(v13 + 164) != 1836346738 )
  {
    *(_DWORD *)(v13 + 164) = 1836346738;
    goto LABEL_82;
  }
  v16 = (char *)Object;
  v17 = (char *)Object - *(_QWORD *)(v13 + 148);
  if ( Object == *(PVOID *)(v13 + 148) )
    v17 = (char *)Object - *(_QWORD *)(v13 + 156);
  if ( !v17 )
  {
    v47 = 1;
    v5 = 1;
    *(UUID *)(v13 + 148) = v62;
  }
  v18 = *(_QWORD *)(v6 + 64);
  v19 = &v16[-*(_QWORD *)(v18 + 112)];
  if ( v16 == *(char **)(v18 + 112) )
    v19 = &v16[-*(_QWORD *)(v18 + 120)];
  if ( !v19 )
  {
    v5 = 1;
    *(UUID *)(v18 + 112) = v14;
  }
  v20 = *(_QWORD *)(v6 + 64);
  v21 = &v16[-*(_QWORD *)(v20 + 128)];
  if ( v16 == *(char **)(v20 + 128) )
    v21 = &v16[-*(_QWORD *)(v20 + 136)];
  if ( !v21 )
  {
    v5 = 1;
    *(_OWORD *)(v20 + 128) = *(_OWORD *)(v20 + 112);
  }
  while ( 1 )
  {
    if ( v5 )
    {
      CmpLockRegistry();
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 2848), 1u);
      ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 2840));
      HvMarkBaseBlockDirty(v6);
      ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v6 + 2840));
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 2848));
      CmpUnlockRegistry();
    }
    v22 = *(void **)(v6 + 2664);
    v24 = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(v6 + 64) + 148LL), &GuidString, 1u);
    if ( v24 < 0 )
    {
      *(_DWORD *)(v6 + 5408) = 3;
      goto LABEL_98;
    }
    if ( a1 )
    {
      v24 = CmpQueryNameString(*(_QWORD *)(a1 + 2664), &Source);
      if ( v24 < 0 )
      {
        *(_DWORD *)(v6 + 5408) = 4;
        goto LABEL_98;
      }
      p_Source = &Source;
    }
    else
    {
      p_Source = (UNICODE_STRING *)&CmpLogPath;
      CreateOptions[0] = 52;
    }
    Destination.MaximumLength = GuidString.Length + CmpClfsLogPrefix.Length + TmLogExt.Length + p_Source->Length;
    Destination.Buffer = (wchar_t *)ExpAllocateStringRoutine(Destination.MaximumLength);
    if ( !Destination.Buffer )
    {
      v24 = -1073741670;
      *(_DWORD *)(v6 + 5408) = 5;
LABEL_98:
      CmpLogTxrInitEvent(v23, v6, (unsigned int)v24);
      if ( ClientCookie )
      {
        ClfsMgmtDeregisterManagedClient(ClientCookie);
        ClientCookie = 0LL;
      }
      if ( pplfoLog )
        ClfsCloseLogFileObject(pplfoLog);
      if ( GuidString.Buffer )
        RtlFreeUnicodeString(&GuidString);
      if ( Source.Buffer )
        RtlFreeUnicodeString(&Source);
      if ( Destination.Buffer )
        RtlFreeUnicodeString(&Destination);
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
      *(_DWORD *)(v6 + 5412) = v24;
      return (unsigned int)v24;
    }
    RtlAppendUnicodeStringToString(&Destination, &CmpClfsLogPrefix);
    RtlAppendUnicodeStringToString(&Destination, p_Source);
    RtlAppendUnicodeStringToString(&Destination, &GuidString);
    RtlAppendUnicodeStringToString(&Destination, &TmLogExt);
    RtlFreeUnicodeString(&GuidString);
    if ( a1 )
      RtlFreeUnicodeString(&Source);
    v24 = CmpQueryFileSecurityDescriptor(v22, &P);
    if ( v24 < 0 )
    {
      *(_DWORD *)(v6 + 5408) = 6;
      goto LABEL_98;
    }
    v26 = P;
    v24 = ClfsCreateLogFile(&pplfoLog, &Destination, 0xC0000000, 7u, P, 3u, 8u, 0, 0x200u, 0LL, 0);
    ExFreePoolWithTag(v26, 0);
    if ( v24 >= 0 )
      break;
    if ( v47 )
    {
      *(_DWORD *)(v6 + 5408) = 7;
      goto LABEL_98;
    }
    RtlFreeUnicodeString(&Destination);
    CmpLogTxrInitEvent(v42, v6, (unsigned int)v24);
LABEL_82:
    v5 = 1;
    v47 = 1;
    *(UUID *)(*(_QWORD *)(v6 + 64) + 148LL) = v15;
    *(UUID *)(*(_QWORD *)(v6 + 64) + 112LL) = v14;
    *(UUID *)(*(_QWORD *)(v6 + 64) + 128LL) = v14;
    if ( !a1 )
      v46 = 1;
  }
  memset(&RegistrationData, 0, sizeof(RegistrationData));
  RegistrationData.Version = 1;
  v24 = ClfsMgmtRegisterManagedClient(pplfoLog, &RegistrationData, &ClientCookie);
  if ( v24 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 8;
    goto LABEL_98;
  }
  v27 = (struct _CLFS_MGMT_POLICY *)ExAllocatePoolWithTag(
                                      PagedPool,
                                      (unsigned __int16)TmContainerExt + 24LL,
                                      0x6D524D43u);
  v28 = v27;
  if ( !v27 )
  {
    *(_DWORD *)(v6 + 5408) = 9;
    goto LABEL_98;
  }
  v29 = (unsigned __int16)TmContainerExt;
  *(_QWORD *)&v27->Version = 0LL;
  *(_QWORD *)&v27->PolicyFlags = 0LL;
  v27->PolicyParameters.NewContainerSuffix.NextContainerSuffix = 0LL;
  v30 = v29 + 24;
  v27->PolicyParameters.NewContainerPrefix.PrefixLengthInBytes = v29;
  v31 = off_14033D628;
  v27->LengthInBytes = v29 + 24;
  v27->Version = 1;
  v27->PolicyType = ClfsMgmtPolicyNewContainerExtension;
  memmove((char *)&v27->PolicyParameters + 2, v31, v29);
  v24 = ClfsMgmtInstallPolicy(pplfoLog, v28, v30);
  ExFreePoolWithTag(v28, 0);
  if ( v24 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 10;
    goto LABEL_98;
  }
  LogFileName.Length = Destination.Length - CmpClfsLogPrefix.Length;
  ObjectAttributes.Length = 48;
  LogFileName.MaximumLength = Destination.MaximumLength - CmpClfsLogPrefix.Length;
  LogFileName.Buffer = (wchar_t *)((char *)Destination.Buffer + CmpClfsLogPrefix.Length);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v32 = ZwCreateTransactionManager((PHANDLE)v11 + 4, 0xF003Fu, &ObjectAttributes, &LogFileName, CreateOptions[0], 0);
  v24 = v32;
  if ( v32 == -1073741771 )
  {
    if ( Destination.Buffer )
      RtlFreeUnicodeString(&Destination);
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
      goto LABEL_39;
    goto LABEL_82;
  }
  if ( v32 >= 0 )
    v24 = ZwRecoverTransactionManager((HANDLE)v11[4]);
LABEL_39:
  RtlFreeUnicodeString(&Destination);
  if ( v24 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 11;
    goto LABEL_98;
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
  v24 = ObReferenceObjectByHandle(
          (HANDLE)v11[4],
          0xF003Fu,
          (POBJECT_TYPE)TmTransactionManagerObjectType,
          0,
          &Object,
          0LL);
  v11[5] = Object;
  if ( v24 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 12;
    goto LABEL_98;
  }
  v33 = (HANDLE *)(v11 + 6);
  v34 = *(GUID *)(*(_QWORD *)(v6 + 64) + 112LL);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ResourceManagerGuid = v34;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v24 = ZwCreateResourceManager(
          (PHANDLE)v11 + 6,
          0x1F007Fu,
          (HANDLE)v11[4],
          &ResourceManagerGuid,
          &ObjectAttributes,
          0,
          0LL);
  if ( v24 == -1073741771 )
    v24 = ZwOpenResourceManager((PHANDLE)v11 + 6, 0x1F007Fu, (HANDLE)v11[4], &ResourceManagerGuid, &ObjectAttributes);
  if ( v24 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 13;
    goto LABEL_98;
  }
  v24 = ZwRecoverResourceManager(*v33);
  if ( v24 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 14;
    goto LABEL_98;
  }
  v24 = ObReferenceObjectByHandle(
          *v33,
          0x1F007Fu,
          (POBJECT_TYPE)TmResourceManagerObjectType,
          0,
          (PVOID *)CreateOptions,
          0LL);
  v11[7] = *(_QWORD *)CreateOptions;
  if ( v24 < 0 )
  {
    *(_DWORD *)(v6 + 5408) = 15;
    goto LABEL_98;
  }
  if ( a1 )
  {
    *(_QWORD *)(a1 + 5400) = v11;
    *((_DWORD *)v11 + 16) = 1;
    goto LABEL_52;
  }
  v37 = v11;
  v38 = &qword_14033BCA8;
  CmRmSystem = v11;
  v39 = 6LL;
  while ( 2 )
  {
    v40 = v38[3];
    if ( v40 && (*(_DWORD *)(v40 + 144) & 2) == 0 )
    {
      ++v37[16];
      v41 = v38[3];
      goto LABEL_64;
    }
    if ( *v38 && (*(_DWORD *)(*v38 + 144) & 2) == 0 )
    {
      ++v37[16];
      v41 = *v38;
LABEL_64:
      *(_QWORD *)(v41 + 5400) = v37;
      v37 = CmRmSystem;
    }
    v38 += 19;
    if ( --v39 )
      continue;
    break;
  }
  *(_QWORD *)(CmpMasterHive + 5400) = v37;
  ++*((_DWORD *)CmRmSystem + 16);
LABEL_52:
  v11[10] = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpRmListLock);
  v36 = (_QWORD *)qword_14036ABB8;
  if ( *(__int64 **)qword_14036ABB8 != &CmpRmListHead )
    __fastfail(3u);
  *v11 = &CmpRmListHead;
  v11[1] = v36;
  *v36 = v11;
  qword_14036ABB8 = (__int64)v11;
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v46 )
    CmpStartRMLog((char *)v11, 0LL);
  return 0LL;
}
