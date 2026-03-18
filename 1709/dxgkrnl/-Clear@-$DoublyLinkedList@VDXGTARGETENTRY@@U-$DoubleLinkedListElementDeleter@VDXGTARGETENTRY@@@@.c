/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDXGTARGETENTRY@@U?$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@@@QEAAXXZ @ 0x1C002D1FC
 * Callers:
 *     ??1?$Set@VDXGTARGETENTRY@@@@UEAA@XZ @ 0x1C002CF8C (--1-$Set@VDXGTARGETENTRY@@@@UEAA@XZ.c)
 *     ??_E?$DoublyLinkedList@VDXGTARGETENTRY@@U?$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@@@UEAAPEAXI@Z @ 0x1C002D000 (--_E-$DoublyLinkedList@VDXGTARGETENTRY@@U-$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@@@U.c)
 *     ?Clear@?$Set@VDXGTARGETENTRY@@@@UEAAXXZ @ 0x1C002D290 (-Clear@-$Set@VDXGTARGETENTRY@@@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DoublyLinkedList<DXGTARGETENTRY,DoubleLinkedListElementDeleter<DXGTARGETENTRY>>::Clear(__int64 a1)
{
  __int64 **v2; // rbx
  __int64 *v3; // rcx
  __int64 *v4; // rax
  __int64 *v5; // rcx
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
    (*(void (__fastcall **)(__int64 *, __int64))*v5)(v5, 1LL);
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v6 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v6);
  }
}
