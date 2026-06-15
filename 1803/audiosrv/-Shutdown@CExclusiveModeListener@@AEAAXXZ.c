/*
 * XREFs of ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x1800F9894
 * Callers:
 *     ??1CExclusiveModeListener@@UEAA@XZ @ 0x1800F8350 (--1CExclusiveModeListener@@UEAA@XZ.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180018120 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800F20E8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdI.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1800F5584 (-clear@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pair@$$CB.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CExclusiveModeListener::Shutdown(CExclusiveModeListener *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ebp
  CSpatialAudioResourceManagerTraceLogger *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v16; // [rsp+70h] [rbp+18h] BYREF

  *((_BYTE *)this + 361) = 0;
  v2 = *((_QWORD *)this + 43);
  if ( v2 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
    *((_QWORD *)this + 43) = 0LL;
  }
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    if ( *((_QWORD *)this + 14) )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, *((_QWORD *)this + 14));
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          135LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
          (const char *)(unsigned int)v4);
      *((_QWORD *)this + 14) = 0LL;
    }
    if ( *((_QWORD *)this + 15) )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 8) + 80LL))(
             *((_QWORD *)this + 8),
             *((_QWORD *)this + 15));
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          141LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
          (const char *)(unsigned int)v5);
      *((_QWORD *)this + 15) = 0LL;
    }
    v6 = (_QWORD *)*((_QWORD *)this + 19);
    v7 = (_QWORD *)*v6;
    v16 = (_QWORD *)*v6;
    while ( v7 != v6 )
    {
      v8 = v7[6];
      if ( v8 && v7[7] )
      {
        ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v15, v8);
        v14 = 0LL;
        v9 = (**v15)(v15, &GUID_2396ae05_f3f5_49e9_954b_d178b5677fd7, &v14);
        v10 = v9;
        if ( v9 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x161F,
            (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
            (const char *)(unsigned int)v9);
        if ( v10 >= 0 )
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 104LL))(v14, v7[7]);
          v7[7] = 0LL;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            150LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
            (const char *)(unsigned int)v10);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>,std::_Iterator_base0>::operator++(&v16);
      v7 = v16;
    }
    std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::clear((_QWORD *)this + 19);
  }
  v11 = (CSpatialAudioResourceManagerTraceLogger *)*((_QWORD *)this + 6);
  if ( v11 )
  {
    v12 = (*(__int64 (__fastcall **)(CSpatialAudioResourceManagerTraceLogger *, CExclusiveModeListener *))(*(_QWORD *)v11 + 56LL))(
            v11,
            this);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        162LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        (const char *)(unsigned int)v12);
    v11 = (CSpatialAudioResourceManagerTraceLogger *)*((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(CSpatialAudioResourceManagerTraceLogger *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  CSpatialAudioResourceManagerTraceLogger::LogExclusiveModeListenerRunning(v11, 0);
}
