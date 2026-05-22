/*
 * XREFs of _MPCGamepadProcessor::AnyInputPressed_::_1_::dtor$4 @ 0x1800E85EE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

void __fastcall MPCGamepadProcessor::AnyInputPressed_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 0x10) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~0x10u;
    std::string::~string((unsigned __int64 *)(a2 + 80), a2);
  }
}
