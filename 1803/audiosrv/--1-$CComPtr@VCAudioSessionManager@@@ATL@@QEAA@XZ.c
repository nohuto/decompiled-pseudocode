/*
 * XREFs of ??1?$CComPtr@VCAudioSessionManager@@@ATL@@QEAA@XZ @ 0x1800983D8
 * Callers:
 *     _CAudioStreamDestroy::Invoke_::_1_::dtor$0 @ 0x180067E50 (_CAudioStreamDestroy--Invoke_--_1_--dtor$0.c)
 *     _CLockedList_ATL::CComPtr_ISessionInternalEvents__0_0_::RemoveInterface_::_1_::dtor$0 @ 0x180068C5A (_CLockedList_ATL--CComPtr_ISessionInternalEvents__0_0_--RemoveInterface_--_1_--dtor$0.c)
 *     _CLockedList_ATL::CComPtr_ISessionInternalEvents__0_0_::AddInterface_::_1_::dtor$0 @ 0x18006A33B (_CLockedList_ATL--CComPtr_ISessionInternalEvents__0_0_--AddInterface_--_1_--dtor$0.c)
 *     _CAudioStreamStateChanged::Invoke_::_1_::dtor$0 @ 0x18006A410 (_CAudioStreamStateChanged--Invoke_--_1_--dtor$0.c)
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$10 @ 0x18009DF23 (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$10.c)
 *     _CAudioChannelVolumeChanged::Invoke_::_1_::dtor$0 @ 0x1800AA9A1 (_CAudioChannelVolumeChanged--Invoke_--_1_--dtor$0.c)
 *     _CAudioSessionDisconnected::Invoke_::_1_::dtor$0 @ 0x1800AAA1D (_CAudioSessionDisconnected--Invoke_--_1_--dtor$0.c)
 *     _CAudioSessionDisplayNameChanged::Invoke_::_1_::dtor$0 @ 0x1800AAAA1 (_CAudioSessionDisplayNameChanged--Invoke_--_1_--dtor$0.c)
 *     _CAudioSessionGroupingParamChanged::Invoke_::_1_::dtor$0 @ 0x1800AAB2E (_CAudioSessionGroupingParamChanged--Invoke_--_1_--dtor$0.c)
 *     _CAudioSessionIconPathChanged::Invoke_::_1_::dtor$0 @ 0x1800AABB1 (_CAudioSessionIconPathChanged--Invoke_--_1_--dtor$0.c)
 *     _CAudioSessionVolumeChanged::Invoke_::_1_::dtor$0 @ 0x1800AAC3A (_CAudioSessionVolumeChanged--Invoke_--_1_--dtor$0.c)
 *     _CPolicyConfig::DisconnectHelper_::_1_::dtor$1 @ 0x1800BB81F (_CPolicyConfig--DisconnectHelper_--_1_--dtor$1.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$12 @ 0x1800D1452 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$12.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<CAudioSessionManager>::~CComPtr<CAudioSessionManager>(CAudioSessionManager **a1)
{
  CAudioSessionManager *v1; // rcx
  __int64 (__fastcall *v2)(CAudioSessionManager *); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v1 + 16LL);
    if ( v2 == CAudioSessionManager::Release )
      CAudioSessionManager::Release(v1);
    else
      v2(v1);
  }
}
