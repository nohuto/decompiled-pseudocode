/*
 * XREFs of ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AC8C
 * Callers:
 *     _BamoDataProviderStub::RemoveDataSource_::_1_::dtor$0 @ 0x1800E3A49 (_BamoDataProviderStub--RemoveDataSource_--_1_--dtor$0.c)
 *     _Microsoft::BamoImpl::ConnectionIndirector::OnItemMessage_::_1_::dtor$0 @ 0x1800E41A3 (_Microsoft--BamoImpl--ConnectionIndirector--OnItemMessage_--_1_--dtor$0.c)
 *     _Microsoft::BamoImpl::ConnectionIndirector::OnPeerConnected_::_1_::dtor$0 @ 0x1800E41AF (_Microsoft--BamoImpl--ConnectionIndirector--OnPeerConnected_--_1_--dtor$0.c)
 *     _Microsoft::BamoImpl::ConnectionIndirector::OnPeerDisconnected_::_1_::dtor$0 @ 0x1800E41BB (_Microsoft--BamoImpl--ConnectionIndirector--OnPeerDisconnected_--_1_--dtor$0.c)
 *     _BamoDataProviderRegistrarProxy::Register_::_1_::dtor$0 @ 0x1800E41EB (_BamoDataProviderRegistrarProxy--Register_--_1_--dtor$0.c)
 *     _BamoDataProviderRegistrarProxy::Unregister_::_1_::dtor$0 @ 0x1800E41F7 (_BamoDataProviderRegistrarProxy--Unregister_--_1_--dtor$0.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Microsoft::BamoImpl::InternalLock::~InternalLock(Microsoft::BamoImpl::InternalLock *this)
{
  __int64 v1; // rbx
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( *(_DWORD *)(v1 + 136) != GetCurrentThreadId() )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x574,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
        v2);
      JUMPOUT(0x18000ACD5LL);
    }
    *(_DWORD *)(v1 + 136) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 96));
  }
}
