/*
 * XREFs of ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0054AB8
 * Callers:
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C0052650 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0052A50 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00A1D1C (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00A3B40 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C0001A04 (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     McTemplateK0ppp @ 0x1C0021E8C (McTemplateK0ppp.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0055924 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1C00734C4 (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall CVirtualAddressAllocator::DestroyVaAllocator(CVirtualAddressAllocator *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned int i; // edi
  VIDMM_PAGE_DIRECTORY **v6; // rsi
  struct _RTL_BALANCED_NODE *v7; // rcx
  ULONG_PTR ParentValue; // rdi
  unsigned __int64 v9; // rdi
  struct _RTL_BALANCED_NODE *v10; // rcx
  ULONG_PTR v11; // rdi
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  VIDMM_DEVICE *v14; // rcx
  struct _RTL_BALANCED_NODE *v15; // rax
  struct _RTL_BALANCED_NODE *v16; // rax
  struct _RTL_BALANCED_NODE *v17; // rax
  struct _RTL_BALANCED_NODE *v18; // rax

  v3 = *((_QWORD *)this + 11);
  if ( v3 )
  {
    if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
      McTemplateK0ppp(
        (__int64)this,
        &DestroyGpuVirtualAddressAllocator,
        a3,
        this,
        *(_QWORD *)(*(_QWORD *)(v3 + 32) + 56LL),
        *(_QWORD *)(*((_QWORD *)this + 10) + 24LL));
    for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 10) + 6416LL); ++i )
    {
      v6 = (VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 14) + 32LL * i);
      if ( *v6 )
      {
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(*v6, this, 0LL);
        *v6 = 0LL;
      }
    }
  }
  v7 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  if ( v7 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v7->Children[0] )
        {
          v16 = v7;
          v7 = v7->Children[0];
          v16->Children[0] = 0LL;
        }
        if ( !v7->Children[1] )
          break;
        v17 = v7;
        v7 = v7->Children[1];
        v17->Children[1] = 0LL;
      }
      ParentValue = v7->ParentValue;
      FreeVadAvl(v7, 0LL);
      v9 = ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v9 )
        break;
      v7 = (struct _RTL_BALANCED_NODE *)v9;
    }
  }
  *((_QWORD *)this + 5) = 0LL;
  v10 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  if ( v10 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v10->Children[0] )
        {
          v15 = v10;
          v10 = v10->Children[0];
          v15->Children[0] = 0LL;
        }
        if ( !v10->Children[1] )
          break;
        v18 = v10;
        v10 = v10->Children[1];
        v18->Children[1] = 0LL;
      }
      v11 = v10->ParentValue;
      FreeVadAvl(v10, 0LL);
      v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v12 )
        break;
      v10 = (struct _RTL_BALANCED_NODE *)v12;
    }
  }
  *((_QWORD *)this + 6) = 0LL;
  v13 = *((_QWORD *)this + 11);
  if ( v13 )
  {
    if ( (*(_DWORD *)(v13 + 48) & 2) == 0 )
    {
      v14 = (VIDMM_DEVICE *)*((_QWORD *)this + 12);
      if ( v14 )
        VIDMM_DEVICE::`scalar deleting destructor'(v14);
    }
  }
  operator delete(*((void **)this + 14));
  operator delete(this);
}
