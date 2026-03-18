/*
 * XREFs of ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030C40
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00073F0 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030AC8 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchCreateHwQueue @ 0x1C0032270 (VidSchCreateHwQueue.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0032AC0 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSubmitWaitToHwQueue @ 0x1C0032FB0 (VidSchSubmitWaitToHwQueue.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0053170 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0002828 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0007300 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified @ 0x1C0034AD0 (VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified.c)
 */

void __fastcall VidSchiFreeQueuePacket(struct VIDSCH_HW_QUEUE *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  KSPIN_LOCK *v6; // rdi
  __int64 v7; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL) + 24LL);
  v5 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = a1;
  WdLogEvent5_WdEvent(v5);
  *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000320];
  v6 = (KSPIN_LOCK *)(v4 + 1912);
  *((_DWORD *)a2 + 13) = 0;
  VidSchiInterlockedRemoveEntryList(v6, (_QWORD *)a2 + 1, (_DWORD *)a1 + 40);
  VidSchiInterlockedInsertTailList(v6, (__int64)a1 + 120, (_QWORD *)a2 + 1, (_DWORD *)a1 + 34);
  while ( 1 )
  {
    v7 = VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified(v6, (char *)a1 + 120, (char *)a1 + 136);
    if ( !v7 )
      break;
    ExFreePoolWithTag((PVOID)(v7 - 8), 0);
  }
}
