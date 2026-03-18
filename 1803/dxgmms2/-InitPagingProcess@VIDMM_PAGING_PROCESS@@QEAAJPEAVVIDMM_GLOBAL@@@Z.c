/*
 * XREFs of ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C007F7A0
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C007E714 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0073DE0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C0075A34 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C0075B78 (-Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00AACD4 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_PAGING_PROCESS::InitPagingProcess(VIDMM_PAGING_PROCESS *this, struct VIDMM_GLOBAL *a2)
{
  VIDMM_PROCESS *v2; // rax
  VIDMM_DEVICE *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx

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
      v13 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v13 + 24) = 7324LL;
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 2) + 41448LL) & 2) != 0 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 48LL)
                        + 8LL * *(unsigned int *)(*((_QWORD *)a2 + 3) + 200LL));
        if ( v14 )
          v14 = *(_QWORD *)(v14 + 16);
        v15 = 0LL;
        for ( *((_QWORD *)this + 3) = v14; (unsigned int)v15 < *((_DWORD *)a2 + 1748); v15 = (unsigned int)(v15 + 1) )
        {
          v16 = *((_QWORD *)this + v15 + 4);
          if ( v16 )
            *(_QWORD *)(v16 + 96) = *((_QWORD *)this + 1);
        }
      }
      if ( (*((_BYTE *)a2 + 41448) & 0x20) != 0 )
        return 0LL;
      if ( (int)VIDMM_PROCESS::OpenAdapter((struct DXGPROCESS **)g_pVidMmSystemProcess, a2) >= 0 )
      {
        *((_BYTE *)a2 + 41448) |= 0x20u;
        return 0LL;
      }
      v13 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v13 + 24) = 7345LL;
    }
    WdLogEvent5_WdAssertion(v13);
  }
  else
  {
    _InterlockedIncrement(&dword_1C00475DC);
    v12 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v12 + 24) = 7319LL;
    WdLogEvent5_WdLowResource(v12);
  }
  VIDMM_PAGING_PROCESS::DestroyPagingProcess(this);
  return 3221225473LL;
}
