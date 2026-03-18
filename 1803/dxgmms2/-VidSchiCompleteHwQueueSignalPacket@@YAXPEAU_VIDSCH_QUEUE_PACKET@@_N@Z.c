/*
 * XREFs of ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003032C
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030F04 (-VidSchiReleasePacketToGpu@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0031108 (-VidSchiRundownHardwarePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiTryCompleteHwQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x1C0031EE4 (-VidSchiTryCompleteHwQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000BA80 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000BB10 (VidSchiCompleteSignalSyncObject.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030AC8 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiCompleteHwQueueSignalPacket(struct _VIDSCH_QUEUE_PACKET *a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int i; // esi

  v3 = 0;
  v4 = *((_QWORD *)a1 + 99);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 800) = *((_QWORD *)a1 + 100);
    v5 = *((_QWORD *)a1 + 100);
    if ( !v5 )
    {
LABEL_10:
      *((_QWORD *)a1 + 99) = 0LL;
      *((_QWORD *)a1 + 100) = 0LL;
      goto LABEL_11;
    }
LABEL_9:
    *(_QWORD *)(v5 + 792) = *((_QWORD *)a1 + 99);
    goto LABEL_10;
  }
  v5 = *((_QWORD *)a1 + 100);
  if ( v5 )
    goto LABEL_9;
  if ( (*((_DWORD *)a1 + 68) & 2) != 0 )
  {
    KeSetEvent(*((PRKEVENT *)a1 + 67), 0, 0);
    ObfDereferenceObject(*((PVOID *)a1 + 67));
    *((_QWORD *)a1 + 67) = 0LL;
  }
  else
  {
    for ( i = 0; i < *((_DWORD *)a1 + 69); ++i )
      VidSchiCompleteSignalSyncObject(*((_QWORD *)a1 + i + 35), a2, (_QWORD *)a1 + i + 67, 1);
  }
LABEL_11:
  *((_DWORD *)a1 + 20) |= 4u;
  if ( (*((_DWORD *)a1 + 68) & 2) == 0 && *((_DWORD *)a1 + 69) )
  {
    do
      VidSchiReleaseSyncObjectReference(*((char **)a1 + v3++ + 35));
    while ( v3 < *((_DWORD *)a1 + 69) );
  }
  VidSchiFreeCompletedHwQueuePacket(a1);
}
