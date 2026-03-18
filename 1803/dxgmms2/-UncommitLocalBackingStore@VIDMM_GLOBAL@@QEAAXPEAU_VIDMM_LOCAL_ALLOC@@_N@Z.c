/*
 * XREFs of ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C006C100
 * Callers:
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C0063330 (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00634E8 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00655F0 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009F5BC (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_GLOBAL::UncommitLocalBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_LOCAL_ALLOC *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  char v6; // bp
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 CurrentProcess; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

  v3 = *(_QWORD *)a2;
  v5 = *((_QWORD *)a2 + 1);
  v6 = a3;
  v8 = *(unsigned int *)(*(_QWORD *)a2 + 80LL);
  v9 = v8;
  if ( (v8 & 0x1000) == 0 && ((v8 & 0x20000) != 0 || (**(_DWORD **)(v3 + 504) & 0x40000) != 0) )
  {
    v9 = (unsigned int)v8;
    if ( (_BYTE)a3 )
    {
      v11 = *((_QWORD *)a2 + 2);
      if ( v11 )
      {
        CurrentProcess = PsGetCurrentProcess(this, (unsigned int)v8, a3, v8);
        MmUnmapViewOfSection(CurrentProcess, v11);
        v9 = *(unsigned int *)(v3 + 80);
      }
    }
  }
  v10 = **(unsigned int **)(v3 + 504);
  if ( (v9 & 0x20000) != 0 )
  {
    if ( (v10 & 0x400000) == 0 && *((_QWORD *)a2 + 12) )
    {
      v13 = WdLogNewEntry5_WdEvent(v10, v9);
      v14 = *((_QWORD *)a2 + 12);
      v15 = v13;
      *(_QWORD *)(v13 + 24) = v14;
      *(_QWORD *)(v13 + 32) = PsGetCurrentProcess(v14, v16, v17, v18);
      WdLogEvent5_WdEvent(v15);
      ObCloseHandle(*((HANDLE *)a2 + 12), (*((_QWORD *)a2 + 12) & 0xFFFFFFFF80000000uLL) == 0);
      *((_QWORD *)a2 + 12) = 0LL;
    }
  }
  else if ( (v10 & 8) == 0 && (v10 & 0x10) == 0 && (v10 & 0x20) == 0 && *((_QWORD *)a2 + 3) && v6 )
  {
    (*(void (__fastcall **)(_QWORD, struct _VIDMM_LOCAL_ALLOC *))(**(_QWORD **)(v5 + 24) + 24LL))(
      *(_QWORD *)(v5 + 24),
      a2);
    *((_QWORD *)a2 + 3) = 0LL;
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
