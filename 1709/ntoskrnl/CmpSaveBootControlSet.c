/*
 * XREFs of CmpSaveBootControlSet @ 0x1405A4B40
 * Callers:
 *     NtInitializeRegistry @ 0x1405AD498 (NtInitializeRegistry.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     RtlUnicodeStringPrintf @ 0x1401331BC (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14017DC60 (ZwCreateKey.c)
 *     ZwQuerySecurityObject @ 0x1401802E0 (ZwQuerySecurityObject.c)
 *     CmObReferenceObjectByHandle @ 0x14047AF90 (CmObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140482C20 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     CmpCleanupRollbackPacket @ 0x1404E691C (CmpCleanupRollbackPacket.c)
 *     CmpRebuildKcbCache @ 0x1405695C4 (CmpRebuildKcbCache.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14059E850 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpCopySyncTree @ 0x1405A4F80 (CmpCopySyncTree.c)
 *     CmpInvalidateSubtree @ 0x1405A6E98 (CmpInvalidateSubtree.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x1405A6ED8 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1405A6F34 (CmpTryAcquireKcbIXLocks.c)
 *     CmpAbortRollbackPacket @ 0x1405F2D18 (CmpAbortRollbackPacket.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1405F2DD8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpRetryBackOff @ 0x140696184 (CmpRetryBackOff.c)
 */

__int64 __fastcall CmpSaveBootControlSet(unsigned __int16 a1)
{
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rdi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v4; // r12
  signed int v5; // ebx
  __int64 v6; // rcx
  void *v7; // r8
  void *v8; // r8
  _QWORD *v9; // rsi
  ULONG_PTR *v10; // rdi
  char v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r14
  int v15; // eax
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rcx
  char v19; // al
  char v20; // bl
  __int64 v22; // rdx
  __int64 v23; // r8
  ULONG Length[2]; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-B0h] BYREF
  PVOID v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h]
  int v30; // [rsp+78h] [rbp-90h] BYREF
  ULONG Disposition; // [rsp+7Ch] [rbp-8Ch] BYREF
  ULONG v32; // [rsp+80h] [rbp-88h] BYREF
  signed int v33; // [rsp+84h] [rbp-84h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v36[2]; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-28h] BYREF
  ULONG *v39; // [rsp+100h] [rbp-8h]
  __int64 v40; // [rsp+108h] [rbp+0h]
  EVENT_DATA_DESCRIPTOR v41; // [rsp+110h] [rbp+8h] BYREF
  signed int *v42; // [rsp+130h] [rbp+28h]
  __int64 v43; // [rsp+138h] [rbp+30h]
  char v44; // [rsp+148h] [rbp+40h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  TransientPoolWithTag = 0LL;
  Length[0] = 0;
  v28 = 0LL;
  v29 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  Length[1] = 0;
  v27 = 0LL;
  --CurrentThread->KernelApcDisable;
  v30 = 0;
  v4 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v4 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v5 = -1073741431;
LABEL_41:
    v10 = (ULONG_PTR *)v27;
    v9 = Object;
    goto LABEL_25;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSet;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v5 < 0 )
    goto LABEL_41;
  if ( ZwQuerySecurityObject(KeyHandle, 4u, 0LL, 0, Length) == -1073741789 )
  {
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(v6, Length[0], 0x20204D43u);
    if ( TransientPoolWithTag )
    {
      if ( ZwQuerySecurityObject(KeyHandle, 4u, TransientPoolWithTag, Length[0], Length) < 0 )
      {
        MiDeleteSubsection(TransientPoolWithTag);
        TransientPoolWithTag = 0LL;
      }
    }
  }
  DestinationString.Buffer = (wchar_t *)&v44;
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  RtlUnicodeStringPrintf(&DestinationString, L"\\Registry\\Machine\\System\\ControlSet%03d", a1);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = TransientPoolWithTag;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v5 = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( TransientPoolWithTag )
    MiDeleteSubsection(TransientPoolWithTag);
  if ( v5 < 0 )
    goto LABEL_41;
  v5 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v7, 0, &Object, 0LL);
  if ( v5 < 0 )
    goto LABEL_41;
  v5 = CmObReferenceObjectByHandle(Handle, 0x20006u, v8, 0, &v27, 0LL);
  if ( v5 < 0 )
    goto LABEL_41;
  CmpLockRegistryExclusive();
  v9 = Object;
  v10 = (ULONG_PTR *)v27;
  while ( 1 )
  {
    v11 = 0;
    v5 = CmpPerformKeyBodyDeletionCheck((__int64)v9, 0LL);
    if ( v5 < 0 )
      break;
    v5 = CmpPerformKeyBodyDeletionCheck((__int64)v10, 0LL);
    if ( v5 < 0 )
      break;
    v14 = v10[1];
    LOBYTE(v12) = 1;
    v15 = CmpTryAcquireKcbIXLocks(v14, v12, v13, &v28);
    v5 = v15;
    if ( v15 == -1073741267 )
    {
      v11 = 1;
    }
    else if ( v15 < 0 )
    {
      break;
    }
    v36[0] = 0LL;
    v36[1] = 0LL;
    CmpEnumerateAllHigherLayerKcbs(
      v14,
      (unsigned int)CmpForceInvalidatePreCallback,
      (unsigned int)CmpForceInvalidatePostCallback,
      (unsigned int)v36,
      1,
      1);
    v5 = v36[0];
    if ( SLODWORD(v36[0]) < 0 )
      break;
    v16 = CmpPrepareForSubtreeInvalidation(v14, &v28);
    v5 = v16;
    if ( v16 != -1073741267 )
    {
      if ( v16 < 0 )
        break;
      if ( !v11 )
      {
        CmpInvalidateSubtree(v14, 8LL);
        v18 = *(_QWORD *)(v9[1] + 24LL);
        if ( Disposition == 1 )
          v19 = CmpCopySyncTree(v18, 2, 0);
        else
          v19 = CmpCopySyncTree(v18, 2, 1);
        v20 = v19;
        CmpRebuildKcbCache(v10[1]);
        v5 = v20 == 0 ? 0xC000014C : 0;
        break;
      }
    }
    CmpLogTransactionAbortedWithChildName(v14, 0LL, 0xCu, v17, v28);
    CmpUnlockRegistry();
    v5 = CmpAbortRollbackPacket(&v28);
    if ( v5 < 0 )
      goto LABEL_25;
    CmpRetryBackOff(&v30, v22, v23);
    CmpCleanupRollbackPacket((__int64)&v28);
    v28 = 0LL;
    v29 = 0LL;
    CmpLockRegistryExclusive();
  }
  CmpUnlockRegistry();
LABEL_25:
  CmpCleanupRollbackPacket((__int64)&v28);
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v4 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v5 < 0 )
  {
    if ( stru_1403549F0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403549F0, 0x400000000000uLL) )
    {
      v33 = v5;
      v42 = &v33;
      v43 = 4LL;
      TlgWrite(&stru_1403549F0, &unk_1402CE601, 0LL, 0LL, 3u, &v41);
    }
  }
  else if ( stru_1403549F0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403549F0, 0x400000000000uLL) )
  {
    v32 = Length[1];
    v39 = &v32;
    v40 = 4LL;
    TlgWrite(&stru_1403549F0, &unk_1402CE636, 0LL, 0LL, 3u, &pData);
  }
  return (unsigned int)v5;
}
