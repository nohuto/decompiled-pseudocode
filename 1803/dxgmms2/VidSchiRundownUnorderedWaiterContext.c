/*
 * XREFs of VidSchiRundownUnorderedWaiterContext @ 0x1C0017784
 * Callers:
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C0012A80 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C0012BF8 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     VidSchiRundownUnorderedWaiterDevice @ 0x1C0017808 (VidSchiRundownUnorderedWaiterDevice.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000E338 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C0013B00 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

void __fastcall VidSchiRundownUnorderedWaiterContext(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // r8
  int v5; // eax

  v1 = (_QWORD *)(a1 + 656);
  v3 = *(_QWORD **)(a1 + 656);
  while ( v3 != v1 )
  {
    v4 = (__int64)(v3 - 4);
    v3 = (_QWORD *)*v3;
    if ( *(_DWORD *)(v4 + 48) == 4 )
    {
      v5 = *(_DWORD *)(v4 + 272);
      if ( (v5 & 1) == 0 )
      {
        if ( (v5 & 4) != 0 )
        {
          VidSchiUnblockUnorderedWaitQueuePacket(v4, 1u);
        }
        else if ( (v5 & 8) != 0 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL) + 2884LL) & 1) != 0 )
        {
          VidSchiUnwaitWaitQueuePacket(v4, 1u);
        }
      }
    }
  }
}
