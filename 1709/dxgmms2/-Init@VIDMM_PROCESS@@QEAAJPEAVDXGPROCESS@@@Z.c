/*
 * XREFs of ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C00524F0
 * Callers:
 *     VidMmCreateProcess @ 0x1C0012EE0 (VidMmCreateProcess.c)
 * Callees:
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0001C60 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0001C80 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C0012690 (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ??0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ @ 0x1C006904C (--0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ.c)
 *     ??0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z @ 0x1C006FC30 (--0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z.c)
 *     ??0VIDMM_PROCESS_HEAP@@QEAA@XZ @ 0x1C00AF26C (--0VIDMM_PROCESS_HEAP@@QEAA@XZ.c)
 */

__int64 __fastcall VIDMM_PROCESS::Init(struct VIDMM_PARTITION **this, struct DXGPROCESS *a2)
{
  unsigned int v2; // ebx
  VIDMM_PROCESS_FENCE_STORAGE *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  VIDMM_PROCESS_FENCE_STORAGE *v8; // rax
  PVOID v9; // rax
  __int64 v10; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v11; // rax
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // ebp
  SIZE_T v15; // rax
  struct VIDMM_PARTITION *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct VIDMM_PROCESS *v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  VIDMM_PROCESS_HEAP *v22; // rax

  v2 = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  *this = (struct VIDMM_PARTITION *)*((_QWORD *)a2 + 6);
  this[1] = (struct VIDMM_PARTITION *)*((_QWORD *)a2 + 7);
  this[4] = a2;
  v5 = (VIDMM_PROCESS_FENCE_STORAGE *)operator new[](0x48uLL, 0x34346956u, (POOL_TYPE)512);
  if ( v5 )
    v8 = VIDMM_PROCESS_FENCE_STORAGE::VIDMM_PROCESS_FENCE_STORAGE(v5, (struct VIDMM_PROCESS *)this);
  else
    v8 = 0LL;
  this[5] = v8;
  if ( !v8 )
  {
    _InterlockedIncrement(&dword_1C00405E4);
    v21 = WdLogNewEntry5_WdLowResource(v7, v6);
    *(_QWORD *)(v21 + 24) = 196LL;
LABEL_23:
    WdLogEvent5_WdLowResource(v21);
    return 3221225495LL;
  }
  if ( dword_1C0040358 )
  {
    v9 = operator new[](0x5B8uLL, 0x30316956u, (POOL_TYPE)512);
    if ( v9 )
    {
      v11 = VIDMM_RECYCLE_HEAP_MGR::VIDMM_RECYCLE_HEAP_MGR(v9);
      goto LABEL_9;
    }
  }
  else
  {
    v22 = (VIDMM_PROCESS_HEAP *)operator new[](0x140uLL, 0x30316956u, (POOL_TYPE)512);
    if ( v22 )
    {
      v11 = VIDMM_PROCESS_HEAP::VIDMM_PROCESS_HEAP(v22);
      goto LABEL_9;
    }
  }
  v11 = 0LL;
LABEL_9:
  this[3] = v11;
  if ( !v11 )
  {
    _InterlockedIncrement(dword_1C0040630);
    v21 = WdLogNewEntry5_WdLowResource(0LL, v10);
    *(_QWORD *)(v21 + 24) = 216LL;
    goto LABEL_23;
  }
  result = (*(__int64 (__fastcall **)(VIDMM_RECYCLE_HEAP_MGR *, struct VIDMM_PARTITION **))(*(_QWORD *)v11 + 8LL))(
             v11,
             this);
  if ( (int)result < 0 )
    return result;
  Global = DXGGLOBAL::GetGlobal();
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
  v15 = 8LL * MaximumAdapterCount;
  if ( !is_mul_ok(MaximumAdapterCount, 8uLL) )
    v15 = -1LL;
  v16 = (struct VIDMM_PARTITION *)operator new[](v15, 0x33316956u, PagedPool);
  this[2] = v16;
  if ( !v16 )
  {
    _InterlockedIncrement(&dword_1C00405D4);
    v21 = WdLogNewEntry5_WdLowResource(v18, v17);
    *(_QWORD *)(v21 + 24) = 238LL;
    goto LABEL_23;
  }
  memset(v16, 0, 8LL * MaximumAdapterCount);
  if ( *((_BYTE *)a2 + 305) )
  {
    *((_DWORD *)this + 12) |= 2u;
    g_pVidMmSystemProcess = (VIDMM_PROCESS *)this;
  }
  v20 = VidMmiOpenCurrentPartition(v19, this + 21);
  if ( v20 < 0 )
    return (unsigned int)v20;
  return v2;
}
