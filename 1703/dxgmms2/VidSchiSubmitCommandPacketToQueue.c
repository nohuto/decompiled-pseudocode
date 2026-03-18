/*
 * XREFs of VidSchiSubmitCommandPacketToQueue @ 0x1C006B1A0
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0005560 (VidSchWaitForSingleSyncObject.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0006490 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0047EE0 (VidSchEnqueueCpuEvent.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchSubmitCommand @ 0x1C006A5F0 (VidSchSubmitCommand.c)
 *     VidSchSubmitGlobalCommand @ 0x1C006C8E0 (VidSchSubmitGlobalCommand.c)
 *     VidSchFlushPendingCommand @ 0x1C00ABCB0 (VidSchFlushPendingCommand.c)
 * Callees:
 *     VidSchiUpdatePriorityTables @ 0x1C0007EE0 (VidSchiUpdatePriorityTables.c)
 *     VidSchiProfilePerformanceTick @ 0x1C00093B0 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchIncrementNumberOfMmIoFlipCommandPackets@@YAXPEAU_VIDSCH_QUEUE_PACKET@@H@Z @ 0x1C00110C4 (-VidSchIncrementNumberOfMmIoFlipCommandPackets@@YAXPEAU_VIDSCH_QUEUE_PACKET@@H@Z.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C004D180 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     VidSchIsVSyncEnabled @ 0x1C006B9F0 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitCommandPacketToQueue(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r9
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v13; // ebp
  struct _KTHREAD *v14; // rax
  int v15; // edx
  __int64 v16; // r8
  __int64 v17; // rbx
  int v18; // eax
  KPRIORITY v19; // r15d
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r9d
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  void (__fastcall *v32)(_QWORD); // rax
  int v33; // eax
  __int64 v34; // rax
  int v35; // r9d
  int v36; // [rsp+70h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 11);
  v3 = *(_QWORD *)(v2 + 96);
  v4 = *(_QWORD *)(v2 + 104);
  v5 = *(_QWORD *)(v3 + 24);
  if ( (*((_DWORD *)a1 + 66) & 0x1000000) != 0
    && *(_DWORD *)(*(_QWORD *)(v5 + 8LL * *((unsigned int *)a1 + 95) + 2992) + 18896LL) != -1 )
  {
    v32 = *(void (__fastcall **)(_QWORD))(v5 + 2848);
    if ( v32 )
      v32(*(_QWORD *)(v5 + 2912));
  }
  ExAcquireResourceExclusiveLite((PERESOURCE)(v5 + 1032), 1u);
  *((_QWORD *)a1 + 13) = (*(_QWORD *)(v2 + 136))++;
  v6 = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(v4 + 152) = v6 * KeQueryTimeIncrement();
  if ( !*((_DWORD *)a1 + 12) )
  {
    *(_QWORD *)(v2 + 168) = *((_QWORD *)a1 + 13);
    ++*(_QWORD *)(v4 + 1208);
  }
  *(_QWORD *)(v5 + 936) = *((_QWORD *)a1 + 9);
  if ( *((_DWORD *)a1 + 12) == 3 && *((_DWORD *)a1 + 38) != -1 )
    VidSchIncrementNumberOfMmIoFlipCommandPackets(a1, 1u);
  v8 = *((_DWORD *)a1 + 18);
  if ( (v8 & 0x1000) != 0 && (*((_DWORD *)a1 + 18) & 0xC00) != 0x400 )
  {
    v28 = *((unsigned int *)a1 + 38);
    if ( (_DWORD)v28 != -1 )
    {
      if ( (v8 & 0x40000) != 0 )
      {
        if ( (v8 & 0x1000000) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v5 + 960));
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 1188));
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 4 * v28 + 1124));
          if ( (*(_DWORD *)(v4 + 48) & 2) != 0
            || (v33 = *((_DWORD *)a1 + 96), v33 >= 4)
            || *(_BYTE *)(v5 + 132) && v33 == 3 )
          {
            VidSchIsVSyncEnabled(v5, v28);
          }
        }
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 4 * v28 + 1060));
        v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 40) + 24LL)
                                    + 8LL * *(unsigned int *)(*(_QWORD *)(v4 + 32) + 4LL))
                        + 8LL * (unsigned int)v28
                        + 520);
        if ( (*((_DWORD *)a1 + 18) & 0x80u) == 0 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 8LL * (unsigned int)v28 + 5544) + 8LL));
        _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
        if ( (*((_DWORD *)a1 + 18) & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v5 + 960));
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 1188));
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 4LL * (unsigned int)v28 + 1124));
        }
      }
    }
  }
  VidSchiProfilePerformanceTick(4LL, v5, v3, v7, 0LL, (__int64)a1, 0LL, 0LL);
  v36 = 1;
  VidSchiUpdatePriorityTables(v5, (__int64)a1, 0, &v36);
  v11 = *(_QWORD *)(*(_QWORD *)(v2 + 96) + 24LL);
  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(v11 + 2152) & 0x100) != 0 )
  {
    if ( CurrentThread != *(struct _KTHREAD **)(v11 + 144) && CurrentThread != *(struct _KTHREAD **)(v11 + 152) )
    {
      if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 >= 31 )
        v13 = 31;
      else
        v13 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
      while ( 1 )
      {
LABEL_11:
        v14 = KeGetCurrentThread();
        if ( v14 == *(struct _KTHREAD **)(v11 + 144) || v14 == *(struct _KTHREAD **)(v11 + 152) )
        {
          if ( *(_DWORD *)(v2 + 788) )
            goto LABEL_18;
        }
        else if ( !*(_DWORD *)(v2 + 788) )
        {
          goto LABEL_18;
        }
        v15 = v13;
        v16 = v13;
        v17 = *(_QWORD *)(*(_QWORD *)(v2 + 96) + 24LL);
        if ( v13 < 15 )
        {
          v15 = 15;
          v16 = 15LL;
        }
        v18 = *(_DWORD *)(v2 + 384);
        if ( v18 != v15 )
        {
          v26 = 0;
          if ( v18 > 15 )
          {
            v30 = v18 - 16;
            if ( (*(_DWORD *)(v17 + 4 * v30 + 2088))-- == 1 )
            {
              v26 = 1;
              *(_DWORD *)(v17 + 2084) &= ~(1 << *(_DWORD *)(v2 + 384));
            }
          }
          if ( v15 > 15 && ++*(_DWORD *)(v17 + 4 * v16 + 2024) == 1 )
          {
            v26 = 1;
            *(_DWORD *)(v17 + 2084) |= 1 << v15;
          }
          *(_DWORD *)(v2 + 384) = v15;
          if ( v26 )
          {
            v27 = *(_DWORD *)(v17 + 2084);
            if ( v27 )
              *(_DWORD *)(v17 + 196) = RtlFindMostSignificantBit(v27);
            else
              *(_DWORD *)(v17 + 196) = 15;
          }
        }
        v19 = *(_DWORD *)(v17 + 196);
        if ( v19 == KeQueryPriorityThread(*(PKTHREAD *)(v11 + 144)) )
          goto LABEL_18;
        ExReleaseResourceLite((PERESOURCE)(v11 + 1032));
        KeSetPriorityThread(*(PKTHREAD *)(v11 + 144), v19);
        ExAcquireResourceExclusiveLite((PERESOURCE)(v11 + 1032), 1u);
      }
    }
    if ( !*(_DWORD *)(v2 + 788) )
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)(v11 + 1032), 1u);
      v13 = 15;
      goto LABEL_11;
    }
  }
  else if ( CurrentThread != *(struct _KTHREAD **)(v11 + 144) && CurrentThread != *(struct _KTHREAD **)(v11 + 152) )
  {
LABEL_18:
    ExReleaseResourceLite((PERESOURCE)(v11 + 1032));
  }
  if ( v36 )
  {
    *(_QWORD *)(v5 + 1376) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1344), 0, 0);
  }
  v20 = *(_QWORD *)(v4 + 8);
  if ( v20 )
  {
    v21 = *(_QWORD *)(v20 + 592);
    if ( v21 )
    {
      if ( *(_BYTE *)(v21 + 48) )
      {
        v22 = *(_QWORD *)v21;
        *(_BYTE *)(v21 + 48) = 1;
        v23 = v22 + 41536;
        if ( v23 && *(struct _KTHREAD **)(v23 + 8) == KeGetCurrentThread() )
        {
          v34 = WdLogNewEntry5_WdAssertion(v10, v9);
          *(_QWORD *)(v34 + 24) = 1167LL;
          WdLogEvent5_WdAssertion(v34);
        }
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v23, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v35 = *(_DWORD *)(v23 + 16);
            if ( v35 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v24, &EventBlockThread, v25, v35);
          }
          ExAcquirePushLockExclusiveEx(v23, 0LL);
        }
        *(_QWORD *)(v23 + 8) = KeGetCurrentThread();
        if ( (*(_DWORD *)(v21 + 52) & 7) == 4 )
        {
          VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(v21, 3u);
          KeSetEvent(*(PRKEVENT *)(**(_QWORD **)v21 + 152LL), 0, 0);
        }
        *(_QWORD *)(v23 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v23, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
}
