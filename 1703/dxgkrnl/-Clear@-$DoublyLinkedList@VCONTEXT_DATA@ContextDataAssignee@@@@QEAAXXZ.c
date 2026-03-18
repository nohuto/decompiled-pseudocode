/*
 * XREFs of ?Clear@?$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@@@QEAAXXZ @ 0x1C0045A80
 * Callers:
 *     ??1?$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAA@XZ @ 0x1C0045968 (--1-$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAA@XZ.c)
 *     ??_E?$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@@@UEAAPEAXI@Z @ 0x1C0045990 (--_E-$DoublyLinkedList@VCONTEXT_DATA@ContextDataAssignee@@@@UEAAPEAXI@Z.c)
 *     ?Clear@?$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAAXXZ @ 0x1C0045B00 (-Clear@-$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAAXXZ.c)
 * Callees:
 *     ?Release@NonReferenceCounted@@QEAA_KXZ @ 0x1C000CB28 (-Release@NonReferenceCounted@@QEAA_KXZ.c)
 */

void __fastcall DoublyLinkedList<ContextDataAssignee::CONTEXT_DATA>::Clear(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
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
    NonReferenceCounted::Release((NonReferenceCounted *)(v6 + 4));
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
}
