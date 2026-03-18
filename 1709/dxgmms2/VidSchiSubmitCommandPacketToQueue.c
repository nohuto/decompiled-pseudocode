/*
 * XREFs of VidSchiSubmitCommandPacketToQueue @ 0x1C006EEB0
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0005FE0 (VidSchWaitForSingleSyncObject.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007290 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchSubmitCommand @ 0x1C006E3C0 (VidSchSubmitCommand.c)
 *     VidSchSubmitGlobalCommand @ 0x1C0071CA8 (VidSchSubmitGlobalCommand.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0072F20 (VidSchEnqueueCpuEvent.c)
 *     VidSchFlushPendingCommand @ 0x1C00B45F0 (VidSchFlushPendingCommand.c)
 * Callees:
 *     VidSchiUpdatePriorityTables @ 0x1C0009A40 (VidSchiUpdatePriorityTables.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A200 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchIncrementNumberOfMmIoFlipCommandPackets@@YAXPEAU_VIDSCH_QUEUE_PACKET@@H@Z @ 0x1C000CB9C (-VidSchIncrementNumberOfMmIoFlipCommandPackets@@YAXPEAU_VIDSCH_QUEUE_PACKET@@H@Z.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0051688 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     VidSchIsVSyncEnabled @ 0x1C0071EE0 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitCommandPacketToQueue(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int v13; // ebp
  struct _KTHREAD *v14; // rax
  int v15; // edx
  __int64 v16; // r8
  __int64 v17; // rbx
  int v18; // eax
  KPRIORITY v19; // r14d
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r9d
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v33; // r9d
  void (__fastcall *v34)(_QWORD); // rax
  __int64 v35; // rax
  int v36; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v1 + 104);
  v5 = *(_QWORD *)(v3 + 24);
  if ( (*((_DWORD *)a1 + 72) & 0x1000000) != 0
    && *(_DWORD *)(*(_QWORD *)(v5 + 8LL * *((unsigned int *)a1 + 101) + 3008) + 23648LL) != -1 )
  {
    v34 = *(void (__fastcall **)(_QWORD))(v5 + 2864);
    if ( v34 )
      v34(*(_QWORD *)(v5 + 2928));
  }
  ExAcquireResourceExclusiveLite((PERESOURCE)(v5 + 1040), 1u);
  *((_QWORD *)a1 + 14) = (*(_QWORD *)(v1 + 136))++;
  v6 = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(v4 + 152) = v6 * KeQueryTimeIncrement();
  if ( !*((_DWORD *)a1 + 12) )
  {
    *(_QWORD *)(v1 + 168) = *((_QWORD *)a1 + 14);
    ++*(_QWORD *)(v4 + 1208);
  }
  if ( *((_DWORD *)a1 + 12) == 3 && *((_DWORD *)a1 + 44) != -1 )
    VidSchIncrementNumberOfMmIoFlipCommandPackets(a1, 1u);
  v8 = *((_DWORD *)a1 + 18);
  if ( (v8 & 0x1000) != 0 && ((v8 & 0x400) == 0 || (v8 & 0x800) != 0) )
  {
    v28 = *((unsigned int *)a1 + 44);
    if ( (_DWORD)v28 != -1 )
    {
      if ( (v8 & 0x40000) != 0 )
      {
        if ( (v8 & 0x1000000) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v5 + 960));
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 1188));
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 4 * v28 + 1124));
          if ( (*(_DWORD *)(v4 + 48) & 2) != 0 || *((int *)a1 + 102) >= 4 || *(_BYTE *)(v5 + 132) )
            VidSchIsVSyncEnabled(v5, (unsigned int)v28);
        }
      }
      else
      {
        v29 = (unsigned int)v28;
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 4 * v28 + 1060));
        v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 40) + 24LL)
                                    + 8LL * *(unsigned int *)(*(_QWORD *)(v4 + 32) + 4LL))
                        + 8LL * (unsigned int)v28
                        + 520);
        if ( (*((_DWORD *)a1 + 18) & 0x80u) == 0 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 8 * v29 + 6056) + 8LL));
        _InterlockedIncrement((volatile signed __int32 *)(v30 + 8));
        if ( (*((_DWORD *)a1 + 18) & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v5 + 960));
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 1188));
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 4 * v29 + 1124));
        }
      }
    }
  }
  VidSchiProfilePerformanceTick(4LL, v5, v3, v7, 0LL, (__int64)a1, 0LL, 0LL);
  v36 = 1;
  VidSchiUpdatePriorityTables(v5, (__int64)a1, 0, &v36);
  v11 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(v11 + 2168) & 0x80u) == 0 )
  {
    if ( CurrentThread != *(struct _KTHREAD **)(v11 + 144) && CurrentThread != *(struct _KTHREAD **)(v11 + 152) )
LABEL_18:
      ExReleaseResourceLite((PERESOURCE)(v11 + 1040));
  }
  else
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
          if ( *(_DWORD *)(v1 + 764) )
            goto LABEL_18;
        }
        else if ( !*(_DWORD *)(v1 + 764) )
        {
          goto LABEL_18;
        }
        v15 = v13;
        v16 = v13;
        v17 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
        if ( v13 < 15 )
        {
          v15 = 15;
          v16 = 15LL;
        }
        v18 = *(_DWORD *)(v1 + 384);
        if ( v18 != v15 )
        {
          v26 = 0;
          if ( v18 > 15 )
          {
            v31 = v18 - 16;
            if ( (*(_DWORD *)(v17 + 4 * v31 + 2104))-- == 1 )
            {
              v26 = 1;
              *(_DWORD *)(v17 + 2100) &= ~(1 << *(_DWORD *)(v1 + 384));
            }
          }
          if ( v15 > 15 && ++*(_DWORD *)(v17 + 4 * v16 + 2040) == 1 )
          {
            v26 = 1;
            *(_DWORD *)(v17 + 2100) |= 1 << v15;
          }
          *(_DWORD *)(v1 + 384) = v15;
          if ( v26 )
          {
            v27 = *(_DWORD *)(v17 + 2100);
            if ( v27 )
              *(_DWORD *)(v17 + 196) = RtlFindMostSignificantBit(v27);
            else
              *(_DWORD *)(v17 + 196) = 15;
          }
        }
        v19 = *(_DWORD *)(v17 + 196);
        if ( v19 == KeQueryPriorityThread(*(PKTHREAD *)(v11 + 144)) )
          goto LABEL_18;
        ExReleaseResourceLite((PERESOURCE)(v11 + 1040));
        KeSetPriorityThread(*(PKTHREAD *)(v11 + 144), v19);
        ExAcquireResourceExclusiveLite((PERESOURCE)(v11 + 1040), 1u);
      }
    }
    if ( !*(_DWORD *)(v1 + 764) )
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)(v11 + 1040), 1u);
      v13 = 15;
      goto LABEL_11;
    }
  }
  if ( v36 )
  {
    *(_QWORD *)(v5 + 1384) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1352), 0, 0);
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
        v23 = v22 + 41240;
        if ( v23 && *(struct _KTHREAD **)(v23 + 8) == KeGetCurrentThread() )
        {
          v35 = WdLogNewEntry5_WdAssertion(v10, v9);
          *(_QWORD *)(v35 + 24) = 1214LL;
          WdLogEvent5_WdAssertion(v35);
        }
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v23, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v33 = *(_DWORD *)(v23 + 16);
            if ( v33 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v24, (__int64)&EventBlockThread, v25, v33);
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
