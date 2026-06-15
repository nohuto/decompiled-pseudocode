/*
 * XREFs of ??0CPowerReferenceManager@@QEAA@XZ @ 0x180059134
 * Callers:
 *     ??$make_unique@VCPowerReferenceManager@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@0@XZ @ 0x18005B5A4 (--$make_unique@VCPowerReferenceManager@@$$V$0A@@std@@YA-AV-$unique_ptr@VCPowerReferenceManager@@.c)
 * Callees:
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x180049554 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x180059268 (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@XZ @ 0x180059340 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$alloc.c)
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x18005937C (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@XZ @ 0x180059454 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     Pdcv2ActivationClientRegister @ 0x18005AC90 (Pdcv2ActivationClientRegister.c)
 */

// Hidden C++ exception states: #wind=7
CPowerReferenceManager *__fastcall CPowerReferenceManager::CPowerReferenceManager(CPowerReferenceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v7; // [rsp+28h] [rbp-30h] BYREF
  void *v8; // [rsp+30h] [rbp-28h]
  CPowerReferenceManager *v9; // [rsp+38h] [rbp-20h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  _Mtx_init_in_situ((CPowerReferenceManager *)((char *)this + 32), 2);
  v7 = 1;
  v8 = &CPdcActivationClient::PdcTimerActivatorCallback;
  v9 = this;
  v3 = Pdcv2ActivationClientRegister(v2, &v7, this) | 0x10000000;
  if ( v3 < 0 )
    AudSrvTraceLoggingErrorHelper("CPdcActivationClient::CPdcActivationClient", 18, v3);
  *((_DWORD *)this + 28) = 0;
  _Mtx_init_in_situ((CPowerReferenceManager *)((char *)this + 120), 2);
  *((_BYTE *)this + 200) = -1;
  *((_QWORD *)this + 26) = CreateThreadpoolTimer(
                             (PTP_TIMER_CALLBACK)lambda_03b97fe06f3466f47fbded311dc3ec81_::_lambda_invoker_cdecl_,
                             (char *)this + 112,
                             0LL);
  CSebNotifier::PublishSebEvent((CPowerReferenceManager *)((char *)this + 112), 0);
  _Mtx_init_in_situ((CPowerReferenceManager *)((char *)this + 216), 2);
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 37) = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Buyheadnode(v4);
  CPlaybackNotifier::PublishPlaybackAudioStatus((CPowerReferenceManager *)((char *)this + 216));
  _Mtx_init_in_situ((CPowerReferenceManager *)((char *)this + 312), 2);
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 49) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Buyheadnode(v5);
  CCaptureNotifier::PublishCaptureAudioStatus((CPowerReferenceManager *)((char *)this + 312));
  return this;
}
