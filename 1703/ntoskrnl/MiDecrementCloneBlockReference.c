/*
 * XREFs of MiDecrementCloneBlockReference @ 0x1400036F4
 * Callers:
 *     MiDeletePteList @ 0x1400C5000 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1400C5B70 (MiDeletePteRun.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 * Callees:
 *     MiDeleteMergedPte @ 0x140079374 (MiDeleteMergedPte.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400DB850 (PsReturnProcessNonPagedPoolQuota.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDecrementCloneBlockReference(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3)
{
  int v4; // r15d
  struct _KTHREAD *v5; // rcx
  signed __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbp
  unsigned int v11; // r14d
  __int64 v13; // rdi
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx

  v4 = 0;
  v5 = *(struct _KTHREAD **)(a3 + 896);
  if ( v5 && v5 != KeGetCurrentThread() )
    KeBugCheckEx(0x1Au, 0x61945uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 24), 0xFFFFFFFFFFFFFFFFuLL);
  v9 = *(unsigned __int16 *)(a3 + 1452);
  v10 = *(_QWORD *)(qword_14036C8F8 + 8 * v9);
  if ( v8 == 1 )
    v11 = MiDeleteMergedPte(*(_QWORD *)(qword_14036C8F8 + 8 * v9));
  else
    v11 = 4;
  if ( *(_QWORD *)(*(_QWORD *)(a3 + 1296) + 240LL) > *(_QWORD *)(BugCheckParameter2 + 72) )
  {
    if ( (_InterlockedDecrement64((volatile signed __int64 *)(BugCheckParameter3 + 16)) & 0x7FFFFFFFFFFFFFFLL) == 0 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(v10 + 6280), 0xFFFFFFFFFFFFFFFFuLL);
      if ( v11 != 3 )
        MiReturnCommit(v10, 1LL);
    }
    v11 = 5;
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 48), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    RtlAvlRemoveNode(a3 + 912, BugCheckParameter2);
    v13 = *(_QWORD *)(BugCheckParameter2 + 56);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v14 = *(_QWORD *)(v13 + 16);
      v15 = *(_QWORD *)(BugCheckParameter2 + 32) - *(_QWORD *)(BugCheckParameter2 + 24) + 32LL;
      LOBYTE(v4) = (v15 & 0xFFF) != 0;
      *(_QWORD *)(v14 + 24) = v4 + (unsigned int)(v15 >> 12);
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v10 + 1696), (PSLIST_ENTRY)v14);
      KeSetEvent((PRKEVENT)(v10 + 1664), 0, 0);
      ExFreePoolWithTag((PVOID)v13, 0);
    }
    PsReturnProcessNonPagedPoolQuota(a3, *(_QWORD *)(BugCheckParameter2 + 64));
    ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
  }
  return v11;
}
