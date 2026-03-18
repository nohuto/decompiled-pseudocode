/*
 * XREFs of VidSchiRundownUnorderedWaiterContext @ 0x1C0017DD4
 * Callers:
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C000E960 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C000EAD8 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     VidSchiRundownUnorderedWaiterDevice @ 0x1C0017E58 (VidSchiRundownUnorderedWaiterDevice.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000D18C (VidSchiUnwaitWaitQueuePacket.c)
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C0013888 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
 */

void __fastcall VidSchiRundownUnorderedWaiterContext(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rbx
  struct _VIDSCH_QUEUE_PACKET *v4; // r8
  bool v5; // zf
  int v6; // eax

  v1 = (_QWORD *)(a1 + 648);
  v3 = *(_QWORD **)(a1 + 648);
  while ( v3 != v1 )
  {
    v4 = (struct _VIDSCH_QUEUE_PACKET *)(v3 - 4);
    v5 = *((_DWORD *)v3 + 4) == 4;
    v3 = (_QWORD *)*v3;
    if ( v5 )
    {
      v6 = *((_DWORD *)v4 + 72);
      if ( (v6 & 1) == 0 )
      {
        if ( (v6 & 4) != 0 )
        {
          VidSchiUnblockUnorderedWaitQueuePacket(v4, 1u);
        }
        else if ( (v6 & 8) != 0 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 2860LL) & 1) != 0 )
        {
          VidSchiUnwaitWaitQueuePacket((__int64)v4, 1u, (__int64)v4);
        }
      }
    }
  }
}
