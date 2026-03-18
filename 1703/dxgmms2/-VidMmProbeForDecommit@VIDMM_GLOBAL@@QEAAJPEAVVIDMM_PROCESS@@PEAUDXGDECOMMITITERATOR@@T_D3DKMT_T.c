/*
 * XREFs of ?VidMmProbeForDecommit@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@@Z @ 0x1C0096ECC
 * Callers:
 *     ?VidMmProbeForDecommit@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@@Z @ 0x1C001EA60 (-VidMmProbeForDecommit@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_T.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002144 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00937B8 (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmProbeForDecommit(
        struct _KTHREAD **this,
        struct VIDMM_PROCESS *a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4)
{
  unsigned int v8; // esi
  __int64 v9; // r14
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  UINT v12; // ebx
  _QWORD *v13; // rcx
  _BYTE v15[56]; // [rsp+20h] [rbp-38h] BYREF

  v8 = 0;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v15, this + 5121);
  v9 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * *((unsigned int *)this[3] + 50));
  if ( v9 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 4989));
    v10 = (_QWORD *)(v9 + 384);
    v11 = (_QWORD *)*v10;
    *((_QWORD *)a3 + 2) = *v10;
    if ( (*(_BYTE *)&a4.0 & 2) == 0 )
    {
      if ( v11 == v10 )
      {
LABEL_9:
        this[4990] = 0LL;
        ExReleasePushLockExclusiveEx(this + 4989, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_10;
      }
      v12 = a4.Value >> 1;
      while ( !VIDMM_GLOBAL::IsAllocationDecommitCandidate(
                 (VIDMM_GLOBAL *)this,
                 (struct _VIDMM_GLOBAL_ALLOC *)(*((_QWORD *)a3 + 2) - 448LL),
                 v12 & 1) )
      {
        v13 = (_QWORD *)**((_QWORD **)a3 + 2);
        *((_QWORD *)a3 + 2) = v13;
        if ( v13 == v10 )
          goto LABEL_9;
      }
    }
    v8 = -1071775484;
    goto LABEL_9;
  }
LABEL_10:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return v8;
}
