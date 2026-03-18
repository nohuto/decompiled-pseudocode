/*
 * XREFs of MiDecrementCloneBlockReference @ 0x1400E4E0C
 * Callers:
 *     MiDeletePteList @ 0x14004D590 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x14004E1C0 (MiDeletePteRun.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiDeleteMergedPte @ 0x1400E4F14 (MiDeleteMergedPte.c)
 *     MiDeleteCloneDescriptor @ 0x140131B84 (MiDeleteCloneDescriptor.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x140230230 (MiReturnCrossPartitionCloneCharges.c)
 */

__int64 __fastcall MiDecrementCloneBlockReference(
        ULONG_PTR BugCheckParameter2,
        volatile signed __int64 *BugCheckParameter3,
        __int64 a3)
{
  struct _KTHREAD *v5; // rcx
  __int64 v7; // rdi
  unsigned int v8; // ebp

  v5 = *(struct _KTHREAD **)(a3 + 896);
  if ( v5 && v5 != KeGetCurrentThread() )
    KeBugCheckEx(0x1Au, 0x61945uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 56) + 24LL);
  if ( *(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a3 + 1452)) != v7
    && _InterlockedExchangeAdd64(BugCheckParameter3 + 1, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    MiReturnCrossPartitionCloneCharges(v7, BugCheckParameter3, a3);
  }
  if ( _InterlockedDecrement64(BugCheckParameter3 + 3) )
    v8 = 4;
  else
    v8 = MiDeleteMergedPte(v7, BugCheckParameter3);
  if ( *(_QWORD *)(*(_QWORD *)(a3 + 1296) + 240LL) > *(_QWORD *)(BugCheckParameter2 + 72) )
  {
    if ( (_InterlockedDecrement64(BugCheckParameter3 + 2) & 0x7FFFFFFFFFFFFFFLL) == 0 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(v7 + 6472), 0xFFFFFFFFFFFFFFFFuLL);
      if ( v8 != 3 )
        MiReturnCommit(v7, 1uLL);
    }
    v8 = 5;
  }
  if ( !_InterlockedDecrement64((volatile signed __int64 *)(BugCheckParameter2 + 48)) )
    MiDeleteCloneDescriptor(a3, BugCheckParameter2);
  return v8;
}
