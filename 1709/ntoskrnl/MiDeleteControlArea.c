/*
 * XREFs of MiDeleteControlArea @ 0x14001F4A4
 * Callers:
 *     MiDereferenceControlAreaProbe @ 0x14001F474 (MiDereferenceControlAreaProbe.c)
 *     MiWaitForInPageComplete @ 0x14002D860 (MiWaitForInPageComplete.c)
 *     MiDeleteCachedSubsection @ 0x140210974 (MiDeleteCachedSubsection.c)
 *     MiDeleteControlAreaList @ 0x140210E3C (MiDeleteControlAreaList.c)
 *     MiFlushControlArea @ 0x140210EB8 (MiFlushControlArea.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MiDecrementSubsectionViewCount @ 0x1400A1FF0 (MiDecrementSubsectionViewCount.c)
 *     ExReleaseSpinLockExclusive @ 0x140110B40 (ExReleaseSpinLockExclusive.c)
 *     MiAcquireSpinLockExclusive @ 0x140210828 (MiAcquireSpinLockExclusive.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14022E260 (MiUpdateSubsectionCrossPartitionRefs.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiFreeRelocations @ 0x1405946BC (MiFreeRelocations.c)
 *     SeReleaseImageValidationContext @ 0x1405F1480 (SeReleaseImageValidationContext.c)
 */

void __fastcall MiDeleteControlArea(char *P)
{
  __int64 v1; // r12
  int v2; // eax
  __int64 v4; // rsi
  volatile signed __int64 *v5; // r15
  _QWORD *v6; // rbx
  ULONG_PTR v7; // rbp
  ULONG_PTR v8; // r13
  KIRQL v9; // bl
  KIRQL v10; // di
  struct _KEVENT *v11; // rcx

  v1 = 0LL;
  v2 = *((_DWORD *)P + 14);
  v4 = *(_QWORD *)(qword_140388AF0 + 8LL * (*((_WORD *)P + 30) & 0x3FF));
  v5 = (volatile signed __int64 *)(v4 + 1288);
  if ( (v2 & 0x20) != 0 )
  {
    v6 = (_QWORD *)*((_QWORD *)P + 12);
    if ( (v6[1] & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
      SeReleaseImageValidationContext(v6[1] & 0xFFFFFFFFFFFFFFF8uLL);
    MiFreeRelocations(P, *v6);
  }
  else
  {
    if ( (v2 & 0x80u) == 0 )
    {
      v5 = (volatile signed __int64 *)(v4 + 1296);
    }
    else
    {
      v7 = *((_QWORD *)P + 18);
      if ( !v7 )
        goto LABEL_15;
      do
      {
        v8 = *(_QWORD *)(v7 + 16);
        if ( (*(_BYTE *)(v7 + 34) & 1) != 0 && (*(_DWORD *)(v7 + 48) & 0x3FFFFFFF) != 0 )
        {
          MiUpdateSubsectionCrossPartitionRefs(v7, 1LL);
          v9 = MiAcquireSpinLockExclusive(P + 72);
          v1 += MiDecrementSubsectionViewCount(v7);
          ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)P + 18, v9);
          *(_WORD *)(v7 + 34) &= ~1u;
        }
        ExFreePoolWithTag((PVOID)v7, 0);
        v7 = v8;
      }
      while ( v8 );
    }
    if ( v1 )
      MiReturnCrossPartitionSectionCharges(v4, 1LL, v1);
  }
LABEL_15:
  if ( _InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) == 1
    && v5 == (volatile signed __int64 *)(v4 + 1296)
    && (ULONG_PTR *)v4 != &MiSystemPartition )
  {
    v10 = MiAcquireSpinLockExclusive(v4 + 1280);
    if ( (*(_DWORD *)(v4 + 4) & 1) != 0 && !*v5 )
    {
      v11 = *(struct _KEVENT **)(v4 + 1984);
      if ( v11 )
        KeSetEvent(v11, 0, 0);
    }
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1280), v10);
  }
  ExFreePoolWithTag(P, 0);
}
