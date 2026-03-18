/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@QEAAXXZ @ 0x1C0020FF0
 * Callers:
 *     ??1?$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ @ 0x1C00212E0 (--1-$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ.c)
 *     ??_E?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x1C0045050 (--_E-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z.c)
 *     ?Clear@?$Set@VDMMVIDPNTARGETMODE@@@@UEAAXXZ @ 0x1C0045110 (-Clear@-$Set@VDMMVIDPNTARGETMODE@@@@UEAAXXZ.c)
 * Callees:
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C000CB28 (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 */

void __fastcall DoublyLinkedList<DMMVIDEOPRESENTSOURCE>::Clear(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 **v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  v5 = (__int64 **)(a1 + 16);
  while ( *v5 != (__int64 *)v5 )
  {
    v6 = *v5;
    v7 = **v5;
    if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v7 + 8) != v6 )
      __fastfail(3u);
    *v5 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v5;
    --*(_QWORD *)(a1 + 32);
    *v6 = 0LL;
    v6[1] = 0LL;
    NonReferenceCounted::Release((NonReferenceCounted *)(v6 + 7));
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
}
