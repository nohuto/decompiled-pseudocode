/*
 * XREFs of MiCheckForControlAreaDeletion @ 0x14010AA68
 * Callers:
 *     MiDereferenceControlAreaPfnList @ 0x14010A900 (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 *     MiRemoveUnusedSegment @ 0x1400A48A8 (MiRemoveUnusedSegment.c)
 *     MiClearFilePointer @ 0x14010AB40 (MiClearFilePointer.c)
 */

void __fastcall MiCheckForControlAreaDeletion(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edx
  __int64 v5; // rdx
  __int64 v6; // rbx
  _QWORD *v7; // rdx
  _QWORD *v8; // rax

  if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) && !*(_QWORD *)(a1 + 24) )
  {
    v4 = *(_DWORD *)(a1 + 56);
    if ( (v4 & 1) == 0 && (v4 & 0x100) == 0 )
    {
      v5 = v4 | 1u;
      v6 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
      *(_DWORD *)(a1 + 56) = v5;
      MiClearFilePointer(a1, v5, a3);
      MiRemoveUnusedSegment(a1);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v6 + 1280));
      v7 = *(_QWORD **)(v6 + 1488);
      v8 = (_QWORD *)(a1 + 8);
      if ( *v7 != v6 + 1480 )
        __fastfail(3u);
      *v8 = v6 + 1480;
      *(_QWORD *)(a1 + 16) = v7;
      *v7 = v8;
      *(_QWORD *)(v6 + 1488) = v8;
      *(_DWORD *)(a1 + 56) |= 0x8000000u;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 1280));
      KeReleaseSemaphoreEx(v6 + 1448, 0, 1);
    }
  }
}
