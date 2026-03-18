/*
 * XREFs of MiSegmentDelete @ 0x1404BC75C
 * Callers:
 *     MiCheckControlArea @ 0x1400E5110 (MiCheckControlArea.c)
 *     MiProcessDereferenceList @ 0x140153094 (MiProcessDereferenceList.c)
 *     MiDestroySection @ 0x14015E144 (MiDestroySection.c)
 * Callees:
 *     MiDereferenceControlAreaProbe @ 0x14004B034 (MiDereferenceControlAreaProbe.c)
 *     MiDeleteSegmentPages @ 0x14004B184 (MiDeleteSegmentPages.c)
 *     MiPrepareSegmentForDeletion @ 0x14004B270 (MiPrepareSegmentForDeletion.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14004B350 (MiUpdateSystemProtoPtesTree.c)
 *     ObFastReplaceObject @ 0x14004B580 (ObFastReplaceObject.c)
 *     MiGetControlAreaPartition @ 0x14006278C (MiGetControlAreaPartition.c)
 *     IoDiskIoAttributionDereference @ 0x14008E6C8 (IoDiskIoAttributionDereference.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E3F24 (MiReleaseControlAreaWaiters.c)
 *     MiReleaseControlAreaCharges @ 0x1400E6C48 (MiReleaseControlAreaCharges.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140160C04 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiLogSectionCreate @ 0x14074C154 (MiLogSectionCreate.c)
 */

__int64 __fastcall MiSegmentDelete(volatile signed __int64 *a1)
{
  volatile signed __int64 v1; // r13
  volatile __int64 *v2; // r15
  unsigned int v3; // ebx
  __int16 v5; // bp
  volatile signed __int64 *v6; // rsi
  ULONG_PTR v7; // rdx
  _QWORD *v8; // r12
  void *v9; // rbp
  unsigned __int64 v10; // r12
  __int64 v11; // rbx
  __int64 ControlAreaPartition; // rax
  unsigned int v14; // [rsp+60h] [rbp+8h]
  __int64 v15; // [rsp+68h] [rbp+10h]

  v1 = *a1;
  v2 = a1 + 8;
  v3 = *((_DWORD *)a1 + 14);
  v5 = *(_WORD *)(*a1 + 12);
  v6 = a1 + 16;
  v14 = *((_QWORD *)a1 + 8) != 0LL;
  v7 = (ULONG_PTR)(a1 + 16);
  if ( (v3 & 0xA0) != 0x80 )
    v7 = 0LL;
  v8 = (_QWORD *)MiPrepareSegmentForDeletion((__int64)a1, v7);
  if ( ((v3 >> 7) & 1) != 0 )
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
  if ( ((v3 >> 7) & 1) != 0 )
  {
    if ( (v3 & 0x20) != 0 )
    {
      MiUpdateSystemProtoPtesTree(*((_QWORD *)a1 + 12), 0);
      ExFreePoolWithTag(*(PVOID *)(v1 + 64), 0);
    }
  }
  else
  {
    do
    {
      if ( *((_QWORD *)v6 + 1) )
      {
        MiUpdateSystemProtoPtesTree((__int64)(v6 + 7), 0);
        ExFreePoolWithTag(*((PVOID *)v6 + 1), 0);
      }
      v6 = (volatile signed __int64 *)*((_QWORD *)v6 + 2);
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
