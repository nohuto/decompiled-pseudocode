/*
 * XREFs of ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C002220C
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008200 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C000BEA0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C00280C4 (VidSchiSubmitPresentHistoryToken.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiCheckTokenIndependentFlipCondition(
        struct _VIDSCH_GLOBAL *a1,
        const struct VIDSCH_SUBMIT_DATA2 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  char v6; // dl
  int v8; // eax
  char v9; // cl
  __int64 v10; // rdx
  __int64 v11; // rcx

  if ( (*(_DWORD *)a2 & 0x1000000) != 0 )
  {
    v8 = *((_DWORD *)a2 + 108);
    v5 = *((unsigned int *)a2 + 29);
    v6 = -1;
    if ( _BitScanForward((unsigned int *)&v8, (unsigned __int8)v8) )
      v6 = v8;
    v9 = 0;
    if ( v6 != -1 )
      v9 = v6;
    v10 = 272LL * (unsigned int)v9;
    v11 = *((_QWORD *)a1 + v5 + 374);
    if ( *(_DWORD *)(v10 + v11 + 128) == *((_DWORD *)a2 + 38)
      && *(_DWORD *)(v10 + v11 + 132) == *((_DWORD *)a2 + 39)
      && *(_QWORD *)(v10 + v11 + 136) == *((_QWORD *)a2 + 20)
      && *(_QWORD *)(v10 + v11 + 144) == *((_QWORD *)a2 + 21) )
    {
      return 1;
    }
    v4 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v11, v10);
    v4[3] = *((_QWORD *)a2 + 13);
    v4[4] = *((unsigned int *)a2 + 28);
    v4[5] = *((_QWORD *)a2 + 19);
    v4[6] = *((_QWORD *)a2 + 20);
    v4[7] = *((_QWORD *)a2 + 21);
  }
  else
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(a1, a2);
    v4[3] = *((_QWORD *)a2 + 13);
    v4[4] = *((unsigned int *)a2 + 28);
  }
  WdLogEvent5_WdPresentTokenEvent(v4);
  return 0;
}
