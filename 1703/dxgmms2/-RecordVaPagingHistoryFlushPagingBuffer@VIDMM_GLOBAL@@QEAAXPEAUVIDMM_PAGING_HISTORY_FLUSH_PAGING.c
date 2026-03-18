/*
 * XREFs of ?RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER@@K@Z @ 0x1C009C6C4
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryFlushPagingBuffer(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER *a2,
        int a3)
{
  _OWORD *v6; // rdi
  void *v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1

  if ( *((_QWORD *)this + 5115) )
  {
    v6 = operator new[](0x48uLL, 0x32356956u, PagedPool);
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
      v8 = *((_OWORD *)a2 + 1);
      *v6 = *(_OWORD *)a2;
      v9 = *((_OWORD *)a2 + 2);
      v6[1] = v8;
      v10 = *((_OWORD *)a2 + 3);
      v6[2] = v9;
      *(_QWORD *)&v9 = *((_QWORD *)a2 + 8);
      v6[3] = v10;
      *((_QWORD *)v6 + 8) = v9;
      *((_DWORD *)v6 + 16) = a3;
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v6;
      *(_DWORD *)(*((_QWORD *)this + 5115) + 24LL * (unsigned int)(*((_DWORD *)this + 10232))++ + 8) = 8;
      *((_QWORD *)this + 5118) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40936, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
