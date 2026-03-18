/*
 * XREFs of ExIsResourceAcquiredSharedLite @ 0x140081010
 * Callers:
 *     CmpDoQueryKeyName @ 0x1400AF1C0 (CmpDoQueryKeyName.c)
 *     CmUnloadKey @ 0x14046DF74 (CmUnloadKey.c)
 *     NtDeleteKey @ 0x14047207C (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x140474B2C (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x14047AFF0 (NtSetValueKey.c)
 *     NtEnumerateValueKey @ 0x14047E270 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140481BE0 (NtEnumerateKey.c)
 *     CmpSecurityMethod @ 0x1404832A0 (CmpSecurityMethod.c)
 *     NtQueryKey @ 0x1404A8630 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x1404A8B80 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x1404A9210 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x1404A97C0 (CmpDeleteKeyObject.c)
 *     CmLoadDifferencingKey @ 0x1404E2048 (CmLoadDifferencingKey.c)
 *     CmPostCallbackNotificationEx @ 0x1404E32E0 (CmPostCallbackNotificationEx.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E75A8 (FsRtlAcquireFileForCcFlushEx.c)
 *     PpDevNodeLockTree @ 0x14052717C (PpDevNodeLockTree.c)
 *     NtSetInformationKey @ 0x14056AC30 (NtSetInformationKey.c)
 *     NtQueryMultipleValueKey @ 0x140580F4C (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x14059294C (NtFlushKey.c)
 *     NtRenameKey @ 0x14068812C (NtRenameKey.c)
 *     NtReplaceKey @ 0x14068866C (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1406889E0 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140688C8C (NtSaveKeyEx.c)
 *     CmpDoReOpenTransKey @ 0x1406A21DC (CmpDoReOpenTransKey.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x14008B4F0 (KxWaitForLockOwnerShipWithIrql.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140204C6C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpFastResourceLegacyIsAcquiredShared @ 0x1402856F8 (ExpFastResourceLegacyIsAcquiredShared.c)
 */

ULONG __stdcall ExIsResourceAcquiredSharedLite(PERESOURCE Resource)
{
  USHORT Flag; // cx
  ULONG v3; // esi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 SpareByte0; // rbp
  ULONG v7; // r14d
  char v8; // al
  __int64 v9; // rdx
  POWNER_ENTRY OwnerTable; // rax
  unsigned int TableSize; // edx
  int v12; // ecx
  bool v13; // zf
  __int64 v14; // rax
  unsigned __int8 CurrentIrql; // dl
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v16; // r14d
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  KSPIN_LOCK *p_SpinLock; // [rsp+38h] [rbp-30h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int8 v20; // [rsp+78h] [rbp+10h] BYREF

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  }
  if ( (Flag & 1) == 0 )
  {
    if ( !Resource->ActiveEntries )
      return 0;
    CurrentThread = KeGetCurrentThread();
    if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
      return Resource->OwnerEntry.TableSize >> 3;
    v3 = 0;
    if ( (Flag & 0x80u) != 0 )
      return v3;
    SpareByte0 = CurrentThread->SchedulerApc.SpareByte0;
    v7 = 0;
    p_SpinLock = &Resource->SpinLock;
    v17 = 0LL;
    v20 = 2;
    _disable();
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      v8 = KiFastAcquireQueuedSpinLockInstrumented(&v17, &Resource->SpinLock, &v20);
    }
    else
    {
      v8 = 0;
      v9 = _InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)&v17);
      if ( v9 )
      {
        KxWaitForLockOwnerShipWithIrql(&v17, v9, &v20);
        v8 = 1;
      }
    }
    if ( v8 )
    {
      _disable();
      __writecr8(v20);
    }
    OwnerTable = Resource->OwnerTable;
    if ( OwnerTable )
    {
      TableSize = OwnerTable->TableSize;
      if ( (unsigned int)SpareByte0 < TableSize
        && (struct _KTHREAD *)OwnerTable[SpareByte0].OwnerThread == CurrentThread )
      {
        v16 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable[SpareByte0].TableSize;
      }
      else
      {
        v12 = 1;
        if ( TableSize <= 1 )
          goto LABEL_20;
        while ( 1 )
        {
          v13 = OwnerTable[1].OwnerThread == (_QWORD)CurrentThread;
          ++OwnerTable;
          if ( v13 )
            break;
          if ( ++v12 >= TableSize )
            goto LABEL_20;
        }
        v16 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable->TableSize;
      }
      v7 = *(unsigned int *)&v16 >> 3;
    }
LABEL_20:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v17, retaddr);
      goto LABEL_23;
    }
    _m_prefetchw(&v17);
    v14 = v17;
    if ( !v17 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)p_SpinLock, 0LL, (signed __int64)&v17) == &v17 )
      {
LABEL_23:
        _enable();
        return v7;
      }
      v14 = KxWaitForLockChainValid(&v17);
    }
    v17 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v14 + 8), 1uLL);
    goto LABEL_23;
  }
  return ExpFastResourceLegacyIsAcquiredShared(Resource);
}
