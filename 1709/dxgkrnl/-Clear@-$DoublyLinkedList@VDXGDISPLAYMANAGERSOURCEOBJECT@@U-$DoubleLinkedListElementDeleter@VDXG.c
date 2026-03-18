/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@@@QEAAXXZ @ 0x1C002D17C
 * Callers:
 *     ??_E?$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@@@UEAAPEAXI@Z @ 0x1C002CFC0 (--_E-$DoublyLinkedList@VDXGDISPLAYMANAGERSOURCEOBJECT@@U-$DoubleLinkedListElementDeleter@VDXGDIS.c)
 *     ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1C01D92F4 (--1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ.c)
 *     ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1C01D99B4 (-Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ.c)
 * Callees:
 *     ??R?$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@QEAAXPEAVDXGDISPLAYMANAGERSOURCEOBJECT@@@Z @ 0x1C01D9410 (--R-$DoubleLinkedListElementDeleter@VDXGDISPLAYMANAGERSOURCEOBJECT@@@@QEAAXPEAVDXGDISPLAYMANAGER.c)
 */

void __fastcall DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::Clear(
        __int64 a1)
{
  __int64 **v2; // rbx
  __int64 *v3; // rdx
  __int64 *v4; // rax
  __int64 *v5; // rdx
  __int64 v6; // rax

  v2 = (__int64 **)(a1 + 16);
  while ( *v2 != (__int64 *)v2 )
  {
    v3 = *v2;
    if ( (__int64 **)(*v2)[1] != v2 || (v4 = (__int64 *)*v3, *(__int64 **)(*v3 + 8) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v5 = v3 - 1;
    v4[1] = (__int64)v2;
    --*(_QWORD *)(a1 + 32);
    v5[1] = 0LL;
    v5[2] = 0LL;
    DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>::operator()();
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v6 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v6);
  }
}
