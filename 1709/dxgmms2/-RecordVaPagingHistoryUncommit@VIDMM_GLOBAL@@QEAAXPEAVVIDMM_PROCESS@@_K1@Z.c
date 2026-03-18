/*
 * XREFs of ?RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z @ 0x1C00A50D4
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0055C00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryUncommit(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        __int64 a3,
        __int64 a4)
{
  char *v8; // rdi
  _QWORD *v9; // rsi
  void *v10; // rcx

  if ( *((_QWORD *)this + 5115) )
  {
    v8 = (char *)this + 40936;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v8, 0LL);
    *((_QWORD *)v8 + 1) = KeGetCurrentThread();
    v9 = operator new[](0x20uLL, 0x32356956u, PagedPool);
    if ( v9 )
    {
      if ( *((_DWORD *)this + 10232) == dword_1C004033C )
        *((_DWORD *)this + 10232) = 0;
      v10 = *(void **)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16);
      if ( v10 )
        operator delete(v10);
      *v9 = *(_QWORD *)a2;
      v9[1] = *((_QWORD *)a2 + 4);
      v9[2] = a3;
      v9[3] = a4;
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v9;
      *(_DWORD *)(*((_QWORD *)this + 5115) + 24LL * (unsigned int)(*((_DWORD *)this + 10232))++ + 8) = 2;
    }
    *((_QWORD *)v8 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
  }
}
