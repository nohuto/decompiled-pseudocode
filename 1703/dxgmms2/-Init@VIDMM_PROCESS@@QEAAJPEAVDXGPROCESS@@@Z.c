/*
 * XREFs of ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C004DA40
 * Callers:
 *     VidMmCreateProcess @ 0x1C0001D80 (VidMmCreateProcess.c)
 * Callees:
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0001AB0 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0001AD0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ??0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z @ 0x1C004EDB4 (--0VIDMM_PROCESS_FENCE_STORAGE@@QEAA@PEAVVIDMM_PROCESS@@@Z.c)
 *     ??0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ @ 0x1C00655E0 (--0VIDMM_RECYCLE_HEAP_MGR@@QEAA@XZ.c)
 *     ??0VIDMM_PROCESS_HEAP@@QEAA@XZ @ 0x1C00A6B4C (--0VIDMM_PROCESS_HEAP@@QEAA@XZ.c)
 */

__int64 __fastcall VIDMM_PROCESS::Init(VIDMM_PROCESS *this, struct DXGPROCESS *a2)
{
  VIDMM_PROCESS_FENCE_STORAGE *v4; // rax
  __int64 v5; // rcx
  PVOID v6; // rax
  VIDMM_RECYCLE_HEAP_MGR *v7; // rax
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // esi
  SIZE_T v11; // rax
  PVOID v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  VIDMM_PROCESS_HEAP *v15; // rax

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  *(_QWORD *)this = *((_QWORD *)a2 + 6);
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 7);
  *((_QWORD *)this + 4) = a2;
  v4 = (VIDMM_PROCESS_FENCE_STORAGE *)operator new[](0x48uLL, 0x34346956u, (POOL_TYPE)512);
  if ( v4 )
    v4 = VIDMM_PROCESS_FENCE_STORAGE::VIDMM_PROCESS_FENCE_STORAGE(v4, this);
  *((_QWORD *)this + 5) = v4;
  if ( !v4 )
  {
    _InterlockedIncrement(&dword_1C003C5D4);
    v14 = WdLogNewEntry5_WdLowResource(v5);
    *(_QWORD *)(v14 + 24) = 194LL;
LABEL_21:
    WdLogEvent5_WdLowResource(v14);
    return 3221225495LL;
  }
  if ( dword_1C003C320 )
  {
    v6 = operator new[](0x5B8uLL, 0x30316956u, (POOL_TYPE)512);
    if ( v6 )
    {
      v7 = VIDMM_RECYCLE_HEAP_MGR::VIDMM_RECYCLE_HEAP_MGR(v6);
      goto LABEL_9;
    }
  }
  else
  {
    v15 = (VIDMM_PROCESS_HEAP *)operator new[](0x140uLL, 0x30316956u, (POOL_TYPE)512);
    if ( v15 )
    {
      v7 = VIDMM_PROCESS_HEAP::VIDMM_PROCESS_HEAP(v15);
      goto LABEL_9;
    }
  }
  v7 = 0LL;
LABEL_9:
  *((_QWORD *)this + 3) = v7;
  if ( !v7 )
  {
    _InterlockedIncrement(&dword_1C003C620);
    v14 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v14 + 24) = 214LL;
    goto LABEL_21;
  }
  result = (*(__int64 (__fastcall **)(VIDMM_RECYCLE_HEAP_MGR *, VIDMM_PROCESS *))(*(_QWORD *)v7 + 8LL))(v7, this);
  if ( (int)result < 0 )
    return result;
  Global = DXGGLOBAL::GetGlobal();
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
  v11 = 8LL * MaximumAdapterCount;
  if ( !is_mul_ok(MaximumAdapterCount, 8uLL) )
    v11 = -1LL;
  v12 = operator new[](v11, 0x33316956u, PagedPool);
  *((_QWORD *)this + 2) = v12;
  if ( !v12 )
  {
    _InterlockedIncrement(&dword_1C003C5C4);
    v14 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v14 + 24) = 236LL;
    goto LABEL_21;
  }
  memset(v12, 0, 8LL * MaximumAdapterCount);
  if ( *((_BYTE *)a2 + 273) )
  {
    *((_DWORD *)this + 12) |= 2u;
    g_pVidMmSystemProcess = this;
  }
  return 0LL;
}
