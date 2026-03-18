/*
 * XREFs of ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x1C009F9C4
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0067090 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067620 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DestroyCrossAdapterAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_CROSSADAPTER_ALLOC *a2,
        __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  _QWORD *v6; // rax
  void *v7; // rcx

  v3 = *((int *)a2 + 11);
  if ( *((_QWORD *)a2 + 5) )
  {
    v5 = *((int *)a2 + 10);
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v6[3] = 270LL;
    v6[4] = 65LL;
    v6[5] = a2;
    v6[6] = v5;
    v6[7] = v3;
    WdLogEvent5_WdCriticalError(v6);
  }
  v7 = (void *)*((_QWORD *)a2 + 1);
  if ( v7 )
    MmUnsecureVirtualMemory(v7);
  operator delete(a2);
}
