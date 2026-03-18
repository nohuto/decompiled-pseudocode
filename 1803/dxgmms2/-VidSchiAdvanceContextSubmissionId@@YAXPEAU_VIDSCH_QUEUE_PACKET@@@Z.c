/*
 * XREFs of ?VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0026E84
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009720 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x1C000D690 (VidSchUnwaitFlipQueue.c)
 */

void __fastcall VidSchiAdvanceContextSubmissionId(struct _VIDSCH_QUEUE_PACKET *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  unsigned __int64 *v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax

  v3 = (_QWORD *)*((_QWORD *)a1 + 11);
  v4 = (unsigned __int64 *)((char *)a1 + 112);
  v6 = v3[13];
  v7 = *(_QWORD *)(v3[12] + 24LL);
  v8 = v3[20];
  if ( v8 && *v4 <= v8 )
  {
    if ( !*(_BYTE *)(v6 + 188)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 184), 0, 0)
      && (*(_BYTE *)(v7 + 2884) & 1) == 0 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v6, a3);
      v9[3] = 281LL;
      v9[4] = 1792LL;
      v9[5] = *v4;
      v9[6] = v3[20];
      v9[7] = 0LL;
      WdLogEvent5_WdCriticalError(v9);
      __debugbreak();
    }
    v10 = WdLogNewEntry5_WdEvent(a1, v6);
    *(_QWORD *)(v10 + 24) = *v4;
    WdLogEvent5_WdEvent(v10);
  }
  else
  {
    if ( *(_BYTE *)(v6 + 188)
      || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 184), 0, 0)
      || (*(_BYTE *)(v7 + 2884) & 1) != 0 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v6);
      v11[3] = a1;
      v11[4] = *((_QWORD *)a1 + 14);
    }
    else
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v6);
      v11[3] = a1;
      v11[4] = *v4;
      v11[5] = v3[20];
    }
    WdLogEvent5_WdEvent(v11);
    *(_QWORD *)(*((_QWORD *)a1 + 11) + 160LL) = *v4;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 104LL) + 1216LL) )
      VidSchUnwaitFlipQueue((struct _VIDSCH_GLOBAL *)v7);
  }
}
