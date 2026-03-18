/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXXZ @ 0x1C0035388
 * Callers:
 *     ??1?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ @ 0x1C0034A2C (--1-$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ.c)
 *     ??_G?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@UEAAPEAXI@Z @ 0x1C0034F80 (--_G-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDeleter@VDMMVIDEOPRESEN.c)
 *     ?Clear@?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAAXXZ @ 0x1C0035460 (-Clear@-$Set@VDMMVIDEOPRESENTTARGET@@@@UEAAXXZ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

void __fastcall DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::Clear(
        __int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax

  v2 = a1 + 16;
  while ( *(_QWORD *)v2 != v2 )
  {
    v3 = *(_QWORD **)v2;
    if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *(_QWORD *)v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    --*(_QWORD *)(a1 + 32);
    *v3 = 0LL;
    v3[1] = 0LL;
    ReferenceCounted::Release((ReferenceCounted *)(v3 + 7));
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v5 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v5);
  }
}
