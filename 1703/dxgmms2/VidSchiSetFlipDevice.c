/*
 * XREFs of VidSchiSetFlipDevice @ 0x1C0003F40
 * Callers:
 *     VidSchiClearFlipDevice @ 0x1C00022EC (VidSchiClearFlipDevice.c)
 *     VidSchFlushQueuePackets @ 0x1C0013350 (VidSchFlushQueuePackets.c)
 *     VidSchSubmitCommand @ 0x1C006A5F0 (VidSchSubmitCommand.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C00135E0 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z.c)
 *     ?InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0013964 (-InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiCompletePendingFlip @ 0x1C0013B4C (VidSchiCompletePendingFlip.c)
 *     ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x1C0013BE8 (--_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z.c)
 *     VidSchiClearPeriodicFrameNotifications @ 0x1C0013C2C (VidSchiClearPeriodicFrameNotifications.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_pq @ 0x1C001FA14 (Template_pq.c)
 *     VidSchControlVSyncDevice @ 0x1C006C630 (VidSchControlVSyncDevice.c)
 *     VidSchIsVSyncAvailable @ 0x1C006EBF0 (VidSchIsVSyncAvailable.c)
 *     VidSchiFlushPendingFlips @ 0x1C006EC58 (VidSchiFlushPendingFlips.c)
 */

__int64 __fastcall VidSchiSetFlipDevice(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        _QWORD *a3,
        int a4,
        unsigned int a5,
        char a6)
{
  __int64 v6; // r15
  int v7; // r14d
  __int64 v8; // rbp
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  struct _VIDSCH_GLOBAL *v20; // rcx
  int v21; // ebp
  __int64 v22; // r12
  unsigned int v23; // edx
  __int64 j; // rsi
  void *v25; // rcx
  __int64 v26; // r8
  bool v27; // cc
  unsigned int v28; // edx
  __int64 v29; // r12
  PVOID v30; // rax
  void *v31; // r15
  unsigned int v32; // r15d
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // rcx
  char *v37; // rdi
  __int64 v38; // rcx
  _QWORD *v39; // r9
  _QWORD *v40; // rax
  __int64 i; // rbp
  void *v42; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  struct _ERESOURCE *Resource; // [rsp+80h] [rbp+8h]

  v6 = a2;
  v7 = 0;
  v8 = a4;
  Resource = (struct _ERESOURCE *)((char *)a1 + 1136);
  v11 = *((_QWORD *)a1 + a2 + 374);
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1136), 1u);
  v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v12);
  v14[3] = a3;
  v14[4] = v6;
  v14[5] = v8;
  WdLogEvent5_WdEvent(v14);
  if ( (_DWORD)v8 )
  {
    v18 = *(_QWORD **)(v11 + 16);
    if ( v18 )
    {
      if ( v18 != a3 || *(_DWORD *)(v11 + 4) != (_DWORD)v8 )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17);
        v40[3] = 281LL;
        v40[4] = 0x10000LL;
        v40[5] = a1;
        v40[6] = a3;
        v40[7] = v6;
        WdLogEvent5_WdCriticalError(v40);
        JUMPOUT(0x1C001707FLL);
      }
      goto LABEL_5;
    }
    if ( (int)v8 < 4 )
    {
      if ( !*((_BYTE *)a1 + 132) )
      {
LABEL_21:
        v27 = (int)v8 < 3;
        goto LABEL_22;
      }
      v27 = (int)v8 < 3;
      if ( (_DWORD)v8 != 3 )
      {
LABEL_22:
        if ( !v27 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 235, &LockHandle);
          v29 = 0LL;
          if ( *((_DWORD *)a1 + 32) )
          {
            while ( 1 )
            {
              v30 = operator new[](0x13238uLL, 0x68536956u, (POOL_TYPE)512);
              v31 = v30;
              if ( v30 )
                memset(v30, 0, 0x13238uLL);
              else
                v31 = 0LL;
              *(_QWORD *)(v11 + 8 * v29 + 24) = v31;
              if ( !v31 )
                break;
              memset(v31, 0, 0x13238uLL);
              v32 = 0;
              while ( (int)VIDSCH_FLIP_QUEUE_ENTRY::InitializeFlipQueueEntry(
                             (VIDSCH_FLIP_QUEUE_ENTRY *)(*(_QWORD *)(v11 + 8 * v29 + 24) + 56LL + 1224LL * v32),
                             a1) >= 0 )
              {
                if ( ++v32 >= 0x40 )
                  goto LABEL_30;
              }
              v7 = -1073741801;
LABEL_30:
              if ( v7 < 0 )
                goto LABEL_58;
              v33 = *(_QWORD *)(v11 + 8 * v29 + 24);
              v29 = (unsigned int)(v29 + 1);
              *(_DWORD *)(v33 + 52) = 63;
              if ( (unsigned int)v29 >= *((_DWORD *)a1 + 32) )
                goto LABEL_32;
            }
            v7 = -1073741801;
          }
LABEL_32:
          if ( v7 < 0 )
          {
LABEL_58:
            for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 32); i = (unsigned int)(i + 1) )
            {
              v42 = *(void **)(v11 + 8 * i + 24);
              if ( v42 )
              {
                VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(v42, v28);
                *(_QWORD *)(v11 + 8 * i + 24) = 0LL;
              }
            }
          }
          else
          {
            *(_BYTE *)(v11 + 8) = a6;
            *(_DWORD *)(v11 + 4) = v8;
            *(_QWORD *)(v11 + 16) = a3;
          }
          v34 = a3 + 10;
          v35 = a3[10];
          v36 = (_QWORD *)a3[11];
          if ( *(_QWORD **)(v35 + 8) != a3 + 10 || (_QWORD *)*v36 != v34 )
            __fastfail(3u);
          *v36 = v35;
          v37 = (char *)a1 + 248;
          *(_QWORD *)(v35 + 8) = v36;
          v38 = *(_QWORD *)v37;
          if ( *(char **)(*(_QWORD *)v37 + 8LL) != v37 )
            __fastfail(3u);
          *v34 = v38;
          a3[11] = v37;
          *(_QWORD *)(v38 + 8) = v34;
          *(_QWORD *)v37 = v34;
          goto LABEL_38;
        }
