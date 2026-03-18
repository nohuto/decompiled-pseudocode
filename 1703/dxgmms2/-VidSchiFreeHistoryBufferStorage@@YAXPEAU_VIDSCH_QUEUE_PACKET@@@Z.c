/*
 * XREFs of ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0022890
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00072F0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00AA7D4 (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiFreeHistoryBufferStorage(struct _VIDSCH_QUEUE_PACKET *a1)
{
  char *v2; // rcx
  char *v3; // rcx

  v2 = (char *)*((_QWORD *)a1 + 32);
  if ( v2 != (char *)a1 + 192 )
    ExFreePoolWithTag(v2, 0);
  v3 = (char *)*((_QWORD *)a1 + 75);
  if ( v3 != (char *)a1 + 160 )
    ExFreePoolWithTag(v3, 0);
  *((_QWORD *)a1 + 32) = 0LL;
  *((_QWORD *)a1 + 75) = 0LL;
}
