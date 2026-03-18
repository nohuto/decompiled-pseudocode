/*
 * XREFs of ?RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009D5BC
 * Callers:
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C005A814 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(
        VIDMM_GLOBAL *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3)
{
  _OWORD *v6; // rdi
  void *v7; // rcx
  __int128 v8; // xmm1
  __int64 v9; // rax
  __int64 v10; // rax

  if ( *((_QWORD *)this + 5115) )
  {
    v6 = operator new[](0x58uLL, 0x32356956u, PagedPool);
    if ( v6 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 40936, 0LL);
      *((_QWORD *)this + 5118) = KeGetCurrentThread();
      if ( *((_DWORD *)this + 10232) == dword_1C003C304 )
        *((_DWORD *)this + 10232) = 0;
      v7 = *(void **)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16);
      if ( v7 )
        operator delete(v7);
      *v6 = *(_OWORD *)&a2->Transfer.hAllocation;
      v6[1] = *(_OWORD *)&a2->NotifyResidency.PhysicalAddress.SegmentOffset;
      v6[2] = *(_OWORD *)&a2->Reserved.Reserved[8];
      v8 = *(_OWORD *)&a2->Reserved.Reserved[12];
      *((_QWORD *)v6 + 9) = a3;
      v6[3] = v8;
      if ( a3 )
      {
        v10 = *((_QWORD *)a3 + 5);
        if ( v10 )
          v9 = *(_QWORD *)(v10 + 16);
        else
          v9 = *((_QWORD *)a3 + 6);
      }
      else
      {
        v9 = 0LL;
      }
      *((_QWORD *)v6 + 10) = v9;
      *((_DWORD *)v6 + 16) = *((_DWORD *)a3 + 19) & 0x3F;
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v6;
      *(_DWORD *)(*((_QWORD *)this + 5115) + 24LL * (unsigned int)(*((_DWORD *)this + 10232))++ + 8) = 7;
      *((_QWORD *)this + 5118) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40936, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
