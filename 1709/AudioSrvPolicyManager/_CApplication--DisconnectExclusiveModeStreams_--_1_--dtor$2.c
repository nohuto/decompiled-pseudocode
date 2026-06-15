/*
 * XREFs of _CApplication::DisconnectExclusiveModeStreams_::_1_::dtor$2 @ 0x180028411
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplication::DisconnectExclusiveModeStreams_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 40));
}
