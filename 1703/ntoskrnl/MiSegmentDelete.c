/*
 * XREFs of MiSegmentDelete @ 0x14054A42C
 * Callers:
 *     MiCheckControlArea @ 0x14009B950 (MiCheckControlArea.c)
 *     MiProcessDereferenceList @ 0x14013A7D0 (MiProcessDereferenceList.c)
 *     MiDestroySection @ 0x1401490F8 (MiDestroySection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x140097F50 (MiReleaseControlAreaWaiters.c)
 *     MiReleaseControlAreaCharges @ 0x1400990E0 (MiReleaseControlAreaCharges.c)
 *     IoDiskIoAttributionDereference @ 0x1400AE074 (IoDiskIoAttributionDereference.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     MiGetControlAreaPartition @ 0x140118AE8 (MiGetControlAreaPartition.c)
 *     MiDereferenceControlAreaProbe @ 0x140118FA8 (MiDereferenceControlAreaProbe.c)
 *     MiDeleteSegmentPages @ 0x1401190A4 (MiDeleteSegmentPages.c)
 *     MiPrepareSegmentForDeletion @ 0x1401191A4 (MiPrepareSegmentForDeletion.c)
 *     MiUpdatePageFileSectionList @ 0x140119284 (MiUpdatePageFileSectionList.c)
 *     ObFastReplaceObject @ 0x14011AE74 (ObFastReplaceObject.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140148EB4 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiLogSectionCreate @ 0x1406B5200 (MiLogSectionCreate.c)
 */

__int64 __fastcall MiSegmentDelete(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rbp
  int v3; // ebx
  volatile __int64 *v4; // r14
  __int64 v6; // rdx
  int v7; // edi
  BOOL v8; // r13d
  __int64 *v9; // r12
  void *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rbx
  __int64 ControlAreaPartition; // rax
  unsigned __int64 v15; // r8

  v1 = *(_QWORD *)a1;
  v2 = a1 + 128;
  v3 = *(_DWORD *)(a1 + 56);
  v4 = (volatile __int64 *)(a1 + 64);
  v6 = a1 + 128;
  v7 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  v8 = *(_QWORD *)(a1 + 64) != 0LL;
  if ( (v3 & 0xA0) != 0x80 )
    v6 = 0LL;
  v9 = MiPrepareSegmentForDeletion(a1, v6);
  if ( (v3 & 0x80u) != 0 )
  {
    if ( (v7 & 0x2000) != 0 )
      DbgUnLoadImageSymbolsUnicode(
        (PCUNICODE_STRING)((*v4 & 0xFFFFFFFFFFFFFFF0uLL) + 88),
        *(_QWORD *)(v1 + 32),
        (__int64)KeGetCurrentThread()->ApcState.Process);
    MiReleaseControlAreaWaiters(v9);
  }
  else if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 )
  {
    MiLogSectionCreate(a1, 0LL);
  }
  v10 = 0LL;
  v11 = MiDeleteSegmentPages((_QWORD *)a1);
  if ( (v3 & 0x82) == 0x80 )
    v10 = (void *)ObFastReplaceObject(v4, 0LL);
  if ( (v3 & 0x80u) != 0 )
  {
    if ( (v3 & 0x20) != 0 )
      ExFreePoolWithTag(*(PVOID *)(v1 + 64), 0);
  }
  else
  {
    do
    {
      if ( *(_QWORD *)(v2 + 8) )
      {
        MiUpdatePageFileSectionList(v2, 0);
        ExFreePoolWithTag(*(PVOID *)(v2 + 8), 0);
      }
      v2 = *(_QWORD *)(v2 + 16);
    }
    while ( v2 );
  }
  if ( MiReleaseControlAreaCharges(a1) )
  {
    ControlAreaPartition = MiGetControlAreaPartition(a1);
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, v8, v15);
  }
  if ( (*(_BYTE *)(a1 + 56) & 0x20) == 0 && (v3 & 0x80u) != 0 )
    v12 = 8LL * *(_QWORD *)(a1 + 120);
  else
    v12 = 0LL;
  MiDereferenceControlAreaProbe(a1, 0);
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( v12 )
    IoDiskIoAttributionDereference(v12);
  ExFreePoolWithTag((PVOID)v1, 0);
  return v11;
}
