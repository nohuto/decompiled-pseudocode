/*
 * XREFs of _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$2_0 @ 0x180081B2F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor_2_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 64));
}
