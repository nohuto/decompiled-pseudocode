/*
 * XREFs of ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0053D10
 * Callers:
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0053CE4 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C00026B0 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     ExFreeToPagedLookasideList @ 0x1C0020FC4 (ExFreeToPagedLookasideList.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0050CF8 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0053CE4 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0055260 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C005EE20 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005FF10 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_PAGE_DIRECTORY::DestroyPageDirectoryObjects(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3)
{
  struct CVirtualAddressAllocator *v4; // rdi
  struct _PAGED_LOOKASIDE_LIST *v6; // r14
  __int64 v7; // rbx
  unsigned int NumPde; // r12d
  unsigned int v9; // r13d
  unsigned __int64 v10; // rsi
  unsigned int v11; // edi
  __int64 v12; // r14
  void *v13; // r9
  unsigned __int64 v14; // rax
  struct _VIDMM_GLOBAL_ALLOC *v15; // r8
  void *v16; // rcx
  struct _PAGED_LOOKASIDE_LIST *v18; // [rsp+38h] [rbp-80h]
  __int64 v19; // [rsp+40h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  v4 = a2;
  VIDMM_PAGE_DIRECTORY::EvictPageDirectory(this, a2, a3, 1u, 1);
  v6 = (struct _PAGED_LOOKASIDE_LIST *)*((_QWORD *)v4 + 10);
  v7 = 0LL;
  v18 = v6;
  if ( *((_QWORD *)this + 4) )
  {
    NumPde = CVirtualAddressAllocator::GetNumPde(v4, this);
    v9 = NumPde;
    if ( (*(_DWORD *)this & 0x1020) == 0x1020 )
      NumPde *= 2;
    v10 = a3;
    v11 = 0;
    v19 = *(_QWORD *)(48LL * (*(_DWORD *)this & 7)
                    + 472 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F)
                    + *(_QWORD *)&v6[313].L.Future[4]
                    + 128);
    if ( NumPde )
    {
      v12 = 0LL;
      do
      {
        v13 = *(void **)(v7 + *((_QWORD *)this + 4));
        if ( v13 )
        {
          if ( (*(_DWORD *)this & 0x20) != 0 )
          {
            if ( (*(_DWORD *)(v12 + *((_QWORD *)this + 3)) & 0x400LL) != 0 )
              ExFreeToPagedLookasideList(v18 + 314, v13);
            else
              VIDMM_PAGE_TABLE::DestroyPageTable((struct VIDMM_ALLOC **)v13, a2, v10);
          }
          else
          {
            VIDMM_PAGE_DIRECTORY::DestroyPageDirectory((VIDMM_PAGE_DIRECTORY *)v13, a2, v10, (unsigned __int8)v13);
          }
          *(_QWORD *)(v7 + *((_QWORD *)this + 4)) = 0LL;
        }
        v14 = v10 + v19;
        v10 = a3;
        if ( v11 != v9 )
          v10 = v14;
        ++v11;
        v12 += 16LL;
        v7 += 8LL;
      }
      while ( v11 < NumPde );
      v6 = v18;
    }
    operator delete(*((void **)this + 4));
    v4 = a2;
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( *((_QWORD *)this + 2) )
  {
    KeStackAttachProcess(**((PRKPROCESS **)v4 + 11), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(
      (VIDMM_GLOBAL *)v6,
      *((struct VIDMM_ALLOC **)this + 2),
      0LL,
      0,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1,
      0LL);
    KeUnstackDetachProcess(&ApcState);
    *((_QWORD *)this + 2) = 0LL;
  }
  v15 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)this + 1);
  if ( v15 )
  {
    VIDMM_GLOBAL::DestroyOneAllocation((VIDMM_GLOBAL *)v6, 0LL, v15, 0);
    *((_QWORD *)this + 1) = 0LL;
  }
  v16 = (void *)*((_QWORD *)this + 3);
  if ( v16 )
  {
    operator delete(v16);
    *((_QWORD *)this + 3) = 0LL;
  }
}
