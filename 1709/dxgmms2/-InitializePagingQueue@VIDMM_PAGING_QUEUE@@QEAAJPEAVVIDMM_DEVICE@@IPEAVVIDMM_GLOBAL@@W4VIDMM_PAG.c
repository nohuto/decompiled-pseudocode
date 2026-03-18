/*
 * XREFs of ?InitializePagingQueue@VIDMM_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IPEAVVIDMM_GLOBAL@@W4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C006D7F4
 * Callers:
 *     ?CreatePagingQueue@VIDMM_DEVICE@@QEAAJIHPEAPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0051580 (-CreatePagingQueue@VIDMM_DEVICE@@QEAAJIHPEAPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C00705EC (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C006D590 (-SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGING_QUEUE::InitializePagingQueue(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  char v6; // bl
  __int64 v7; // rax
  unsigned int v8; // eax
  struct _KEVENT *v9; // rax
  unsigned int v10; // ebp
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  _QWORD *v13; // rcx
  __int64 v14; // rsi
  bool v15; // cl
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  __int64 v20; // rbx
  __int64 v21; // rcx

  *(_QWORD *)(a1 + 80) = *(_QWORD *)a4;
  v6 = 1;
  *(_QWORD *)(a1 + 136) = a2;
  *(_BYTE *)(a1 + 130) = *(_BYTE *)(a4 + 4616);
  *(_DWORD *)(a1 + 132) = dword_1C00403B4;
  *(_DWORD *)(a1 + 116) = a5;
  v7 = *(_QWORD *)(a4 + 24);
  if ( *(int *)(v7 + 1968) < 0x2000 )
    v8 = 1;
  else
    v8 = *(_DWORD *)(v7 + 248);
  if ( v8 > 1 )
    *(_DWORD *)(a1 + 144) = a3;
  v9 = (struct _KEVENT *)operator new[](0x18uLL, 0x38346956u, (POOL_TYPE)512);
  *(_QWORD *)(a1 + 120) = v9;
  if ( v9 )
  {
    KeInitializeEvent(v9, SynchronizationEvent, 0);
    v10 = 0;
    while ( 1 )
    {
      v11 = operator new[](0xA0uLL, 0x38346956u, PagedPool);
      v12 = v11;
      if ( !v11 )
        break;
      memset(v11, 0, 0xA0uLL);
      v13 = *(_QWORD **)(a1 + 24);
      if ( *v13 != a1 + 16 )
        __fastfail(3u);
      *v12 = a1 + 16;
      ++v10;
      v12[1] = v13;
      *v13 = v12;
      *(_QWORD *)(a1 + 24) = v12;
      if ( v10 >= 2 )
      {
        v14 = *(_QWORD *)(a1 + 136);
        v15 = (*(_DWORD *)(*(_QWORD *)(v14 + 8) + 48LL) & 2) != 0;
        *(_BYTE *)(a1 + 129) = 0;
        *(_BYTE *)(a1 + 128) = v15;
        v16 = *(_QWORD *)(*(_QWORD *)(v14 + 8) + 32LL);
        if ( v16 )
        {
          if ( !*(_BYTE *)(v16 + 304) && !*(_BYTE *)(v16 + 306) )
            v6 = 0;
          *(_BYTE *)(a1 + 129) = v6;
        }
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v14 + 112, 0LL);
        *(_QWORD *)(v14 + 120) = KeGetCurrentThread();
        v17 = (_QWORD *)(a1 + 48);
        v18 = *(_QWORD **)(v14 + 104);
        if ( *v18 != v14 + 96 )
          __fastfail(3u);
        *v17 = v14 + 96;
        *(_QWORD *)(a1 + 56) = v18;
        *v18 = v17;
        *(_QWORD *)(v14 + 104) = v17;
        *(_QWORD *)(v14 + 120) = 0LL;
        ExReleasePushLockExclusiveEx(v14 + 112, 0LL);
        KeLeaveCriticalRegion();
        if ( *(_BYTE *)(v14 + 49) )
        {
          v20 = **(_QWORD **)v14 + 128LL;
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v20, 0LL);
          *(_QWORD *)(v20 + 8) = KeGetCurrentThread();
          VIDMM_PAGING_QUEUE::SetStatus((__int64 *)a1, 2);
          v21 = **(_QWORD **)v14 + 128LL;
          *(_QWORD *)(v21 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v21, 0LL);
          KeLeaveCriticalRegion();
        }
        return 0LL;
      }
    }
  }
  return 3221225495LL;
}
