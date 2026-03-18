/*
 * XREFs of VidSchiReleaseSyncObjectReference @ 0x1C000BA80
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00073F0 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009720 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BC60 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000E338 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C0013D00 (VidSchiCompleteSignalCommmand.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C002E5D0 (VidSchDestroyPeriodicFrameNotification.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003032C (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0032AC0 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchDestroySyncObject @ 0x1C00774D0 (VidSchDestroySyncObject.c)
 *     ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x1C009E868 (--1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ.c)
 * Callees:
 *     ?FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C0011DC8 (-FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
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
    v2 = *((_DWORD *)P + 11);
    if ( v2 >= 3 )
    {
      if ( v2 == 3 )
      {
        if ( P[31] )
        {
          ExFreePoolWithTag(*((PVOID *)P + 7), 0);
          *((_QWORD *)P + 7) = 0LL;
        }
        else
        {
          ObfDereferenceObject(*((PVOID *)P + 6));
          *((_QWORD *)P + 6) = 0LL;
        }
      }
      else if ( (unsigned int)(v2 - 4) <= 1 && !*((_QWORD *)P + 2) )
      {
        VIDMM_GLOBAL::FreeFenceStorageSlot((struct VIDMM_MONITORED_FENCE_STORAGE *)(P + 48), P[24] != 0);
      }
    }
    if ( P[27] )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)P + 1) + 3016LL), &LockHandle);
      v3 = (char **)*((_QWORD *)P + 23);
      if ( v3[1] != P + 184 || (v4 = (PVOID *)*((_QWORD *)P + 24), *v4 != P + 184) )
        __fastfail(3u);
      *v4 = v3;
      v3[1] = (char *)v4;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v5 = P + 136;
      if ( *((_QWORD *)P + 17) )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)P + 25) + 8LL), &v10);
        v6 = *(_QWORD *)v5;
        if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = (char **)*((_QWORD *)P + 18), *v7 != v5) )
          __fastfail(3u);
        *v7 = (char *)v6;
        *(_QWORD *)(v6 + 8) = v7;
        KeReleaseInStackQueuedSpinLock(&v10);
      }
      v8 = (void *)*((_QWORD *)P + 25);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag(v8, 0);
    }
    ExFreePoolWithTag(P, 0);
  }
}
