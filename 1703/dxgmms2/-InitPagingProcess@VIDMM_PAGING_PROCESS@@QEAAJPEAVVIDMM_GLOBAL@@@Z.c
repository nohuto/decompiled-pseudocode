/*
 * XREFs of ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00750DC
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00748D8 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C004C900 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C004CA30 (-Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C004DD7C (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C009B898 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_PAGING_PROCESS::InitPagingProcess(VIDMM_PAGING_PROCESS *this, struct VIDMM_GLOBAL *a2)
{
  VIDMM_PROCESS *v2; // rax
  VIDMM_DEVICE *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rax

  v2 = g_pVidMmSystemProcess;
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = v2;
  v5 = (VIDMM_DEVICE *)operator new[](0x120uLL, 0x38306956u, PagedPool);
  if ( v5 )
    v5 = VIDMM_DEVICE::VIDMM_DEVICE(v5, a2, 0LL);
  *((_QWORD *)this + 1) = v5;
  if ( v5 )
  {
    if ( (int)VIDMM_DEVICE::Init(v5, 0LL) < 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v15 + 24) = 7271LL;
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 2) + 40872LL) & 1) != 0 )
      {
        v9 = 0LL;
        for ( *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 40LL)
                                                            + 8LL * *(unsigned int *)(*((_QWORD *)a2 + 3) + 200LL))
                                                + 16LL);
              (unsigned int)v9 < *((_DWORD *)a2 + 1604);
              v9 = (unsigned int)(v9 + 1) )
        {
          v10 = *((_QWORD *)this + v9 + 4);
          if ( v10 )
            *(_QWORD *)(v10 + 96) = *((_QWORD *)this + 1);
        }
      }
      if ( (*((_BYTE *)a2 + 40872) & 0x10) != 0 )
        return 0LL;
      if ( (int)VIDMM_PROCESS::OpenAdapter((struct DXGPROCESS **)g_pVidMmSystemProcess, a2) >= 0 )
      {
        *((_BYTE *)a2 + 40872) |= 0x10u;
        return 0LL;
      }
      v15 = WdLogNewEntry5_WdAssertion(v12, v11);
      *(_QWORD *)(v15 + 24) = 7292LL;
    }
    WdLogEvent5_WdAssertion(v15);
  }
  else
  {
    _InterlockedIncrement(&dword_1C003C5CC);
    v14 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v14 + 24) = 7266LL;
    WdLogEvent5_WdLowResource(v14);
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess(this);
  return 3221225473LL;
}
