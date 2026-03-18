/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDXGTARGETENTRY@@U?$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@@@QEAAXXZ @ 0x1C001A0A4
 * Callers:
 *     ?Clear@?$Set@VDXGTARGETENTRY@@@@UEAAXXZ @ 0x1C001A060 (-Clear@-$Set@VDXGTARGETENTRY@@@@UEAAXXZ.c)
 *     ??1?$Set@VDXGTARGETENTRY@@@@UEAA@XZ @ 0x1C001A078 (--1-$Set@VDXGTARGETENTRY@@@@UEAA@XZ.c)
 *     ??_E?$DoublyLinkedList@VDXGTARGETENTRY@@U?$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@@@UEAAPEAXI@Z @ 0x1C0038600 (--_E-$DoublyLinkedList@VDXGTARGETENTRY@@U-$DoubleLinkedListElementDeleter@VDXGTARGETENTRY@@@@@@U.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall DoublyLinkedList<DXGTARGETENTRY,DoubleLinkedListElementDeleter<DXGTARGETENTRY>>::Clear(__int64 a1)
{
  _QWORD **v2; // rbx
  _QWORD *result; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rax

  v2 = (_QWORD **)(a1 + 16);
  while ( 1 )
  {
    result = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)result[1] != v2 || (v4 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    --*(_QWORD *)(a1 + 32);
    *result = 0LL;
    result[1] = 0LL;
    (*(void (__fastcall **)(_QWORD *, __int64))*(result - 1))(result - 1, 1LL);
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v5 + 24) = 394LL;
    return (_QWORD *)WdLogEvent5_WdAssertion(v5);
  }
  return result;
}
