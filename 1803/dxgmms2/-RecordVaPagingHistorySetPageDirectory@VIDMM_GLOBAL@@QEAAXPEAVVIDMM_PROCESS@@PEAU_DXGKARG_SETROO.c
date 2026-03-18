/*
 * XREFs of ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAX@Z @ 0x1C006B548
 * Callers:
 *     VidSchSubmitCommandToHwQueue @ 0x1C0032690 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0074F20 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchSetPagingNodePageDirectory @ 0x1C00BE024 (VidSchSetPagingNodePageDirectory.c)
 *     VidSchiSetPagingHwContextPageDirectory @ 0x1C00BE844 (VidSchiSetPagingHwContextPageDirectory.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _DXGKARG_SETROOTPAGETABLE *a3,
        void *a4)
{
  _QWORD *v8; // rdi
  __int64 v9; // rax
  void *v10; // rcx
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int64 v13; // rax

  if ( *((_QWORD *)this + 5187) )
  {
    v8 = operator new[](0x38uLL, 0x32356956u, PagedPool);
    if ( v8 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 41512, 0LL);
      *((_QWORD *)this + 5190) = KeGetCurrentThread();
      v9 = *((unsigned int *)this + 10376);
      if ( (_DWORD)v9 == dword_1C004733C )
      {
        *((_DWORD *)this + 10376) = 0;
        v9 = 0LL;
      }
      v10 = *(void **)(*((_QWORD *)this + 5187) + 24 * v9 + 16);
      if ( v10 )
        operator delete(v10);
      *(_OWORD *)v8 = *(_OWORD *)&a3->hContext;
      v11 = *(_OWORD *)&a3->Address.SegmentOffset;
      v8[6] = a4;
      *((_OWORD *)v8 + 1) = v11;
      if ( a2 )
        v12 = *(_QWORD *)a2;
      else
        v12 = 0LL;
      v8[4] = v12;
      if ( a2 )
        v13 = *((_QWORD *)a2 + 4);
      else
        v13 = 0LL;
      v8[5] = v13;
      *(_QWORD *)(*((_QWORD *)this + 5187) + 24LL * *((unsigned int *)this + 10376)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5187) + 24LL * *((unsigned int *)this + 10376) + 16) = v8;
      *(_DWORD *)(*((_QWORD *)this + 5187) + 24LL * (unsigned int)(*((_DWORD *)this + 10376))++ + 8) = 9;
      *((_QWORD *)this + 5190) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 41512, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
