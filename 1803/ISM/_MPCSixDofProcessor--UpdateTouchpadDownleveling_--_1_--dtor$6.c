/*
 * XREFs of _MPCSixDofProcessor::UpdateTouchpadDownleveling_::_1_::dtor$6 @ 0x1800E5509
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

void __fastcall MPCSixDofProcessor::UpdateTouchpadDownleveling_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 36) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 36) &= ~4u;
    std::string::~string((unsigned __int64 *)(a2 + 184), a2);
  }
}
