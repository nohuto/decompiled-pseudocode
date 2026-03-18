/*
 * XREFs of ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1C00A5394
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C009E118 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C009F898 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _VIDSCH_CONTEXT *a3,
        struct VIDMM_ALLOC *a4,
        struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *a5)
{
  _QWORD *v9; // rdi
  void *v10; // rcx
  __int128 v11; // xmm1

  if ( *((_QWORD *)this + 5115) )
  {
    v9 = operator new[](0x60uLL, 0x32356956u, PagedPool);
    if ( v9 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 40936, 0LL);
      *((_QWORD *)this + 5118) = KeGetCurrentThread();
      if ( *((_DWORD *)this + 10232) == dword_1C004033C )
        *((_DWORD *)this + 10232) = 0;
      v10 = *(void **)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16);
      if ( v10 )
        operator delete(v10);
      *v9 = *(_QWORD *)a2;
      v9[1] = *((_QWORD *)a2 + 4);
      v9[2] = a3;
      *((_OWORD *)v9 + 2) = *(_OWORD *)&a5->OperationType;
      *((_OWORD *)v9 + 3) = *(_OWORD *)&a5->Copy.SizeInBytes;
      *((_OWORD *)v9 + 4) = *(_OWORD *)(&a5->Copy + 1);
      v11 = *(_OWORD *)((char *)&a5->Copy + 40);
      v9[3] = a4;
      *((_OWORD *)v9 + 5) = v11;
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v9;
      *(_DWORD *)(*((_QWORD *)this + 5115) + 24LL * (unsigned int)(*((_DWORD *)this + 10232))++ + 8) = 18;
      *((_QWORD *)this + 5118) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40936, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
