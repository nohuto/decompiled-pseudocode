/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@@@QEAAXXZ @ 0x1C0044738
 * Callers:
 *     ??1?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ @ 0x1C0043DB8 (--1-$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ.c)
 *     ??_G?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@@@UEAAPEAXI@Z @ 0x1C0044330 (--_G-$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@@@UEAAPEAXI@Z.c)
 *     ?Clear@?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAAXXZ @ 0x1C0044810 (-Clear@-$Set@VDMMVIDEOPRESENTTARGET@@@@UEAAXXZ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

void __fastcall DoublyLinkedList<DMMVIDEOPRESENTTARGET>::Clear(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 7), a2);
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
}
