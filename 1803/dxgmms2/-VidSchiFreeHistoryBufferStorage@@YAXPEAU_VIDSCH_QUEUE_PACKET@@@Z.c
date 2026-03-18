/*
 * XREFs of ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0027850
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008A70 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00BBAC8 (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiFreeHistoryBufferStorage(struct _VIDSCH_QUEUE_PACKET *a1)
{
  char *v2; // rcx
  char *v3; // rcx

  v2 = (char *)*((_QWORD *)a1 + 33);
  if ( v2 != (char *)a1 + 200 )
    ExFreePoolWithTag(v2, 0);
  v3 = (char *)*((_QWORD *)a1 + 76);
  if ( v3 != (char *)a1 + 168 )
    ExFreePoolWithTag(v3, 0);
  *((_QWORD *)a1 + 33) = 0LL;
  *((_QWORD *)a1 + 76) = 0LL;
}
