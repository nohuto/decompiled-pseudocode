/*
 * XREFs of CmLockKeyForWrite @ 0x1405D90F8
 * Callers:
 *     NtLockRegistryKey @ 0x1405D9034 (NtLockRegistryKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentSilo @ 0x1400817D0 (PsGetCurrentSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetPermanentSiloContext @ 0x140103440 (PsGetPermanentSiloContext.c)
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140482C20 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpPerformSiloKeyLockTrackerEnabledCheck @ 0x1405D92C4 (CmpPerformSiloKeyLockTrackerEnabledCheck.c)
 *     CmpGlobalLockKeyForWrite @ 0x1405D92E8 (CmpGlobalLockKeyForWrite.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1405D947C (CmpCreateSiloKeyLockEntry.c)
 *     CmpFreeSiloKeyLockEntry @ 0x140693C14 (CmpFreeSiloKeyLockEntry.c)
 */

__int64 __fastcall CmLockKeyForWrite(__int64 a1)
{
  _QWORD *SiloKeyLockEntry; // rsi
  unsigned __int64 CurrentSilo; // rax
  ULONG_PTR v4; // rdi
  int v5; // ebx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // rbp
  ULONG_PTR v8; // rcx
  _QWORD *v9; // r14
  _QWORD *i; // rax
  struct _KTHREAD *v11; // rax
  ULONG_PTR v12; // rcx
  _QWORD *v13; // rax
  ULONG_PTR j; // rbx
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  SiloKeyLockEntry = 0LL;
  v17 = 0LL;
  CurrentSilo = PsGetCurrentSilo();
  BugCheckParameter2 = 0LL;
  PsGetPermanentSiloContext(CurrentSilo, CmpSiloContextSlot, &BugCheckParameter2);
  if ( !BugCheckParameter2 )
    return (unsigned int)-1073741637;
  CmpLockRegistry();
  v4 = *(_QWORD *)(a1 + 8);
  CmpLockKcbExclusive(v4);
  v5 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v5 < 0 )
    goto LABEL_23;
  if ( *(PVOID *)(v4 + 24) == CmpMasterHive )
  {
    v5 = -1073741811;
    goto LABEL_23;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = BugCheckParameter2;
  ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
  v5 = CmpPerformSiloKeyLockTrackerEnabledCheck(v7);
  if ( v5 < 0 )
    goto LABEL_22;
  v9 = (_QWORD *)(v7 + 16);
  for ( i = *(_QWORD **)(v7 + 16); i != v9; i = (_QWORD *)*i )
  {
    if ( i[2] == v4 )
    {
      v5 = 0;
      goto LABEL_22;
    }
  }
  ExReleasePushLockEx(v8, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  SiloKeyLockEntry = (_QWORD *)CmpCreateSiloKeyLockEntry(v4);
  if ( SiloKeyLockEntry )
  {
    v5 = CmpGlobalLockKeyForWrite(v4, &v17);
    if ( v5 < 0 )
      goto LABEL_23;
    SiloKeyLockEntry[3] = v17;
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    v7 = BugCheckParameter2;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    v5 = CmpPerformSiloKeyLockTrackerEnabledCheck(v7);
    if ( v5 >= 0 )
    {
      v13 = (_QWORD *)v9[1];
      if ( (_QWORD *)*v13 != v9 )
        __fastfail(3u);
      *SiloKeyLockEntry = v9;
      SiloKeyLockEntry[1] = v13;
      *v13 = SiloKeyLockEntry;
      v9[1] = SiloKeyLockEntry;
      ExReleasePushLockEx(v12, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      CmpUnlockKcb(v4);
      for ( j = *(_QWORD *)(v4 + 64); *(PVOID *)(j + 24) != CmpMasterHive; j = *(_QWORD *)(j + 64) )
      {
        CmpLockKcbExclusive(j);
        *(_WORD *)(j + 4) |= 0x100u;
        CmpUnlockKcb(j);
      }
      v5 = 0;
      goto LABEL_17;
    }
LABEL_22:
    ExReleasePushLockEx(v7, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    goto LABEL_23;
  }
  v5 = -1073741670;
LABEL_23:
  CmpUnlockKcb(v4);
  if ( SiloKeyLockEntry )
    CmpFreeSiloKeyLockEntry(SiloKeyLockEntry);
LABEL_17:
  CmpUnlockRegistry();
  return (unsigned int)v5;
}
