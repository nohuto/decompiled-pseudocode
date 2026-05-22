/*
 * XREFs of _MPCSixDofProcessor::UpdatePoint_::_1_::dtor$5 @ 0x1800E53E1
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

void __fastcall MPCSixDofProcessor::UpdatePoint_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~4u;
    std::string::~string((unsigned __int64 *)(a2 + 224), a2);
  }
}
