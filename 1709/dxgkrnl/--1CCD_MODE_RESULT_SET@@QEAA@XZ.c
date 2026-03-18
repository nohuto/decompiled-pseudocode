/*
 * XREFs of ??1CCD_MODE_RESULT_SET@@QEAA@XZ @ 0x1C0016174
 * Callers:
 *     DxgkEnumerateModesForPathsModality @ 0x1C01C2A90 (DxgkEnumerateModesForPathsModality.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCD_MODE_RESULT_SET::~CCD_MODE_RESULT_SET(CCD_MODE_RESULT_SET *this)
{
  char *v2; // rbx
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rax

  *(_QWORD *)this = &DoublyLinkedList<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT,DoublyLinkedListElementPlainDeleter<CCD_MODE_RESULT_SET::CCD_MODE_RESULT_SEGMENT>>::`vftable';
  v2 = (char *)this + 16;
  while ( *(char **)v2 != v2 )
  {
    v3 = *(__int64 **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = *v3, *(__int64 **)(*v3 + 8) != v3) )
      __fastfail(3u);
    *(_QWORD *)v2 = v4;
    v5 = v3 - 1;
    *(_QWORD *)(v4 + 8) = v2;
    --*((_QWORD *)this + 4);
    v5[1] = 0LL;
    v5[2] = 0LL;
    (*(void (__fastcall **)(__int64 *, __int64))*v5)(v5, 1LL);
  }
  if ( *((_QWORD *)this + 4) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v6);
  }
}
