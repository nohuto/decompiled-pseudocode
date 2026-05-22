/*
 * XREFs of _MPCMouseProcessor::ForwardInputReportInternal_::_1_::dtor$0 @ 0x1800E88A5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

void __fastcall MPCMouseProcessor::ForwardInputReportInternal_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    std::string::~string((unsigned __int64 *)(a2 + 80), a2);
  }
}
