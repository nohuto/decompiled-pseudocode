/*
 * XREFs of VidSchiSubmitCommandPacketToQueue @ 0x1C0006BD0
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0006360 (VidSchWaitForSingleSyncObject.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0053170 (VidSchEnqueueCpuEvent.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchSubmitCommand @ 0x1C0075380 (VidSchSubmitCommand.c)
 *     VidSchSubmitGlobalCommand @ 0x1C0079320 (VidSchSubmitGlobalCommand.c)
 *     VidSchFlushPendingCommand @ 0x1C00BD1A0 (VidSchFlushPendingCommand.c)
 * Callees:
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C0007FE0 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A8D0 (VidSchiProfilePerformanceTick.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0076410 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1C0076C30 (VidSchiEnsureVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitCommandPacketToQueue(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v3; // r14
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rbx
  int v7; // r9d
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char v10; // r15
  int v11; // edi
  __int64 v12; // rax
  VIDMM_DEVICE *v13; // rcx
  int v14; // eax
  __int64 v15; // r12
  int v16; // eax
  KPRIORITY v17; // r12d
  int v18; // r8d
  unsigned int v19; // eax
  __int64 v20; // rcx
  KSPIN_LOCK *SpinLock; // [rsp+60h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+68h] [rbp-19h] BYREF
  __int16 v24; // [rsp+80h] [rbp-1h]
  __int64 v25; // [rsp+88h] [rbp+7h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp+Fh] BYREF
  __int16 v27; // [rsp+A8h] [rbp+27h]
  int v28; // [rsp+E8h] [rbp+67h] BYREF

  v1 = *(_QWORD *)(a1 + 88);
  v3 = *(_QWORD **)(v1 + 104);
  v4 = *(_QWORD *)(v1 + 96);
  v5 = *(_QWORD *)(v4 + 24);
  VidSchiEnsureVSyncEnabled(a1, v3);
  v27 = 0;
  v25 = v5 + 1904;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1904), &LockHandle);
  LOBYTE(v27) = 1;
  *(_QWORD *)(a1 + 112) = (*(_QWORD *)(v1 + 144))++;
  v6 = MEMORY[0xFFFFF78000000320];
  v3[22] = v6 * KeQueryTimeIncrement();
  if ( !*(_DWORD *)(a1 + 48) )
  {
    *(_QWORD *)(v1 + 176) = *(_QWORD *)(a1 + 112);
    ++v3[154];
  }
  VidSchiProfilePerformanceTick(4, v5, v4, v7, 0LL, a1, 0LL, 0LL);
  v28 = 0;
  VidSchiInsertCommandToSoftwareQueue(a1, &v28);
  if ( (_BYTE)v27 )
  {
    if ( HIBYTE(v27) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    LOBYTE(v27) = 0;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  if ( (*(_DWORD *)(v8 + 2192) & 0x20) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread == *(struct _KTHREAD **)(v8 + 144) || CurrentThread == *(struct _KTHREAD **)(v8 + 152) )
    {
      v10 = 1;
      if ( *(_DWORD *)(v1 + 772) )
        goto LABEL_12;
      v11 = 16;
    }
    else
    {
      v10 = 0;
      if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 >= 31 )
      {
        v11 = 31;
      }
      else
      {
        v11 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
        if ( v11 <= 16 )
          goto LABEL_12;
      }
    }
    v24 = 0;
    SpinLock = (KSPIN_LOCK *)(v8 + 2120);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 2120), &v23);
    while ( 1 )
    {
      v14 = *(_DWORD *)(v1 + 772);
      LOBYTE(v24) = 1;
      if ( v10 )
      {
        if ( v14 )
          goto LABEL_25;
      }
      else if ( !v14 )
      {
        goto LABEL_25;
      }
      v15 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
      v16 = *(_DWORD *)(v1 + 392);
      if ( v16 != v11 )
      {
        v18 = 0;
        if ( v16 > 16 )
        {
          v20 = v16 - 17;
          if ( (*(_DWORD *)(v15 + 4 * v20 + 2132))-- == 1 )
          {
            v18 = 1;
            *(_DWORD *)(v15 + 2128) &= ~(1 << *(_DWORD *)(v1 + 392));
          }
        }
        if ( v11 > 16 && ++*(_DWORD *)(v15 + 4LL * v11 + 2064) == 1 )
        {
          v18 = 1;
          *(_DWORD *)(v15 + 2128) |= 1 << v11;
        }
        *(_DWORD *)(v1 + 392) = v11;
        if ( v18 )
        {
          v19 = *(_DWORD *)(v15 + 2128);
          if ( v19 )
            *(_DWORD *)(v15 + 196) = RtlFindMostSignificantBit(v19);
          else
            *(_DWORD *)(v15 + 196) = 16;
        }
      }
      v17 = *(_DWORD *)(v15 + 196);
      if ( v17 == KeQueryPriorityThread(*(PKTHREAD *)(v8 + 144)) )
        break;
      if ( (_BYTE)v24 )
      {
        if ( HIBYTE(v24) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v23);
        else
          KeReleaseInStackQueuedSpinLock(&v23);
        LOBYTE(v24) = 0;
      }
      KeSetPriorityThread(*(PKTHREAD *)(v8 + 144), v17);
      if ( HIBYTE(v24) )
        KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &v23);
      else
        KeAcquireInStackQueuedSpinLock(SpinLock, &v23);
    }
    if ( !(_BYTE)v24 )
      goto LABEL_12;
LABEL_25:
    if ( HIBYTE(v24) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v23);
    else
      KeReleaseInStackQueuedSpinLock(&v23);
  }
LABEL_12:
  if ( v28 )
  {
    *(_QWORD *)(v5 + 1400) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1368), 0, 0);
  }
  v12 = v3[1];
  if ( v12 )
  {
    v13 = *(VIDMM_DEVICE **)(v12 + 608);
    if ( v13 )
      VIDMM_DEVICE::EnsureSchedulable(v13, 1);
  }
  if ( (_BYTE)v27 )
  {
    if ( HIBYTE(v27) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
