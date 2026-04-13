/*
 * XREFs of _MobilityExperienceManager::GetHasMobilityAccount_::_1_::dtor$7 @ 0x1800C8F5D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall MobilityExperienceManager::GetHasMobilityAccount_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return Windows::Internal::MoveOnCopy<Windows::Internal::String>::~MoveOnCopy<Windows::Internal::String>((HSTRING *)(a2 + 40));
}
