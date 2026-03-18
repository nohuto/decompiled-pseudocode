/*
 * XREFs of MiCheckForControlAreaDeletion @ 0x140084944
 * Callers:
 *     MiDereferenceControlAreaPfnList @ 0x1400847B0 (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     MiDecrementControlAreaCount @ 0x14004B160 (MiDecrementControlAreaCount.c)
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
 *     MiClearFilePointer @ 0x1400851C4 (MiClearFilePointer.c)
 *     MiRemoveUnusedSegment @ 0x1400E40E4 (MiRemoveUnusedSegment.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

int __fastcall MiCheckForControlAreaDeletion(__int64 a1)
{
  _UNKNOWN **v1; // rax
  int v3; // edx
  __int64 v4; // rdi
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  int v7; // r9d
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v1 = &retaddr;
  if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) && !*(_QWORD *)(a1 + 24) )
  {
    v3 = *(_DWORD *)(a1 + 56);
    if ( (v3 & 1) == 0 && (v3 & 0x100) == 0 )
    {
      v4 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
      *(_DWORD *)(a1 + 56) = v3 | 1;
      MiClearFilePointer(a1);
      MiRemoveUnusedSegment(a1);
      _InterlockedIncrement64((volatile signed __int64 *)(v4 + 1288));
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 1280));
      v5 = *(_QWORD **)(v4 + 1496);
      v6 = (_QWORD *)(a1 + 8);
      if ( *v5 != v4 + 1488 )
        __fastfail(3u);
      *v6 = v4 + 1488;
      *(_QWORD *)(a1 + 16) = v5;
      *v5 = v6;
      *(_QWORD *)(v4 + 1496) = v6;
      *(_DWORD *)(a1 + 56) |= 0x8000000u;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1280));
      KeReleaseSemaphoreEx(v4 + 1456, 0, 1, v7, 0);
      LODWORD(v1) = MiDecrementControlAreaCount(v4, (volatile signed __int64 *)(v4 + 1288));
    }
  }
  return (int)v1;
}
