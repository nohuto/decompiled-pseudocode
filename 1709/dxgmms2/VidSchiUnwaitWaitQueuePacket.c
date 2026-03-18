/*
 * XREFs of VidSchiUnwaitWaitQueuePacket @ 0x1C000D18C
 * Callers:
 *     VidSchiCompleteSignalSyncObject @ 0x1C000B450 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BBA0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000D814 (VidSchiSubmitWaitCommand.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C000EA84 (VidSchiCleanupDeferredWaiterContext.c)
 *     ?VidSchiCompleteAllWaitsContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C000F674 (-VidSchiCompleteAllWaitsContext@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C0013888 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C0017DD4 (VidSchiRundownUnorderedWaiterContext.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000B3C0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiUnwaitContext @ 0x1C000D6E4 (VidSchiUnwaitContext.c)
 *     VidSchiFreeQueuePacket @ 0x1C0010C4C (VidSchiFreeQueuePacket.c)
 *     McTemplateK0pp @ 0x1C0026038 (McTemplateK0pp.c)
 */

LONG __fastcall VidSchiUnwaitWaitQueuePacket(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rax
  int v12; // ecx
  LONG result; // eax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx

  v4 = *(_QWORD *)(a1 + 88);
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 96) + 24LL);
  if ( bTracingEnabled )
  {
    v7 = *(_QWORD *)(v4 + 56);
    if ( !v7 || (*(_DWORD *)(v4 + 112) & 0x40) != 0 )
      v7 = v4;
    if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pp(v7, &EventUnwaitQueuePacket, a3, a1, v7);
  }
  v8 = (_QWORD *)(a1 + 304);
  v9 = *(_QWORD *)(a1 + 304);
  if ( *(_QWORD *)(v9 + 8) != a1 + 304 || (v10 = *(_QWORD **)(a1 + 312), (_QWORD *)*v10 != v8) )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  *v8 = 0LL;
  v11 = *(_QWORD *)(a1 + 296);
  *(_QWORD *)(a1 + 312) = 0LL;
  v12 = *(_DWORD *)(v11 + 40);
  if ( ((v12 - 2) & 0xFFFFFFFC) == 0 && v12 != 3 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 784));
    if ( (*(_DWORD *)(a1 + 288) & 8) != 0 )
    {
      --*(_DWORD *)(v6 + 980);
      *(_DWORD *)(a1 + 288) &= ~8u;
    }
  }
  VidSchiReleaseSyncObjectReference(*(char **)(a1 + 296));
  *(_DWORD *)(a1 + 288) = *(_DWORD *)(a1 + 288) ^ (*(_DWORD *)(a1 + 288) ^ (2 * a2)) & 2 | 1;
  if ( (*(_DWORD *)(a1 + 64) & 0x10) != 0 )
  {
    v14 = (_QWORD *)(a1 + 32);
    v15 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v15 + 8) != a1 + 32 || (v16 = *(_QWORD **)(a1 + 40), (_QWORD *)*v16 != v14) )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    *v14 = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    --*(_DWORD *)(v4 + 788);
    *(_DWORD *)(a1 + 64) &= ~0x10u;
    return VidSchiFreeQueuePacket(v4);
  }
  else
  {
    result = *(_DWORD *)(v4 + 176);
    if ( (result & 0x20) != 0 )
    {
      *(_DWORD *)(v4 + 176) &= ~0x20u;
      result = VidSchiUnwaitContext(v4, 22824LL);
      if ( (_BYTE)result )
      {
        *(_QWORD *)(v6 + 1384) = MEMORY[0xFFFFF78000000320];
        return KeSetEvent((PRKEVENT)(v6 + 1352), 0, 0);
      }
    }
  }
  return result;
}
