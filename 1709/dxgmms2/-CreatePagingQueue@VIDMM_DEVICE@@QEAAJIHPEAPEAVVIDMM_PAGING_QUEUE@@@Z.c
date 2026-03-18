/*
 * XREFs of ?CreatePagingQueue@VIDMM_DEVICE@@QEAAJIHPEAPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0051580
 * Callers:
 *     ?VidMmCreatePagingQueue@@YAJPEAVVIDMM_DEVICE@@IHPEAPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0013EA0 (-VidMmCreatePagingQueue@@YAJPEAVVIDMM_DEVICE@@IHPEAPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z @ 0x1C0002590 (--_GVIDMM_PAGING_QUEUE@@QEAAPEAXI@Z.c)
 *     ??0VIDMM_PAGING_QUEUE@@QEAA@XZ @ 0x1C006D784 (--0VIDMM_PAGING_QUEUE@@QEAA@XZ.c)
 *     ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C006D7F4 (-InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAG.c)
 */

__int64 __fastcall VIDMM_DEVICE::CreatePagingQueue(
        VIDMM_DEVICE *this,
        unsigned int a2,
        __int64 a3,
        struct VIDMM_PAGING_QUEUE **a4)
{
  VIDMM_PAGING_QUEUE *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v12; // rax

  v7 = (VIDMM_PAGING_QUEUE *)operator new[](0x98uLL, 0x38346956u, PagedPool);
  if ( v7 )
    v7 = VIDMM_PAGING_QUEUE::VIDMM_PAGING_QUEUE(v7);
  *a4 = v7;
  if ( v7 )
  {
    v10 = VIDMM_PAGING_QUEUE::InitializePagingQueue(v7, this, a2, *(_QWORD *)this, 0);
    if ( v10 < 0 )
    {
      if ( *a4 )
        VIDMM_PAGING_QUEUE::`scalar deleting destructor'(*a4);
      *a4 = 0LL;
    }
    return (unsigned int)v10;
  }
  else
  {
    _InterlockedIncrement(&dword_1C004068C);
    v12 = WdLogNewEntry5_WdLowResource(v9, v8);
    *(_QWORD *)(v12 + 24) = 498LL;
    WdLogEvent5_WdLowResource(v12);
    return 3221225495LL;
  }
}
