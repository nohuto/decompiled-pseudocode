/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDPNTARGET@@@@QEAAXXZ @ 0x1C00089A8
 * Callers:
 *     ??1?$Set@VDMMVIDPNTARGET@@@@UEAA@XZ @ 0x1C000C908 (--1-$Set@VDMMVIDPNTARGET@@@@UEAA@XZ.c)
 *     ??_E?$DoublyLinkedList@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z @ 0x1C00455C0 (--_E-$DoublyLinkedList@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z.c)
 *     ?Clear@?$Set@VDMMVIDPNTARGET@@@@UEAAXXZ @ 0x1C0045820 (-Clear@-$Set@VDMMVIDPNTARGET@@@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DoublyLinkedList<DMMVIDPNTARGET>::Clear(
        void (__fastcall ***a1)(_QWORD, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rdi
  __int64 **v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

  v4 = a1;
  v5 = (__int64 **)(a1 + 2);
  while ( *v5 != (__int64 *)v5 )
  {
    v6 = *v5;
    v7 = **v5;
    if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v7 + 8) != v6 )
      __fastfail(3u);
    *v5 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v5;
    a1 = (void (__fastcall ***)(_QWORD, __int64))(v6 + 9);
    v4[4] = (void (__fastcall **)(_QWORD, __int64))((char *)v4[4] - 1);
    *v6 = 0LL;
    v6[1] = 0LL;
    if ( v6 != (__int64 *)-72LL )
      (**a1)(a1, 1LL);
  }
  if ( v4[4] )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
}
