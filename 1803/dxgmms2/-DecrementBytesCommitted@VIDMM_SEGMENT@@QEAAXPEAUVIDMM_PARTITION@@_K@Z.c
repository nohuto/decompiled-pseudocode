/*
 * XREFs of ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C009E568
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0054DD4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C00727F0 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 * Callees:
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C006BCB0 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_SEGMENT::DecrementBytesCommitted(VIDMM_SEGMENT *this, struct VIDMM_PARTITION *a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 v7; // rax
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v8; // r8d
  unsigned int v9; // edx
  VIDMM_GLOBAL *v10; // rcx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rbx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax

  v3 = *((_QWORD *)this + 27);
  if ( v3 < v3 - a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v7 + 24) = 290LL;
    WdLogEvent5_WdAssertion(v7);
    v3 = *((_QWORD *)this + 27);
  }
  v8 = *((_DWORD *)this + 119);
  v9 = *((_DWORD *)this + 95);
  v10 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 27) = v3 - a3;
  SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(v10, v9, v8, a2);
  v12 = *((_QWORD *)SegmentGroupState + 14);
  if ( v12 < v12 - a3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12 - a3, v12);
    *(_QWORD *)(v13 + 24) = 297LL;
    WdLogEvent5_WdAssertion(v13);
    v12 = *((_QWORD *)SegmentGroupState + 14);
  }
  *((_QWORD *)SegmentGroupState + 14) = v12 - a3;
}
