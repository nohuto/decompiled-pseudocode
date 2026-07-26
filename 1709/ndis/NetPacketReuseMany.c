/*
 * XREFs of NetPacketReuseMany @ 0x1C007C610
 * Callers:
 *     NetPacketShallowCopyMany @ 0x1C007C720 (NetPacketShallowCopyMany.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ?NetPacketClearVolatileFields@@YAXPEAU_NET_PACKET@@@Z @ 0x1C007C5D0 (-NetPacketClearVolatileFields@@YAXPEAU_NET_PACKET@@@Z.c)
 */

void __fastcall NetPacketReuseMany(__int64 a1, int a2, unsigned int a3)
{
  unsigned int i; // r9d
  int v7; // r9d
  _QWORD *j; // rbx
  unsigned int k; // esi

  for ( i = 0; i < a3; i = v7 + 1 )
    NetPacketClearVolatileFields((struct _NET_PACKET *)(a1 + a2 * i));
  if ( (dword_1C0098810 & 8) != 0 )
  {
    for ( j = P; j; j = (_QWORD *)j[3] )
    {
      if ( j[8] )
      {
        for ( k = 0; k < a3; ++k )
          ((void (__fastcall *)(_QWORD, __int64))j[8])(j[4], a1 + a2 * k + *((unsigned int *)j + 4));
      }
    }
  }
}
