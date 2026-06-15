/*
 * XREFs of ??1?$MakeAllocator@VCVolumeLimitTrackerImpl@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180017B08
 * Callers:
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$50 @ 0x180036CDC (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$50.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CWindowsPolicyManager_____ptr64_&___ptr64_CProcess_____ptr64__::_1_::dtor$0 @ 0x180037110 (_Microsoft--WRL--Details--MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CW.c)
 *     _TSSession::Create_::_1_::dtor$26 @ 0x180037685 (_TSSession--Create_--_1_--dtor$26.c)
 *     _CVolumeLimitTrackerFactory::CreateInstance_::_1_::dtor$0 @ 0x1800379B6 (_CVolumeLimitTrackerFactory--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CVolumeLimitTrackerImpl>::~MakeAllocator<CVolumeLimitTrackerImpl>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)1);
}
