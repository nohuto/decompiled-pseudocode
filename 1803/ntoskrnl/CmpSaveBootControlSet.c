/*
 * XREFs of CmpSaveBootControlSet @ 0x1406EB510
 * Callers:
 *     CmpAcceptBoot @ 0x14061378C (CmpAcceptBoot.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140009020 (CmpAllocateTransientPoolWithTag.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     RtlUnicodeStringPrintf @ 0x1401476F8 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401A7860 (ZwCreateKey.c)
 *     ZwQuerySecurityObject @ 0x1401A9F20 (ZwQuerySecurityObject.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpRebuildKcbCache @ 0x1404985B8 (CmpRebuildKcbCache.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmObReferenceObjectByHandle @ 0x1404A48AC (CmObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpCleanupRollbackPacket @ 0x14054E0A8 (CmpCleanupRollbackPacket.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x140583DF4 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpAbortRollbackPacket @ 0x1405E9E8C (CmpAbortRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1406117BC (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x140614070 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x14061445C (CmpInvalidateSubtree.c)
 *     CmpRetryBackOff @ 0x1406F9BF4 (CmpRetryBackOff.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406FADDC (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpCopySyncTree @ 0x1406FD234 (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpSaveBootControlSet(unsigned __int16 a1)
{
  char v2; // r13
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rdi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v5; // r12
  signed int v6; // ebx
  _QWORD *v7; // r14
  ULONG_PTR *v8; // rdi
  int v9; // esi
  void *v10; // r8
  void *v11; // r8
  char v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r15
  int v16; // eax
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  char v21; // bl
  BOOLEAN v23; // [rsp+48h] [rbp-C0h]
  ULONG Length; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h]
  PVOID Object; // [rsp+70h] [rbp-98h] BYREF
  PVOID v30; // [rsp+78h] [rbp-90h] BYREF
  int v31; // [rsp+80h] [rbp-88h] BYREF
  ULONG Disposition; // [rsp+84h] [rbp-84h] BYREF
  int v33; // [rsp+88h] [rbp-80h] BYREF
  signed int v34; // [rsp+8Ch] [rbp-7Ch] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v36[2]; // [rsp+98h] [rbp-70h] BYREF
  char v37; // [rsp+A8h] [rbp-60h] BYREF
  int v38; // [rsp+ACh] [rbp-5Ch]
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v41[48]; // [rsp+F0h] [rbp-18h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+18h] BYREF
  int *v43; // [rsp+140h] [rbp+38h]
  __int64 v44; // [rsp+148h] [rbp+40h]
  EVENT_DATA_DESCRIPTOR v45; // [rsp+150h] [rbp+48h] BYREF
  signed int *v46; // [rsp+170h] [rbp+68h]
  __int64 v47; // [rsp+178h] [rbp+70h]
  char v48; // [rsp+188h] [rbp+80h] BYREF

  KeyHandle = 0LL;
  Object = 0LL;
  v2 = 0;
  LODWORD(v25) = 0;
  memset(v41, 0, sizeof(v41));
  Handle = 0LL;
  v27 = 0LL;
  TransientPoolWithTag = 0LL;
  v28 = 0LL;
  Length = 0;
  CurrentThread = KeGetCurrentThread();
  v30 = 0LL;
  v31 = 0;
  --CurrentThread->KernelApcDisable;
  v23 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v5 = v23;
  if ( !v23 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v6 = -1073741431;
LABEL_3:
    v7 = Object;
    v8 = (ULONG_PTR *)v30;
    goto LABEL_34;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSet;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 < 0 )
    goto LABEL_3;
  v9 = 1;
  if ( ZwQuerySecurityObject(KeyHandle, 4u, 0LL, 0, &Length) == -1073741789 )
  {
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, Length, 0x20204D43u);
    if ( TransientPoolWithTag )
    {
      if ( ZwQuerySecurityObject(KeyHandle, 4u, TransientPoolWithTag, Length, &Length) < 0 )
      {
        CmSiFreeMemory(TransientPoolWithTag);
        TransientPoolWithTag = 0LL;
      }
    }
  }
  DestinationString.Buffer = (wchar_t *)&v48;
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  RtlUnicodeStringPrintf(&DestinationString, L"\\Registry\\Machine\\System\\ControlSet%03d", a1);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = TransientPoolWithTag;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v6 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( TransientPoolWithTag )
    CmSiFreeMemory(TransientPoolWithTag);
  if ( v6 < 0 )
    goto LABEL_3;
  v6 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v10, 0, &Object, 0LL);
  if ( v6 < 0 )
    goto LABEL_3;
  v6 = CmObReferenceObjectByHandle(Handle, 0x20006u, v11, 0, &v30, 0LL);
  if ( v6 < 0 )
    goto LABEL_3;
  CmpLockRegistryExclusive();
  v7 = Object;
  v8 = (ULONG_PTR *)v30;
  while ( 1 )
  {
    v12 = 0;
    v6 = CmpPerformKeyBodyDeletionCheck((__int64)v7, 0LL);
    if ( v6 < 0 )
      break;
    v6 = CmpPerformKeyBodyDeletionCheck((__int64)v8, 0LL);
    if ( v6 < 0 )
      break;
    v15 = v8[1];
    LOBYTE(v13) = 1;
    v16 = CmpTryAcquireKcbIXLocks(v15, v13, v14, (__int64)&v27);
    v6 = v16;
    if ( v16 == -1073741267 )
    {
      v12 = 1;
    }
    else if ( v16 < 0 )
    {
      break;
    }
    v36[0] = 0LL;
    v36[1] = &v27;
    CmpEnumerateAllHigherLayerKcbs(
      v15,
      (unsigned int)CmpCleanUpHigherLayerKcbCachesPreCallback,
      (unsigned int)CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback,
      (unsigned int)v36,
      1,
      1);
    v6 = HIDWORD(v36[0]);
    if ( HIDWORD(v36[0]) == -1073741267 )
    {
      v12 = 1;
    }
    else if ( v36[0] < 0 )
    {
      break;
    }
    v17 = CmpPrepareForSubtreeInvalidation(v15, (__int64)&v27);
    v6 = v17;
    if ( v17 != -1073741267 )
    {
      if ( v17 < 0 )
        break;
      if ( !v12 )
      {
        v38 = 8;
        v37 = 0;
        CmpEnumerateAllHigherLayerKcbs(
          v15,
          (unsigned int)CmpCleanUpHigherLayerKcbCachesPreCallback,
          (unsigned int)CmpInvalidateAllHigherLayerKcbsPostCallback,
          (unsigned int)&v37,
          1,
          1);
        CmpInvalidateSubtree(v15, 8u, &v25);
        CmpAttachToRegistryProcess((__int64)v41);
        v2 = 1;
        if ( Disposition == 1 )
          v9 = 0;
        v21 = CmpCopySyncTree(*(_QWORD *)(v7[1] + 24LL), 2, v9);
        CmpRebuildKcbCache(v8[1]);
        v6 = v21 == 0 ? 0xC000014C : 0;
        break;
      }
    }
    CmpLogTransactionAbortedWithChildName(v15, 0LL, 0xCu, v18, v27);
    CmpUnlockRegistry();
    v6 = CmpAbortRollbackPacket((__int64)&v27);
    if ( v6 < 0 )
      goto LABEL_33;
    CmpRetryBackOff(&v31, v19, v20);
    CmpCleanupRollbackPacket((__int64)&v27);
    v27 = 0LL;
    v28 = 0LL;
    CmpLockRegistryExclusive();
  }
  CmpUnlockRegistry();
  if ( v2 )
    KiUnstackDetachProcess((__int64)v41, 0LL);
LABEL_33:
  v5 = v23;
LABEL_34:
  CmpCleanupRollbackPacket((__int64)&v27);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v5 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v6 < 0 )
  {
    if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 0x400000000000uLL) )
    {
      v34 = v6;
      v46 = &v34;
      v47 = 4LL;
      TlgWrite(&stru_140397090, &unk_140307F19, 0LL, 0LL, 3u, &v45);
    }
  }
  else if ( stru_140397090.LevelPlus1 > 5 && TlgKeywordOn(&stru_140397090, 0x400000000000uLL) )
  {
    v33 = v25;
    v43 = &v33;
    v44 = 4LL;
    TlgWrite(&stru_140397090, &unk_140307F4E, 0LL, 0LL, 3u, &pData);
  }
  return (unsigned int)v6;
}
