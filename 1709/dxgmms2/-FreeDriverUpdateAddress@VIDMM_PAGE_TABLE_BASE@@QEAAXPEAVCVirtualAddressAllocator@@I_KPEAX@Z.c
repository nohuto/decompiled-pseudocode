/*
 * XREFs of ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C00573F0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0055C00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0056EA0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0057C60 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0099548 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 * Callees:
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C00793E0 (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 */

void __fastcall VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        __int64 a3,
        void *a4,
        void *a5)
{
  __int64 v5; // r10
  int v6; // r8d
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 **v11; // rax

  v5 = *((_QWORD *)a2 + 10);
  if ( (*(_BYTE *)(v5 + 40872) & 8) != 0 || (v6 = (int)(*(_DWORD *)this << 16) >> 29) == 0 )
  {
    VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(this, *((struct VIDMM_GLOBAL **)a2 + 10), a4, a5);
  }
  else if ( v6 == 1
         && *(struct CVirtualAddressAllocator **)(v5
                                                + 8 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F)
                                                + 40352) != a2 )
  {
    v7 = *((_QWORD *)this + 2) + 128LL;
    v8 = *(__int64 **)v7;
    if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || (v9 = *v8, *(__int64 **)(*v8 + 8) != v8) )
      __fastfail(3u);
    *(_QWORD *)v7 = v9;
    *(_QWORD *)(v9 + 8) = v7;
    v8[2] = *(_QWORD *)(v5 + 8LL * ((*(_DWORD *)this >> 7) & 0x1F) + 4880);
    v10 = 1552LL * ((*(_DWORD *)this >> 7) & 0x1F) + *(_QWORD *)(v5 + 40168) + 456LL;
    v11 = *(__int64 ***)(v10 + 8);
    if ( *v11 != (__int64 *)v10 )
      __fastfail(3u);
    *v8 = v10;
    v8[1] = (__int64)v11;
    *v11 = v8;
    *(_QWORD *)(v10 + 8) = v8;
  }
}
