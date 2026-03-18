/*
 * XREFs of ?VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z @ 0x1C0031278
 * Callers:
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030AC8 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030D38 (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0031084 (-VidSchiRundownHardwareContext@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     ?VidSchiUnwaitHwQueue@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0031FC4 (-VidSchiUnwaitHwQueue@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSetHwQueueState(__int64 a1, __int64 a2)
{
  int v2; // r9d
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rax
  int v9; // eax
  _QWORD *v10; // rax

  v2 = *(_DWORD *)(a1 + 76);
  if ( v2 != (_DWORD)a2 )
  {
    v4 = (unsigned int)a2;
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
    v6 = *(_QWORD *)(v5 + 24);
    if ( !(_DWORD)a2 )
      goto LABEL_11;
    v4 = (unsigned int)(a2 - 1);
    if ( (_DWORD)a2 == 1 )
    {
      v7 = *(unsigned int *)(v5 + 1704);
      if ( (_DWORD)v7 == -1 || *(_DWORD *)(v6 + 56) == -1 )
      {
        v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, a2, v7);
        v8[7] = 0LL;
        v8[3] = 281LL;
        v8[4] = 28672LL;
        v8[5] = a1;
        v8[6] = v5;
        WdLogEvent5_WdCriticalError(v8);
        __debugbreak();
      }
      *(_DWORD *)(v5 + 1704) = v7 + 1;
      ++*(_DWORD *)(v6 + 56);
      goto LABEL_5;
    }
    if ( (_DWORD)a2 == 2 )
    {
LABEL_11:
      if ( v2 == 1 )
      {
        v9 = *(_DWORD *)(v5 + 1704);
        if ( !v9 || !*(_DWORD *)(v6 + 56) )
        {
          v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, a2, v4);
          v10[7] = 0LL;
          v10[3] = 281LL;
          v10[4] = 4096LL;
          v10[5] = a1;
          v10[6] = v5;
          WdLogEvent5_WdCriticalError(v10);
          JUMPOUT(0x1C0031360LL);
        }
        *(_DWORD *)(v5 + 1704) = v9 - 1;
        --*(_DWORD *)(v6 + 56);
      }
    }
LABEL_5:
    *(_DWORD *)(a1 + 76) = a2;
  }
}
