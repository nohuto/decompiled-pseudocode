/*
 * XREFs of ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0057288
 * Callers:
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0057320 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0002678 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C00530B0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2)
{
  struct _LIST_ENTRY *v2; // rsi
  __int64 v5; // rbx
  VIDMM_GLOBAL *v6; // rcx
  __int64 v7; // rax
  struct VIDMM_ALLOC *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = this;
  v2 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 7);
  if ( !v2 )
    goto LABEL_2;
  if ( v2[1].Flink->Flink )
  {
    v5 = *((_QWORD *)a2 + 5);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v5 + 56));
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v6, v2);
    *(_QWORD *)(v5 + 64) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 56, 0LL);
    KeLeaveCriticalRegion();
    operator delete(*((void **)a2 + 7));
LABEL_2:
    v8 = 0LL;
    return CVirtualAddressAllocator::UncommitVirtualAddressRange(
             *((CVirtualAddressAllocator **)a2 + 5),
             *((struct VIDMM_MAPPED_VA_RANGE **)a2 + 6),
             &v8,
             1);
  }
  v7 = WdLogNewEntry5_WdAssertion(this, a2);
  *(_QWORD *)(v7 + 24) = 19710LL;
  WdLogEvent5_WdAssertion(v7);
  return 0LL;
}
