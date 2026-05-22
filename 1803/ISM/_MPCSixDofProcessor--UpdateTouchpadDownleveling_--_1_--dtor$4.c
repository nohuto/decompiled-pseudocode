/*
 * XREFs of _MPCSixDofProcessor::UpdateTouchpadDownleveling_::_1_::dtor$4 @ 0x1800E54D4
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

void __fastcall MPCSixDofProcessor::UpdateTouchpadDownleveling_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 36) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 36) &= ~2u;
    std::string::~string((unsigned __int64 *)(a2 + 152), a2);
  }
}
