/*
 * XREFs of ??1?$CComPtr@VCAudioSessionManager@@@ATL@@QEAA@XZ @ 0x18005B924
 * Callers:
 *     _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$9 @ 0x180062E45 (_CAudioSrv--ProcessDeviceInternal_--_1_--dtor$9.c)
 *     _CPolicyConfig::DisconnectHelper_::_1_::dtor$1 @ 0x1800838D3 (_CPolicyConfig--DisconnectHelper_--_1_--dtor$1.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$12 @ 0x18009A6BB (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$12.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<CAudioSessionManager>::~CComPtr<CAudioSessionManager>(CAudioSessionManager **a1)
{
  CAudioSessionManager *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)CAudioSessionManager::Release )
      CAudioSessionManager::Release(v1);
    else
      v2();
  }
}
