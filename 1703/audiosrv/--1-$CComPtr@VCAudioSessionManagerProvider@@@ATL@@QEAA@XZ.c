/*
 * XREFs of ??1?$CComPtr@VCAudioSessionManagerProvider@@@ATL@@QEAA@XZ @ 0x18007C1E4
 * Callers:
 *     _CVADServer::InitializePolicy_::_1_::dtor$3 @ 0x18005AB34 (_CVADServer--InitializePolicy_--_1_--dtor$3.c)
 *     _VAD_AudiosrvAudioDGProcessTerminated_::_1_::dtor$0 @ 0x18005B7F8 (_VAD_AudiosrvAudioDGProcessTerminated_--_1_--dtor$0.c)
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$8 @ 0x1800817D6 (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$8.c)
 *     _CPolicyConfig::DisconnectAllRenderEndpointsForTsSession_::_1_::dtor$0 @ 0x18009BDAF (_CPolicyConfig--DisconnectAllRenderEndpointsForTsSession_--_1_--dtor$0.c)
 *     _CPolicyConfig::DisconnectHelper_::_1_::dtor$0 @ 0x18009BEC8 (_CPolicyConfig--DisconnectHelper_--_1_--dtor$0.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$13 @ 0x1800AB88E (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$13.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<CAudioSessionManagerProvider>::~CComPtr<CAudioSessionManagerProvider>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release(v1);
    else
      v2();
  }
}
