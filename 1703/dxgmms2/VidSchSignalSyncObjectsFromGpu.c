/*
 * XREFs of VidSchSignalSyncObjectsFromGpu @ 0x1C0006490
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     VidSchSignalPagingFences @ 0x1C006F99C (VidSchSignalPagingFences.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0095F3C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     VidSchiSignalSyncObject @ 0x1C00069D0 (VidSchiSignalSyncObject.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C0009ED0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0009F60 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiFreeQueuePacket @ 0x1C000EB98 (VidSchiFreeQueuePacket.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     VidSchiAllocateQueuePacket @ 0x1C006AD40 (VidSchiAllocateQueuePacket.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C006B1A0 (VidSchiSubmitCommandPacketToQueue.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromGpu(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        void **a4,
        int a5,
        _QWORD *a6)
{
  __int64 v6; // r14
  __int64 *v8; // r13
  unsigned int v9; // ebp
  unsigned int v10; // esi
  unsigned int v11; // r15d
  unsigned __int64 *v12; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  int v16; // eax
  int v17; // edi
  _QWORD *v18; // r15
  struct _VIDSCH_QUEUE_PACKET **PoolWithTag; // rdi
  __int64 *v20; // rcx
  KSPIN_LOCK *v21; // r8
  char *v22; // r15
  __int64 v23; // rax
  _DWORD *QueuePacket; // rax
  void **v25; // r8
  __int64 v26; // r13
  __int64 v27; // rax
  KSPIN_LOCK *v28; // rax
  unsigned int v29; // r13d
  unsigned int v30; // ebp
  unsigned int v31; // r13d
  __int64 v32; // rbx
  unsigned int v34; // ebp
  void **v35; // r13
  _QWORD *v36; // rsi
  void *v37; // rdi
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rbx
  unsigned __int64 v49; // [rsp+30h] [rbp-A8h]
  __int64 v50; // [rsp+30h] [rbp-A8h]
  unsigned int v51; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v52; // [rsp+40h] [rbp-98h]
  __int64 v53; // [rsp+40h] [rbp-98h]
  PKSPIN_LOCK SpinLock; // [rsp+48h] [rbp-90h]
  __int64 *v55; // [rsp+50h] [rbp-88h]
  __int64 v56; // [rsp+58h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-78h] BYREF
  PVOID P; // [rsp+78h] [rbp-60h]
  _BYTE v59[16]; // [rsp+80h] [rbp-58h] BYREF
  unsigned int v60; // [rsp+90h] [rbp-48h]
  unsigned int v61; // [rsp+E0h] [rbp+8h]

  v6 = a3;
  v8 = a2;
  v9 = a1;
  if ( (_DWORD)a1 )
  {
    if ( a2 && a4 && a3 )
      goto LABEL_5;
LABEL_71:
    v40 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v40 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v40);
    return 3221225485LL;
  }
  if ( !a4 || !a3 )
    goto LABEL_71;
  v9 = 1;
LABEL_5:
  v10 = 0;
  v56 = *((_QWORD *)*a4 + 1);
  if ( (a5 & 0x80000004) != 0 )
  {
    v18 = a6;
    goto LABEL_17;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)*a4 + 1) + 1880LL), &LockHandle);
  v11 = 0;
  if ( !(_DWORD)v6 )
  {
LABEL_15:
    v17 = 0;
    v18 = a6;
    goto LABEL_16;
  }
  v12 = a6;
  while ( 1 )
  {
    v13 = *(unsigned __int64 *)((char *)v12 + (char *)a4 - (char *)a6);
    if ( (unsigned int)(*(_DWORD *)(v13 + 40) - 4) > 1 || *(_BYTE *)(v13 + 28) )
      goto LABEL_13;
    v14 = *v12;
    v15 = *(_QWORD *)(v13 + 80);
    v49 = *v12;
    v52 = v15;
    if ( !*(_BYTE *)(v13 + 29) )
      break;
    if ( v14 < v15 )
    {
      v43 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v43 + 24) = v49;
      v44 = v52;
      goto LABEL_76;
    }
    if ( v14 == v15 )
    {
      v41 = WdLogNewEntry5_WdWarning();
      v42 = v49;
LABEL_73:
      *(_QWORD *)(v41 + 24) = v42;
      WdLogEvent5_WdWarning(v41);
    }
LABEL_13:
    ++v11;
    ++v12;
    if ( v11 >= (unsigned int)v6 )
    {
      v8 = a2;
      goto LABEL_15;
    }
  }
  v16 = v15 - v14;
  if ( v16 <= 0 )
  {
    if ( !v16 )
    {
      v41 = WdLogNewEntry5_WdWarning();
      v42 = (unsigned int)v49;
      goto LABEL_73;
    }
    goto LABEL_13;
  }
  v43 = WdLogNewEntry5_WdWarning();
  *(_QWORD *)(v43 + 24) = (unsigned int)v49;
  v44 = (unsigned int)v52;
LABEL_76:
  *(_QWORD *)(v43 + 32) = v44;
  WdLogEvent5_WdWarning(v43);
  v17 = -1073741811;
  v45 = WdLogNewEntry5_WdError();
  v46 = v11;
  v18 = a6;
  *(_QWORD *)(v45 + 24) = a6[v46];
  *(_QWORD *)(v45 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v45);
  v8 = a2;
LABEL_16:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v17 < 0 )
    return (unsigned int)v17;
LABEL_17:
  P = 0LL;
  PoolWithTag = 0LL;
  v60 = 0;
  if ( v9 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v9 >= 8 )
    {
      PoolWithTag = (struct _VIDSCH_QUEUE_PACKET **)ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v9, 0x6E795356u);
      P = PoolWithTag;
      goto LABEL_19;
    }
    goto LABEL_87;
  }
  PoolWithTag = (struct _VIDSCH_QUEUE_PACKET **)v59;
  P = v59;
LABEL_19:
  v60 = v9;
  if ( !PoolWithTag || (memset(PoolWithTag, 0, 8LL * v9), (PoolWithTag = (struct _VIDSCH_QUEUE_PACKET **)P) == 0LL) )
  {
LABEL_87:
    v10 = -1073741801;
    goto LABEL_54;
  }
  v61 = 0;
  v53 = 0LL;
  v51 = 0;
  if ( v9 )
  {
    v20 = v8;
    v21 = (KSPIN_LOCK *)(v56 + 1880);
    v55 = v8;
    v22 = (char *)P;
    do
    {
      if ( v8 )
        v23 = *v20;
      else
        v23 = *(_QWORD *)(*((_QWORD *)*a4 + 1) + 216LL);
      v50 = v23;
      KeAcquireInStackQueuedSpinLock(v21, &LockHandle);
      if ( *(_QWORD *)(v50 + 672) == v50 + 672 )
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      else
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        QueuePacket = (_DWORD *)VidSchiAllocateQueuePacket(v50, *(_DWORD *)(v50 + 804) == 0);
        *(_QWORD *)v22 = QueuePacket;
        if ( !QueuePacket )
        {
          v47 = WdLogNewEntry5_WdWarning();
          *(_QWORD *)(v47 + 24) = -1073741801LL;
          *(_QWORD *)(v47 + 32) = 9360LL;
          WdLogEvent5_WdWarning(v47);
          if ( v51 )
          {
            v48 = v51;
            do
            {
              if ( *PoolWithTag )
                VidSchiFreeQueuePacket(v50);
              ++PoolWithTag;
              --v48;
            }
            while ( v48 );
          }
          PoolWithTag = (struct _VIDSCH_QUEUE_PACKET **)P;
          goto LABEL_87;
        }
        *QueuePacket = 1953189969;
        v61 = v51;
        *(_DWORD *)(*(_QWORD *)v22 + 48LL) = 5;
        *(_QWORD *)(*(_QWORD *)v22 + 56LL) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(*(_QWORD *)v22 + 52LL) = 2;
        *(_QWORD *)(*(_QWORD *)v22 + 88LL) = v50;
        *(_QWORD *)(*(_QWORD *)v22 + 96LL) = KeGetCurrentThread();
        *(_DWORD *)(*(_QWORD *)v22 + 72LL) = 0;
        *(_DWORD *)(*(_QWORD *)v22 + 264LL) ^= (*(_DWORD *)(*(_QWORD *)v22 + 264LL) ^ a5) & 1;
        if ( (a5 & 4) != 0 )
          *(_DWORD *)(*(_QWORD *)v22 + 264LL) |= 4u;
        if ( *((_DWORD *)*a4 + 10) == 2 )
          *(_QWORD *)(*(_QWORD *)v22 + 528LL) = *a6;
        if ( (_DWORD)v6 )
        {
          v25 = a4;
          v26 = v6;
          do
          {
            *(void **)((char *)v25 + 272LL - (_QWORD)a4 + *(_QWORD *)v22) = *v25;
            if ( (unsigned int)(*((_DWORD *)*v25 + 10) - 4) <= 1 )
              *(void **)((char *)v25 + 528LL - (_QWORD)a4 + *(_QWORD *)v22) = *(void **)((char *)v25
                                                                                       + (char *)a6
                                                                                       - (char *)a4);
            ++v25;
            --v26;
          }
          while ( v26 );
          v8 = a2;
        }
        *(_DWORD *)(*(_QWORD *)v22 + 268LL) = v6;
        *(_QWORD *)(*(_QWORD *)v22 + 784LL) = 0LL;
        v27 = *(_QWORD *)v22;
        if ( v53 )
        {
          *(_QWORD *)(v27 + 792) = v53;
          *(_QWORD *)(v53 + 784) = *(_QWORD *)v22;
        }
        else
        {
          *(_QWORD *)(v27 + 792) = 0LL;
        }
        v53 = *(_QWORD *)v22;
      }
      v22 += 8;
      v21 = (KSPIN_LOCK *)(v56 + 1880);
      v20 = v55 + 1;
      ++v51;
      ++v55;
    }
    while ( v51 < v9 );
    if ( !v53 )
    {
      v18 = a6;
      goto LABEL_58;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v56 + 1880), &LockHandle);
    v28 = (KSPIN_LOCK *)PoolWithTag;
    v29 = v61;
    v30 = 0;
    SpinLock = (PKSPIN_LOCK)PoolWithTag;
    do
    {
      if ( *v28 )
      {
        v31 = 0;
        if ( (_DWORD)v6 )
        {
          do
            VidSchiSignalSyncObject(v31++, (_DWORD)a4, a5, (_DWORD)a6, v30 == v61);
          while ( v31 < (unsigned int)v6 );
          v28 = SpinLock;
          v10 = 0;
        }
        v29 = v61;
      }
      ++v28;
      ++v30;
      SpinLock = v28;
    }
    while ( v30 <= v29 );
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v32 = v29 + 1;
    do
    {
      if ( *PoolWithTag )
        VidSchiSubmitCommandPacketToQueue(*PoolWithTag);
      ++PoolWithTag;
      --v32;
    }
    while ( v32 );
  }
  else
  {
LABEL_58:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v56 + 1880), &LockHandle);
    v34 = 0;
    if ( (_DWORD)v6 )
    {
      v35 = a4;
      v36 = v18;
      do
      {
        v37 = *v35;
        VidSchiSignalSyncObject(v34, (_DWORD)a4, a5, (_DWORD)v18, 1);
        LOBYTE(v38) = 1;
        VidSchiCompleteSignalSyncObject(v37, v39, v36, v38);
        VidSchiReleaseSyncObjectReference(v37);
        ++v34;
        ++v35;
        ++v36;
      }
      while ( v34 < (unsigned int)v6 );
      v10 = 0;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  PoolWithTag = (struct _VIDSCH_QUEUE_PACKET **)P;
LABEL_54:
  if ( PoolWithTag != (struct _VIDSCH_QUEUE_PACKET **)v59 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v10;
}
