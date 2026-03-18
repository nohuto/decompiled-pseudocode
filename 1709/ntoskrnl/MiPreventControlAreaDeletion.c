/*
 * XREFs of MiPreventControlAreaDeletion @ 0x1400F3B84
 * Callers:
 *     MiTrimSharedPage @ 0x1400F1EDC (MiTrimSharedPage.c)
 *     MiPurgeBadFileOnlyPages @ 0x140223684 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReferenceSubsection @ 0x1400A2330 (MiReferenceSubsection.c)
 *     MiRemoveUnusedSegment @ 0x1400A48A8 (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x1400A4908 (MiBuildWakeList.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 */

__int64 __fastcall MiPreventControlAreaDeletion(__int64 a1, int a2, __int64 *a3, __int64 **a4)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 PrototypePteDirect; // rax
  __int64 v10; // r14
  __int64 v12; // rbx
  volatile LONG *v13; // rsi
  int v14; // ecx
  __int64 *v15; // rax

  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0LL;
  *a4 = 0LL;
  *a3 = 0LL;
  PrototypePteDirect = MiGetPrototypePteDirect(v4);
  v10 = PrototypePteDirect;
  if ( (*(_BYTE *)(PrototypePteDirect + 34) & 2) != 0 )
    return 0LL;
  v12 = *(_QWORD *)PrototypePteDirect;
  v13 = (volatile LONG *)(*(_QWORD *)PrototypePteDirect + 72LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(v13);
  v14 = *(_DWORD *)(v12 + 56);
  if ( v14 & 1 | ((v14 & 2) != 0) )
  {
LABEL_4:
    ExReleaseSpinLockExclusiveFromDpcLevel(v13);
    return 0LL;
  }
  if ( (v14 & 0x20) != 0 )
    goto LABEL_10;
  if ( (*(_BYTE *)(v10 + 34) & 1) != 0 )
    goto LABEL_4;
  if ( a2 != 1 || !*(_DWORD *)(v10 + 108) )
  {
    MiReferenceSubsection(v10, 0LL);
    *a3 = v10;
LABEL_10:
    v15 = MiBuildWakeList(v12, 4);
    ++*(_DWORD *)(v12 + 76);
    *a4 = v15;
    MiRemoveUnusedSegment(v12);
    if ( a2 == 1 )
      *(_DWORD *)(v12 + 56) |= 4u;
    v5 = v12;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v13);
  return v5;
}
