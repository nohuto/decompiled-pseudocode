/*
 * XREFs of ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00955F4
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002144 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0092834 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00937B8 (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::TrimOfferCommitmentInternal(
        struct _KTHREAD **this,
        struct VIDMM_PROCESS *a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v8; // r14
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  UINT v17; // ebx
  __int64 v18; // r12
  _QWORD *v19; // rax
  _QWORD *v20; // r15
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  _BYTE v25[88]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+88h] [rbp+10h]

  v6 = a5;
  v8 = a5;
  v12 = 0LL;
  v13 = WdLogNewEntry5_WdEvent(this, a2);
  v26 = *(_BYTE *)&a4.0 & 1;
  *(_QWORD *)(v13 + 24) = v26;
  WdLogEvent5_WdEvent(v13);
  if ( (*(_BYTE *)&a4.0 & 1) != 0 )
  {
    v8 = (unsigned int)(dword_1C003C400 << 20);
    if ( a5 < v8 )
      v8 = a5;
  }
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v25, this + 5121);
  v14 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * *((unsigned int *)this[3] + 50));
  if ( !v14 )
    goto LABEL_18;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 4989));
  if ( *((_QWORD *)a3 + 2) == v14 + 384 )
    goto LABEL_15;
  v17 = a4.Value >> 1;
  v18 = v14 + 384;
  while ( 1 )
  {
    v19 = (_QWORD *)*((_QWORD *)a3 + 2);
    v20 = v19 - 56;
    *((_QWORD *)a3 + 2) = *v19;
    if ( VIDMM_GLOBAL::IsAllocationDecommitCandidate(
           (VIDMM_GLOBAL *)this,
           (struct _VIDMM_GLOBAL_ALLOC *)(v19 - 56),
           v17 & 1) )
    {
      break;
    }
LABEL_13:
    if ( *((_QWORD *)a3 + 2) == v18 )
      goto LABEL_14;
  }
  v21 = v20 + 56;
  v22 = v20[56];
  v23 = (_QWORD *)v20[57];
  if ( *(_QWORD **)(v22 + 8) != v20 + 56 || (_QWORD *)*v23 != v21 )
    __fastfail(3u);
  *v23 = v22;
  *(_QWORD *)(v22 + 8) = v23;
  *v21 = 0LL;
  this[4990] = 0LL;
  ExReleasePushLockExclusiveEx(this + 4989, 0LL);
  KeLeaveCriticalRegion();
  if ( !VIDMM_GLOBAL::DecommitGlobalAllocation((VIDMM_GLOBAL *)this, (DXGFASTMUTEX **)v20) || (v12 += v20[1], v12 < v8) )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 4989));
    goto LABEL_13;
  }
LABEL_14:
  v6 = a5;
LABEL_15:
  if ( this[4990] == KeGetCurrentThread() )
  {
    this[4990] = 0LL;
    ExReleasePushLockExclusiveEx(this + 4989, 0LL);
    KeLeaveCriticalRegion();
  }
  *a6 = v12;
  v24 = (_QWORD *)WdLogNewEntry5_WdEvent(v16, v15);
  v24[5] = v26;
  v24[3] = v6;
  v24[4] = v12;
  WdLogEvent5_WdEvent(v24);
LABEL_18:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
}
