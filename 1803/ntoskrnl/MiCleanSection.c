/*
 * XREFs of MiCleanSection @ 0x14015E0C0
 * Callers:
 *     MiAttemptSectionDelete @ 0x1400BCE70 (MiAttemptSectionDelete.c)
 *     MiCheckControlArea @ 0x1400E5110 (MiCheckControlArea.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiInsertUnusedSegment @ 0x1400E44A8 (MiInsertUnusedSegment.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDestroySection @ 0x14015E144 (MiDestroySection.c)
 *     MiRemoveWakeListEntry @ 0x14024FF18 (MiRemoveWakeListEntry.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiCleanSection(__int64 a1, __int64 a2, char a3)
{
  KIRQL v4; // r14
  int v6; // esi
  BOOL v7; // r15d
  volatile LONG *v9; // r13
  int v10; // r12d
  __int64 v11; // rax
  __int64 inserted; // rdi
  __int64 v13; // rbx
  int v14[4]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+50h] [rbp-30h] BYREF
  int v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+5Ch] [rbp-24h]
  __int16 v18; // [rsp+60h] [rbp-20h]
  char v19; // [rsp+62h] [rbp-1Eh]
  int v20; // [rsp+64h] [rbp-1Ch]
  _QWORD v21[3]; // [rsp+68h] [rbp-18h] BYREF

  v4 = a2;
  v6 = 1;
  v7 = *(_QWORD *)(a1 + 64) != 0LL;
  while ( 1 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      goto LABEL_3;
    v17 = 0;
    v20 = 0;
    v9 = (volatile LONG *)(a1 + 72);
    v21[1] = v21;
    v16 = 4;
    v21[0] = v21;
    v15 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v15;
    v18 = 263;
    v19 = 6;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(v4);
    v10 = MiFlushSectionInternal(0LL, 0LL, (__int64 *)(a1 + 128), 0LL, 0LL, 0x80000000, v14);
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    MiRemoveWakeListEntry(a1, &v15);
    if ( !v17 )
      break;
    v11 = *(_QWORD *)(a1 + 40);
    if ( v11 != 1 || *(_QWORD *)(a1 + 24) )
      goto LABEL_10;
  }
  if ( v10 >= 0 )
  {
LABEL_3:
    *(_QWORD *)(a1 + 40) = 0LL;
    LOBYTE(a2) = v4;
    MiDestroySection(a1, a2, 0LL);
    return 1LL;
  }
  v11 = *(_QWORD *)(a1 + 40);
  v6 = 2;
LABEL_10:
  *(_QWORD *)(a1 + 40) = v11 - 1;
  if ( a3 )
    *(_DWORD *)(a1 + 56) |= 0x40000u;
  inserted = 0LL;
  if ( v6 == 2 && (inserted = MiInsertUnusedSegment(a1)) != 0 )
    v13 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  else
    v13 = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  __writecr8(v4);
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v13, v7, inserted);
  return 0LL;
}
