/*
 * XREFs of ?RecordVaPagingHistoryFlushTlb@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_FLUSHTLB@@I@Z @ 0x1C00A4AE0
 * Callers:
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C005A5C0 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryFlushTlb(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _DXGK_BUILDPAGINGBUFFER_FLUSHTLB *a3,
        int a4)
{
  _OWORD *v8; // rdi
  void *v9; // rcx

  if ( *((_QWORD *)this + 5115) )
  {
    v8 = operator new[](0x40uLL, 0x32356956u, PagedPool);
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
      *v8 = a3->RootPageTableAddress;
      v8[1] = *(_OWORD *)&a3->hProcess;
      *((_QWORD *)v8 + 4) = a3->EndVirtualAddress;
      *((_DWORD *)v8 + 14) = a4;
      *((_QWORD *)v8 + 5) = *(_QWORD *)a2;
      *((_QWORD *)v8 + 6) = *((_QWORD *)a2 + 4);
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v8;
      *(_DWORD *)(*((_QWORD *)this + 5115) + 24LL * (unsigned int)(*((_DWORD *)this + 10232))++ + 8) = 5;
      *((_QWORD *)this + 5118) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40936, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
