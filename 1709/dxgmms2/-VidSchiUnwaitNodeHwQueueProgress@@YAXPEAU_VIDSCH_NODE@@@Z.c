/*
 * XREFs of ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C002D7D0
 * Callers:
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C002DB60 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 * Callees:
 *     ?VidSchiTryCompleteHwQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x1C002D6D8 (-VidSchiTryCompleteHwQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z.c)
 *     ?VidSchiUpdateHwContextStatus@@YAHPEAUVIDSCH_HW_CONTEXT@@W4_VIDSCH_CONTEXT_STATUS_REASON@@H@Z @ 0x1C002D8FC (-VidSchiUpdateHwContextStatus@@YAHPEAUVIDSCH_HW_CONTEXT@@W4_VIDSCH_CONTEXT_STATUS_REASON@@H@Z.c)
 */

void __fastcall VidSchiUnwaitNodeHwQueueProgress(struct _VIDSCH_NODE *a1)
{
  char *v1; // r15
  char *v2; // rbx
  char *i; // rdi
  __int64 v4; // rax
  bool v5; // zf
  _QWORD *v6; // rax
  unsigned __int64 v7; // r13
  char *v8; // r14
  struct _VIDSCH_QUEUE_PACKET *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  bool v14; // [rsp+50h] [rbp+8h] BYREF

  v1 = (char *)a1 + 1688;
  v2 = (char *)*((_QWORD *)a1 + 211);
LABEL_22:
  if ( v2 != v1 )
  {
    for ( i = (char *)*((_QWORD *)v2 + 2); ; i = *(char **)i )
    {
      if ( i == v2 + 16 )
      {
        v2 = *(char **)v2;
        goto LABEL_22;
      }
      v4 = *((_QWORD *)i + 4);
      v5 = *(_BYTE *)(v4 + 29) == 0;
      v6 = *(_QWORD **)(v4 + 56);
      v7 = v5 ? *(unsigned int *)v6 : *v6;
      if ( v7 != *((_QWORD *)i + 5) )
        break;
LABEL_19:
      ;
    }
    v8 = (char *)*((_QWORD *)i + 9);
    do
    {
      if ( v8 == i + 72 )
        break;
      v9 = (struct _VIDSCH_QUEUE_PACKET *)(v8 - 32);
      v14 = 0;
      v8 = *(char **)v8;
      VidSchiTryCompleteHwQueuePacket((struct VIDSCH_HW_QUEUE *)(i - 8), v7, v9, &v14);
    }
    while ( v14 );
    v10 = *((_QWORD *)i + 2);
    if ( *(_DWORD *)(v10 + 120) )
    {
      if ( (((unsigned __int8)*(_DWORD *)(v10 + 124) | (unsigned __int8)(*(_DWORD *)(v10 + 124) >> 9)) & 2) == 0
        && (*(_DWORD *)(v10 + 124) & 0x200) != 0 )
      {
        v11 = 10LL;
        v12 = 918LL;
LABEL_17:
        VidSchiUpdateHwContextStatus(v10, v11, v12);
      }
    }
    else
    {
      v13 = *(_DWORD *)(v10 + 124);
      if ( (v13 & 0x200) != 0 )
      {
        v11 = 10LL;
        v12 = 929LL;
        goto LABEL_17;
      }
      if ( (v13 & 0x150) == 0 )
      {
        v11 = 0LL;
        v12 = 962LL;
        goto LABEL_17;
      }
    }
    *((_QWORD *)i + 5) = v7;
    goto LABEL_19;
  }
}
