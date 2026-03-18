/*
 * XREFs of ??_E?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@UEAAPEAXI@Z @ 0x1C00023A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

__int64 **__fastcall DoublyLinkedList<DMMVIDPNSOURCEMODESET>::`vector deleting destructor'(__int64 **a1, char a2)
{
  __int64 **v3; // rdi
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  *a1 = (__int64 *)&DoublyLinkedList<DMMVIDPNSOURCEMODESET>::`vftable';
  v3 = a1 + 2;
  while ( *v3 != (__int64 *)v3 )
  {
    v6 = *v3;
    v7 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v7 + 8) != v6 )
      __fastfail(3u);
    *v3 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v3;
    a1[4] = (__int64 *)((char *)a1[4] - 1);
    *v6 = 0LL;
    v6[1] = 0LL;
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 10));
  }
  if ( a1[4] )
  {
    v8 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v8);
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
