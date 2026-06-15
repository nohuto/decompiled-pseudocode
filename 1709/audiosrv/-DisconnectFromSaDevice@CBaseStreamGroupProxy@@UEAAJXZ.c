/*
 * XREFs of ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x18000D590
 * Callers:
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180029CF0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@P.c)
 *     ??1CSharedStreamGroupProxy@@MEAA@XZ @ 0x180029FFC (--1CSharedStreamGroupProxy@@MEAA@XZ.c)
 *     ??_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z @ 0x180092850 (--_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ @ 0x18000E000 (-GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ.c)
 *     ?OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18000E010 (-OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000E1B0 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z @ 0x18000E2D0 (-GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::DisconnectFromSaDevice(CBaseStreamGroupProxy *this)
{
  char *v1; // rsi
  CSaDeviceProxy *v3; // rcx
  __int64 (__fastcall *v4)(CSaDeviceProxy *__hidden, struct IAudioDeviceGraph **); // rax
  int DeviceGraph; // eax
  unsigned int v6; // ebx
  int v7; // eax
  CSaDeviceProxy *v8; // rcx
  void (*v9)(CSaDeviceProxy *__hidden, struct IStreamGroupProxy *); // rax
  __int64 v10; // rbx
  unsigned int (__fastcall *v11)(CBaseStreamGroupProxy *__hidden); // rax
  unsigned int ResourcePriority; // eax
  __int64 v13; // r9
  void (__fastcall *v14)(__int64, __int64, __int64, __int64); // rax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IAudioDeviceGraph *v20; // [rsp+40h] [rbp+8h] BYREF

  v1 = (char *)this + 88;
  v3 = (CSaDeviceProxy *)*((_QWORD *)this + 11);
  if ( !v3 )
  {
LABEL_15:
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v1);
    return 0LL;
  }
  v20 = 0LL;
  v4 = *(__int64 (__fastcall **)(CSaDeviceProxy *__hidden, struct IAudioDeviceGraph **))(*(_QWORD *)v3 + 56LL);
  if ( v4 == CSaDeviceProxy::GetDeviceGraph )
    DeviceGraph = CSaDeviceProxy::GetDeviceGraph(v3, &v20);
  else
    DeviceGraph = v4(v3, &v20);
  v6 = DeviceGraph;
  if ( DeviceGraph < 0 )
  {
    v16 = (unsigned int)DeviceGraph;
    v17 = 697LL;
  }
  else
  {
    if ( !v20
      || (v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 80LL))(*((_QWORD *)this + 10)),
          v6 = v7,
          v7 >= 0) )
    {
      v8 = *(CSaDeviceProxy **)v1;
      v9 = *(void (**)(CSaDeviceProxy *__hidden, struct IStreamGroupProxy *))(**(_QWORD **)v1 + 168LL);
      if ( v9 == CSaDeviceProxy::OnStreamGroupDisconnected )
        CSaDeviceProxy::OnStreamGroupDisconnected(v8, this);
      else
        ((void (__fastcall *)(CSaDeviceProxy *, CBaseStreamGroupProxy *))v9)(v8, this);
      v10 = *(_QWORD *)v1;
      v11 = *(unsigned int (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)this + 136LL);
      if ( v11 == CBaseStreamGroupProxy::GetResourcePriority )
        ResourcePriority = CBaseStreamGroupProxy::GetResourcePriority(this);
      else
        ResourcePriority = v11(this);
      v13 = ResourcePriority;
      v14 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v10 + 72LL);
      if ( (char *)v14 == (char *)CSaDeviceProxy::UpdateStreamGroupResourcePriority )
        CSaDeviceProxy::UpdateStreamGroupResourcePriority(v10, 2LL, 0xFFFFFFFFLL, v13);
      else
        v14(v10, 2LL, 0xFFFFFFFFLL, v13);
      if ( v20 )
        (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v20 + 16LL))(v20);
      goto LABEL_15;
    }
    v16 = (unsigned int)v7;
    v17 = 701LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v17,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)v16,
    v18);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
  return v6;
}
