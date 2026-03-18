/*
 * XREFs of ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00A3D10
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0004D1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0005484 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009F5BC (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00A10B4 (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::TrimOfferCommitmentInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4,
        struct _VIDMM_GLOBAL_ALLOC *a5,
        unsigned __int64 *a6)
{
  char v7; // bl
  unsigned __int64 v8; // r15
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  char v19; // bl
  __int64 v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _BYTE v23[88]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v24; // [rsp+80h] [rbp+8h]
  __int64 v25; // [rsp+88h] [rbp+10h]
  struct _VIDMM_GLOBAL_ALLOC *v26; // [rsp+A0h] [rbp+28h]

  v7 = (char)a4.0;
  v8 = (unsigned __int64)a5;
  v12 = 0LL;
  v13 = WdLogNewEntry5_WdEvent(this, a2);
  v25 = v7 & 1;
  *(_QWORD *)(v13 + 24) = v25;
  WdLogEvent5_WdEvent(v13);
  if ( (v7 & 1) != 0 )
  {
    v8 = (unsigned int)(dword_1C0047438 << 20);
    if ( (unsigned __int64)a5 < v8 )
      v8 = (unsigned __int64)a5;
  }
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v23, (VIDMM_GLOBAL *)((char *)this + 41544));
  v14 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL));
  if ( v14 && *(_QWORD *)(v14 + 512) == *(_QWORD *)a3 )
  {
    DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 40488));
    v17 = (_QWORD *)(v14 + 416);
    v18 = (_QWORD *)*((_QWORD *)a3 + 3);
    v24 = v17;
    if ( v18 != v17 )
    {
      v19 = (v7 & 2) != 0;
      do
      {
        v26 = (struct _VIDMM_GLOBAL_ALLOC *)(v18 - 52);
        *((_QWORD *)a3 + 3) = *v18;
        if ( VIDMM_GLOBAL::IsAllocationDecommitCandidate(this, (struct _VIDMM_GLOBAL_ALLOC *)(v18 - 52), v19) )
        {
          v20 = *v18;
          if ( *(_QWORD **)(*v18 + 8LL) != v18 || (v21 = (_QWORD *)v18[1], (_QWORD *)*v21 != v18) )
            __fastfail(3u);
          *v21 = v20;
          *(_QWORD *)(v20 + 8) = v21;
          *v18 = 0LL;
          *((_QWORD *)this + 5062) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 40488, 0LL);
          KeLeaveCriticalRegion();
          if ( VIDMM_GLOBAL::DecommitGlobalAllocation(this, (DXGFASTMUTEX **)v26) )
          {
            v12 += *((_QWORD *)v26 + 1);
            if ( v12 >= v8 )
              break;
          }
          DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 40488));
        }
        v18 = (_QWORD *)*((_QWORD *)a3 + 3);
      }
      while ( v18 != v24 );
    }
    if ( *((struct _KTHREAD **)this + 5062) == KeGetCurrentThread() )
    {
      *((_QWORD *)this + 5062) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40488, 0LL);
      KeLeaveCriticalRegion();
    }
    *a6 = v12;
    v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v16, v15);
    v22[5] = v25;
    v22[3] = a5;
    v22[4] = v12;
    WdLogEvent5_WdEvent(v22);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
}
