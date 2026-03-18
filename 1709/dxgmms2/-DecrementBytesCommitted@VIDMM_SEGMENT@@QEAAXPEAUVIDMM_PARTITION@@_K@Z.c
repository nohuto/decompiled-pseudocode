/*
 * XREFs of ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C007BF24
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C004DD80 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C004F040 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 * Callees:
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00581DC (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_SEGMENT::DecrementBytesCommitted(VIDMM_SEGMENT *this, struct VIDMM_PARTITION *a2, __int64 a3)
{
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v6; // r8d
  unsigned int v7; // edx
  VIDMM_GLOBAL *v8; // rcx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax

  if ( *((_QWORD *)this + 27) < (unsigned __int64)(*((_QWORD *)this + 27) - a3) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v11 + 24) = 290LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v6 = *((_DWORD *)this + 119);
  v7 = *((_DWORD *)this + 95);
  v8 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 27) -= a3;
  SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(v8, v7, v6, a2);
  v10 = *((_QWORD *)SegmentGroupState + 14);
  if ( v10 < v10 - a3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10 - a3, v10);
    *(_QWORD *)(v12 + 24) = 297LL;
    WdLogEvent5_WdAssertion(v12);
  }
  *((_QWORD *)SegmentGroupState + 14) -= a3;
}
