/*
 * XREFs of MiCleanSection @ 0x14010A810
 * Callers:
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 *     MiAttemptSectionDelete @ 0x14010A778 (MiAttemptSectionDelete.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertUnusedSegment @ 0x1400676AC (MiInsertUnusedSegment.c)
 *     MiDestroySection @ 0x14010A894 (MiDestroySection.c)
 *     MiRemoveWakeListEntry @ 0x140211AC4 (MiRemoveWakeListEntry.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiCleanSection(__int64 a1, __int64 a2, char a3)
{
  KIRQL v4; // r14
  int v6; // esi
  BOOL v7; // r15d
  int v9; // r13d
  __int64 inserted; // rbx
  __int64 v11; // rsi
  _DWORD v12[4]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v13; // [rsp+50h] [rbp-30h] BYREF
  int v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+5Ch] [rbp-24h]
  __int16 v16; // [rsp+60h] [rbp-20h]
  char v17; // [rsp+62h] [rbp-1Eh]
  int v18; // [rsp+64h] [rbp-1Ch]
  _QWORD v19[3]; // [rsp+68h] [rbp-18h] BYREF

  v4 = a2;
  v6 = 1;
  v7 = *(_QWORD *)(a1 + 64) != 0LL;
  while ( 1 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      goto LABEL_3;
    v15 = 0;
    v18 = 0;
    v19[1] = v19;
    v19[0] = v19;
    v13 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v13;
    v14 = 4;
    v16 = 263;
    v17 = 6;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(v4);
    v9 = MiFlushSectionInternal(0LL, 0LL, (_QWORD *)(a1 + 128), 0LL, 0LL, 0x80000000, v12);
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    MiRemoveWakeListEntry(a1, &v13);
    if ( !v15 )
      break;
    if ( *(_QWORD *)(a1 + 40) != 1LL || *(_QWORD *)(a1 + 24) )
      goto LABEL_10;
  }
  if ( v9 >= 0 )
  {
LABEL_3:
    *(_QWORD *)(a1 + 40) = 0LL;
    LOBYTE(a2) = v4;
    MiDestroySection(a1, a2, 0LL);
    return 1LL;
  }
  v6 = 2;
LABEL_10:
  --*(_QWORD *)(a1 + 40);
  if ( a3 )
    *(_DWORD *)(a1 + 56) |= 0x40000u;
  inserted = 0LL;
  if ( v6 == 2 && (inserted = MiInsertUnusedSegment(a1)) != 0 )
    v11 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  else
    v11 = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  __writecr8(v4);
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v11, v7, inserted);
  return 0LL;
}
