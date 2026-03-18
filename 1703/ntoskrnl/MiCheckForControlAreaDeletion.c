/*
 * XREFs of MiCheckForControlAreaDeletion @ 0x140016404
 * Callers:
 *     MiDereferenceControlAreaPfnList @ 0x1400162F8 (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     MiClearFilePointer @ 0x1400164D8 (MiClearFilePointer.c)
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x140096C90 (MiRemoveUnusedSegment.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiCheckForControlAreaDeletion(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rdi
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  int v6; // r9d

  if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) && !*(_QWORD *)(a1 + 24) )
  {
    v2 = *(_DWORD *)(a1 + 56);
    if ( (v2 & 1) == 0 && (v2 & 0x100) == 0 )
    {
      v3 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
      *(_DWORD *)(a1 + 56) = v2 | 1;
      MiClearFilePointer(a1);
      MiRemoveUnusedSegment(a1);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 1344));
      v4 = *(_QWORD **)(v3 + 1464);
      v5 = (_QWORD *)(a1 + 8);
      if ( *v4 != v3 + 1456 )
        __fastfail(3u);
      *v5 = v3 + 1456;
      *(_QWORD *)(a1 + 16) = v4;
      *v4 = v5;
      *(_QWORD *)(v3 + 1464) = v5;
      *(_DWORD *)(a1 + 56) |= 0x8000000u;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1344));
      KeReleaseSemaphoreEx(v3 + 1424, 0, 1, v6, 0);
    }
  }
}
