/*
 * XREFs of ??1ParsedTaskbarLayout@@QEAA@XZ @ 0x18008B6D0
 * Callers:
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$3 @ 0x18019BC32 (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$3.c)
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$4 @ 0x18019BC77 (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$4.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$2 @ 0x18019D142 (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$2.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$8 @ 0x18019D1B2 (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$8.c)
 * Callees:
 *     ??1SelectionData@StartLayout@@QEAA@XZ @ 0x18008AAB4 (--1SelectionData@StartLayout@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ParsedTaskbarLayout::~ParsedTaskbarLayout(ParsedTaskbarLayout *this)
{
  unsigned __int64 i; // rdi
  __int64 v3; // rcx

  StartLayout::SelectionData::~SelectionData((ParsedTaskbarLayout *)((char *)this + 32));
  if ( *(_QWORD *)this )
  {
    for ( i = 0LL; i < *((_QWORD *)this + 1); ++i )
    {
      v3 = *(_QWORD *)(*(_QWORD *)this + 8 * i);
      if ( v3 )
      {
        *(_QWORD *)(*(_QWORD *)this + 8 * i) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      }
    }
    CoTaskMemFree(*(LPVOID *)this);
    *(_QWORD *)this = 0LL;
  }
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
}
