/*
 * XREFs of VidSchiUnblockUnorderedWaiter @ 0x1C0001054
 * Callers:
 *     VidSchiCompleteSignalSyncObject @ 0x1C000B450 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchTimeoutSyncObject @ 0x1C0013ED4 (VidSchTimeoutSyncObject.c)
 * Callees:
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C0013888 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
 */

void __fastcall VidSchiUnblockUnorderedWaiter(__int64 a1, unsigned __int8 a2)
{
  _QWORD *v2; // rsi
  _QWORD *v4; // rdi
  struct _VIDSCH_QUEUE_PACKET *v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r9
  unsigned __int64 *v9; // rax

  v2 = (_QWORD *)(a1 + 104);
  v4 = *(_QWORD **)(a1 + 104);
  while ( v4 != v2 )
  {
    v6 = (struct _VIDSCH_QUEUE_PACKET *)(v4 - 38);
    v4 = (_QWORD *)*v4;
    if ( a2
      || *(_DWORD *)(a1 + 40) == 2
      && (*(_BYTE *)(a1 + 27) ? (v7 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 40LL)) : (v7 = *(_QWORD *)(a1 + 56)),
          *((_QWORD *)v6 + 40) <= v7) )
    {
LABEL_8:
      VidSchiUnblockUnorderedWaitQueuePacket(v6, a2);
    }
    else if ( (unsigned int)(*(_DWORD *)(a1 + 40) - 4) <= 1 )
    {
      v8 = *((_QWORD *)v6 + 40);
      if ( *(_BYTE *)(a1 + 28) )
      {
LABEL_17:
        if ( (*((_DWORD *)v6 + 72) & 4) != 0 )
          goto LABEL_8;
      }
      else
      {
        v9 = *(unsigned __int64 **)(a1 + 56);
        if ( *(_BYTE *)(a1 + 29) )
        {
          if ( *v9 >= v8 )
            goto LABEL_17;
        }
        else if ( *(_DWORD *)v9 - (int)v8 >= 0 )
        {
          goto LABEL_17;
        }
      }
    }
  }
}
