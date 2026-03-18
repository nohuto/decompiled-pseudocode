/*
 * XREFs of ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0066C54
 * Callers:
 *     VidSchSetPagingNodePageDirectory @ 0x1C0016704 (VidSchSetPagingNodePageDirectory.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C006DF30 (VidSchiSubmitRenderVirtualCommand.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _DXGKARG_SETROOTPAGETABLE *a3,
        struct _VIDSCH_CONTEXT *a4)
{
  _QWORD *v8; // rdi
  void *v9; // rcx
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int64 v12; // rax

  if ( *((_QWORD *)this + 5115) )
  {
    v8 = operator new[](0x38uLL, 0x32356956u, PagedPool);
    if ( v8 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 40936, 0LL);
      *((_QWORD *)this + 5118) = KeGetCurrentThread();
      if ( *((_DWORD *)this + 10232) == dword_1C004033C )
        *((_DWORD *)this + 10232) = 0;
      v9 = *(void **)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16);
      if ( v9 )
        operator delete(v9);
      *(_OWORD *)v8 = *(_OWORD *)&a3->hContext;
      v10 = *(_OWORD *)&a3->Address.SegmentOffset;
      v8[6] = a4;
      *((_OWORD *)v8 + 1) = v10;
      if ( a2 )
        v11 = *(_QWORD *)a2;
      else
        v11 = 0LL;
      v8[4] = v11;
      if ( a2 )
        v12 = *((_QWORD *)a2 + 4);
      else
        v12 = 0LL;
      v8[5] = v12;
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v8;
      *(_DWORD *)(*((_QWORD *)this + 5115) + 24LL * (unsigned int)(*((_DWORD *)this + 10232))++ + 8) = 9;
      *((_QWORD *)this + 5118) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40936, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
