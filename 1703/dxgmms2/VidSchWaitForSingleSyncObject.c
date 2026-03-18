/*
 * XREFs of VidSchWaitForSingleSyncObject @ 0x1C0005560
 * Callers:
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C009738C (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 *     VidSchWaitForPagingFence @ 0x1C00ACE6C (VidSchWaitForPagingFence.c)
 * Callees:
 *     VidSchiAcquireSyncObject @ 0x1C0005910 (VidSchiAcquireSyncObject.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C00063A0 (VidSchiInterlockedInsertTailList.c)
 *     ?GetCurrentPagingFenceId@VIDMM_PAGING_QUEUE@@QEAA_KXZ @ 0x1C0069C44 (-GetCurrentPagingFenceId@VIDMM_PAGING_QUEUE@@QEAA_KXZ.c)
 *     VidSchiAllocateQueuePacket @ 0x1C006AD40 (VidSchiAllocateQueuePacket.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C006B1A0 (VidSchiSubmitCommandPacketToQueue.c)
 */

__int64 __fastcall VidSchWaitForSingleSyncObject(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // r14
  int v7; // eax
  __int64 QueuePacket; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r12d
  __int64 v18; // r15
  KSPIN_LOCK *v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 *v23; // rax
  __int64 **v24; // rbx
  __int64 *v25; // rsi
  VIDMM_PAGING_QUEUE *v27; // rcx
  unsigned __int64 CurrentPagingFenceId; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rbx
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rbx
  _QWORD *v35; // rdx
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE v42; // [rsp+48h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v43; // [rsp+60h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v44; // [rsp+78h] [rbp-40h] BYREF

  if ( !a1 || !a2 )
  {
    v40 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v40 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v40);
    return 3221225485LL;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v7 = *(_DWORD *)(a2 + 40);
  if ( v7 == 5 && *(_BYTE *)(a2 + 28) )
    return 3221225760LL;
  if ( (unsigned int)(v7 - 4) <= 1 && !*(_BYTE *)(a2 + 28) )
  {
    v27 = *(VIDMM_PAGING_QUEUE **)(a2 + 72);
    if ( v27 )
    {
      CurrentPagingFenceId = VIDMM_PAGING_QUEUE::GetCurrentPagingFenceId(v27);
      v30 = CurrentPagingFenceId;
      if ( *(_BYTE *)(v29 + 29) )
      {
        if ( a3 > CurrentPagingFenceId )
        {
LABEL_45:
          if ( !KdRefreshDebuggerNotPresent() )
          {
            DbgPrintEx(
              0x65u,
              0,
              "\n"
              "A request was made to wait on monitored fence 0x%I64x on paging queue 0x%p,\n"
              "but the paging queue has not generated that fence. This wait breaks the ordered wait\n"
              "contract imposed on paging queues, and cannot be placed in the queue. The paging\n"
              "queue's most recently generated fence value is 0x%I64x\n",
              a3,
              *(const void **)(a2 + 72),
              v30);
            JUMPOUT(0x1C0017C4ELL);
          }
          v37 = (_QWORD *)WdLogNewEntry5_WdAssertion();
          v37[3] = a3;
          v37[4] = *(_QWORD *)(a2 + 72);
          v37[5] = v30;
          WdLogEvent5_WdAssertion(v37);
          return 3221225485LL;
        }
      }
      else if ( (int)a3 - (int)CurrentPagingFenceId > 0 )
      {
        goto LABEL_45;
      }
    }
  }
  QueuePacket = VidSchiAllocateQueuePacket(a1, *(_DWORD *)(a1 + 804) == 0);
  v11 = QueuePacket;
  if ( QueuePacket )
  {
    *(_DWORD *)QueuePacket = 1953189969;
    *(_DWORD *)(QueuePacket + 48) = 4;
    *(_QWORD *)(QueuePacket + 56) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(QueuePacket + 52) = 2;
    *(_QWORD *)(QueuePacket + 88) = a1;
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(v11 + 264) &= ~1u;
    *(_QWORD *)(v11 + 96) = CurrentThread;
    *(_DWORD *)(v11 + 72) = 0;
    v13 = *(_DWORD *)(a2 + 40);
    if ( v13 == 2 )
    {
      *(_QWORD *)(v11 + 296) = a3;
    }
    else if ( (unsigned int)(v13 - 4) <= 1 )
    {
      *(_QWORD *)(v11 + 296) = a3;
      v31 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, v9);
      v31[3] = a2;
      v31[4] = a3;
      v31[5] = a1;
      WdLogEvent5_WdEvent(v31);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1880), &LockHandle);
    *(_QWORD *)(v11 + 272) = a2;
    v17 = VidSchiAcquireSyncObject(a1, a2, v11);
    if ( v17 < 0 || (v15 = *(unsigned int *)(v11 + 264), (v15 & 1) != 0) )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
      if ( !*(_DWORD *)(v11 + 48) && (*(_QWORD *)(v11 + 600) || *(_QWORD *)(v11 + 256)) )
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14, v16);
        v39[3] = 281LL;
        v39[4] = 2560LL;
        v39[5] = v11;
        v39[6] = *(_QWORD *)(v11 + 600);
        v39[7] = *(_QWORD *)(v11 + 256);
        WdLogEvent5_WdCriticalError(v39);
        JUMPOUT(0x1C0017CF9LL);
      }
      *(_QWORD *)(v11 + 56) = MEMORY[0xFFFFF78000000320];
      v19 = (KSPIN_LOCK *)(v18 + 1888);
      *(_DWORD *)(v11 + 52) = 0;
      v20 = v11 + 8;
      KeAcquireInStackQueuedSpinLock(v19, &v42);
      v21 = *(_QWORD *)(v11 + 8);
      v22 = *(_QWORD **)(v11 + 16);
      if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) != v20 || *v22 != v20 )
        __fastfail(3u);
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      if ( a1 != -784 )
        --*(_DWORD *)(a1 + 784);
      KeReleaseInStackQueuedSpinLock(&v42);
      if ( (*(_DWORD *)(v11 + 64) & 0x40) != 0 )
      {
        VidSchiInterlockedInsertTailList(v19, a1 + 744, v11 + 8, a1 + 760);
      }
      else
      {
        KeAcquireInStackQueuedSpinLock(v19, &v43);
        v23 = *(__int64 **)(a1 + 728);
        if ( *v23 != a1 + 720 )
          __fastfail(3u);
        *(_QWORD *)v20 = a1 + 720;
        *(_QWORD *)(v11 + 16) = v23;
        *v23 = v20;
        *(_QWORD *)(a1 + 728) = v20;
        if ( a1 != -736 )
          ++*(_DWORD *)(a1 + 736);
        KeReleaseInStackQueuedSpinLock(&v43);
      }
      if ( (*(_DWORD *)(v11 + 64) & 0x40) == 0 )
      {
        v24 = (__int64 **)(a1 + 720);
        while ( 1 )
        {
          v25 = 0LL;
          KeAcquireInStackQueuedSpinLock(v19, &v44);
          if ( *v24 != (__int64 *)v24 && *(_DWORD *)(a1 + 736) > 0x10u )
          {
            v25 = *v24;
            v36 = **v24;
            if ( (__int64 **)(*v24)[1] != v24 || *(__int64 **)(v36 + 8) != v25 )
              __fastfail(3u);
            *v24 = (__int64 *)v36;
            *(_QWORD *)(v36 + 8) = v24;
            --*(_DWORD *)(a1 + 736);
          }
          KeReleaseInStackQueuedSpinLock(&v44);
          if ( !v25 )
            break;
          ExFreePoolWithTag(v25 - 1, 0);
        }
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return (unsigned int)v17;
    }
    else if ( *(_BYTE *)(a2 + 26) )
    {
      v32 = MEMORY[0xFFFFF78000000320];
      v33 = *(_QWORD *)(v11 + 88);
      *(_DWORD *)(v11 + 64) |= 0x10u;
      *(_QWORD *)(v11 + 56) = v32;
      *(_DWORD *)(v11 + 52) = 17;
      v34 = (_QWORD *)(v11 + 32);
      v35 = *(_QWORD **)(v33 + 712);
      if ( *v35 != v33 + 704 )
        __fastfail(3u);
      *v34 = v33 + 704;
      v34[1] = v35;
      *v35 = v34;
      *(_QWORD *)(v33 + 712) = v34;
      ++*(_DWORD *)(v33 + 812);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiSubmitCommandPacketToQueue((struct _VIDSCH_QUEUE_PACKET *)v11);
      return 0LL;
    }
  }
  else
  {
    v38 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v38 + 24) = -1073741801LL;
    *(_QWORD *)(v38 + 32) = 8771LL;
    WdLogEvent5_WdAssertion(v38);
    return 3221225495LL;
  }
}
