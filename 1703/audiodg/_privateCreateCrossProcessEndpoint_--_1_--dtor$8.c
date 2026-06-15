/*
 * XREFs of _privateCreateCrossProcessEndpoint_::_1_::dtor$8 @ 0x140021F5F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall privateCreateCrossProcessEndpoint_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  ATL::CCriticalSection::~CCriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 64) + 16LL));
}
