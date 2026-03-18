/*
 * XREFs of ??_G?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@UEAAPEAXI@Z @ 0x1C0005AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

_QWORD *__fastcall DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`scalar deleting destructor'(
        _QWORD *P,
        char a2)
{
  _QWORD **v3; // rdi
  _QWORD *v5; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rax

  *P = &DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`vftable';
  v3 = (_QWORD **)(P + 2);
  while ( 1 )
  {
    v5 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v5[1] != v3 || (v7 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v3 = v7;
    v7[1] = v3;
    --P[4];
    *v5 = 0LL;
    v5[1] = 0LL;
    ReferenceCounted::Release((ReferenceCounted *)(v5 + 10));
  }
  if ( P[4] )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v8 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
