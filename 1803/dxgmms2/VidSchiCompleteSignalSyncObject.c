/*
 * XREFs of VidSchiCompleteSignalSyncObject @ 0x1C000BB10
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00073F0 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009720 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C0013D00 (VidSchiCompleteSignalCommmand.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003032C (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0032AC0 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BC60 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000E338 (VidSchiUnwaitWaitQueuePacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C002BB78 (VidSchiPropagateCrossAdapterSignal.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C002D380 (VidSchiUnblockUnorderedWaiter.c)
 */

void __fastcall VidSchiCompleteSignalSyncObject(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // ecx
  int v16; // ecx
  _QWORD *v17; // rdi
  _QWORD *v18; // r8
  unsigned __int64 v19; // rcx
  __int64 v20; // rdi
  unsigned int v21; // ecx
  _QWORD *v22; // rax
  int v23; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v6 = *(unsigned int *)(a1 + 44);
  if ( (_DWORD)v6 == 4 )
  {
LABEL_2:
    if ( !*(_BYTE *)(a1 + 28) )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdEvent(v6, a2);
      v9[3] = a1;
      v9[4] = **(_QWORD **)(a1 + 56);
      v9[5] = *a3;
      WdLogEvent5_WdEvent(v9);
      v10 = *a3;
      v11 = *(_QWORD **)(a1 + 56);
      if ( *(_BYTE *)(a1 + 29) )
        *v11 = v10;
      else
        *(_DWORD *)v11 = v10;
      VidSchiUnwaitMonitoredFences(v4);
    }
    goto LABEL_6;
  }
  if ( (_DWORD)v6 )
  {
    v15 = v6 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v6 = (unsigned int)(v16 - 1);
        if ( !(_DWORD)v6 )
        {
          if ( *(_BYTE *)(a1 + 31) )
            ((void (__fastcall *)(_QWORD))DxgCoreInterface[62])(*(_QWORD *)(a1 + 56));
          else
            KeSetEvent(*(PRKEVENT *)(a1 + 48), 0, 0);
          goto LABEL_6;
        }
        if ( (_DWORD)v6 != 2 )
          goto LABEL_6;
        goto LABEL_2;
      }
      if ( *(_BYTE *)(a1 + 27) )
      {
        v20 = *(_QWORD *)(a1 + 200);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v20 + 8), &LockHandle);
        if ( *(_QWORD *)(v20 + 32) < *a3 )
          *(_QWORD *)(v20 + 32) = *a3;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
      else if ( *(_QWORD *)(a1 + 64) < *a3 )
      {
        *(_QWORD *)(a1 + 64) = *a3;
      }
      if ( *(_DWORD *)(a1 + 36) )
        VidSchiUnblockUnorderedWaiter(a1, 0LL);
      v17 = *(_QWORD **)(a1 + 88);
      while ( v17 != (_QWORD *)(a1 + 88) )
      {
        v18 = v17 - 36;
        v17 = (_QWORD *)*v17;
        if ( *(_BYTE *)(a1 + 27) )
          v19 = *(_QWORD *)(*(_QWORD *)(a1 + 200) + 32LL);
        else
          v19 = *(_QWORD *)(a1 + 64);
        if ( v18[38] <= v19 )
          VidSchiUnwaitWaitQueuePacket(v18, 0LL);
      }
    }
    else
    {
      v21 = *(_DWORD *)(a1 + 48);
      if ( v21 < *(_DWORD *)(a1 + 52) )
      {
        *(_DWORD *)(a1 + 48) = v21 + 1;
        v22 = (_QWORD *)(a1 + 88);
        if ( (_QWORD *)*v22 != v22 )
        {
          *(_DWORD *)(a1 + 48) = v21;
          VidSchiUnwaitWaitQueuePacket(*v22 - 288LL, 0LL);
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 48) = 0LL;
    v12 = *(_QWORD *)(a1 + 88);
    if ( v12 != a1 + 88 )
    {
      v13 = v12 - 288;
      v14 = *(_QWORD *)(v13 + 88);
      if ( !v14 )
        v14 = *(_QWORD *)(v13 + 96);
      *(_QWORD *)(a1 + 48) = v14;
      VidSchiUnwaitWaitQueuePacket(v13, 0LL);
    }
  }
LABEL_6:
  if ( *(_BYTE *)(a1 + 27) )
  {
    if ( a4 )
    {
      v23 = *(_DWORD *)(a1 + 44);
      if ( ((v23 - 2) & 0xFFFFFFFC) == 0 && v23 != 3 )
        VidSchiPropagateCrossAdapterSignal(a1);
    }
  }
}
