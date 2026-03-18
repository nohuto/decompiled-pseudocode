/*
 * XREFs of ??_G?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODESET@@@@@@UEAAPEAXI@Z @ 0x1C0005550
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

char *__fastcall DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`scalar deleting destructor'(
        char *a1,
        char a2)
{
  char *v3; // rdi
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCEMODESET,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODESET>>::`vftable';
  v3 = a1 + 16;
  while ( *(char **)v3 != v3 )
  {
    v6 = *(_QWORD **)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *(_QWORD *)v3 = v7;
    *(_QWORD *)(v7 + 8) = v3;
    --*((_QWORD *)a1 + 4);
    *v6 = 0LL;
    v6[1] = 0LL;
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 10));
  }
  if ( *((_QWORD *)a1 + 4) )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v8 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
