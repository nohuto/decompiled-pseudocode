/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXXZ @ 0x1C0044514
 * Callers:
 *     ??1?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ @ 0x1C004371C (--1-$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ.c)
 *     ??_G?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTTARGET@@@@@@UEAAPEAXI@Z @ 0x1C0043E00 (--_G-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@U-$DoubleLinkedListElementDeleter@VDMMVIDEOPRESEN.c)
 *     ?Clear@?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAAXXZ @ 0x1C0044650 (-Clear@-$Set@VDMMVIDEOPRESENTTARGET@@@@UEAAXXZ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

void __fastcall DoublyLinkedList<DMMVIDEOPRESENTTARGET,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTTARGET>>::Clear(
        __int64 a1)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rax

  v2 = (_QWORD **)(a1 + 16);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    --*(_QWORD *)(a1 + 32);
    *v3 = 0LL;
    v3[1] = 0LL;
    ReferenceCounted::Release((ReferenceCounted *)(v3 + 7));
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v5 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v5);
  }
}
