/*
 * XREFs of MiCopyToUserVa @ 0x14003C7F0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1404B4120 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiReserveLowPrioritySystemPtes @ 0x14003CAA0 (MiReserveLowPrioritySystemPtes.c)
 *     MiLocateCloneAddress @ 0x140050C4C (MiLocateCloneAddress.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockPageAndSetDirty @ 0x1401248B8 (MiLockPageAndSetDirty.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     MiCopyOnWriteCheckConditions @ 0x14026B6DC (MiCopyOnWriteCheckConditions.c)
 *     MiReturnFullProcessCommitment @ 0x1404B4A78 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1405B6870 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiCopyToUserVa(ULONG_PTR BugCheckParameter2, __int64 a2, const void *a3, size_t a4)
{
  __int64 v5; // r15
  ULONG_PTR v6; // rbx
  unsigned __int8 v7; // al
  unsigned __int8 v8; // si
  __int64 v9; // r14
  unsigned __int64 v10; // r12
  __int64 v11; // r13
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  _QWORD *v14; // rbx
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r8
  int v20; // esi
  _KPROCESS *v21; // r13
  __int64 v23; // rdx
  int v24; // r12d
  __int64 v25; // r8
  __int64 CloneAddress; // rax
  __int64 v27; // r8
  __int64 v28; // r8
  int v29; // [rsp+30h] [rbp-68h]
  unsigned __int64 ValidPte; // [rsp+38h] [rbp-60h] BYREF
  __int64 v31; // [rsp+40h] [rbp-58h]
  _KPROCESS *Process; // [rsp+48h] [rbp-50h]
  _KPROCESS *v33; // [rsp+50h] [rbp-48h]
  unsigned __int8 v34; // [rsp+A0h] [rbp+8h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v33 = Process;
  v5 = (__int64)&Process[1].IdealNode[12];
  v6 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v29 = 0;
LABEL_2:
  v7 = MiLockWorkingSetShared(v5);
LABEL_3:
  v8 = v7;
  v34 = v7;
  while ( 1 )
  {
    v9 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiMakeSystemAddressValid(v6, 0);
    ValidPte = MI_READ_PTE_LOCK_FREE(v6);
    if ( (ValidPte & 1) == 0 )
    {
      MiUnlockPageTableInternal(v5, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MiUnlockWorkingSetShared(v5, v8, v25);
      goto LABEL_2;
    }
    v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte) >> 12) & 0xFFFFFFFFFLL;
    v11 = 48 * v10 - 0x58000000000LL;
    if ( (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) == 0 )
      break;
    v31 = 0LL;
    v23 = *(_QWORD *)(v11 + 8);
    if ( v23 < 0 )
    {
      v21 = Process;
      if ( Process[1].Affinity.Bitmap[12] )
      {
        CloneAddress = MiLocateCloneAddress(Process, v23 | 0x8000000000000000uLL);
        v31 = CloneAddress;
        if ( CloneAddress )
        {
          if ( *(_QWORD *)(*(_QWORD *)&v21[1].IdealGlobalNode + 328LL) <= *(_QWORD *)(CloneAddress + 96) )
          {
            v31 = 0LL;
          }
          else if ( !v29 )
          {
            MiUnlockPageTableInternal(v5, v9);
            MiUnlockWorkingSetShared(v5, v8, v27);
            v20 = MiChargeFullProcessCommitment(v21, 1LL);
            if ( v20 < 0 )
              goto LABEL_14;
            v29 = 1;
            v7 = MiLockWorkingSetShared(v5);
            goto LABEL_3;
          }
        }
      }
    }
    v24 = MiCopyOnWrite(BugCheckParameter2);
    if ( v24 >= 0 )
    {
      ValidPte = MI_READ_PTE_LOCK_FREE(v6);
      v10 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte) >> 12) & 0xFFFFFFFFFLL;
      v11 = 48 * v10 - 0x58000000000LL;
      if ( v31 )
        v29 = 0;
      break;
    }
    MiUnlockPageTableInternal(v5, v9);
    MiUnlockWorkingSetShared(v5, v8, v28);
    MiCopyOnWriteCheckConditions(v5, (unsigned int)v24);
    MiLockWorkingSetShared(v5);
  }
  v12 = MiReserveLowPrioritySystemPtes(1LL);
  v14 = (_QWORD *)v12;
  if ( v12 )
  {
    v15 = (__int64)(v12 << 25) >> 16;
    ValidPte = MiMakeValidPte(v12, v10, 2684354564LL, v13);
    *v14 = ValidPte;
    if ( MiPteInShadowRange((unsigned __int64)v14) )
      MiWritePteShadow(v17, v16);
  }
  else
  {
    v15 = MiMapPageInHyperSpaceWorker(v10, 0LL, 0x80000000, v13);
  }
  memmove((void *)(v15 + (BugCheckParameter2 & 0xFFF)), a3, a4);
  if ( v14 )
    MiReleasePtes(&qword_1403CC5E0, v14, 1LL);
  else
    MiUnmapPageInHyperSpaceWorker(v15, 0x11u, 0x80000000);
  MiLockPageAndSetDirty(v11, 1LL);
  if ( v9 )
    MiUnlockPageTableInternal(v5, v9);
  MiUnlockWorkingSetShared(v5, v34, v18);
  v20 = 0;
  v21 = Process;
LABEL_14:
  if ( v29 )
    MiReturnFullProcessCommitment(v21, 1LL, v19);
  return (unsigned int)v20;
}
