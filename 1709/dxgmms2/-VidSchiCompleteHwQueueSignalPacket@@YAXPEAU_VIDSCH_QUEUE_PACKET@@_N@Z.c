/*
 * XREFs of ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C002D418
 * Callers:
 *     ?VidSchiTryCompleteHwQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x1C002D6D8 (-VidSchiTryCompleteHwQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000B3C0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000B450 (VidSchiCompleteSignalSyncObject.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002D4F0 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiCompleteHwQueueSignalPacket(struct _VIDSCH_QUEUE_PACKET *a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  unsigned int i; // esi
  __int64 v6; // rcx

  v3 = 0;
  v4 = *((_QWORD *)a1 + 101);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 816) = *((_QWORD *)a1 + 102);
  }
  else if ( !*((_QWORD *)a1 + 102) )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 73); ++i )
      VidSchiCompleteSignalSyncObject(*((_QWORD *)a1 + i + 37), a2, (_QWORD *)a1 + i + 69, 1);
    goto LABEL_10;
  }
  v6 = *((_QWORD *)a1 + 102);
  if ( v6 )
    *(_QWORD *)(v6 + 808) = *((_QWORD *)a1 + 101);
  *((_QWORD *)a1 + 101) = 0LL;
  *((_QWORD *)a1 + 102) = 0LL;
LABEL_10:
  *((_DWORD *)a1 + 20) |= 4u;
  if ( *((_DWORD *)a1 + 73) )
  {
    do
      VidSchiReleaseSyncObjectReference(*((char **)a1 + v3++ + 37));
    while ( v3 < *((_DWORD *)a1 + 73) );
  }
  VidSchiFreeCompletedHwQueuePacket(a1);
}
