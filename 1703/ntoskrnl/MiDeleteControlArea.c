/*
 * XREFs of MiDeleteControlArea @ 0x140118FDC
 * Callers:
 *     MiWaitForInPageComplete @ 0x140097510 (MiWaitForInPageComplete.c)
 *     MiDereferenceControlAreaProbe @ 0x140118FA8 (MiDereferenceControlAreaProbe.c)
 *     MiDeleteCachedSubsection @ 0x140209E24 (MiDeleteCachedSubsection.c)
 *     MiDeleteControlAreaList @ 0x14020A2CC (MiDeleteControlAreaList.c)
 *     MiFlushControlArea @ 0x14020A348 (MiFlushControlArea.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SeReleaseImageValidationContext @ 0x140423C04 (SeReleaseImageValidationContext.c)
 *     MiFreeRelocations @ 0x140581FD0 (MiFreeRelocations.c)
 */

void __fastcall MiDeleteControlArea(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi
  volatile signed __int64 *v4; // rsi
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  _QWORD *v7; // rbx
  KIRQL v8; // r14
  struct _KEVENT *v9; // rcx

  v2 = *(_DWORD *)(a1 + 56);
  v3 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v4 = (volatile signed __int64 *)(v3 + 1352);
  if ( (v2 & 0x20) != 0 )
  {
    v7 = *(_QWORD **)(a1 + 96);
    if ( (v7[1] & 0xFFFFFFFFFFFFFFF8uLL) > 8 )
      SeReleaseImageValidationContext(v7[1] & 0xFFFFFFFFFFFFFFF8uLL);
    MiFreeRelocations(a1, *v7);
  }
  else if ( (v2 & 0x80u) != 0 )
  {
    v5 = *(_QWORD **)(a1 + 144);
    if ( v5 )
    {
      do
      {
        v6 = (_QWORD *)v5[2];
        ExFreePoolWithTag(v5, 0);
        v5 = v6;
      }
      while ( v6 );
    }
  }
  else
  {
    v4 = (volatile signed __int64 *)(v3 + 1360);
  }
  if ( _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) == 1
    && v4 == (volatile signed __int64 *)(v3 + 1360)
    && (ULONG_PTR *)v3 != &MiSystemPartition )
  {
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1344));
    if ( (*(_DWORD *)(v3 + 4) & 1) != 0 && !*v4 )
    {
      v9 = *(struct _KEVENT **)(v3 + 1856);
      if ( v9 )
        KeSetEvent(v9, 0, 0);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1344));
    __writecr8(v8);
  }
  ExFreePoolWithTag((PVOID)a1, 0);
}
