/*
 * XREFs of ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180029CF0
 * Callers:
 *     ?ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180029700 (-ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProx.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x18000D590 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ?ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ @ 0x18000D6B8 (-ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ.c)
 *     ?GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z @ 0x18000E2D0 (-GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z @ 0x18002A200 (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_qq @ 0x180077320 (WPP_SF_qq.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::ConnectToSaDevice(__int64 a1, CSaDeviceProxy *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 (__fastcall *v7)(CSaDeviceProxy *, struct IAudioDeviceGraph **); // rax
  int DeviceGraph; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IAudioDeviceGraph *v17; // [rsp+60h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_9c6016c0d7cb367d67baf4bee7e000df_Traceguids, a1 - 8, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  if ( *(_QWORD *)(a1 + 88) )
  {
    if ( *(CSaDeviceProxy **)(a1 + 88) != a2 )
    {
      v9 = -2005139410;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4C4,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)0x887C002ELL,
        v15);
      goto LABEL_14;
    }
    goto LABEL_11;
  }
  v6 = *(_QWORD *)a2;
  v17 = 0LL;
  v7 = *(__int64 (__fastcall **)(CSaDeviceProxy *, struct IAudioDeviceGraph **))(v6 + 56);
  if ( v7 == CSaDeviceProxy::GetDeviceGraph )
    DeviceGraph = CSaDeviceProxy::GetDeviceGraph(a2, &v17);
  else
    DeviceGraph = v7(a2, &v17);
  v9 = DeviceGraph;
  if ( DeviceGraph < 0 )
  {
    v13 = (unsigned int)DeviceGraph;
    v14 = 1227LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v14,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)v13,
      v15);
LABEL_26:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
    goto LABEL_14;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioDeviceGraph *, _QWORD))(**(_QWORD **)(a1 + 80) + 72LL))(
          *(_QWORD *)(a1 + 80),
          v17,
          a3);
  v9 = v10;
  if ( v10 < 0 )
  {
    v13 = (unsigned int)v10;
    v14 = 1230LL;
    goto LABEL_24;
  }
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=(a1 + 88, a2);
  v11 = CBaseStreamGroupProxy::ConnectToSaDevice_Base((CBaseStreamGroupProxy *)a1);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4D6,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v11,
      v15);
    CBaseStreamGroupProxy::DisconnectFromSaDevice((CBaseStreamGroupProxy *)a1);
    goto LABEL_26;
  }
  if ( v17 )
    (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v17 + 16LL))(v17);
LABEL_11:
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_9c6016c0d7cb367d67baf4bee7e000df_Traceguids, a1 - 8, a2);
  }
  v9 = 0;
LABEL_14:
  if ( a1 != -96 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  return v9;
}
