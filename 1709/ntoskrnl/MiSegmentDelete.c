/*
 * XREFs of MiSegmentDelete @ 0x14048D574
 * Callers:
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 *     MiDestroySection @ 0x14010A894 (MiDestroySection.c)
 *     MiProcessDereferenceList @ 0x14014B46C (MiProcessDereferenceList.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1400079D0 (IoDiskIoAttributionDereference.c)
 *     MiGetControlAreaPartition @ 0x1400148E4 (MiGetControlAreaPartition.c)
 *     MiDereferenceControlAreaProbe @ 0x14001F474 (MiDereferenceControlAreaProbe.c)
 *     MiDeleteSegmentPages @ 0x14001F644 (MiDeleteSegmentPages.c)
 *     MiPrepareSegmentForDeletion @ 0x14001F744 (MiPrepareSegmentForDeletion.c)
 *     MiUpdatePageFileSectionList @ 0x14001F824 (MiUpdatePageFileSectionList.c)
 *     ObFastReplaceObject @ 0x14001FFA8 (ObFastReplaceObject.c)
 *     MiReleaseControlAreaWaiters @ 0x140067BC4 (MiReleaseControlAreaWaiters.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MiReleaseControlAreaCharges @ 0x1400A2C24 (MiReleaseControlAreaCharges.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1400F96A8 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiLogSectionCreate @ 0x1406E1368 (MiLogSectionCreate.c)
 */

__int64 __fastcall MiSegmentDelete(volatile signed __int64 *a1)
{
  volatile signed __int64 v1; // r15
  volatile __int64 *v2; // r14
  int v3; // ebx
  int v5; // edi
  __int64 v6; // rbp
  ULONG_PTR v7; // rdx
  _QWORD *v8; // r12
  void *v9; // rdi
  unsigned __int64 v10; // r12
  __int64 v11; // rbx
  __int64 ControlAreaPartition; // rax
  unsigned int v14; // [rsp+60h] [rbp+8h]
  __int64 v15; // [rsp+68h] [rbp+10h]

  v1 = *a1;
  v2 = a1 + 8;
  v3 = *((_DWORD *)a1 + 14);
  v5 = *(_DWORD *)(*a1 + 12);
  v6 = (__int64)(a1 + 16);
  v14 = *((_QWORD *)a1 + 8) != 0LL;
  v7 = (ULONG_PTR)(a1 + 16);
  if ( (v3 & 0xA0) != 0x80 )
    v7 = 0LL;
  v8 = (_QWORD *)MiPrepareSegmentForDeletion((__int64)a1, v7);
  if ( (v3 & 0x80) != 0 )
  {
    if ( (v5 & 0x2000) != 0 )
      DbgUnLoadImageSymbolsUnicode(
        (PCUNICODE_STRING)((*v2 & 0xFFFFFFFFFFFFFFF0uLL) + 88),
        *(_QWORD *)(v1 + 32),
        (__int64)KeGetCurrentThread()->ApcState.Process);
    MiReleaseControlAreaWaiters(v8);
  }
  else if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 )
  {
    MiLogSectionCreate(a1, 0LL);
  }
  v15 = MiDeleteSegmentPages((__int64)a1);
  v9 = 0LL;
  v10 = MiReleaseControlAreaCharges((__int64)a1);
  if ( (v3 & 0x82) == 0x80 )
    v9 = (void *)ObFastReplaceObject(v2, 0LL);
  if ( (v3 & 0x80) != 0 )
  {
    if ( (v3 & 0x20) != 0 )
      ExFreePoolWithTag(*(PVOID *)(v1 + 64), 0);
  }
  else
  {
    do
    {
      if ( *(_QWORD *)(v6 + 8) )
      {
        MiUpdatePageFileSectionList(v6, 0);
        ExFreePoolWithTag(*(PVOID *)(v6 + 8), 0);
      }
      v6 = *(_QWORD *)(v6 + 16);
    }
    while ( v6 );
  }
  if ( v10 )
  {
    ControlAreaPartition = MiGetControlAreaPartition((__int64)a1);
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, v14, v10);
  }
  if ( (a1[7] & 0x20) == 0 && (v3 & 0x80u) != 0 )
    v11 = 8LL * *((_QWORD *)a1 + 15);
  else
    v11 = 0LL;
  MiDereferenceControlAreaProbe(a1, 0);
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( v11 )
    IoDiskIoAttributionDereference(v11);
  ExFreePoolWithTag((PVOID)v1, 0);
  return v15;
}
