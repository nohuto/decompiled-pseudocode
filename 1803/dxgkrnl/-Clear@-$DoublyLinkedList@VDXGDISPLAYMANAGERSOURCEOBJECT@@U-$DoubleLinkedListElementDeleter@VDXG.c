/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@@@QEAAXXZ @ 0x1C001A118
 * Callers:
 *     ??_E?$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@@@UEAAPEAXI@Z @ 0x1C00385B0 (--_E-$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U-$DoubleLinkedListElementDeleter@VDXGDIS.c)
 *     ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1C0110F00 (-Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ.c)
 *     ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1C0110F98 (--1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ.c)
 * Callees:
 *     ??R?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@QEAAXPEAVDXGDISPLAYMANAGERSOURCEOBJECT@@@Z @ 0x1C01E37EC (--R-$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@QEAAXPEAVDXGDISPLAYMANAGER.c)
 */

_QWORD *__fastcall DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::Clear(
        __int64 a1)
{
  _QWORD **v2; // rbx
  _QWORD *result; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rax

  v2 = (_QWORD **)(a1 + 16);
  while ( 1 )
  {
    result = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)result[1] != v2 || (v4 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    --*(_QWORD *)(a1 + 32);
    *result = 0LL;
    result[1] = 0LL;
    DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>::operator()();
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v5 + 24) = 394LL;
    return (_QWORD *)WdLogEvent5_WdAssertion(v5);
  }
  return result;
}
