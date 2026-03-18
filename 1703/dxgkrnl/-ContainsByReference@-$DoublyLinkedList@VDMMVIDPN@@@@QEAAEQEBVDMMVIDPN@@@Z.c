/*
 * XREFs of ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEBVDMMVIDPN@@@Z @ 0x1C00020E4
 * Callers:
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z @ 0x1C0002134 (-InsertTail@-$DoublyLinkedList@VDMMVIDPN@@@@QEAAEQEAVDMMVIDPN@@@Z.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C00DE5D8 (--1DMMVIDPN@@UEAA@XZ.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00E3FA4 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DoublyLinkedList<DMMVIDPN>::ContainsByReference(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // rax

  if ( !a2 )
    return 0;
  v3 = a1 + 16;
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 == v3 )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = v4 - 8;
    while ( v5 )
    {
      if ( v5 == a2 )
        break;
      v7 = *(_QWORD *)(v5 + 8);
      v5 = v7 - 8;
      if ( v7 == v3 )
        v5 = 0LL;
    }
  }
  return v5 != 0;
}
