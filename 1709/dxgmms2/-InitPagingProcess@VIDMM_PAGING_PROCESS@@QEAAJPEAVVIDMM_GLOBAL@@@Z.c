/*
 * XREFs of ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C007C84C
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C007B108 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C0050ED8 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C005101C (-Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C005274C (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00A3B40 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_PAGING_PROCESS::InitPagingProcess(VIDMM_PAGING_PROCESS *this, struct VIDMM_GLOBAL *a2)
{
  VIDMM_PROCESS *v2; // rax
  VIDMM_DEVICE *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax

  v2 = g_pVidMmSystemProcess;
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = v2;
  v5 = (VIDMM_DEVICE *)operator new[](0x130uLL, 0x38306956u, PagedPool);
  if ( v5 )
    v5 = VIDMM_DEVICE::VIDMM_DEVICE(v5, a2, 0LL);
  *((_QWORD *)this + 1) = v5;
  if ( v5 )
  {
    if ( (int)VIDMM_DEVICE::Init(v5, 0LL) < 0 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v16 + 24) = 7272LL;
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 2) + 40872LL) & 1) != 0 )
      {
        v13 = 0LL;
        for ( *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 40LL)
                                                            + 8LL * *(unsigned int *)(*((_QWORD *)a2 + 3) + 200LL))
                                                + 16LL);
              (unsigned int)v13 < *((_DWORD *)a2 + 1604);
              v13 = (unsigned int)(v13 + 1) )
        {
          v14 = *((_QWORD *)this + v13 + 4);
          if ( v14 )
            *(_QWORD *)(v14 + 96) = *((_QWORD *)this + 1);
        }
      }
      if ( (*((_BYTE *)a2 + 40872) & 0x10) != 0 )
        return 0LL;
      if ( (int)VIDMM_PROCESS::OpenAdapter((struct DXGPROCESS **)g_pVidMmSystemProcess, a2) >= 0 )
      {
        *((_BYTE *)a2 + 40872) |= 0x10u;
        return 0LL;
      }
      v16 = WdLogNewEntry5_WdAssertion(v11, v10);
      *(_QWORD *)(v16 + 24) = 7293LL;
    }
    WdLogEvent5_WdAssertion(v16);
  }
  else
  {
    _InterlockedIncrement(&dword_1C00405DC);
    v15 = WdLogNewEntry5_WdLowResource(v7, v6);
    *(_QWORD *)(v15 + 24) = 7267LL;
    WdLogEvent5_WdLowResource(v15);
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess(this);
  return 3221225473LL;
}
