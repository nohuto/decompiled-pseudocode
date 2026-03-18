/*
 * XREFs of VidSchFlushPendingCommand @ 0x1C00BD1A0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0006BD0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00BBAC8 (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchFlushPendingCommand(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v4; // rax
  __int64 v6; // rsi
  __int64 **v7; // rdi
  __int64 *v8; // rcx
  __int64 *v9; // rax
  struct _VIDSCH_QUEUE_PACKET *v10; // rcx
  int v11; // eax
  int v12; // edx

  v2 = a2;
  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 104);
    if ( *(_DWORD *)(a1 + 432) )
    {
      v7 = (__int64 **)(a1 + 672);
      do
      {
        v8 = *v7;
        if ( (__int64 **)(*v7)[1] != v7 || (v9 = (__int64 *)*v8, *(__int64 **)(*v8 + 8) != v8) )
          __fastfail(3u);
        *v7 = v9;
        v10 = (struct _VIDSCH_QUEUE_PACKET *)(v8 - 4);
        v9[1] = (__int64)v7;
        v11 = *(_DWORD *)(a1 + 432) - 1;
        *(_DWORD *)(a1 + 432) = v11;
        if ( v2 || (v12 = *((_DWORD *)v10 + 18), (v12 & 0x40) == 0) )
        {
          VidSchiDiscardQueuePacket(v10);
        }
        else
        {
          if ( !v11 )
            *((_DWORD *)v10 + 18) = v12 & 0xFFFFFF7F | *((_DWORD *)v10 + 68) & 0x80 | 0x4000;
          VidSchiSubmitCommandPacketToQueue((__int64)v10);
        }
      }
      while ( *(_DWORD *)(a1 + 432) );
    }
    *(_DWORD *)(v6 + 488) = -1;
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
