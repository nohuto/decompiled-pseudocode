/*
 * XREFs of ?VidSchiFreeHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002D62C
 * Callers:
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002D4F0 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C00071A0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified @ 0x1C0010D54 (VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0010DCC (VidSchiInterlockedRemoveEntryList.c)
 */

void __fastcall VidSchiFreeHwQueuePacket(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  KSPIN_LOCK *v4; // rsi
  _QWORD *v5; // rax

  v1 = *((_QWORD *)a1 + 12);
  v2 = (_QWORD *)((char *)a1 + 8);
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 24) + 32LL) + 24LL);
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  v4 = (KSPIN_LOCK *)(v3 + 1896);
  *((_DWORD *)a1 + 13) = 0;
  VidSchiInterlockedRemoveEntryList(v4, (_QWORD *)a1 + 1, (_DWORD *)(v1 + 152));
  VidSchiInterlockedInsertTailList(v4, v1 + 112, v2, (_DWORD *)(v1 + 128));
  while ( 1 )
  {
    v5 = VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified(v4, (_QWORD **)(v1 + 112), (_DWORD *)(v1 + 128));
    if ( !v5 )
      break;
    ExFreePoolWithTag(v5 - 1, 0);
  }
}
