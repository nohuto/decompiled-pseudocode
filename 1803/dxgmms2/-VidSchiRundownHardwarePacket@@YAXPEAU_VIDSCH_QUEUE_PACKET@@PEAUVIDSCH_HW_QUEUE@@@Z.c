/*
 * XREFs of ?VidSchiRundownHardwarePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0031108
 * Callers:
 *     ?VidSchiRundownHardwareContext@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0031084 (-VidSchiRundownHardwareContext@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000E338 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C0013B00 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002FCF8 (-VidSchiCompleteHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003032C (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiCompleteHwQueueWaitPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030440 (-VidSchiCompleteHwQueueWaitPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiRundownHardwarePacket(struct _VIDSCH_QUEUE_PACKET *a1, struct VIDSCH_HW_QUEUE *a2, __int64 a3)
{
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  int v10; // eax
  __int64 v11; // rbx
  _DWORD *v12; // rsi
  __int64 v13; // rax

  v5 = *((_DWORD *)a1 + 12);
  if ( !v5 )
    goto LABEL_13;
  v6 = v5 - 4;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
    {
      VidSchiCompleteHwQueueSignalPacket(a1, (__int64)a2);
      return;
    }
    v8 = (unsigned int)(v7 - 2);
    if ( !(_DWORD)v8 )
      goto LABEL_17;
    if ( (_DWORD)v8 != 1 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, a2, a3);
      v9[3] = 281LL;
      v9[4] = 2048LL;
      v9[5] = a2;
      v9[6] = a1;
      v9[7] = *((int *)a1 + 12);
      WdLogEvent5_WdCriticalError(v9);
      __debugbreak();
    }
LABEL_13:
    v11 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 16LL);
    v12 = (_DWORD *)(*(_QWORD *)(v11 + 184) + 112LL * *(unsigned int *)(v11 + 196));
    memset(v12, 0, 0x70uLL);
    *(_DWORD *)(v11 + 196) = (*(_DWORD *)(v11 + 196) + 1) & (*(_DWORD *)(v11 + 192) - 1);
    *v12 = 9;
    if ( *((_DWORD *)a1 + 12) )
      v13 = *((_QWORD *)a1 + 36);
    else
      v13 = *((_QWORD *)a1 + 93);
    *((_QWORD *)v12 + 2) = v13;
    *((_QWORD *)v12 + 3) = a2;
    *((_BYTE *)v12 + 32) = 1;
    *((_QWORD *)a2 + 6) = v13;
LABEL_17:
    VidSchiCompleteHwQueuePacket(a1);
    return;
  }
  v10 = *((_DWORD *)a1 + 68);
  if ( (v10 & 1) == 0 )
  {
    if ( (v10 & 4) != 0 )
      VidSchiUnblockUnorderedWaitQueuePacket((__int64)a1, 1u);
    else
      VidSchiUnwaitWaitQueuePacket((__int64)a1, 1u);
  }
  VidSchiCompleteHwQueueWaitPacket(a1, (__int64)a2);
}
