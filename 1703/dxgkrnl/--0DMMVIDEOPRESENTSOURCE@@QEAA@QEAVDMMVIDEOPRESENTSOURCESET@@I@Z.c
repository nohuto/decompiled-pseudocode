/*
 * XREFs of ??0DMMVIDEOPRESENTSOURCE@@QEAA@QEAVDMMVIDEOPRESENTSOURCESET@@I@Z @ 0x1C00120FC
 * Callers:
 *     ?AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C011E960 (-AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURC.c)
 * Callees:
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C000D138 (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 */

DMMVIDEOPRESENTSOURCE *__fastcall DMMVIDEOPRESENTSOURCE::DMMVIDEOPRESENTSOURCE(
        DMMVIDEOPRESENTSOURCE *this,
        struct DMMVIDEOPRESENTSOURCESET *const a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // rax
  __int64 v11; // rax

  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>((__int64)this, (unsigned int)a3, a3, a4);
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 14) = 1833172995;
  *((_QWORD *)this + 9) = &Set<ContextDataAssignee::CONTEXT_DATA>::`vftable';
  *((_QWORD *)this + 10) = &DoublyLinkedList<ContextDataAssignee::CONTEXT_DATA>::`vftable';
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  *((_DWORD *)this + 30) = 2;
  *(_QWORD *)this = &DMMVIDEOPRESENTSOURCE::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDEOPRESENTSOURCE::`vftable'{for `ContainedBy<DMMVIDEOPRESENTSOURCESET>'};
  *((_QWORD *)this + 6) = &DMMVIDEOPRESENTSOURCE::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTSOURCE::`vftable'{for `NonReferenceCounted'};
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v11 = WdLogNewEntry5_WdAssertion(0LL, v6, v7, v8);
      WdLogEvent5_WdAssertion(v11);
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(0LL, v6);
    *(_QWORD *)(v10 + 24) = (char *)this + 32;
    *(_QWORD *)(v10 + 32) = *((_QWORD *)this + 5);
    WdLogEvent5_WdError(v10);
  }
  return this;
}
