/*
 * XREFs of MiSplitReducedCommitClonePage @ 0x140253E00
 * Callers:
 *     MiProbeLeafPteAccess @ 0x140021D80 (MiProbeLeafPteAccess.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLocateCloneAddress @ 0x140050C4C (MiLocateCloneAddress.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiLockProbePacketWorkingSet @ 0x1400BBD14 (MiLockProbePacketWorkingSet.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiLockLowestValidPageTable @ 0x140120AF0 (MiLockLowestValidPageTable.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140138D9C (MiUnlockProbePacketWorkingSet.c)
 *     MiCopyOnWriteCheckConditions @ 0x14026B6DC (MiCopyOnWriteCheckConditions.c)
 *     MiReturnFullProcessCommitment @ 0x1404B4A78 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1405B6870 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitReducedCommitClonePage(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  BOOL v4; // r14d
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v6; // rsi
  ULONG_PTR v7; // rcx
  __int64 v8; // rdx
  int v9; // ebp
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG_PTR v12; // rsi
  unsigned __int64 valid; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  _QWORD *CloneAddress; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  ULONG_PTR v22; // rsi
  unsigned __int64 v24; // [rsp+60h] [rbp+8h] BYREF
  __int64 v25; // [rsp+68h] [rbp+10h] BYREF

  MiUnlockProbePacketWorkingSet((__int64)a1, a2, a3);
  v4 = 1;
  CurrentThread = KeGetCurrentThread();
  v6 = ((*a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = a1[10];
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v7 + 880, 0LL);
  v9 = MiChargeFullProcessCommitment(a1[10], 1LL);
  if ( v9 >= 0 )
  {
    MiLockProbePacketWorkingSet((__int64)a1);
    valid = MiLockLowestValidPageTable(a1[12], v6, &v24);
    v16 = v24;
    a1[4] = valid;
    if ( v16 == v6 )
    {
      v25 = MI_READ_PTE_LOCK_FREE(v16);
      if ( (v25 & 1) != 0 )
      {
        v14 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25) >> 12) & 0xFFFFFFFFFLL)
            - 0x58000000000LL;
        if ( (*(_QWORD *)(v14 + 40) & 0x200000000000000LL) != 0 )
        {
          v14 = *(_QWORD *)(v14 + 8);
          if ( v14 < 0 )
          {
            CloneAddress = MiLocateCloneAddress(a1[10], v14 | 0x8000000000000000uLL);
            if ( CloneAddress )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v18 + 1296) + 328LL) > CloneAddress[12] )
              {
                v9 = MiCopyOnWrite(*a1, v6, 0xFFFFFFFFFFFFFFFFuLL, 0);
                v4 = v9 < 0;
              }
            }
          }
        }
      }
    }
    MiUnlockProbePacketWorkingSet((__int64)a1, v14, v15);
    if ( v4 )
      MiReturnFullProcessCommitment(a1[10], 1LL, v20);
    v22 = a1[10];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v22 + 880), v19, v20, v21);
    KeAbPostRelease(v22 + 880);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( v9 < 0 )
      MiCopyOnWriteCheckConditions(a1[12], (unsigned int)v9);
    v9 = 0;
  }
  else
  {
    v12 = a1[10];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 880), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 880), v8, v10, v11);
    KeAbPostRelease(v12 + 880);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  MiLockProbePacketWorkingSet((__int64)a1);
  return (unsigned int)v9;
}
