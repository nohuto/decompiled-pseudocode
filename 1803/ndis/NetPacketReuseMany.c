/*
 * XREFs of NetPacketReuseMany @ 0x1C007D640
 * Callers:
 *     NetPacketShallowCopyMany @ 0x1C007D770 (NetPacketShallowCopyMany.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ?NetPacketClearVolatileFields@@YAXPEBU_NET_DATAPATH_DESCRIPTOR@@PEAU_NET_PACKET@@@Z @ 0x1C007D514 (-NetPacketClearVolatileFields@@YAXPEBU_NET_DATAPATH_DESCRIPTOR@@PEAU_NET_PACKET@@@Z.c)
 *     NetPacketExtensionPrivateGetData @ 0x1C00AC0B4 (NetPacketExtensionPrivateGetData.c)
 */

void __fastcall NetPacketReuseMany(struct _NET_DATAPATH_DESCRIPTOR *a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int i; // ebx
  _QWORD *j; // rbx
  unsigned int k; // esi
  __int64 Data; // rax

  for ( i = 0; i < a4; ++i )
    NetPacketClearVolatileFields(a1, (struct _NET_PACKET *)(a2 + a3 * i));
  if ( (dword_1C00996F0 & 8) != 0 )
  {
    for ( j = qword_1C009AEB0; j; j = (_QWORD *)j[5] )
    {
      if ( j[10] )
      {
        for ( k = 0; k < a4; ++k )
        {
          Data = NetPacketExtensionPrivateGetData(j, a2 + a3 * k);
          ((void (__fastcall *)(_QWORD, __int64))j[10])(j[6], Data);
        }
      }
    }
  }
}
