/*
 * XREFs of ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x1800C71DC
 * Callers:
 *     ??1CExclusiveModeListener@@UEAA@XZ @ 0x1800C5E24 (--1CExclusiveModeListener@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800354B8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18005B384 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1800C2EA0 (-clear@-$_Tree@V-$_Tmap_traits@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pair@$$CB.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CExclusiveModeListener::Shutdown(CExclusiveModeListener *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  __int64 *v6; // r15
  __int64 *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  int v11; // esi
  __int64 *v12; // rax
  __int64 *i; // rax
  CSpatialAudioResourceManagerTraceLogger *v14; // rcx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp+10h] BYREF

  *((_BYTE *)this + 369) = 0;
  v2 = *((_QWORD *)this + 44);
  if ( v2 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
    *((_QWORD *)this + 44) = 0LL;
  }
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    if ( *((_QWORD *)this + 15) )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, *((_QWORD *)this + 15));
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x74,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
          (const char *)(unsigned int)v4);
      *((_QWORD *)this + 15) = 0LL;
    }
    if ( *((_QWORD *)this + 16) )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 9) + 80LL))(
             *((_QWORD *)this + 9),
             *((_QWORD *)this + 16));
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7A,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
          (const char *)(unsigned int)v5);
      *((_QWORD *)this + 16) = 0LL;
    }
    v6 = (__int64 *)*((_QWORD *)this + 20);
    v7 = (__int64 *)*v6;
    while ( v7 != v6 )
    {
      v8 = *((_QWORD *)this + 45);
      if ( v8 )
      {
        RtlUnsubscribeWnfNotificationWaitForCompletion(v8);
        *((_QWORD *)this + 45) = 0LL;
      }
      v9 = v7[6];
      if ( v9 && v7[7] )
      {
        ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v18, v9);
        v17 = 0LL;
        v10 = (**v18)(v18, &GUID_2396ae05_f3f5_49e9_954b_d178b5677fd7, &v17);
        v11 = v10;
        if ( v10 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x15E1,
            (__int64)"internal\\sdk\\inc\\wil/resultmacros.h",
            (const char *)(unsigned int)v10);
        if ( v11 >= 0 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 104LL))(v17, v7[7]);
          v7[7] = 0LL;
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x89,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
            (const char *)(unsigned int)v11);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
      }
      if ( !*((_BYTE *)v7 + 25) )
      {
        v12 = (__int64 *)v7[2];
        if ( *((_BYTE *)v12 + 25) )
        {
          for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25) && v7 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v7 = i;
          v7 = i;
        }
        else
        {
          do
          {
            v7 = v12;
            v12 = (__int64 *)*v12;
          }
          while ( !*((_BYTE *)v12 + 25) );
        }
      }
    }
    std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::clear((_QWORD *)this + 20);
  }
  v14 = (CSpatialAudioResourceManagerTraceLogger *)*((_QWORD *)this + 7);
  if ( v14 )
  {
    v15 = (*(__int64 (__fastcall **)(CSpatialAudioResourceManagerTraceLogger *, CExclusiveModeListener *))(*(_QWORD *)v14 + 56LL))(
            v14,
            this);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x95,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        (const char *)(unsigned int)v15);
    v14 = (CSpatialAudioResourceManagerTraceLogger *)*((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(CSpatialAudioResourceManagerTraceLogger *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  CSpatialAudioResourceManagerTraceLogger::LogExclusiveModeListenerRunning(v14, 0);
}
