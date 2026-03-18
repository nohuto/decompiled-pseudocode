/*
 * XREFs of VidSchiUnwaitWaitQueuePacket @ 0x1C000D604
 * Callers:
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C0002254 (VidSchiCleanupDeferredWaiterContext.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0009F60 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000AA20 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000DB74 (VidSchiSubmitWaitCommand.c)
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C00119D0 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C0015900 (VidSchiRundownUnorderedWaiterContext.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C0009ED0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiUnwaitContext @ 0x1C000DA38 (VidSchiUnwaitContext.c)
 *     VidSchiFreeQueuePacket @ 0x1C000EB98 (VidSchiFreeQueuePacket.c)
 *     Template_pp @ 0x1C0023FB8 (Template_pp.c)
 */

LONG __fastcall VidSchiUnwaitWaitQueuePacket(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v4; // rbx
  struct _KEVENT *v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  int v11; // ecx
  LONG result; // eax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rcx

  v4 = *(_QWORD *)(a1 + 88);
  v6 = *(struct _KEVENT **)(*(_QWORD *)(v4 + 96) + 24LL);
  if ( bTracingEnabled )
  {
    v16 = *(_QWORD *)(v4 + 56);
    if ( !v16 || (*(_DWORD *)(v4 + 112) & 0x40) != 0 )
      v16 = v4;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_pp(v16, &EventUnwaitQueuePacket, a3, a1, v16);
  }
  v7 = (_QWORD *)(a1 + 280);
  v8 = *(_QWORD *)(a1 + 280);
  v9 = *(_QWORD **)(a1 + 288);
  if ( *(_QWORD *)(v8 + 8) != a1 + 280 || (_QWORD *)*v9 != v7 )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  *v7 = 0LL;
  v10 = *(_QWORD *)(a1 + 272);
  *(_QWORD *)(a1 + 288) = 0LL;
  v11 = *(_DWORD *)(v10 + 40);
  if ( ((v11 - 2) & 0xFFFFFFFC) == 0 && v11 != 3 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 808));
    if ( (*(_DWORD *)(a1 + 264) & 8) != 0 )
    {
      --v6[41].Header.LockNV;
      *(_DWORD *)(a1 + 264) &= ~8u;
    }
  }
  VidSchiReleaseSyncObjectReference(*(char **)(a1 + 272));
  *(_DWORD *)(a1 + 264) = *(_DWORD *)(a1 + 264) ^ (*(_DWORD *)(a1 + 264) ^ (2 * a2)) & 2 | 1;
  if ( (*(_DWORD *)(a1 + 64) & 0x10) != 0 )
  {
    v13 = (_QWORD *)(a1 + 32);
    v14 = *(_QWORD *)(a1 + 32);
    v15 = *(_QWORD **)(a1 + 40);
    if ( *(_QWORD *)(v14 + 8) != a1 + 32 || (_QWORD *)*v15 != v13 )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    *v13 = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    --*(_DWORD *)(v4 + 812);
    *(_DWORD *)(a1 + 64) &= ~0x10u;
    return VidSchiFreeQueuePacket(v4);
  }
  else
  {
    result = *(_DWORD *)(v4 + 176);
    if ( (result & 0x20) != 0 )
    {
      *(_DWORD *)(v4 + 176) &= ~0x20u;
      result = VidSchiUnwaitContext(v4, 22362LL);
      if ( (_BYTE)result )
      {
        v6[57].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
        return KeSetEvent(v6 + 56, 0, 0);
      }
    }
  }
  return result;
}
