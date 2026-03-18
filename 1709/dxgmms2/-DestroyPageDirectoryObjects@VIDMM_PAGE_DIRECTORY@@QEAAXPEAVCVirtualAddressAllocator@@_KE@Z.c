/*
 * XREFs of ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0055950
 * Callers:
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0055924 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 * Callees:
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C0001CA0 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     ExFreeToPagedLookasideList @ 0x1C0022ED8 (ExFreeToPagedLookasideList.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0055924 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0056EA0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0057A7C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0061B40 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0062D60 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_PAGE_DIRECTORY::DestroyPageDirectoryObjects(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3)
{
  struct CVirtualAddressAllocator *v4; // rdi
  struct _PAGED_LOOKASIDE_LIST *v6; // r14
  unsigned int NumPde; // r12d
  unsigned int v8; // ebp
  unsigned int v9; // edi
  unsigned __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  __int64 v14; // r14
  void *v15; // r9
  unsigned __int64 v16; // rax
  struct _VIDMM_GLOBAL_ALLOC *v17; // r8
  void *v18; // rcx
  struct _PAGED_LOOKASIDE_LIST *v21; // [rsp+40h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  v4 = a2;
  VIDMM_PAGE_DIRECTORY::EvictPageDirectory(this, a2, a3, 1u, 1);
  v6 = (struct _PAGED_LOOKASIDE_LIST *)*((_QWORD *)v4 + 10);
  v21 = v6;
  if ( *((_QWORD *)this + 4) )
  {
    NumPde = CVirtualAddressAllocator::GetNumPde(v4, this);
    v8 = NumPde;
    if ( (*(_DWORD *)this & 0x1020) == 0x1020 )
      NumPde *= 2;
    v9 = 0;
    v10 = a3;
    v11 = *(_QWORD *)(48LL * (*(_DWORD *)this & 7)
                    + 1552 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F)
                    + *(_QWORD *)&v6[313].L.Future[4]
                    + 128);
    if ( NumPde )
    {
      v12 = 0LL;
      v13 = v10;
      v14 = 0LL;
      do
      {
        v15 = *(void **)(v12 + *((_QWORD *)this + 4));
        if ( v15 )
        {
          if ( (*(_DWORD *)this & 0x20) != 0 )
          {
            if ( (*(_DWORD *)(v14 + *((_QWORD *)this + 3)) & 0x400LL) != 0 )
              ExFreeToPagedLookasideList(v21 + 314, v15);
            else
              VIDMM_PAGE_TABLE::DestroyPageTable((VIDMM_PAGE_TABLE *)v15, a2, v10);
          }
          else
          {
            VIDMM_PAGE_DIRECTORY::DestroyPageDirectory((VIDMM_PAGE_DIRECTORY *)v15, a2, v10, (unsigned __int8)v15);
          }
          v13 = a3;
          *(_QWORD *)(v12 + *((_QWORD *)this + 4)) = 0LL;
        }
        v16 = v10 + v11;
        v10 = v13;
        if ( v9 != v8 )
          v10 = v16;
        ++v9;
        v14 += 16LL;
        v12 += 8LL;
      }
      while ( v9 < NumPde );
      v6 = v21;
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
  v17 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)this + 1);
  if ( v17 )
  {
    VIDMM_GLOBAL::DestroyOneAllocation((VIDMM_GLOBAL *)v6, 0LL, v17, 0);
    *((_QWORD *)this + 1) = 0LL;
  }
  v18 = (void *)*((_QWORD *)this + 3);
  if ( v18 )
  {
    operator delete(v18);
    *((_QWORD *)this + 3) = 0LL;
  }
}
