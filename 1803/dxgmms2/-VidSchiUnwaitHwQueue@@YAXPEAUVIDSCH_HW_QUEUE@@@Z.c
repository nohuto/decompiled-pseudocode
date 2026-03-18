/*
 * XREFs of ?VidSchiUnwaitHwQueue@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0031FC4
 * Callers:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000E338 (VidSchiUnwaitWaitQueuePacket.c)
 * Callees:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030F04 (-VidSchiReleasePacketToGpu@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z @ 0x1C0031278 (-VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z.c)
 */

void __fastcall VidSchiUnwaitHwQueue(struct VIDSCH_HW_QUEUE *a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rbx
  struct _VIDSCH_QUEUE_PACKET *v5; // rcx
  __int64 v6; // rdx

  v2 = (_QWORD *)*((_QWORD *)a1 + 14);
  v3 = (_QWORD *)((char *)a1 + 96);
  while ( 1 )
  {
    if ( v2 == v3 )
    {
      v6 = *v3 != (_QWORD)v3;
      goto LABEL_7;
    }
    v5 = (struct _VIDSCH_QUEUE_PACKET *)(v2 - 4);
    if ( *((_DWORD *)v2 + 4) == 4 && (*((_DWORD *)v5 + 68) & 1) == 0 )
      break;
    VidSchiReleasePacketToGpu(v5, a2);
    v2 = (_QWORD *)*((_QWORD *)a1 + 14);
  }
  v6 = (unsigned int)(*v3 == (_QWORD)v2) + 1;
LABEL_7:
  VidSchiSetHwQueueState((__int64)a1, v6);
}
