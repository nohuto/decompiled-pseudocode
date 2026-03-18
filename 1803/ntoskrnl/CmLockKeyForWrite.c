/*
 * XREFs of CmLockKeyForWrite @ 0x140645D64
 * Callers:
 *     NtLockRegistryKey @ 0x140645CA0 (NtLockRegistryKey.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x1400A5EF0 (PsGetPermanentSiloContext.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     PsGetCurrentSilo @ 0x140105440 (PsGetCurrentSilo.c)
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpPerformSiloKeyLockTrackerEnabledCheck @ 0x140645F30 (CmpPerformSiloKeyLockTrackerEnabledCheck.c)
 *     CmpGlobalLockKeyForWrite @ 0x140645F54 (CmpGlobalLockKeyForWrite.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1406460E8 (CmpCreateSiloKeyLockEntry.c)
 *     CmpFreeSiloKeyLockEntry @ 0x1406F6E04 (CmpFreeSiloKeyLockEntry.c)
 */

__int64 __fastcall CmLockKeyForWrite(__int64 a1)
{
  _QWORD *SiloKeyLockEntry; // rsi
  unsigned __int64 CurrentSilo; // rax
  ULONG_PTR v4; // rdi
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rbp
  ULONG_PTR v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // r14
  _QWORD *i; // rax
  struct _KTHREAD *v16; // rax
  ULONG_PTR v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  ULONG_PTR j; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF
  __int64 v28; // [rsp+50h] [rbp+18h] BYREF

  SiloKeyLockEntry = 0LL;
  v28 = 0LL;
  CurrentSilo = PsGetCurrentSilo();
  BugCheckParameter2 = 0LL;
  PsGetPermanentSiloContext(CurrentSilo, CmpSiloContextSlot, &BugCheckParameter2);
  if ( !BugCheckParameter2 )
    return (unsigned int)-1073741637;
  CmpLockRegistry();
  v4 = *(_QWORD *)(a1 + 8);
  CmpLockKcbExclusive(v4);
  v6 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v6 < 0 )
    goto LABEL_23;
  if ( *(PVOID *)(v4 + 24) == CmpMasterHive )
  {
    v6 = -1073741811;
    goto LABEL_23;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = BugCheckParameter2;
  ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
  v6 = CmpPerformSiloKeyLockTrackerEnabledCheck(v10);
  if ( v6 < 0 )
    goto LABEL_22;
  v14 = (_QWORD *)(v10 + 16);
  for ( i = *(_QWORD **)(v10 + 16); i != v14; i = (_QWORD *)*i )
  {
    if ( i[2] == v4 )
    {
      v6 = 0;
      goto LABEL_22;
    }
  }
  ExReleasePushLockEx(v11, 0LL, v12, v13);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  SiloKeyLockEntry = (_QWORD *)CmpCreateSiloKeyLockEntry(v4);
  if ( SiloKeyLockEntry )
  {
    v6 = CmpGlobalLockKeyForWrite(v4, &v28);
    if ( v6 < 0 )
      goto LABEL_23;
    SiloKeyLockEntry[3] = v28;
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v10 = BugCheckParameter2;
    ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
    v6 = CmpPerformSiloKeyLockTrackerEnabledCheck(v10);
    if ( v6 >= 0 )
    {
      v18 = (_QWORD *)v14[1];
      if ( (_QWORD *)*v18 != v14 )
        __fastfail(3u);
      *SiloKeyLockEntry = v14;
      SiloKeyLockEntry[1] = v18;
      *v18 = SiloKeyLockEntry;
      v14[1] = SiloKeyLockEntry;
      ExReleasePushLockEx(v17, 0LL, v12, v13);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      CmpUnlockKcb(v4, v19, v20, v21);
      for ( j = *(_QWORD *)(v4 + 64); *(PVOID *)(j + 24) != CmpMasterHive; j = *(_QWORD *)(j + 64) )
      {
        CmpLockKcbExclusive(j);
        *(_WORD *)(j + 4) |= 0x100u;
        CmpUnlockKcb(j, v23, v24, v25);
      }
      v6 = 0;
      goto LABEL_17;
    }
LABEL_22:
    ExReleasePushLockEx(v10, 0LL, v12, v13);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    goto LABEL_23;
  }
  v6 = -1073741670;
LABEL_23:
  CmpUnlockKcb(v4, v5, v7, v8);
  if ( SiloKeyLockEntry )
    CmpFreeSiloKeyLockEntry(SiloKeyLockEntry);
LABEL_17:
  CmpUnlockRegistry();
  return (unsigned int)v6;
}
