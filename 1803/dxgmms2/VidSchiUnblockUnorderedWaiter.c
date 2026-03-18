/*
 * XREFs of VidSchiUnblockUnorderedWaiter @ 0x1C002D380
 * Callers:
 *     VidSchTimeoutSyncObject @ 0x1C0003E5C (VidSchTimeoutSyncObject.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000BB10 (VidSchiCompleteSignalSyncObject.c)
 * Callees:
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C0013B00 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

void __fastcall VidSchiUnblockUnorderedWaiter(__int64 a1, unsigned __int8 a2)
{
  _QWORD *v2; // rsi
  _QWORD *v4; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // rax

  v2 = (_QWORD *)(a1 + 104);
  v4 = *(_QWORD **)(a1 + 104);
  while ( v4 != v2 )
  {
    v6 = (__int64)(v4 - 36);
    v4 = (_QWORD *)*v4;
    if ( a2
      || *(_DWORD *)(a1 + 44) == 2
      && (!*(_BYTE *)(a1 + 27) ? (v7 = *(_QWORD *)(a1 + 56)) : (v7 = *(_QWORD *)(*(_QWORD *)(a1 + 200) + 40LL)),
          *(_QWORD *)(v6 + 304) <= v7) )
    {
LABEL_15:
      VidSchiUnblockUnorderedWaitQueuePacket(v6, a2);
    }
    else if ( (unsigned int)(*(_DWORD *)(a1 + 44) - 4) <= 1 )
    {
      v8 = *(_QWORD *)(v6 + 304);
      if ( *(_BYTE *)(a1 + 28) )
      {
LABEL_14:
        if ( (*(_DWORD *)(v6 + 272) & 4) != 0 )
          goto LABEL_15;
      }
      else
      {
        v9 = *(unsigned __int64 **)(a1 + 56);
        if ( *(_BYTE *)(a1 + 29) )
        {
          if ( *v9 >= v8 )
            goto LABEL_14;
        }
        else if ( *(_DWORD *)v9 - (int)v8 >= 0 )
        {
          goto LABEL_14;
        }
      }
    }
  }
}
