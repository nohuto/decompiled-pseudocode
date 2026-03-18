/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAAXXZ @ 0x1C00059E4
 * Callers:
 *     ??1?$Set@VDMMVIDPNSOURCE@@@@UEAA@XZ @ 0x1C000A778 (--1-$Set@VDMMVIDPNSOURCE@@@@UEAA@XZ.c)
 *     ??_G?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@UEAAPEAXI@Z @ 0x1C0036350 (--_G-$DoublyLinkedList@VDMMVIDPNSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@U.c)
 *     ?Clear@?$Set@VDMMVIDPNTARGET@@@@UEAAXXZ @ 0x1C00364B0 (-Clear@-$Set@VDMMVIDPNTARGET@@@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::Clear(
        void (__fastcall ***a1)(_QWORD, __int64))
{
  void (__fastcall ***v1)(_QWORD, __int64); // rdi
  _QWORD **v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rax

  v1 = a1;
  v2 = a1 + 2;
  while ( *v2 != v2 )
  {
    v3 = *v2;
    if ( (_QWORD **)(*v2)[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    a1 = (void (__fastcall ***)(_QWORD, __int64))(v3 + 9);
    v1[4] = (void (__fastcall **)(_QWORD, __int64))((char *)v1[4] - 1);
    *v3 = 0LL;
    v3[1] = 0LL;
    if ( v3 != (_QWORD *)-72LL )
      (**a1)(a1, 1LL);
  }
  if ( v1[4] )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v5 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v5);
  }
}
