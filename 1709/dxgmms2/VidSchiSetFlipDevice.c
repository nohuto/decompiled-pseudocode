/*
 * XREFs of VidSchiSetFlipDevice @ 0x1C0004150
 * Callers:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0004A98 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     VidSchiClearFlipDevice @ 0x1C000EB1C (VidSchiClearFlipDevice.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C00155DC (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C0015888 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z.c)
 *     ?InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0015CE4 (-InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiCompletePendingFlip @ 0x1C0015E0C (VidSchiCompletePendingFlip.c)
 *     ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x1C0015EA8 (--_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z.c)
 *     VidSchiClearPeriodicFrameNotifications @ 0x1C0015EEC (VidSchiClearPeriodicFrameNotifications.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0pq @ 0x1C0021ADC (McTemplateK0pq.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C00259C0 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchControlVSyncDevice @ 0x1C0071270 (VidSchControlVSyncDevice.c)
 *     VidSchIsVSyncAvailable @ 0x1C0074BA0 (VidSchIsVSyncAvailable.c)
 *     VidSchiFlushPendingFlips @ 0x1C0074C08 (VidSchiFlushPendingFlips.c)
 */

__int64 __fastcall VidSchiSetFlipDevice(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        char a6,
        char a7)
{
  __int64 v7; // rbp
  int v8; // r14d
  __int64 v9; // r15
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  struct _VIDSCH_GLOBAL *v21; // rcx
  int v22; // r12d
  __int64 v23; // rbp
  unsigned int v24; // edx
  __int64 j; // rsi
  void *v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // edx
  __int64 v29; // r12
  PVOID v30; // rax
  void *v31; // rbp
  unsigned int v32; // ebp
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // r8
  _QWORD *v36; // rdx
  char *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // r9
  _QWORD *v40; // rax
  __int64 i; // rbp
  void *v42; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  struct _ERESOURCE *Resource; // [rsp+80h] [rbp+8h]

  v7 = a2;
  v8 = 0;
  v9 = a4;
  Resource = (struct _ERESOURCE *)((char *)a1 + 1144);
  v12 = *((_QWORD *)a1 + a2 + 376);
  ExAcquireResourceExclusiveLite((PERESOURCE)a1 + 11, 1u);
  v15 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, v13);
  v15[3] = a3;
  v15[4] = v7;
  v15[5] = v9;
  WdLogEvent5_WdEvent(v15);
  if ( (_DWORD)v9 )
  {
    v19 = *(_QWORD *)(v12 + 16);
    if ( v19 )
    {
      if ( v19 != a3 || *(_DWORD *)(v12 + 4) != (_DWORD)v9 )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16, v18);
        v40[3] = 281LL;
        v40[4] = 0x10000LL;
        v40[5] = a1;
        v40[6] = a3;
        v40[7] = v7;
        WdLogEvent5_WdCriticalError(v40);
        JUMPOUT(0x1C0018C8DLL);
      }
    }
    else
    {
      if ( ((int)v9 >= 4 || *((_BYTE *)a1 + 132))
        && (!(unsigned __int8)VidSchIsVSyncAvailable(a1, (unsigned int)v7)
          ? (v8 = -1073741823)
          : (LOBYTE(v27) = 1, v8 = VidSchControlVSyncDevice(a3, 1LL, v27)),
            v8 < 0)
        || (int)v9 < 3 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 236, &LockHandle);
        *(_BYTE *)(v12 + 8) = a6;
        *(_DWORD *)(v12 + 4) = v9;
        *(_QWORD *)(v12 + 16) = a3;
      }
      else
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 236, &LockHandle);
        v29 = 0LL;
        if ( *((_DWORD *)a1 + 32) )
        {
          while ( 1 )
          {
            v30 = operator new[](0x13438uLL, 0x68536956u, (POOL_TYPE)512);
            v31 = v30;
            if ( v30 )
              memset(v30, 0, 0x13438uLL);
            else
              v31 = 0LL;
            *(_QWORD *)(v12 + 8 * v29 + 24) = v31;
            if ( !v31 )
              break;
            memset(v31, 0, 0x13438uLL);
            v32 = 0;
            while ( (int)VIDSCH_FLIP_QUEUE_ENTRY::InitializeFlipQueueEntry(
                           (VIDSCH_FLIP_QUEUE_ENTRY *)(*(_QWORD *)(v12 + 8 * v29 + 24) + 56LL + 1232LL * v32),
                           a1) >= 0 )
            {
              if ( ++v32 >= 0x40 )
                goto LABEL_32;
            }
            v8 = -1073741801;
LABEL_32:
            if ( v8 < 0 )
              goto LABEL_56;
            v33 = *(_QWORD *)(v12 + 8 * v29 + 24);
            v29 = (unsigned int)(v29 + 1);
            *(_DWORD *)(v33 + 52) = 63;
            if ( (unsigned int)v29 >= *((_DWORD *)a1 + 32) )
              goto LABEL_34;
          }
          v8 = -1073741801;
        }
