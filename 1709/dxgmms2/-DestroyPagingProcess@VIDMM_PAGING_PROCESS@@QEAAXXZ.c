/*
 * XREFs of ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00A3B40
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0079DD8 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C007C84C (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00997F4 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C0001A04 (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0054AB8 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0055924 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 */

void __fastcall VIDMM_PAGING_PROCESS::DestroyPagingProcess(
        VIDMM_PAGING_PROCESS *this,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  struct CVirtualAddressAllocator *v7; // rsi
  unsigned int i; // r15d
  VIDMM_PAGE_DIRECTORY **v9; // r14
  VIDMM_DEVICE *v10; // rcx

  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    v6 = 0LL;
    if ( *(_DWORD *)(v4 + 6416) )
    {
      do
      {
        v7 = (struct CVirtualAddressAllocator *)*((_QWORD *)this + v6 + 4);
        if ( v7 )
        {
          for ( i = 0; i < *(_DWORD *)(*((_QWORD *)v7 + 10) + 6416LL); ++i )
          {
            v9 = (VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)v7 + 14) + 32LL * i);
            if ( *v9 )
            {
              VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(*v9, v7, 0LL, a4);
              *v9 = 0LL;
            }
          }
          CVirtualAddressAllocator::DestroyVaAllocator(*((CVirtualAddressAllocator **)this + v6 + 4), a2, a3);
          *((_QWORD *)this + v6 + 4) = 0LL;
        }
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *(_DWORD *)(*((_QWORD *)this + 2) + 6416LL) );
    }
    v10 = (VIDMM_DEVICE *)*((_QWORD *)this + 1);
    if ( v10 )
    {
      VIDMM_DEVICE::`scalar deleting destructor'(v10);
      *((_QWORD *)this + 1) = 0LL;
    }
  }
}
