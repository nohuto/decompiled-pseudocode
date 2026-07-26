/*
 * XREFs of ?NetPacketClearVolatileFields@@YAXPEAU_NET_PACKET@@@Z @ 0x1C007C5D0
 * Callers:
 *     NetPacketReuseMany @ 0x1C007C610 (NetPacketReuseMany.c)
 *     NetPacketReuseOne @ 0x1C007C6C0 (NetPacketReuseOne.c)
 * Callees:
 *     <none>
 */

void __fastcall NetPacketClearVolatileFields(struct _NET_PACKET *a1)
{
  for ( *(_WORD *)&a1[2].Layout = 0; a1; a1 = (struct _NET_PACKET *)(*(_QWORD *)&a1->FragmentOffset & 0xFFFFFFFFFFFFFFE0uLL) )
    *(_QWORD *)((char *)&a1[1].Layout + 2) &= 0x3FFFFFFFFFFFFFFFuLL;
}
