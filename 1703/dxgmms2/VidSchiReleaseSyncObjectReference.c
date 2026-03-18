/*
 * XREFs of VidSchiReleaseSyncObjectReference @ 0x1C0009ED0
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0006490 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008200 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000D604 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C000EA04 (VidSchiCompleteSignalCommmand.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C0029780 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchDestroySyncObject @ 0x1C006B960 (VidSchDestroySyncObject.c)
 *     ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x1C0091FD4 (--1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ.c)
 * Callees:
 *     ?FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C0001E70 (-FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 */

void __fastcall VidSchiReleaseSyncObjectReference(char *P)
{
  int v2; // eax
  char **v3; // rdx
  PVOID *v4; // rcx
  char *v5; // rsi
  __int64 v6; // rcx
  char **v7; // rax
  void *v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+38h] [rbp-20h] BYREF

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 8, 0xFFFFFFFF) == 1 )
  {
    v2 = *((_DWORD *)P + 10);
    if ( v2 >= 3 )
    {
      if ( v2 == 3 )
      {
        ObfDereferenceObject(*((PVOID *)P + 6));
        *((_QWORD *)P + 6) = 0LL;
      }
      else if ( (unsigned int)(v2 - 4) <= 1 && !*((_QWORD *)P + 2) )
      {
        VIDMM_GLOBAL::FreeFenceStorageSlot((struct VIDMM_MONITORED_FENCE_STORAGE *)(P + 48), P[24] != 0);
      }
    }
    if ( P[27] )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)P + 1) + 2976LL), &LockHandle);
      v3 = (char **)*((_QWORD *)P + 21);
      v4 = (PVOID *)*((_QWORD *)P + 22);
      if ( v3[1] != P + 168 || *v4 != P + 168 )
        __fastfail(3u);
      *v4 = v3;
      v3[1] = (char *)v4;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v5 = P + 120;
      if ( *((_QWORD *)P + 15) )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)P + 23) + 8LL), &v10);
        v6 = *(_QWORD *)v5;
        v7 = (char **)*((_QWORD *)P + 16);
        if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *v7 != v5 )
          __fastfail(3u);
        *v7 = (char *)v6;
        *(_QWORD *)(v6 + 8) = v7;
        KeReleaseInStackQueuedSpinLock(&v10);
      }
      v8 = (void *)*((_QWORD *)P + 23);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag(v8, 0);
    }
    ExFreePoolWithTag(P, 0);
  }
}
