/*
 * XREFs of ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C006D50C
 * Callers:
 *     ?VidMmFlushPagingQueue@@YAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0013FC0 (-VidMmFlushPagingQueue@@YAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C005134C (--1VIDMM_DEVICE@@QEAA@XZ.c)
 *     ?Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C006D6D8 (-Destroy@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C00518C0 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_PAGING_QUEUE::Flush(VIDMM_PAGING_QUEUE *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  if ( *((_QWORD *)this + 10) )
  {
    VIDMM_DEVICE::EnsureSchedulable(*((VIDMM_DEVICE **)this + 17), 0LL);
    while ( 1 )
    {
      v2 = *((_QWORD *)this + 10);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v2 + 128, 0LL);
      *(_QWORD *)(v2 + 136) = KeGetCurrentThread();
      LODWORD(v2) = *((_DWORD *)this + 28);
      v3 = *((_QWORD *)this + 10) + 128LL;
      *(_QWORD *)(v3 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v3, 0LL);
      KeLeaveCriticalRegion();
      if ( !(_DWORD)v2 )
        break;
      KeWaitForSingleObject(*((PVOID *)this + 15), Executive, 0, 0, 0LL);
    }
  }
}
