/*
 * XREFs of ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0072E2C
 * Callers:
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C0063200 (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0063D00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C005406C (-ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C006BCB0 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_SEGMENT::ReclaimResource(VIDMM_LINEAR_POOL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rcx
  __int16 v5; // cx
  __int64 v6; // rbx
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v7; // r8d
  unsigned int v8; // edx
  struct VIDMM_PARTITION *v9; // r9
  VIDMM_GLOBAL *v10; // rcx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v12; // rcx
  char *v13; // rdi
  __int64 v14; // rcx
  char **v15; // rax
  char *v16; // rsi
  char **v17; // rax

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( ((_DWORD)this[10] & 0x1000) == 0 )
    VIDMM_LINEAR_POOL::ReclaimBlock(this[19], *((_QWORD **)a2 + 19));
  v4 = *((_QWORD *)a2 + 17);
  *((_DWORD *)a2 + 32) = 2;
  if ( (*(_DWORD *)(v4 + 80) & 0x1000) != 0 )
    v5 = 0;
  else
    v5 = *(_DWORD *)(v4 + 16) + 1;
  *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = v5;
  *(_QWORD *)(*((_QWORD *)a2 + 63) + 24LL) = *((_QWORD *)a2 + 18) + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
  v6 = *((_QWORD *)a2 + 2);
  v7 = *((_DWORD *)this + 119);
  v8 = *((_DWORD *)this + 95);
  v9 = (struct VIDMM_PARTITION *)**((_QWORD **)a2 + 61);
  v10 = this[1];
  this[27] = (VIDMM_LINEAR_POOL *)((char *)this[27] + v6);
  SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(v10, v8, v7, v9);
  *((_QWORD *)SegmentGroupState + 14) += v6;
  ++*((_DWORD *)this + 80);
  if ( ((_DWORD)this[10] & 0x1001) != 0 )
  {
    v12 = *((_QWORD *)a2 + 62);
    if ( !v12 || _InterlockedIncrement((volatile signed __int32 *)(v12 + 44)) == 1 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(**((_QWORD **)a2 + 61) + 48LL), *((_QWORD *)a2 + 2));
  }
  v13 = (char *)a2 + 384;
  v14 = *(_QWORD *)v13;
  if ( *(char **)(*(_QWORD *)v13 + 8LL) != v13 || (v15 = (char **)*((_QWORD *)v13 + 1), *v15 != v13) )
    __fastfail(3u);
  *v15 = (char *)v14;
  v16 = (char *)(this + 20);
  *(_QWORD *)(v14 + 8) = v15;
  v17 = (char **)*((_QWORD *)v16 + 1);
  if ( *v17 != v16 )
    __fastfail(3u);
  *(_QWORD *)v13 = v16;
  *((_QWORD *)v13 + 1) = v17;
  *v17 = v13;
  *((_QWORD *)v16 + 1) = v13;
}
