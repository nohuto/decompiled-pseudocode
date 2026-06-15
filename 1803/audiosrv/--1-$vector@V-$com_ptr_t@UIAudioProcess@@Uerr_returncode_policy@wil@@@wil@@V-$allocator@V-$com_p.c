/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180098458
 * Callers:
 *     ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x1800478A4 (-PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ.c)
 *     _CAudioSession::PruneTerminatedOwningProcesses_::_1_::dtor$0 @ 0x180068E98 (_CAudioSession--PruneTerminatedOwningProcesses_--_1_--dtor$0.c)
 *     _CAudioSession::ForEachOwningProcess_::_1_::dtor$0 @ 0x180068EE1 (_CAudioSession--ForEachOwningProcess_--_1_--dtor$0.c)
 *     _CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess_::_1_::dtor$1 @ 0x1800B3798 (_CAudioSessionManager--RevokeSessionsWithoutDataFlowAccess_--_1_--dtor$1.c)
 *     _CAudioResourceManager::RetryGetSaDeviceForPackagedApp_::_1_::dtor$1 @ 0x1800D2C72 (_CAudioResourceManager--RetryGetSaDeviceForPackagedApp_--_1_--dtor$1.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
        __int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v1++);
      while ( v1 != v3 );
      v1 = *(__int64 **)a1;
    }
    std::_Deallocate(v1, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v1) >> 3, 8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
