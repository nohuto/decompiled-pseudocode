/*
 * XREFs of NetPacketReuseOne @ 0x1C007C6C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ?NetPacketClearVolatileFields@@YAXPEAU_NET_PACKET@@@Z @ 0x1C007C5D0 (-NetPacketClearVolatileFields@@YAXPEAU_NET_PACKET@@@Z.c)
 */

void __fastcall NetPacketReuseOne(struct _NET_PACKET *a1)
{
  _QWORD *i; // rbx
  void (__fastcall *v3)(_QWORD, char *); // rax

  NetPacketClearVolatileFields(a1);
  if ( (dword_1C0098810 & 8) != 0 )
  {
    for ( i = P; i; i = (_QWORD *)i[3] )
    {
      v3 = (void (__fastcall *)(_QWORD, char *))i[8];
      if ( v3 )
        v3(i[4], (char *)a1 + *((unsigned int *)i + 4));
    }
  }
}
