/*
 * XREFs of ExIsResourceAcquiredSharedLite @ 0x1400FDA10
 * Callers:
 *     CmpDoQueryKeyName @ 0x1400080A0 (CmpDoQueryKeyName.c)
 *     NtDeleteValueKey @ 0x14049ACA0 (NtDeleteValueKey.c)
 *     CmPostCallbackNotificationEx @ 0x14049EC90 (CmPostCallbackNotificationEx.c)
 *     CmLoadDifferencingKey @ 0x14049ED68 (CmLoadDifferencingKey.c)
 *     NtSetValueKey @ 0x1404A3E60 (NtSetValueKey.c)
 *     CmpSecurityMethod @ 0x1404A6510 (CmpSecurityMethod.c)
 *     CmPostCallbackNotification @ 0x1404A7118 (CmPostCallbackNotification.c)
 *     NtEnumerateKey @ 0x1404AC500 (NtEnumerateKey.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E0A44 (FsRtlAcquireFileForCcFlushEx.c)
 *     PpDevNodeLockTree @ 0x14050BFCC (PpDevNodeLockTree.c)
 *     CmUnloadKey @ 0x14054CB34 (CmUnloadKey.c)
 *     NtQueryMultipleValueKey @ 0x1405615AC (NtQueryMultipleValueKey.c)
 *     NtDeleteKey @ 0x14056D9C4 (NtDeleteKey.c)
 *     NtFlushKey @ 0x14057A130 (NtFlushKey.c)
 *     NtEnumerateValueKey @ 0x140596600 (NtEnumerateValueKey.c)
 *     NtSetInformationKey @ 0x140596B30 (NtSetInformationKey.c)
 *     NtQueryValueKey @ 0x14059DE50 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x14059E7B0 (NtQueryKey.c)
 *     CmpParseKey @ 0x14059EF70 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x14059F520 (CmpDeleteKeyObject.c)
 *     NtRenameKey @ 0x1406EC3E0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1406EC954 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1406ECCC8 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x1406ECF78 (NtSaveKeyEx.c)
 *     CmpDoReOpenTransKey @ 0x1407073A8 (CmpDoReOpenTransKey.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x14024244C (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpFastResourceLegacyIsAcquiredShared @ 0x1402B9F08 (ExpFastResourceLegacyIsAcquiredShared.c)
 */

ULONG __stdcall ExIsResourceAcquiredSharedLite(PERESOURCE Resource)
{
  __int64 CurrentIrql; // rdx
  USHORT Flag; // cx
  ULONG v4; // esi
  struct _KTHREAD *CurrentThread; // rbx
  ULONG v7; // ebp
  __int64 SpareByte0; // r15
  char v9; // al
  _QWORD *v10; // rdx
  POWNER_ENTRY OwnerTable; // rax
  unsigned int TableSize; // edx
  int v13; // ecx
  bool v14; // zf
  __int64 v15; // rax
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 v16; // ebp
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  KSPIN_LOCK *p_SpinLock; // [rsp+38h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int8 v20; // [rsp+78h] [rbp+10h] BYREF

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (unsigned __int8)CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 2uLL, 0LL);
  }
  if ( (Flag & 1) == 0 )
  {
    if ( !Resource->ActiveEntries )
      return 0;
    CurrentThread = KeGetCurrentThread();
    if ( (struct _KTHREAD *)Resource->OwnerEntry.OwnerThread == CurrentThread )
      return Resource->OwnerEntry.TableSize >> 3;
    v4 = 0;
    if ( (Flag & 0x80u) != 0 )
      return v4;
    v7 = 0;
    SpareByte0 = CurrentThread->SchedulerApc.SpareByte0;
    p_SpinLock = &Resource->SpinLock;
    v17 = 0LL;
    v20 = 2;
    _disable();
    LOBYTE(CurrentIrql) = 1;
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), CurrentIrql);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      v9 = KiFastAcquireQueuedSpinLockInstrumented(&v17, &Resource->SpinLock, &v20);
    }
    else
    {
      v9 = 0;
      v10 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&Resource->SpinLock, (__int64)&v17);
      if ( v10 )
      {
        KxWaitForLockOwnerShipWithIrql((__int64)&v17, v10, &v20);
        v9 = 1;
      }
    }
    if ( v9 )
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
        v13 = 1;
        if ( TableSize <= 1 )
          goto LABEL_23;
        while ( 1 )
        {
          v14 = OwnerTable[1].OwnerThread == (_QWORD)CurrentThread;
          ++OwnerTable;
          if ( v14 )
            break;
          if ( ++v13 >= TableSize )
            goto LABEL_23;
        }
        v16 = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)OwnerTable->TableSize;
      }
      v7 = *(unsigned int *)&v16 >> 3;
    }
LABEL_23:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v17, retaddr);
      goto LABEL_26;
    }
    _m_prefetchw(&v17);
    v15 = v17;
    if ( !v17 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)p_SpinLock, 0LL, (signed __int64)&v17) == &v17 )
      {
LABEL_26:
        KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
        _enable();
        return v7;
      }
      v15 = KxWaitForLockChainValid(&v17);
    }
    v17 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v15 + 8), 1uLL);
    goto LABEL_26;
  }
  return ExpFastResourceLegacyIsAcquiredShared(Resource);
}
