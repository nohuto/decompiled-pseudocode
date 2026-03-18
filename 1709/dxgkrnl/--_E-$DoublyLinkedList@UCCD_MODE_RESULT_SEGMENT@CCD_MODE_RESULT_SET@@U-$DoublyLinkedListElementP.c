/*
 * XREFs of ??_E?$DoublyLinkedList@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@U?$DoublyLinkedListElementPlainDeleter@UCCD_MODE_RESULT_SEGMENT@CCD_MODE_RESULT_SET@@@@@@UEAAPEAXI@Z @ 0x1C0029D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

char *__fastcall DoublyLinkedList<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT,DoublyLinkedListElementPlainDeleter<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT>>::`vector deleting destructor'(
        char *a1,
        char a2)
{
  char *v3; // rdi
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax

  *(_QWORD *)a1 = &DoublyLinkedList<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT,DoublyLinkedListElementPlainDeleter<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT>>::`vftable';
  v3 = a1 + 16;
  while ( *(char **)v3 != v3 )
  {
    v5 = *(__int64 **)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v6 = *v5, *(__int64 **)(*v5 + 8) != v5) )
      __fastfail(3u);
    *(_QWORD *)v3 = v6;
    v7 = v5 - 1;
    *(_QWORD *)(v6 + 8) = v3;
    --*((_QWORD *)a1 + 4);
    v7[1] = 0LL;
    v7[2] = 0LL;
    (*(void (__fastcall **)(__int64 *, __int64))*v7)(v7, 1LL);
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