LABEL_34:
        if ( v8 < 0 )
        {
LABEL_56:
          for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 32); i = (unsigned int)(i + 1) )
          {
            v42 = *(void **)(v12 + 8 * i + 24);
            if ( v42 )
            {
              VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(v42, v28);
              *(_QWORD *)(v12 + 8 * i + 24) = 0LL;
            }
          }
        }
        else
        {
          *(_BYTE *)(v12 + 8) = a6;
          *(_DWORD *)(v12 + 4) = v9;
          *(_QWORD *)(v12 + 16) = a3;
        }
        v34 = (_QWORD *)(a3 + 80);
        v35 = *(_QWORD *)(a3 + 80);
        if ( *(_QWORD *)(v35 + 8) != a3 + 80 || (v36 = *(_QWORD **)(a3 + 88), (_QWORD *)*v36 != v34) )
          __fastfail(3u);
        *v36 = v35;
        v37 = (char *)a1 + 256;
        *(_QWORD *)(v35 + 8) = v36;
        v38 = *(_QWORD *)v37;
        if ( *(char **)(*(_QWORD *)v37 + 8LL) != v37 )
          __fastfail(3u);
        *v34 = v38;
        *(_QWORD *)(a3 + 88) = v37;
        *(_QWORD *)(v38 + 8) = v34;
        *(_QWORD *)v37 = v34;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
  else if ( !a3 || a3 == *(_QWORD *)(v12 + 16) )
  {
    if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      if ( a3 )
      {
        v39 = *(_QWORD *)(a3 + 8);
        if ( !v39 )
          v39 = a3;
      }
      else
      {
        v39 = 0LL;
      }
      McTemplateK0pq(v17, &EventClearFlipDevice, v18, v39, v7);
    }
    VidSchiClearPeriodicFrameNotifications(a1, (unsigned int)v7);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 236, &LockHandle);
    VidSchiCompletePendingFlip(a1, (unsigned int)v7, a5);
    if ( a5 == 6 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiFlushPendingFlips(a1, v12);
      if ( a7 )
      {
        VidSchiSubmitDisablePlanesFlip((struct _VIDSCH_DEVICE *)a3, v7);
        VidSchiFlushPendingFlips(a1, v12);
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 236, &LockHandle);
    }
    v22 = *(_DWORD *)(v12 + 4);
    v23 = *(_QWORD *)(v12 + 16);
    VidSchiUnreferenceDisplayingAllocations(v21, (struct _VIDSCH_PRESENT_INFO *)v12, *(_WORD *)(v12 + 23520));
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a1 + 32); j = (unsigned int)(j + 1) )
    {
      v26 = *(void **)(v12 + 8 * j + 24);
      if ( v26 )
      {
        VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(v26, v24);
        *(_QWORD *)(v12 + 8 * j + 24) = 0LL;
      }
    }
    *(_DWORD *)(v12 + 4) = 0;
    *(_QWORD *)(v12 + 16) = 0LL;
    *(_BYTE *)(v12 + 8) = a6;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v23 && (v22 >= 4 || *((_BYTE *)a1 + 132)) )
      v8 = VidSchControlVSyncDevice(v23, 1LL, 0LL);
  }
  ExReleaseResourceLite(Resource);
  return (unsigned int)v8;
}
