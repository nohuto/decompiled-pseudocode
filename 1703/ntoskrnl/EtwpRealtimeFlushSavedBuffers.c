/*
 * XREFs of EtwpRealtimeFlushSavedBuffers @ 0x14054FCD8
 * Callers:
 *     EtwpLogger @ 0x14054F910 (EtwpLogger.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     EtwpRealtimeDeliverBuffer @ 0x140550360 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpSendSessionNotification @ 0x140551BF8 (EtwpSendSessionNotification.c)
 *     EtwpRealtimeRestoreBuffer @ 0x1405C6D7C (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1405D0660 (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpRealtimeResetReferenceTime @ 0x1407135A8 (EtwpRealtimeResetReferenceTime.c)
 */

__int64 __fastcall EtwpRealtimeFlushSavedBuffers(__int64 a1)
{
  char *PoolWithTag; // rax
  char *v4; // rsi
  __int64 v5; // rbx
  int v6; // edx

  if ( !*(_DWORD *)(a1 + 424) || !*(_DWORD *)(a1 + 344) )
    return 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 4), 0x50777445u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, *(unsigned int *)(a1 + 4));
    if ( *(_DWORD *)(a1 + 424) )
    {
      while ( *(_DWORD *)(a1 + 344) )
      {
        v5 = *(_QWORD *)(a1 + 392);
        if ( (int)EtwpRealtimeRestoreBuffer(a1, v4) < 0 )
        {
          *(_DWORD *)(a1 + 260) += *(_DWORD *)(a1 + 424);
          *(_DWORD *)(a1 + 424) = 0;
          *(_QWORD *)(a1 + 408) = 0LL;
          *(_DWORD *)(a1 + 448) = 3;
          EtwpSendSessionNotification(a1, 4LL);
          EtwpRealtimeZeroTruncateLogfile(a1);
          ExFreePoolWithTag(v4, 0);
          if ( (*(_BYTE *)(a1 + 816) & 1) != 0 )
            EtwpRealtimeResetReferenceTime(a1);
          return 3221225730LL;
        }
        if ( (int)EtwpRealtimeDeliverBuffer(a1, v4) < 0 )
        {
          *(_QWORD *)(a1 + 392) = v5;
          break;
        }
        if ( (*(_BYTE *)(a1 + 816) & 1) != 0 && *((_WORD *)v4 + 27) == 3 )
          *(_OWORD *)(a1 + 432) = *(_OWORD *)(v4 + 56);
        --*(_DWORD *)(a1 + 424);
        *(_QWORD *)(a1 + 408) -= *((unsigned int *)v4 + 12);
        v6 = *(_DWORD *)(a1 + 424);
        if ( *(int *)(a1 + 16) < 0
          && *(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 408) > (unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 4)
                                                                                            * *(_DWORD *)(a1 + 236)) )
        {
          *(_DWORD *)(a1 + 16) = 0;
        }
        if ( !v6 )
          break;
      }
      if ( *(_DWORD *)(a1 + 424) )
        goto LABEL_16;
    }
    EtwpRealtimeZeroTruncateLogfile(a1);
LABEL_16:
    ExFreePoolWithTag(v4, 0);
    return 0LL;
  }
  return 3221225495LL;
}
