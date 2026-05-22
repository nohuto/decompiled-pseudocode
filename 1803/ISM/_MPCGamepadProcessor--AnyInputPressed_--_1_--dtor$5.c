/*
 * XREFs of _MPCGamepadProcessor::AnyInputPressed_::_1_::dtor$5 @ 0x1800E8614
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

void __fastcall MPCGamepadProcessor::AnyInputPressed_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~0x20u;
    std::string::~string((unsigned __int64 *)(a2 + 48), a2);
  }
}
