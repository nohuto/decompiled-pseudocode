/*
 * XREFs of ??1?$CTempBuffer@E$0BAA@VCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x140050468
 * Callers:
 *     _ATL::CRegParser::AddValue_::_1_::dtor$0 @ 0x140051204 (_ATL--CRegParser--AddValue_--_1_--dtor$0.c)
 *     _ATL::CRegParser::AddValue_::_1_::dtor$2 @ 0x140051237 (_ATL--CRegParser--AddValue_--_1_--dtor$2.c)
 *     _ATL::CRegObject::RegisterFromResource_::_1_::dtor$1 @ 0x140052B8C (_ATL--CRegObject--RegisterFromResource_--_1_--dtor$1.c)
 * Callees:
 *     ?FreeHeap@?$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAXXZ @ 0x140051FD8 (-FreeHeap@-$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAXXZ.c)
 */

__int64 __fastcall ATL::CTempBuffer<unsigned char,256,ATL::CCRTAllocator>::~CTempBuffer<unsigned char,256,ATL::CCRTAllocator>(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (__int64)(a1 + 1);
  if ( (_QWORD *)*a1 != a1 + 1 )
    return ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::FreeHeap();
  return result;
}
