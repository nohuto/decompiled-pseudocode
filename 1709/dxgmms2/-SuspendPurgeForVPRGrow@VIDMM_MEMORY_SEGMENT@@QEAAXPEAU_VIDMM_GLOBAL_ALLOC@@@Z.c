/*
 * XREFs of ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A9458
 * Callers:
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C004E2FC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0001D88 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013400 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0051BF4 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C008112C (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C00AA3CC (-FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VID.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::SuspendPurgeForVPRGrow(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  VIDMM_GLOBAL *v7; // rcx
  struct _LIST_ENTRY *v8; // rdi
  struct _LIST_ENTRY *v9; // rdx
  VIDMM_GLOBAL **v10; // rbx
  struct _LIST_ENTRY *v11[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *((_QWORD *)this + 1);
  v11[1] = (struct _LIST_ENTRY *)v11;
  v11[0] = (struct _LIST_ENTRY *)v11;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v12, (struct _KTHREAD **)(v3 + 41240));
  if ( (unsigned __int8)VIDMM_SEGMENT::FreeSpaceForSecureResource(this, v11, a2, 6LL) )
  {
    v6 = WdLogNewEntry5_WdWarning(v5);
    WdLogEvent5_WdWarning(v6);
    if ( *((_DWORD *)this + 103) )
    {
      v8 = v11[0];
      while ( v8 != (struct _LIST_ENTRY *)v11 )
      {
        v9 = v8;
        v10 = (VIDMM_GLOBAL **)&v8[-11];
        v8 = v8->Flink;
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v7, v9);
        VIDMM_DEVICE::PartiallySuspend(v10);
        VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v10);
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
}
