/*
 * XREFs of ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C009D790
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F1F0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013B00 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009A168 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C009B20C (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::TrimOfferCommitmentInternal(
        struct _KTHREAD **this,
        struct VIDMM_PROCESS *a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  char v7; // bl
  unsigned __int64 v8; // r14
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // bl
  _QWORD *v18; // rax
  _QWORD *v19; // r15
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  _BYTE v24[32]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+70h] [rbp+8h]
  unsigned __int64 v26; // [rsp+90h] [rbp+28h]

  v7 = (char)a4.0;
  v8 = a5;
  v12 = 0LL;
  v13 = WdLogNewEntry5_WdEvent(this, a2);
  v25 = v7 & 1;
  *(_QWORD *)(v13 + 24) = v25;
  WdLogEvent5_WdEvent(v13);
  if ( (v7 & 1) != 0 )
  {
    v8 = (unsigned int)(dword_1C0040438 << 20);
    if ( a5 < v8 )
      v8 = a5;
  }
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v24, this + 5121);
  v14 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * *((unsigned int *)this[3] + 50));
  if ( v14 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 4989));
    v26 = v14 + 416;
    if ( *((_QWORD *)a3 + 2) != v14 + 416 )
    {
      v17 = (v7 & 2) != 0;
      do
      {
        v18 = (_QWORD *)*((_QWORD *)a3 + 2);
        v19 = v18 - 52;
        *((_QWORD *)a3 + 2) = *v18;
        if ( VIDMM_GLOBAL::IsAllocationDecommitCandidate(
               (VIDMM_GLOBAL *)this,
               (struct _VIDMM_GLOBAL_ALLOC *)(v18 - 52),
               v17) )
        {
          v20 = v19 + 52;
          v21 = v19[52];
          if ( *(_QWORD **)(v21 + 8) != v19 + 52 || (v22 = (_QWORD *)v19[53], (_QWORD *)*v22 != v20) )
            __fastfail(3u);
          *v22 = v21;
          *(_QWORD *)(v21 + 8) = v22;
          *v20 = 0LL;
          this[4990] = 0LL;
          ExReleasePushLockExclusiveEx(this + 4989, 0LL);
          KeLeaveCriticalRegion();
          if ( VIDMM_GLOBAL::DecommitGlobalAllocation((VIDMM_GLOBAL *)this, (DXGFASTMUTEX **)v19) )
          {
            v12 += v19[1];
            if ( v12 >= v8 )
              break;
          }
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 4989));
        }
      }
      while ( *((_QWORD *)a3 + 2) != v26 );
    }
    if ( this[4990] == KeGetCurrentThread() )
    {
      this[4990] = 0LL;
      ExReleasePushLockExclusiveEx(this + 4989, 0LL);
      KeLeaveCriticalRegion();
    }
    *a6 = v12;
    v23 = (_QWORD *)WdLogNewEntry5_WdEvent(v16, v15);
    v23[5] = v25;
    v23[3] = a5;
    v23[4] = v12;
    WdLogEvent5_WdEvent(v23);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
}
