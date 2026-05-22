/*
 * XREFs of _MPCGamepadProcessor::AnyInputPressed_::_1_::dtor$3 @ 0x1800E85C8
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180044D50 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

void __fastcall MPCGamepadProcessor::AnyInputPressed_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 8) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~8u;
    std::string::~string((unsigned __int64 *)(a2 + 112), a2);
  }
}
