/*
 * XREFs of EtwpRealtimeFlushSavedBuffers @ 0x14058E9F8
 * Callers:
 *     EtwpLogger @ 0x14058EB20 (EtwpLogger.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpSendSessionNotification @ 0x14058A040 (EtwpSendSessionNotification.c)
 *     EtwpRealtimeDeliverBuffer @ 0x1405923E4 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeRestoreBuffer @ 0x1406436FC (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x14064FA8C (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpRealtimeResetReferenceTime @ 0x1407B3060 (EtwpRealtimeResetReferenceTime.c)
 */

__int64 __fastcall EtwpRealtimeFlushSavedBuffers(__int64 a1)
{
  char *PoolWithTag; // rax
  char *v4; // rsi
  int v5; // edx
  __int64 v6; // rbx
  __int64 v7; // r8
  bool v8; // sf

  if ( !*(_DWORD *)(a1 + 440) || !*(_DWORD *)(a1 + 360) )
    return 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 4), 0x50777445u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, *(unsigned int *)(a1 + 4));
    v5 = *(_DWORD *)(a1 + 440);
    if ( v5 )
    {
      while ( *(_DWORD *)(a1 + 360) )
      {
        v6 = *(_QWORD *)(a1 + 408);
        if ( (int)EtwpRealtimeRestoreBuffer(a1, v4) < 0 )
        {
          *(_DWORD *)(a1 + 276) += *(_DWORD *)(a1 + 440);
          *(_DWORD *)(a1 + 440) = 0;
          *(_QWORD *)(a1 + 424) = 0LL;
          *(_DWORD *)(a1 + 464) = 3;
          EtwpSendSessionNotification(a1, 4u, 0xC0000102);
          EtwpRealtimeZeroTruncateLogfile(a1);
          ExFreePoolWithTag(v4, 0);
          if ( (*(_BYTE *)(a1 + 832) & 1) != 0 )
            EtwpRealtimeResetReferenceTime(a1);
          return 3221225730LL;
        }
        if ( (int)EtwpRealtimeDeliverBuffer(a1, v4) < 0 )
        {
          v5 = *(_DWORD *)(a1 + 440);
          *(_QWORD *)(a1 + 408) = v6;
          break;
        }
        if ( (*(_BYTE *)(a1 + 832) & 1) != 0 && *((_WORD *)v4 + 27) == 3 )
          *(_OWORD *)(a1 + 448) = *(_OWORD *)(v4 + 56);
        v5 = --*(_DWORD *)(a1 + 440);
        v7 = *(_QWORD *)(a1 + 424) - *((unsigned int *)v4 + 12);
        v8 = *(int *)(a1 + 16) < 0;
        *(_QWORD *)(a1 + 424) = v7;
        if ( v8
          && *(_QWORD *)(a1 + 432) - v7 > (unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 252)) )
        {
          *(_DWORD *)(a1 + 16) = 0;
        }
        if ( !v5 )
          goto LABEL_14;
      }
      if ( v5 )
        goto LABEL_15;
    }
LABEL_14:
    EtwpRealtimeZeroTruncateLogfile(a1);
LABEL_15:
    ExFreePoolWithTag(v4, 0);
    return 0LL;
  }
  return 3221225495LL;
}
