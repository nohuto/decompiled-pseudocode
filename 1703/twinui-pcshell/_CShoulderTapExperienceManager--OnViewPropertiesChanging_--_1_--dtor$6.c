/*
 * XREFs of _CShoulderTapExperienceManager::OnViewPropertiesChanging_::_1_::dtor$6 @ 0x18019C5D9
 * Callers:
 *     <none>
 * Callees:
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18008D6D4 (--1OutRef@RoVariant@@QEAA@XZ.c)
 */

void __fastcall CShoulderTapExperienceManager::OnViewPropertiesChanging_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 104) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 104) &= ~1u;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)(a2 + 112));
  }
}
