/*
 * XREFs of VidSchFlushPendingCommand @ 0x1C00ABCB0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C006B1A0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00AA7D4 (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchFlushPendingCommand(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v4; // rax
  __int64 v6; // rsi
  __int64 **v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // rcx
  struct _VIDSCH_QUEUE_PACKET *v10; // rcx
  __int64 v11; // r8

  v2 = a2;
  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 104);
    if ( *(_DWORD *)(a1 + 424) )
    {
      v7 = (__int64 **)(a1 + 688);
      do
      {
        v8 = *v7;
        v9 = **v7;
        if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v9 + 8) != v8 )
          __fastfail(3u);
        *v7 = (__int64 *)v9;
        *(_QWORD *)(v9 + 8) = v7;
        v10 = (struct _VIDSCH_QUEUE_PACKET *)(v8 - 4);
        v11 = (unsigned int)--*(_DWORD *)(a1 + 424);
        if ( v2 || (a2 = *((unsigned int *)v10 + 18), (a2 & 0x40) == 0) )
        {
          VidSchiDiscardQueuePacket(v10, a2, v11);
        }
        else
        {
          if ( !(_DWORD)v11 )
            *((_DWORD *)v10 + 18) = a2 & 0xFFFFFF7F | *((_DWORD *)v10 + 66) & 0x80 | 0x4000;
          VidSchiSubmitCommandPacketToQueue(v10);
        }
      }
      while ( *(_DWORD *)(a1 + 424) );
    }
    *(_DWORD *)(v6 + 464) = -1;
    return 0LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v4);
    return 3221225485LL;
  }
}
