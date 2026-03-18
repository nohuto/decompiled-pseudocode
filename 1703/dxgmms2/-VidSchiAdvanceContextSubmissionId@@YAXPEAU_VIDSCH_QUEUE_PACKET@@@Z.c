/*
 * XREFs of ?VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0021EF0
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008200 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x1C000C020 (VidSchUnwaitFlipQueue.c)
 */

void __fastcall VidSchiAdvanceContextSubmissionId(struct _VIDSCH_QUEUE_PACKET *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax

  v3 = (_QWORD *)*((_QWORD *)a1 + 11);
  v5 = v3[13];
  v6 = *(_QWORD *)(v3[12] + 24LL);
  v7 = v3[19];
  if ( v7 && *((_QWORD *)a1 + 13) <= v7 )
  {
    if ( !*(_BYTE *)(v5 + 164)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 160), 0, 0)
      && (*(_BYTE *)(v6 + 2844) & 1) == 0 )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, a2, a3);
      v8[3] = 281LL;
      v8[4] = 1792LL;
      v8[5] = *((_QWORD *)a1 + 13);
      v8[6] = v3[19];
      v8[7] = 0LL;
      WdLogEvent5_WdCriticalError(v8);
      __debugbreak();
    }
    v9 = WdLogNewEntry5_WdEvent(v5, a2);
    *(_QWORD *)(v9 + 24) = *((_QWORD *)a1 + 13);
    WdLogEvent5_WdEvent(v9);
  }
  else
  {
    if ( *(_BYTE *)(v5 + 164)
      || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 160), 0, 0)
      || (*(_BYTE *)(v6 + 2844) & 1) != 0 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdEvent(v5, a2);
      v10[3] = a1;
      v10[4] = *((_QWORD *)a1 + 13);
    }
    else
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdEvent(v5, a2);
      v10[3] = a1;
      v10[4] = *((_QWORD *)a1 + 13);
      v10[5] = v3[19];
    }
    WdLogEvent5_WdEvent(v10);
    *(_QWORD *)(*((_QWORD *)a1 + 11) + 152LL) = *((_QWORD *)a1 + 13);
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL) + 1192LL) )
      VidSchUnwaitFlipQueue((struct _VIDSCH_GLOBAL *)v6);
  }
}
