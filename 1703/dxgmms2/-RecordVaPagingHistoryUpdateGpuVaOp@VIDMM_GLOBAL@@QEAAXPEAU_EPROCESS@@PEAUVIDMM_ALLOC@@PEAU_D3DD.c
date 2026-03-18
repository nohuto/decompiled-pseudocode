/*
 * XREFs of ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1C009D094
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0095F3C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
        VIDMM_GLOBAL *this,
        struct _EPROCESS *a2,
        struct VIDMM_ALLOC *a3,
        struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *a4)
{
  _OWORD *v8; // rdi
  void *v9; // rcx
  __int128 v10; // xmm1

  if ( *((_QWORD *)this + 5115) )
  {
    v8 = operator new[](0x50uLL, 0x32356956u, PagedPool);
    if ( v8 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 40936, 0LL);
      *((_QWORD *)this + 5118) = KeGetCurrentThread();
      if ( *((_DWORD *)this + 10232) == dword_1C003C304 )
        *((_DWORD *)this + 10232) = 0;
      v9 = *(void **)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16);
      if ( v9 )
        operator delete(v9);
      *(_QWORD *)v8 = a2;
      v8[1] = *(_OWORD *)&a4->OperationType;
      v8[2] = *(_OWORD *)&a4->Copy.SizeInBytes;
      v8[3] = *(_OWORD *)(&a4->Copy + 1);
      v10 = *(_OWORD *)((char *)&a4->Copy + 40);
      *((_QWORD *)v8 + 1) = a3;
      v8[4] = v10;
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v8;
      *(_DWORD *)(*((_QWORD *)this + 5115) + 24LL * (unsigned int)(*((_DWORD *)this + 10232))++ + 8) = 18;
      *((_QWORD *)this + 5118) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40936, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
