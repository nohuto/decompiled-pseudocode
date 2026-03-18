/*
 * XREFs of ??1CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x1C001BEC4
 * Callers:
 *     DxgkEnumerateModesForPathsModality @ 0x1C01C3F50 (DxgkEnumerateModesForPathsModality.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET(CCD_MODE_RESULT_SET *this)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rax

  *(_QWORD *)this = &DoublyLinkedList<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT,DoublyLinkedListElementPlainDeleter<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT>>::`vftable';
  v2 = (_QWORD **)((char *)this + 16);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    --*((_QWORD *)this + 4);
    *v3 = 0LL;
    v3[1] = 0LL;
    (*(void (__fastcall **)(_QWORD *, __int64))*(v3 - 1))(v3 - 1, 1LL);
  }
  if ( *((_QWORD *)this + 4) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v5);
  }
}
