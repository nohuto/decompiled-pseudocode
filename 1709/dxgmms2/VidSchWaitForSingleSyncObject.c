/*
 * XREFs of VidSchWaitForSingleSyncObject @ 0x1C0005FE0
 * Callers:
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C009F898 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 *     VidSchWaitForPagingFence @ 0x1C00B5850 (VidSchWaitForPagingFence.c)
 * Callees:
 *     VidSchiAcquireSyncObject @ 0x1C00063A0 (VidSchiAcquireSyncObject.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C00071A0 (VidSchiInterlockedInsertTailList.c)
 *     ?GetCurrentPagingFenceId@VIDMM_PAGING_QUEUE@@QEAA_KXZ @ 0x1C006DA30 (-GetCurrentPagingFenceId@VIDMM_PAGING_QUEUE@@QEAA_KXZ.c)
 *     VidSchiAllocateQueuePacket @ 0x1C006EA50 (VidSchiAllocateQueuePacket.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C006EEB0 (VidSchiSubmitCommandPacketToQueue.c)
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
  __int64 v19; // rax
  KSPIN_LOCK *v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 *v24; // rax
  _QWORD **v25; // rbx
  _QWORD *v26; // rsi
  _QWORD *v27; // rax
  VIDMM_PAGING_QUEUE *v29; // rcx
  unsigned __int64 CurrentPagingFenceId; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rbx
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rbx
  _QWORD *v37; // rdx
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE v44; // [rsp+48h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v45; // [rsp+60h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v46; // [rsp+78h] [rbp-40h] BYREF

  if ( !a1 || !a2 )
  {
    v42 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v42 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v42);
    return 3221225485LL;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v7 = *(_DWORD *)(a2 + 40);
  if ( v7 == 5 )
  {
    if ( *(_BYTE *)(a2 + 28) )
      return 3221225760LL;
  }
  else if ( v7 != 4 || *(_BYTE *)(a2 + 28) )
  {
    goto LABEL_5;
  }
  v29 = *(VIDMM_PAGING_QUEUE **)(a2 + 72);
  if ( v29 )
  {
    CurrentPagingFenceId = VIDMM_PAGING_QUEUE::GetCurrentPagingFenceId(v29);
    v32 = CurrentPagingFenceId;
    if ( *(_BYTE *)(v31 + 29) )
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
            v32);
          JUMPOUT(0x1C001A04CLL);
        }
        v39 = (_QWORD *)WdLogNewEntry5_WdAssertion();
        v39[3] = a3;
        v39[4] = *(_QWORD *)(a2 + 72);
        v39[5] = v32;
        WdLogEvent5_WdAssertion(v39);
        return 3221225485LL;
      }
    }
    else if ( (int)a3 - (int)CurrentPagingFenceId > 0 )
    {
      goto LABEL_45;
    }
  }
LABEL_5:
  QueuePacket = VidSchiAllocateQueuePacket(a1, *(_DWORD *)(a1 + 780) == 0);
  v11 = QueuePacket;
  if ( QueuePacket )
  {
    *(_DWORD *)QueuePacket = 1953189969;
    *(_DWORD *)(QueuePacket + 48) = 4;
    *(_QWORD *)(QueuePacket + 56) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(QueuePacket + 52) = 2;
    *(_QWORD *)(QueuePacket + 88) = a1;
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(v11 + 288) &= ~1u;
    *(_QWORD *)(v11 + 104) = CurrentThread;
    *(_DWORD *)(v11 + 72) = 0;
    v13 = *(_DWORD *)(a2 + 40);
    if ( v13 == 2 )
    {
      *(_QWORD *)(v11 + 320) = a3;
    }
    else if ( (unsigned int)(v13 - 4) <= 1 )
    {
      *(_QWORD *)(v11 + 320) = a3;
      v33 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, v9);
      v33[3] = a2;
      v33[4] = a3;
      v33[5] = a1;
      WdLogEvent5_WdEvent(v33);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1888), &LockHandle);
    *(_QWORD *)(v11 + 296) = a2;
    v17 = VidSchiAcquireSyncObject(a1, a2, v11);
    if ( v17 < 0 || (v15 = *(unsigned int *)(v11 + 288), (v15 & 1) != 0) )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
      if ( !*(_DWORD *)(v11 + 48) && (*(_QWORD *)(v11 + 624) || *(_QWORD *)(v11 + 280)) )
      {
        v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14, v16);
        v41[3] = 281LL;
        v41[4] = 2560LL;
        v41[5] = v11;
        v41[6] = *(_QWORD *)(v11 + 624);
        v41[7] = *(_QWORD *)(v11 + 280);
        WdLogEvent5_WdCriticalError(v41);
        JUMPOUT(0x1C001A0F7LL);
      }
      v19 = WdLogNewEntry5_WdEvent(v15, v14);
      *(_QWORD *)(v19 + 24) = v11;
      *(_QWORD *)(v19 + 32) = a1;
      WdLogEvent5_WdEvent(v19);
      *(_QWORD *)(v11 + 56) = MEMORY[0xFFFFF78000000320];
      v20 = (KSPIN_LOCK *)(v18 + 1896);
      *(_DWORD *)(v11 + 52) = 0;
      v21 = v11 + 8;
      KeAcquireInStackQueuedSpinLock(v20, &v44);
      v22 = *(_QWORD *)(v11 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21 || (v23 = *(_QWORD **)(v11 + 16), *v23 != v21) )
        __fastfail(3u);
      *v23 = v22;
      *(_QWORD *)(v22 + 8) = v23;
      if ( a1 != -760 )
        --*(_DWORD *)(a1 + 760);
      KeReleaseInStackQueuedSpinLock(&v44);
      if ( (*(_DWORD *)(v11 + 64) & 0x40) != 0 )
      {
        VidSchiInterlockedInsertTailList(v20, a1 + 720, v11 + 8, a1 + 736);
      }
      else
      {
        KeAcquireInStackQueuedSpinLock(v20, &v45);
        v24 = *(__int64 **)(a1 + 704);
        if ( *v24 != a1 + 696 )
          __fastfail(3u);
        *(_QWORD *)v21 = a1 + 696;
        *(_QWORD *)(v11 + 16) = v24;
        *v24 = v21;
        *(_QWORD *)(a1 + 704) = v21;
        if ( a1 != -712 )
          ++*(_DWORD *)(a1 + 712);
        KeReleaseInStackQueuedSpinLock(&v45);
      }
      if ( (*(_DWORD *)(v11 + 64) & 0x40) == 0 )
      {
        v25 = (_QWORD **)(a1 + 696);
        while ( 1 )
        {
          v26 = 0LL;
          KeAcquireInStackQueuedSpinLock(v20, &v46);
          v27 = *v25;
          if ( *v25 != v25 && *(_DWORD *)(a1 + 712) > 0x10u )
          {
            v26 = *v25;
            if ( (_QWORD **)v27[1] != v25 || (v38 = (_QWORD *)*v27, (_QWORD *)v38[1] != v26) )
              __fastfail(3u);
            *v25 = v38;
            v38[1] = v25;
            --*(_DWORD *)(a1 + 712);
          }
          KeReleaseInStackQueuedSpinLock(&v46);
          if ( !v26 )
            break;
          ExFreePoolWithTag(v26 - 1, 0);
        }
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return (unsigned int)v17;
    }
    else if ( *(_BYTE *)(a2 + 26) )
    {
      v34 = MEMORY[0xFFFFF78000000320];
      v35 = *(_QWORD *)(v11 + 88);
      *(_DWORD *)(v11 + 64) |= 0x10u;
      *(_QWORD *)(v11 + 56) = v34;
      *(_DWORD *)(v11 + 52) = 17;
      v36 = (_QWORD *)(v11 + 32);
      v37 = *(_QWORD **)(v35 + 688);
      if ( *v37 != v35 + 680 )
        __fastfail(3u);
      *v36 = v35 + 680;
      v36[1] = v37;
      *v37 = v36;
      *(_QWORD *)(v35 + 688) = v36;
      ++*(_DWORD *)(v35 + 788);
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
    v40 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v40 + 24) = -1073741801LL;
    *(_QWORD *)(v40 + 32) = 8835LL;
    WdLogEvent5_WdAssertion(v40);
    return 3221225495LL;
  }
}
