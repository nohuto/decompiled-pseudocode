/*
 * XREFs of ?RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VAD_OWNER_TYPE@@@Z @ 0x1C009C554
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053FC0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryCommit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  __int64 v13; // rdi
  _DWORD *v14; // rsi
  void *v15; // rcx

  if ( *(_QWORD *)(a1 + 40920) )
  {
    v13 = a1 + 40936;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v13, 0LL);
    *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
    v14 = operator new[](0x40uLL, 0x32356956u, PagedPool);
    if ( v14 )
    {
      if ( *(_DWORD *)(a1 + 40928) == dword_1C003C304 )
        *(_DWORD *)(a1 + 40928) = 0;
      v15 = *(void **)(*(_QWORD *)(a1 + 40920) + 24LL * *(unsigned int *)(a1 + 40928) + 16);
      if ( v15 )
        operator delete(v15);
      v14[15] = a9;
      *((_QWORD *)v14 + 5) = a7;
      *((_QWORD *)v14 + 6) = a8;
      v14[14] = a5;
      *((_QWORD *)v14 + 4) = a6;
      *(_QWORD *)v14 = a2;
      *((_QWORD *)v14 + 2) = a3;
      *((_QWORD *)v14 + 3) = a4;
      *(_QWORD *)(*(_QWORD *)(a1 + 40920) + 24LL * *(unsigned int *)(a1 + 40928)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*(_QWORD *)(a1 + 40920) + 24LL * *(unsigned int *)(a1 + 40928) + 16) = v14;
      *(_DWORD *)(*(_QWORD *)(a1 + 40920) + 24LL * (unsigned int)(*(_DWORD *)(a1 + 40928))++ + 8) = 1;
    }
    *(_QWORD *)(v13 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
  }
}
