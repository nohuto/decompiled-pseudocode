/*
 * XREFs of ??1?$CComPtr@VCAudioSessionManagerProvider@@@ATL@@QEAA@XZ @ 0x180098398
 * Callers:
 *     _CVADServer::InitializePolicy_::_1_::dtor$3 @ 0x180069714 (_CVADServer--InitializePolicy_--_1_--dtor$3.c)
 *     _VAD_AudiosrvAudioDGProcessTerminated_::_1_::dtor$0 @ 0x180069E67 (_VAD_AudiosrvAudioDGProcessTerminated_--_1_--dtor$0.c)
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$9 @ 0x18009DF17 (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$9.c)
 *     _CPolicyConfig::DisconnectAllRenderEndpointsForTsSession_::_1_::dtor$0 @ 0x1800BB6E7 (_CPolicyConfig--DisconnectAllRenderEndpointsForTsSession_--_1_--dtor$0.c)
 *     _CPolicyConfig::DisconnectHelper_::_1_::dtor$0 @ 0x1800BB813 (_CPolicyConfig--DisconnectHelper_--_1_--dtor$0.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$13 @ 0x1800D145E (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$13.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<CAudioSessionManagerProvider>::~CComPtr<CAudioSessionManagerProvider>(int **a1)
{
  int *v1; // rcx
  __int64 (__fastcall *v2)(int *); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(__int64 (__fastcall **)(int *))(*(_QWORD *)v1 + 16LL);
    if ( v2 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release(v1);
    else
      v2(v1);
  }
}
