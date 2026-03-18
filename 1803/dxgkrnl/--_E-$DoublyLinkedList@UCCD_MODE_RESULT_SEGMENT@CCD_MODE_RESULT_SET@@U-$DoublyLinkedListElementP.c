/*
 * XREFs of ??_E?$DoublyLinkedList@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@U?$DoublyLinkedListElementPlainDeleter@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@@@@@UEAAPEAXI@Z @ 0x1C0034CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall DoublyLinkedList<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT,DoublyLinkedListElementPlainDeleter<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT>>::`vector deleting destructor'(
        _QWORD *P,
        char a2)
{
  _QWORD **v3; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rax

  *P = &DoublyLinkedList<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT,DoublyLinkedListElementPlainDeleter<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT>>::`vftable';
  v3 = (_QWORD **)(P + 2);
  while ( 1 )
  {
    v5 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v5[1] != v3 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v3 = v6;
    v6[1] = v3;
    --P[4];
    *v5 = 0LL;
    v5[1] = 0LL;
    (*(void (__fastcall **)(_QWORD *, __int64))*(v5 - 1))(v5 - 1, 1LL);
  }
  if ( P[4] )
  {
    v7 = WdLogNewEntry5_WdAssertion(P);
    *(_QWORD *)(v7 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
