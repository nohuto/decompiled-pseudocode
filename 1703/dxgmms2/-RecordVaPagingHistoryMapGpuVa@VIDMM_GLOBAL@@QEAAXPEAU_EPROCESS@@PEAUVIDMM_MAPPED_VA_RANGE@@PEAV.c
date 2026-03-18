/*
 * XREFs of ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAVVIDMM_PAGING_QUEUE@@_K@Z @ 0x1C009CB00
 * Callers:
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0057E60 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(
        VIDMM_GLOBAL *this,
        struct _EPROCESS *a2,
        struct VIDMM_MAPPED_VA_RANGE *a3,
        struct VIDMM_PAGING_QUEUE *a4,
        unsigned __int64 a5)
{
  _QWORD *v9; // rdi
  void *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  if ( *((_QWORD *)this + 5115) )
  {
    v9 = operator new[](0x48uLL, 0x32356956u, PagedPool);
    if ( v9 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 40936, 0LL);
      *((_QWORD *)this + 5118) = KeGetCurrentThread();
      if ( *((_DWORD *)this + 10232) == dword_1C003C304 )
        *((_DWORD *)this + 10232) = 0;
      v10 = *(void **)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16);
      if ( v10 )
        operator delete(v10);
      v9[2] = a5;
      *v9 = a2;
      v9[1] = a4;
      v9[3] = *((_QWORD *)a3 + 12);
      v9[4] = *((_QWORD *)a3 + 13);
      v9[5] = *((_QWORD *)a3 + 7);
      *((_DWORD *)v9 + 12) = (int)(*((_DWORD *)a3 + 16) << 28) >> 28;
      v11 = *((_QWORD *)a3 + 9);
      v9[8] = 0LL;
      v9[7] = v11;
      if ( (*((_DWORD *)a3 + 16) & 0xF) == 1 )
      {
        v12 = *(_QWORD *)(*((_QWORD *)a3 + 7) + 16LL);
        if ( v12 )
          v9[8] = *(_QWORD *)(v12 + 32);
      }
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v9;
      *(_DWORD *)(*((_QWORD *)this + 5115) + 24LL * (unsigned int)(*((_DWORD *)this + 10232))++ + 8) = 14;
      *((_QWORD *)this + 5118) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40936, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
