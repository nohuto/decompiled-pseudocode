/*
 * XREFs of NetPacketReuseMany @ 0x1C0078450
 * Callers:
 *     NetPacketShallowCopyMany @ 0x1C0078550 (NetPacketShallowCopyMany.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ?NetPacketClearVolatileFields@@YAXPEAU_NET_PACKET@@@Z @ 0x1C0078408 (-NetPacketClearVolatileFields@@YAXPEAU_NET_PACKET@@@Z.c)
 */

_UNKNOWN **__fastcall NetPacketReuseMany(__int64 a1, int a2, unsigned int a3)
{
  _UNKNOWN **result; // rax
  _QWORD *i; // rbx
  unsigned int j; // esi
  __int64 v9; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( (dword_1C00926F8 & 8) != 0 )
  {
    for ( i = P; i; i = (_QWORD *)i[3] )
    {
      if ( i[8] )
      {
        for ( j = 0; j < a3; ++j )
        {
          NetPacketClearVolatileFields((struct _NET_PACKET *)(a1 + a2 * j));
          result = (_UNKNOWN **)((__int64 (__fastcall *)(_QWORD, __int64))i[8])(i[4], v9 + *((unsigned int *)i + 4));
        }
      }
    }
  }
  return result;
}
