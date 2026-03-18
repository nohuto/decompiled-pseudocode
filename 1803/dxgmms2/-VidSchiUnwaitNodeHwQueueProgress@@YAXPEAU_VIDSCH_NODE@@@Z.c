/*
 * XREFs of ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C003202C
 * Callers:
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C0033444 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00103BC (VidSchiCheckPendingDeviceCommand.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?VidSchiTryCompleteHwQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x1C0031EE4 (-VidSchiTryCompleteHwQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z.c)
 */

void __fastcall VidSchiUnwaitNodeHwQueueProgress(struct _VIDSCH_NODE *a1, __int64 a2)
{
  char *v2; // r14
  char *i; // rdi
  char *v5; // rsi
  char *v6; // rbp
  __int64 v7; // rax
  _QWORD *v8; // rcx
  unsigned __int64 v9; // r12
  _QWORD *v10; // r14
  _QWORD *v11; // rbx
  struct _VIDSCH_QUEUE_PACKET *v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  bool v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = (char *)a1 + 1688;
  for ( i = (char *)*((_QWORD *)a1 + 211); i != v2; i = *(char **)i )
  {
    v5 = (char *)*((_QWORD *)i + 4);
    if ( v5 != i + 32 )
    {
      do
      {
        v6 = v5 - 8;
        v7 = *((_QWORD *)v5 + 4);
        if ( v7 )
        {
          v8 = *(_QWORD **)(v7 + 56);
          v9 = *(_BYTE *)(v7 + 29) ? *v8 : *(unsigned int *)v8;
          if ( v9 != *((_QWORD *)v6 + 6) )
          {
            v10 = v6 + 96;
            do
            {
              v11 = (_QWORD *)*v10;
              if ( (_QWORD *)*v10 == v10 )
                break;
              if ( v11 == *((_QWORD **)v6 + 14) )
                break;
              v12 = (struct _VIDSCH_QUEUE_PACKET *)(v11 - 4);
              v16 = 0;
              v13 = WdLogNewEntry5_WdEvent(v8, a2);
              *(_QWORD *)(v13 + 24) = v12;
              WdLogEvent5_WdEvent(v13);
              VidSchiTryCompleteHwQueuePacket((struct VIDSCH_HW_QUEUE *)(v5 - 8), v9, v12, &v16);
            }
            while ( v16 );
            v14 = (_QWORD *)(*((_QWORD *)a1 + 23) + 112LL * *((unsigned int *)a1 + 49));
            memset(v14, 0, 0x70uLL);
            *((_DWORD *)a1 + 49) = (*((_DWORD *)a1 + 49) + 1) & (*((_DWORD *)a1 + 48) - 1);
            *(_DWORD *)v14 = 9;
            v14[2] = v9;
            v14[3] = v6;
            v15 = *((_QWORD *)v6 + 3);
            *((_QWORD *)v6 + 6) = v9;
            VidSchiCheckPendingDeviceCommand(*(_QWORD **)(v15 + 8));
          }
        }
        v5 = *(char **)v5;
      }
      while ( v5 != i + 32 );
      v2 = (char *)a1 + 1688;
    }
  }
}
