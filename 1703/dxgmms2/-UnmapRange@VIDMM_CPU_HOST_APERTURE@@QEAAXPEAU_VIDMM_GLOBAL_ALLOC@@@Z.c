/*
 * XREFs of ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0001558
 * Callers:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C000114C (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0049C70 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C004A470 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C0072F2C (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C0072FD4 (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C0093A30 (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00A0B04 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A1E7C (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::UnmapRange(VIDMM_CPU_HOST_APERTURE *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD *v2; // rax
  __int64 v4; // r8
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  void *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  _QWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v2 = (_QWORD *)((char *)a2 + 488);
  v4 = *((_QWORD *)a2 + 61);
  v6 = (_QWORD *)*((_QWORD *)a2 + 62);
  if ( *(_QWORD **)(v4 + 8) != v2 || (_QWORD *)*v6 != v2 )
    __fastfail(3u);
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  v7 = *((unsigned int *)a2 + 127);
  v8 = (void *)*((_QWORD *)a2 + 60);
  *v2 = 0LL;
  *((_QWORD *)a2 + 62) = 0LL;
  v9 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v7);
  v10 = *((_QWORD *)this + 6);
  v16 = 0LL;
  v15[0] = v9;
  v15[1] = v8;
  if ( (*(_DWORD *)(v10 + 80) & 0x1000) != 0 )
    LOWORD(v16) = 0;
  else
    LOWORD(v16) = *(_WORD *)(v10 + 16) + 1;
  WORD1(v16) = *(_WORD *)(v10 + 404);
  if ( ((int (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[40])(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 24LL) + 2288LL),
         v15) < 0 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11, v13);
    v14[7] = v15;
    v14[3] = 270LL;
    v14[4] = 46LL;
    v14[5] = this;
    v14[6] = a2;
    WdLogEvent5_WdCriticalError(v14);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  *((_QWORD *)a2 + 60) = 0LL;
}