LABEL_64:
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 235, &LockHandle);
        *(_BYTE *)(v11 + 8) = a6;
        *(_DWORD *)(v11 + 4) = v8;
        *(_QWORD *)(v11 + 16) = a3;
LABEL_38:
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        goto LABEL_5;
      }
    }
    if ( (unsigned __int8)VidSchIsVSyncAvailable(a1, (unsigned int)v6) )
    {
      LOBYTE(v26) = 1;
      v7 = VidSchControlVSyncDevice(a3, 1LL, v26);
    }
    else
    {
      v7 = -1073741823;
    }
    if ( v7 < 0 )
      goto LABEL_64;
    goto LABEL_21;
  }
  if ( !a3 || a3 == *(_QWORD **)(v11 + 16) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      if ( a3 )
      {
        v39 = (_QWORD *)a3[1];
        if ( !v39 )
          v39 = a3;
      }
      else
      {
        v39 = 0LL;
      }
      Template_pq(v16, &EventClearFlipDevice, v17, v39, v6);
    }
    VidSchiClearPeriodicFrameNotifications(a1, (unsigned int)v6);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 235, &LockHandle);
    VidSchiCompletePendingFlip(a1, (unsigned int)v6, a5);
    if ( a5 == 6 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiFlushPendingFlips(a1, v11);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 235, &LockHandle);
    }
    v21 = *(_DWORD *)(v11 + 4);
    v22 = *(_QWORD *)(v11 + 16);
    VidSchiUnreferenceDisplayingAllocations(v20, (struct _VIDSCH_PRESENT_INFO *)v11, *(_WORD *)(v11 + 18768));
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a1 + 32); j = (unsigned int)(j + 1) )
    {
      v25 = *(void **)(v11 + 8 * j + 24);
      if ( v25 )
      {
        VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(v25, v23);
        *(_QWORD *)(v11 + 8 * j + 24) = 0LL;
      }
    }
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_BYTE *)(v11 + 8) = a6;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v21 >= 4 || *((_BYTE *)a1 + 132) && v21 == 3 )
      v7 = VidSchControlVSyncDevice(v22, 1LL, 0LL);
  }
LABEL_5:
  ExReleaseResourceLite(Resource);
  return (unsigned int)v7;
}
