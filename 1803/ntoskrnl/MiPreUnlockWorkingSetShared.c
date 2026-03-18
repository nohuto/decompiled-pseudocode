/*
 * XREFs of MiPreUnlockWorkingSetShared @ 0x140083B98
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14000B2A0 (MiTrimOrAgeWorkingSet.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiMoveDirtyBitsToPfns @ 0x140023A70 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x14013EB40 (MiSetSystemCodeProtection.c)
 * Callees:
 *     MiReduceWs @ 0x140083CE4 (MiReduceWs.c)
 *     MiForcedTrim @ 0x140084224 (MiForcedTrim.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiForceAgeWorkingSet @ 0x1402598AC (MiForceAgeWorkingSet.c)
 */

char __fastcall MiPreUnlockWorkingSetShared(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // ecx
  int v6; // eax
  __int64 SharedVm; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx

  CurrentThread = KeGetCurrentThread();
  v4 = *(_DWORD *)(a1 + 184);
  v6 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 2);
  if ( (v6 & 0x400000) == 0 )
  {
    if ( (v4 & 0x8000000) != 0 )
    {
      SharedVm = MiGetSharedVm(a1);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(SharedVm + 40));
      *(_BYTE *)(a1 + 187) &= ~8u;
      v8 = MiGetSharedVm(a1);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 40));
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      LOBYTE(v9) = a2;
      if ( !MiForcedTrim(a1, v9) && (*(_BYTE *)(a1 + 184) & 0x40) != 0 )
      {
        v11 = *(_QWORD *)(a1 + 120);
        if ( v11 > *(_QWORD *)(a1 + 152) )
        {
          LOBYTE(v10) = a2;
          if ( (*(_DWORD *)(a1 + 4) & 0xF) != 0 )
            v12 = v11 - 1;
          else
            v12 = *(_QWORD *)(a1 + 152);
          MiReduceWs(a1, v10, v12);
        }
      }
    }
    LOBYTE(v6) = *(_BYTE *)(a1 + 187);
    if ( (v6 & 4) != 0 )
    {
      v16 = MiGetSharedVm(a1);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v16 + 40));
      *(_BYTE *)(a1 + 187) &= ~4u;
      v17 = MiGetSharedVm(a1);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 40));
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      LOBYTE(v18) = a2;
      MiForceAgeWorkingSet(a1, v18);
      LOBYTE(v6) = *(_BYTE *)(a1 + 187);
    }
    if ( (v6 & 0x10) != 0 )
    {
      v13 = MiGetSharedVm(a1);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v13 + 40));
      *(_BYTE *)(a1 + 187) &= ~0x10u;
      v14 = MiGetSharedVm(a1);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 40));
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      LOBYTE(v15) = a2;
      LOBYTE(v6) = MiReduceWs(a1, v15, *(_QWORD *)(a1 + 152));
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
  }
  return v6;
}
