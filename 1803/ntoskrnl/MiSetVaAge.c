/*
 * XREFs of MiSetVaAge @ 0x140125600
 * Callers:
 *     MiUnlockWsle @ 0x14004EB38 (MiUnlockWsle.c)
 *     MiUpdateWsleAge @ 0x14004F124 (MiUpdateWsleAge.c)
 *     MiActOnPte @ 0x140050360 (MiActOnPte.c)
 *     MiTrimThisWsle @ 0x14012ABC0 (MiTrimThisWsle.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 *     MiResetAccessBitPte @ 0x140164490 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x140259F10 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiUpdateWorkingSetAgeDistribution @ 0x1400141A0 (MiUpdateWorkingSetAgeDistribution.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400F3540 (ExpAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiWriteValidPteVolatile @ 0x1401259B0 (MiWriteValidPteVolatile.c)
 *     MiRebuildPageTableLeafAges @ 0x140125A40 (MiRebuildPageTableLeafAges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSetVaAge(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v6; // r15
  int v7; // r13d
  unsigned __int64 v8; // rdx
  int v9; // r9d
  char v10; // al
  int v11; // ecx
  char v12; // bl
  unsigned __int64 v13; // rdx
  char v14; // bl
  unsigned __int8 v15; // r14
  volatile LONG *v16; // r12
  volatile signed __int32 *v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v20; // rax
  int v21; // r9d
  int v22; // ecx
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r8
  LONG *SharedVm; // rax
  _BYTE *v27; // [rsp+60h] [rbp+8h]
  int v28; // [rsp+70h] [rbp+18h]

  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v27 = 0LL;
    v7 = 1;
    if ( MiPteInShadowRange(v6)
      && (MiFlags & 0x1800000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v8 & 1) != 0
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      v23 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 8 * ((v6 >> 3) & 0x1FF));
        v25 = v8 | 0x20;
        if ( (v24 & 0x20) == 0 )
          v25 = v8;
        v8 = v25;
        if ( (v24 & 0x42) != 0 )
          v8 = v25 | 0x42;
      }
    }
    v10 = *(_BYTE *)(a1 + 184);
    v11 = v9;
    v12 = (v8 >> 60) & 7;
    v13 = HIBYTE(v8);
    v14 = v13 & 0xF | (16 * v12);
    v15 = v14 & 0xF;
    LOBYTE(v11) = (v14 & 0xF) == 8;
    v28 = v11;
  }
  else
  {
    v7 = 0;
    v20 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v22 = 1;
    v27 = (_BYTE *)(48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v10 = *(_BYTE *)(a1 + 184);
    v15 = (*v27 >> 1) & 7;
    if ( (v10 & 7) == 0 )
      v22 = v21;
    v28 = v22;
    v14 = v22;
  }
  v16 = &dword_1403CCD68;
  if ( (v10 & 7) == 2 )
    v17 = &dword_1403CCD68;
  else
    v17 = (volatile signed __int32 *)(a1 + 232);
  LOBYTE(v13) = -1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v17, v13);
  else
    ExpAcquireSpinLockExclusive(v17, 0xFFu);
  if ( a3 == 8 && *(_QWORD *)(a1 + 112) <= (unsigned __int64)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 6LL) )
  {
    SharedVm = MiGetSharedVm(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel(SharedVm + 10);
    return 0LL;
  }
  else
  {
    if ( v15 == 8 )
      --*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
    if ( !v28 )
      MiUpdateWorkingSetAgeDistribution(a1, a2, v15, -1LL);
    if ( (unsigned __int8)(a3 - 1) <= 5u
      && (MI_READ_PTE_LOCK_FREE(v6) & 0x20) != 0
      && (a2 > 0x7FFFFFFEFFFFLL || (*(_BYTE *)(a1 + 184) & 7) != 0 || !*(_QWORD *)(a1 + 584)) )
    {
      a3 = 0;
    }
    if ( v27 )
      *(_QWORD *)v27 ^= (*(_DWORD *)v27 ^ (2 * a3)) & 0xE;
    else
      MiWriteValidPteVolatile(v6, 0x80000000LL, (unsigned __int8)(v14 ^ (a3 ^ v14) & 0xF));
    if ( a3 >= 8u )
    {
      if ( a3 == 8 )
        ++*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
    }
    else if ( v7 || (*(_BYTE *)(a1 + 184) & 7) == 0 )
    {
      MiUpdateWorkingSetAgeDistribution(a1, a2, a3, 1LL);
    }
    if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
      v16 = (volatile LONG *)(a1 + 232);
    ExReleaseSpinLockExclusiveFromDpcLevel(v16);
    if ( v7 )
      MiRebuildPageTableLeafAges(v18, a2);
    return 1LL;
  }
}
