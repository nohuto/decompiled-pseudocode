/*
 * XREFs of ??0CPowerReferenceManager@@QEAA@XZ @ 0x180060D88
 * Callers:
 *     ??$make_unique@VCPowerReferenceManager@@$$VX@std@@YA?AV?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@0@XZ @ 0x1800609D0 (--$make_unique@VCPowerReferenceManager@@$$VX@std@@YA-AV-$unique_ptr@VCPowerReferenceManager@@U-$.c)
 * Callees:
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x18000F354 (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18002B46C (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@XZ @ 0x180095100 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ??0CPdcActivationClient@@QEAA@XZ @ 0x18009C87C (--0CPdcActivationClient@@QEAA@XZ.c)
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x18009D72C (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@XZ @ 0x18009D988 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$alloc.c)
 */

// Hidden C++ exception states: #wind=5
CPowerReferenceManager *__fastcall CPowerReferenceManager::CPowerReferenceManager(CPowerReferenceManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  CPdcActivationClient::CPdcActivationClient(this);
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
  *((_QWORD *)this + 37) = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Buyheadnode(v2);
  CPlaybackNotifier::PublishPlaybackAudioStatus((CPowerReferenceManager *)((char *)this + 216));
  _Mtx_init_in_situ((CPowerReferenceManager *)((char *)this + 312), 2);
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 49) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Buyheadnode(v3);
  CCaptureNotifier::PublishCaptureAudioStatus((CPowerReferenceManager *)((char *)this + 312));
  return this;
}
