/*
 * XREFs of ??0DMMVIDEOPRESENTSOURCE@@QEAA@QEAVDMMVIDEOPRESENTSOURCESET@@I@Z @ 0x1C00467AC
 * Callers:
 *     ?AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C0223CB0 (-AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURC.c)
 * Callees:
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C0005E70 (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 */

DMMVIDEOPRESENTSOURCE *__fastcall DMMVIDEOPRESENTSOURCE::DMMVIDEOPRESENTSOURCE(
        DMMVIDEOPRESENTSOURCE *this,
        struct DMMVIDEOPRESENTSOURCESET *const a2,
        int a3)
{
  __int64 v5; // rax
  __int64 v6; // rax

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>((__int64)this, a3);
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833172995;
  *((_QWORD *)this + 9) = &Set<ContextDataAssignee::CONTEXT_DATA>::`vftable';
  *((_QWORD *)this + 10) = &DoublyLinkedList<ContextDataAssignee::CONTEXT_DATA,DoubleLinkedListElementDeleter<ContextDataAssignee::CONTEXT_DATA>>::`vftable';
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  *((_DWORD *)this + 30) = 2;
  *(_QWORD *)this = &DMMVIDEOPRESENTSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDEOPRESENTSOURCE::`vftable'{for `ContainedBy<DMMVIDEOPRESENTSOURCESET>'};
  *((_QWORD *)this + 6) = &DMMVIDEOPRESENTSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTSOURCE::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 16) = 0LL;
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v6 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v6);
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v5 + 24) = (char *)this + 32;
    *(_QWORD *)(v5 + 32) = *((_QWORD *)this + 5);
    WdLogEvent5_WdError(v5);
  }
  return this;
}
