/*
 * XREFs of _Microsoft::BamoImpl::ConnectionIndirector::OnPeerDisconnected_::_1_::dtor$1 @ 0x1800E41C7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerDisconnected_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::BamoImpl::DropAndReacquireLock::~DropAndReacquireLock((Microsoft::BamoImpl::DropAndReacquireLock *)(a2 + 128));
}
