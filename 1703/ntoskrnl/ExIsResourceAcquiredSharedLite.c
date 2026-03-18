/*
 * XREFs of ExIsResourceAcquiredSharedLite @ 0x14008D480
 * Callers:
 *     CmPostCallbackNotificationEx @ 0x1404346B0 (CmPostCallbackNotificationEx.c)
 *     NtQueryMultipleValueKey @ 0x140448D38 (NtQueryMultipleValueKey.c)
 *     NtFlushKey @ 0x140455BC8 (NtFlushKey.c)
 *     PpDevNodeLockTree @ 0x14048AC58 (PpDevNodeLockTree.c)
 *     NtSetValueKey @ 0x14048EDA0 (NtSetValueKey.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404C6E70 (FsRtlAcquireFileForCcFlushEx.c)
 *     CmUnloadKey @ 0x1404CB114 (CmUnloadKey.c)
 *     NtDeleteValueKey @ 0x1404CE698 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1404CF43C (NtDeleteKey.c)
 *     CmLoadDifferencingKey @ 0x1404D48BC (CmLoadDifferencingKey.c)
 *     CmpQueryKeyName @ 0x1404FC190 (CmpQueryKeyName.c)
 *     CmpSecurityMethod @ 0x1404FCC50 (CmpSecurityMethod.c)
 *     NtEnumerateKey @ 0x1404FD330 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1404FF290 (NtEnumerateValueKey.c)
 *     CmpDeleteKeyObject @ 0x140506F30 (CmpDeleteKeyObject.c)
 *     NtQueryValueKey @ 0x1405074B0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140507B00 (NtQueryKey.c)
 *     CmpParseKey @ 0x1405080E0 (CmpParseKey.c)
 *     NtSetInformationKey @ 0x140521290 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x14065F2B4 (NtRenameKey.c)
 *     NtReplaceKey @ 0x14065F7EC (NtReplaceKey.c)
 *     NtRestoreKey @ 0x14065FA60 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x14065FD04 (NtSaveKeyEx.c)
 *     CmpDoReOpenTransKey @ 0x140677CA0 (CmpDoReOpenTransKey.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x14011C530 (KxWaitForLockOwnerShipWithIrql.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401FE96C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpFastResourceLegacyIsAcquiredShared @ 0x14025BFB8 (ExpFastResourceLegacyIsAcquiredShared.c)
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
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v15; // r14d
  unsigned __int8 CurrentIrql; // dl
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
        v15 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable[SpareByte0].TableSize;
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
        v15 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable->TableSize;
      }
      v7 = *(unsigned int *)&v15 >> 3;
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
