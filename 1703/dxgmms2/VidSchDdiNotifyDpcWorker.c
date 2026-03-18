/*
 * XREFs of VidSchDdiNotifyDpcWorker @ 0x1C00257C0
 * Callers:
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C002AC84 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 * Callees:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004480 (VidSchiProcessDpcVSyncCookie.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C001EF5C (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C002657C (VidSchiProcessDpcDmaPacket.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C002694C (VidSchiProcessPeriodicNotificationCookie.c)
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

  v2 = *(union _SLIST_HEADER **)(a1 + 416);
  result = (__int64)ExpInterlockedFlushSList(v2 + 120);
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
      if ( (result & 0xFFFFFFF6) != 0 )
      {
        if ( Next > 0xA )
          goto LABEL_12;
      }
      else if ( Next != 10 )
      {
        if ( a2 )
        {
          _InterlockedExchange((volatile __int32 *)&v8[2].Next[6].Next[30], 1);
          v10 = VIDMM_GLOBAL::_Config >> 4;
          if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
          {
            LOBYTE(v10) = 1;
            VIDMM_GLOBAL::ApertureCorruptionCheck(*(VIDMM_GLOBAL **)(a1 + 440), v10, (__int64)v7);
          }
        }
        result = VidSchiProcessDpcDmaPacket((struct _VIDSCH_DMA_PACKET *)&v8[-1]);
        continue;
      }
      result = 1160LL;
      if ( !_bittest((const int *)&result, Next) )
      {
LABEL_12:
        if ( Next == 14 )
          result = VidSchiProcessPeriodicNotificationCookie(v2, &v8[-1]);
        continue;
      }
      VidSchiProcessDpcVSyncCookie((struct _VIDSCH_VSYNC_COOKIE *)&v8[-1]);
      result = (__int64)ExpInterlockedPushEntrySList(
                          (PSLIST_HEADER)(*(&v2[187].Alignment + *((unsigned int *)&v8[4].Next + 2)) + 19264),
                          v8);
    }
    while ( v6 );
  }
  return result;
}
