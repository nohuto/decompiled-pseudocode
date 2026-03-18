/*
 * XREFs of ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C009DC14
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00665C0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0004CD4 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::NotifyAllocationClosed(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rcx
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v7, (struct _KTHREAD **)(v3 + 360));
    v4 = (_QWORD *)((char *)a2 + 112);
    v5 = *((_QWORD *)a2 + 14);
    if ( *(struct VIDMM_ALLOC **)(v5 + 8) != (struct VIDMM_ALLOC *)((char *)a2 + 112)
      || (v6 = (_QWORD *)*((_QWORD *)a2 + 15), (_QWORD *)*v6 != v4) )
    {
      __fastfail(3u);
    }
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *((_QWORD *)a2 + 15) = 0LL;
    *v4 = 0LL;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
  }
}
