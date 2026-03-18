/*
 * XREFs of ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0055AEC
 * Callers:
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C005B98C (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C005BAD4 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C005E460 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0092834 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::UncommitLocalBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_LOCAL_ALLOC *a2, char a3)
{
  __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 CurrentProcess; // rax

  v3 = *(_QWORD *)a2;
  v5 = *((_QWORD *)a2 + 1);
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 80LL) & 0x2000) == 0 && (**(_DWORD **)(v3 + 520) & 0x20040000) != 0 )
  {
    if ( a3 )
    {
      v7 = *((_QWORD *)a2 + 2);
      if ( v7 )
      {
        CurrentProcess = PsGetCurrentProcess(this);
        MmUnmapViewOfSection(CurrentProcess, v7);
      }
    }
  }
  v8 = **(unsigned int **)(v3 + 520);
  if ( (v8 & 0x20000000) != 0 )
  {
    if ( (v8 & 0x400000) == 0 && *((_QWORD *)a2 + 12) )
    {
      v9 = WdLogNewEntry5_WdEvent(v8, a2);
      v10 = *((_QWORD *)a2 + 12);
      v11 = v9;
      *(_QWORD *)(v9 + 24) = v10;
      *(_QWORD *)(v9 + 32) = PsGetCurrentProcess(v10);
      WdLogEvent5_WdEvent(v11);
      ObCloseHandle(*((HANDLE *)a2 + 12), (*((_QWORD *)a2 + 12) & 0xFFFFFFFF80000000uLL) == 0);
      *((_QWORD *)a2 + 12) = 0LL;
    }
  }
  else if ( (v8 & 8) == 0 && (v8 & 0x10) == 0 && (v8 & 0x20) == 0 && *((_QWORD *)a2 + 3) && a3 )
  {
    (*(void (__fastcall **)(_QWORD, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(v5 + 24) + 24LL))(
      *(_QWORD *)(v5 + 24),
      a2);
    *((_QWORD *)a2 + 3) = 0LL;
  }
  *((_QWORD *)a2 + 2) = 0LL;
}
