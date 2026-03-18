/*
 * XREFs of VidSchiCompleteSignalSyncObject @ 0x1C0009F60
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0006490 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008200 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C000EA04 (VidSchiCompleteSignalCommmand.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000AA20 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000D604 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaiter @ 0x1C0011940 (VidSchiUnblockUnorderedWaiter.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x1C0026B88 (VidSchiPropagateCrossAdapterSignal.c)
 */

void __fastcall VidSchiCompleteSignalSyncObject(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rcx
  int v12; // ecx
  int v13; // ecx
  _QWORD *v14; // rsi
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned int v20; // eax
  unsigned int v21; // eax
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  int v24; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v6 = *(unsigned int *)(a1 + 40);
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
    v12 = v6 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v6 = (unsigned int)(v13 - 1);
        if ( !(_DWORD)v6 )
        {
          KeSetEvent(*(PRKEVENT *)(a1 + 48), 0, 0);
          goto LABEL_6;
        }
        if ( (_DWORD)v6 != 2 )
          goto LABEL_6;
        goto LABEL_2;
      }
      if ( *(_BYTE *)(a1 + 27) )
      {
        v19 = *(_QWORD *)(a1 + 184);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v19 + 8), &LockHandle);
        if ( *(_QWORD *)(v19 + 32) < *a3 )
          *(_QWORD *)(v19 + 32) = *a3;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
      else if ( *(_QWORD *)(a1 + 64) < *a3 )
      {
        *(_QWORD *)(a1 + 64) = *a3;
      }
      if ( *(_DWORD *)(a1 + 36) )
        VidSchiUnblockUnorderedWaiter(a1, 0LL);
      v14 = *(_QWORD **)(a1 + 88);
      while ( v14 != (_QWORD *)(a1 + 88) )
      {
        v15 = v14 - 35;
        v14 = (_QWORD *)*v14;
        if ( *(_BYTE *)(a1 + 27) )
          v16 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 32LL);
        else
          v16 = *(_QWORD *)(a1 + 64);
        if ( v15[37] <= v16 )
          VidSchiUnwaitWaitQueuePacket(v15, 0LL);
      }
    }
    else
    {
      v20 = *(_DWORD *)(a1 + 48);
      if ( v20 < *(_DWORD *)(a1 + 52) )
      {
        v21 = v20 + 1;
        v22 = (_QWORD *)(a1 + 88);
        *(_DWORD *)(a1 + 48) = v21;
        if ( (_QWORD *)*v22 != v22 )
        {
          v23 = *v22 - 280LL;
          *(_DWORD *)(a1 + 48) = v21 - 1;
          VidSchiUnwaitWaitQueuePacket(v23, 0LL);
        }
      }
    }
  }
  else
  {
    v17 = (_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 48) = 0LL;
    if ( (_QWORD *)*v17 != v17 )
    {
      v18 = *v17 - 280LL;
      *(_QWORD *)(a1 + 48) = *(_QWORD *)(v18 + 88);
      VidSchiUnwaitWaitQueuePacket(v18, 0LL);
    }
  }
LABEL_6:
  if ( *(_BYTE *)(a1 + 27) )
  {
    if ( a4 )
    {
      v24 = *(_DWORD *)(a1 + 40);
      if ( ((v24 - 2) & 0xFFFFFFFC) == 0 && v24 != 3 )
        VidSchiPropagateCrossAdapterSignal(a1);
    }
  }
}
