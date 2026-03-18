/*
 * XREFs of ?VidMmProbeForDecommit@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@@Z @ 0x1C009F3D0
 * Callers:
 *     ?VidMmProbeForDecommit@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@@Z @ 0x1C0020850 (-VidMmProbeForDecommit@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_T.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F1F0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013B00 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C009B20C (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
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
  UINT v11; // ebx
  _QWORD *v12; // rax
  char v13; // bl
  _QWORD *v14; // rcx
  _BYTE v16[56]; // [rsp+20h] [rbp-38h] BYREF

  v8 = 0;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v16, this + 5121);
  v9 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * *((unsigned int *)this[3] + 50));
  if ( v9 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 4989));
    v10 = (_QWORD *)(v9 + 416);
    v11 = a4.Value >> 1;
    v12 = (_QWORD *)*v10;
    *((_QWORD *)a3 + 2) = *v10;
    if ( (v11 & 1) == 0 )
    {
      if ( v12 == v10 )
      {
LABEL_9:
        this[4990] = 0LL;
        ExReleasePushLockExclusiveEx(this + 4989, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_10;
      }
      v13 = v11 & 1;
      while ( !VIDMM_GLOBAL::IsAllocationDecommitCandidate(
                 (VIDMM_GLOBAL *)this,
                 (struct _VIDMM_GLOBAL_ALLOC *)(*((_QWORD *)a3 + 2) - 416LL),
                 v13) )
      {
        v14 = (_QWORD *)**((_QWORD **)a3 + 2);
        *((_QWORD *)a3 + 2) = v14;
        if ( v14 == v10 )
          goto LABEL_9;
      }
    }
    v8 = -1071775484;
    goto LABEL_9;
  }
LABEL_10:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return v8;
}
