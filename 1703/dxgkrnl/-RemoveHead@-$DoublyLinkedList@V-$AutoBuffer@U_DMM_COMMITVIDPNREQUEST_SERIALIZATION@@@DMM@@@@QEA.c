/*
 * XREFs of ?RemoveHead@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@QEAAPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@XZ @ 0x1C0044CC8
 * Callers:
 *     ?Enqueue@?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C0002B04 (-Enqueue@-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@.c)
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@QEAAXXZ @ 0x1C00446E8 (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@QEAAXXZ.c)
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPN@@@@QEAAXXZ @ 0x1C00447B0 (-Clear@-$DoublyLinkedList@VDMMVIDPN@@@@QEAAXXZ.c)
 *     ?Enqueue@?$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0044830 (-Enqueue@-$Queue@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x1C0045218 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::RemoveHead(__int64 a1)
{
  __int64 **v1; // rax
  __int64 *result; // rax
  __int64 *v4; // rcx
  __int64 v5; // r8

  v1 = (__int64 **)(a1 + 16);
  if ( *v1 == (__int64 *)v1 )
    return 0LL;
  v4 = *v1;
  v5 = **v1;
  if ( (__int64 **)(*v1)[1] != v1 || *(__int64 **)(v5 + 8) != v4 )
    __fastfail(3u);
  *v1 = (__int64 *)v5;
  *(_QWORD *)(v5 + 8) = v1;
  result = v4 - 1;
  --*(_QWORD *)(a1 + 32);
  *v4 = 0LL;
  v4[1] = 0LL;
  return result;
}
