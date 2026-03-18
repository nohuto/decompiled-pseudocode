/*
 * XREFs of VidSchiUnwaitWaitQueuePacket @ 0x1C000E338
 * Callers:
 *     VidSchiCompleteSignalSyncObject @ 0x1C000BB10 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BC60 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiSubmitWaitCommand @ 0x1C00111BC (VidSchiSubmitWaitCommand.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C0012BA4 (VidSchiCleanupDeferredWaiterContext.c)
 *     ?VidSchiCompleteAllWaitsContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0013038 (-VidSchiCompleteAllWaitsContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C0013B00 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C0017784 (VidSchiRundownUnorderedWaiterContext.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0031108 (-VidSchiRundownHardwarePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000BA80 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiUnwaitContext @ 0x1C0011080 (VidSchiUnwaitContext.c)
 *     VidSchiFreeQueuePacket @ 0x1C0011368 (VidSchiFreeQueuePacket.c)
 *     McTemplateK0pp @ 0x1C0028C6C (McTemplateK0pp.c)
 *     ?VidSchiUnwaitHwQueue@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0031FC4 (-VidSchiUnwaitHwQueue@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 */

void __fastcall VidSchiUnwaitWaitQueuePacket(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r8
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // rax

  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
    v5 = *(_QWORD *)(v2 + 96);
  else
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 16LL);
  v6 = *(_QWORD *)(v5 + 24);
  if ( bTracingEnabled )
  {
    if ( v2 )
    {
      v7 = *(_QWORD *)(v2 + 56);
      if ( !v7 || (*(_DWORD *)(v2 + 112) & 0x40) != 0 )
        v7 = v2;
    }
    else
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL);
      if ( !v7 )
        v7 = *(_QWORD *)(a1 + 96);
    }
    if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pp(v7, &EventUnwaitQueuePacket, v2, a1, v7);
  }
  v8 = (_QWORD *)(a1 + 288);
  v9 = *(_QWORD *)(a1 + 288);
  if ( *(_QWORD *)(v9 + 8) != a1 + 288 || (v10 = *(_QWORD **)(a1 + 296), (_QWORD *)*v10 != v8) )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  *v8 = 0LL;
  v11 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 296) = 0LL;
  v12 = *(_DWORD *)(v11 + 44);
  if ( ((v12 - 2) & 0xFFFFFFFC) == 0 && v12 != 3 )
  {
    v13 = *(_QWORD *)(a1 + 88);
    if ( v13 )
      _InterlockedDecrement((volatile signed __int32 *)(v13 + 792));
    if ( (*(_DWORD *)(a1 + 272) & 8) != 0 )
    {
      --*(_DWORD *)(v6 + 996);
      *(_DWORD *)(a1 + 272) &= ~8u;
    }
  }
  VidSchiReleaseSyncObjectReference(*(char **)(a1 + 280));
  *(_DWORD *)(a1 + 272) = *(_DWORD *)(a1 + 272) ^ (*(_DWORD *)(a1 + 272) ^ (2 * a2)) & 2 | 1;
  if ( (*(_DWORD *)(a1 + 64) & 0x10) != 0 )
  {
    v15 = (_QWORD *)(a1 + 32);
    v16 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v16 + 8) != a1 + 32 || (v17 = *(_QWORD **)(a1 + 40), (_QWORD *)*v17 != v15) )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    *v15 = 0LL;
    v18 = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 40) = 0LL;
    --*(_DWORD *)(v18 + 796);
    *(_DWORD *)(a1 + 64) &= ~0x10u;
    VidSchiFreeQueuePacket(*(_QWORD *)(a1 + 88));
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 88);
    if ( v14 )
    {
      if ( (*(_DWORD *)(v14 + 184) & 0x20) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 88) + 184LL) &= ~0x20u;
        if ( (unsigned __int8)VidSchiUnwaitContext(*(_QWORD *)(a1 + 88), 22904LL) )
        {
          *(_QWORD *)(v6 + 1400) = MEMORY[0xFFFFF78000000320];
          KeSetEvent((PRKEVENT)(v6 + 1368), 0, 0);
        }
      }
    }
    else
    {
      VidSchiUnwaitHwQueue(*(struct VIDSCH_HW_QUEUE **)(a1 + 96));
    }
  }
}
