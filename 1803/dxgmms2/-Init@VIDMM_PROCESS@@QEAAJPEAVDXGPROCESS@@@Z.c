/*
 * XREFs of ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0073B5C
 * Callers:
 *     VidMmCreateProcess @ 0x1C0002F20 (VidMmCreateProcess.c)
 * Callees:
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C0002574 (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0005AF4 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0005B14 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ??0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ @ 0x1C006E470 (--0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ.c)
 *     ??0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z @ 0x1C0077A78 (--0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z.c)
 *     ??0VIDMM_PROCESS_HEAP@@QEAA@XZ @ 0x1C00B7B38 (--0VIDMM_PROCESS_HEAP@@QEAA@XZ.c)
 */

__int64 __fastcall VIDMM_PROCESS::Init(struct VIDMM_PARTITION **this, struct DXGPROCESS *a2)
{
  unsigned int v2; // ebx
  VIDMM_PROCESS_FENCE_STORAGE *v5; // rax
  __int64 v6; // rcx
  VIDMM_PROCESS_FENCE_STORAGE *v7; // rax
  char v8; // al
  char *v9; // rax
  VIDMM_RECYCLE_HEAP_MGR *v10; // rax
  VIDMM_RECYCLE_HEAP_MGR *v11; // rcx
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // ebp
  SIZE_T v15; // rax
  struct VIDMM_PARTITION *v16; // rax
  __int64 v17; // rcx
  struct VIDMM_PROCESS *v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  VIDMM_PROCESS_HEAP *v23; // rax

  v2 = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  *this = (struct VIDMM_PARTITION *)*((_QWORD *)a2 + 7);
  this[1] = (struct VIDMM_PARTITION *)*((_QWORD *)a2 + 8);
  this[4] = a2;
  v5 = (VIDMM_PROCESS_FENCE_STORAGE *)operator new[](0x48uLL, 0x34346956u, (POOL_TYPE)512);
  if ( v5 )
    v7 = VIDMM_PROCESS_FENCE_STORAGE::VIDMM_PROCESS_FENCE_STORAGE(v5, (struct VIDMM_PROCESS *)this);
  else
    v7 = 0LL;
  this[5] = v7;
  if ( !v7 )
  {
    _InterlockedIncrement(&dword_1C00475E4);
    v20 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v20 + 24) = 211LL;
LABEL_25:
    WdLogEvent5_WdLowResource(v20);
    return 3221225495LL;
  }
  v8 = *((_BYTE *)a2 + 323);
  if ( (v8 & 8) != 0 )
  {
    v21 = *(_QWORD *)(*((_QWORD *)a2 + 57) + 72LL);
    if ( v21 )
      v22 = *(_QWORD *)(v21 + 8);
    else
      v22 = 0LL;
    this[3] = *(struct VIDMM_PARTITION **)(v22 + 24);
    goto LABEL_13;
  }
  if ( !dword_1C0047358 && (v8 & 4) == 0 )
  {
    v23 = (VIDMM_PROCESS_HEAP *)operator new[](0x140uLL, 0x30316956u, (POOL_TYPE)512);
    if ( v23 )
    {
      v10 = VIDMM_PROCESS_HEAP::VIDMM_PROCESS_HEAP(v23);
      goto LABEL_10;
    }
LABEL_33:
    v11 = 0LL;
    goto LABEL_11;
  }
  v9 = (char *)operator new[](0x648uLL, 0x30316956u, (POOL_TYPE)512);
  if ( !v9 )
    goto LABEL_33;
  v10 = VIDMM_RECYCLE_HEAP_MGR::VIDMM_RECYCLE_HEAP_MGR(v9);
LABEL_10:
  v11 = v10;
LABEL_11:
  this[3] = v11;
  if ( !v11 )
  {
    _InterlockedIncrement(dword_1C0047630);
    v20 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v20 + 24) = 246LL;
    goto LABEL_25;
  }
  result = (*(__int64 (__fastcall **)(VIDMM_RECYCLE_HEAP_MGR *, struct VIDMM_PARTITION **))(*(_QWORD *)v11 + 8LL))(
             v11,
             this);
  if ( (int)result < 0 )
    return result;
LABEL_13:
  Global = DXGGLOBAL::GetGlobal();
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
  v15 = 8LL * MaximumAdapterCount;
  if ( !is_mul_ok(MaximumAdapterCount, 8uLL) )
    v15 = -1LL;
  v16 = (struct VIDMM_PARTITION *)operator new[](v15, 0x33316956u, PagedPool);
  this[2] = v16;
  if ( !v16 )
  {
    _InterlockedIncrement(&dword_1C00475D4);
    v20 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v20 + 24) = 269LL;
    goto LABEL_25;
  }
  memset(v16, 0, 8LL * MaximumAdapterCount);
  if ( *((_BYTE *)a2 + 321) )
  {
    *((_DWORD *)this + 22) |= 2u;
    g_pVidMmSystemProcess = (VIDMM_PROCESS *)this;
  }
  v19 = VidMmiOpenCurrentPartition(v18, this + 30);
  if ( v19 < 0 )
    return (unsigned int)v19;
  return v2;
}
