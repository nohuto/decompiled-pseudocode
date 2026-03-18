/*
 * XREFs of VidSchDdiNotifyDpcWorker @ 0x1C0027908
 * Callers:
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C002C780 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 * Callees:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004B50 (VidSchiProcessDpcVSyncCookie.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C0020FF0 (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C002863C (VidSchiProcessDpcDmaPacket.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C0028A24 (VidSchiProcessPeriodicNotificationCookie.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C002DB60 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 */

__int64 __fastcall VidSchDdiNotifyDpcWorker(__int64 a1, int a2)
{
  union _SLIST_HEADER *v2; // rbp
  __int64 result; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // r8
  struct _SLIST_ENTRY *v8; // rsi
  unsigned int Next; // ecx
  __int64 v10; // rdx

  v2 = *(union _SLIST_HEADER **)(a1 + 512);
  result = (__int64)ExpInterlockedFlushSList(v2 + 121);
  v6 = 0LL;
  if ( result )
  {
    do
    {
      v7 = (_QWORD *)result;
      result = *(_QWORD *)result;
      *v7 = v6;
      v6 = v7;
    }
    while ( result );
    do
    {
      v8 = (struct _SLIST_ENTRY *)(v6 - 2);
      v6 = (_QWORD *)*v6;
      Next = (unsigned int)v8->Next;
      result = (unsigned int)(LODWORD(v8->Next) - 1);
      if ( (result & 0xFFFFFFF6) != 0 || Next == 10 )
      {
        if ( Next == 11 )
        {
          result = VidSchiProcessMonitoredFenceSignaledDpc(v8);
        }
        else if ( Next <= 0xA && (result = 1160LL, _bittest((const int *)&result, Next)) )
        {
          VidSchiProcessDpcVSyncCookie((struct _VIDSCH_VSYNC_COOKIE *)&v8[-1]);
          result = (__int64)ExpInterlockedPushEntrySList(
                              (PSLIST_HEADER)(*(&v2[188].Alignment + *((unsigned int *)&v8[4].Next + 2)) + 24016),
                              v8);
        }
        else if ( Next == 14 )
        {
          result = VidSchiProcessPeriodicNotificationCookie(v2, &v8[-1]);
        }
      }
      else
      {
        if ( a2 )
        {
          _InterlockedExchange((volatile __int32 *)&v8[2].Next[6].Next[30], 1);
          v10 = VIDMM_GLOBAL::_Config >> 4;
          if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
          {
            LOBYTE(v10) = 1;
            VIDMM_GLOBAL::ApertureCorruptionCheck(*(VIDMM_GLOBAL **)(a1 + 536), v10, (__int64)v7);
          }
        }
        result = VidSchiProcessDpcDmaPacket((struct _VIDSCH_DMA_PACKET *)&v8[-1]);
      }
    }
    while ( v6 );
  }
  return result;
}
