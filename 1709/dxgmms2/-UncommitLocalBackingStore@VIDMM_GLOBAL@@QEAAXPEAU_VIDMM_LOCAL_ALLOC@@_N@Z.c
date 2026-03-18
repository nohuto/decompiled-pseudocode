/*
 * XREFs of ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0058648
 * Callers:
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C005ED4C (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C005EEF8 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0061210 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009A168 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::UncommitLocalBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_LOCAL_ALLOC *a2, char a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  int v8; // eax
  int *v9; // rax
  int v10; // ecx
  __int64 v11; // rbx
  __int64 CurrentProcess; // rax
  __int64 v13; // rbx

  v3 = *(_QWORD *)a2;
  v5 = *((_QWORD *)a2 + 1);
  v8 = *(_DWORD *)(*(_QWORD *)a2 + 80LL);
  if ( (v8 & 0x1000) == 0 && ((v8 & 0x10000) != 0 || (**(_DWORD **)(v3 + 504) & 0x40000) != 0) )
  {
    if ( a3 )
    {
      v11 = *((_QWORD *)a2 + 2);
      if ( v11 )
      {
        CurrentProcess = PsGetCurrentProcess();
        MmUnmapViewOfSection(CurrentProcess, v11);
      }
    }
  }
  v9 = *(int **)(v3 + 504);
  if ( (*(_DWORD *)(v3 + 80) & 0x10000) != 0 )
  {
    if ( (*v9 & 0x400000) == 0 && *((_QWORD *)a2 + 12) )
    {
      v13 = WdLogNewEntry5_WdEvent(this, a2);
      *(_QWORD *)(v13 + 24) = *((_QWORD *)a2 + 12);
      *(_QWORD *)(v13 + 32) = PsGetCurrentProcess();
      WdLogEvent5_WdEvent(v13);
      ObCloseHandle(*((HANDLE *)a2 + 12), (*((_QWORD *)a2 + 12) & 0xFFFFFFFF80000000uLL) == 0);
      *((_QWORD *)a2 + 12) = 0LL;
    }
  }
  else
  {
    v10 = *v9;
    if ( (*v9 & 8) == 0 && (v10 & 0x10) == 0 && (v10 & 0x20) == 0 && *((_QWORD *)a2 + 3) && a3 )
    {
      (*(void (__fastcall **)(_QWORD, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(v5 + 24) + 24LL))(
        *(_QWORD *)(v5 + 24),
        a2);
      *((_QWORD *)a2 + 3) = 0LL;
    }
  }
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16)
                                                      + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL))
                                          + 48LL)
                              + 296LL * (*(_DWORD *)(v3 + 76) & 0x3F)
                              + 224),
    -*(_QWORD *)(v3 + 8));
  *((_QWORD *)a2 + 2) = 0LL;
}
