/*
 * XREFs of ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x1800465C0
 * Callers:
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001D6B0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@P.c)
 *     ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x180045170 (--_GCSharedStreamGroupProxy@@MEAAPEAXI@Z.c)
 *     ??_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z @ 0x1800C8170 (--_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x18001E060 (-ForEachStream@CBaseStreamGroupProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 *     ?GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ @ 0x18001F040 (-GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18001F1A0 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z @ 0x18001F2F0 (-GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z.c)
 *     ?OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180045D60 (-OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::DisconnectFromSaDevice(CSaDeviceProxy **this)
{
  void (__fastcall *v2)(__int64, _QWORD *); // rax
  CSaDeviceProxy *v3; // rcx
  __int64 (__fastcall *v4)(CSaDeviceProxy *, struct IAudioDeviceGraph **); // rax
  int DeviceGraph; // eax
  unsigned int v6; // edi
  int v7; // eax
  CSaDeviceProxy *v8; // rcx
  void (__fastcall *v9)(CSaDeviceProxy *, struct IStreamGroupProxy *); // rax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(CBaseStreamGroupProxy *); // rax
  unsigned int ResourcePriority; // eax
  __int64 v13; // r9
  __int64 (__fastcall *v14)(__int64, unsigned int, unsigned int, unsigned int); // rax
  CSaDeviceProxy *v15; // rcx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-58h]
  _QWORD v20[8]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IAudioDeviceGraph *v22; // [rsp+80h] [rbp+8h] BYREF

  if ( this[11] )
  {
    v20[0] = off_18012BE28;
    v20[7] = v20;
    v2 = (void (__fastcall *)(__int64, _QWORD *))*((_QWORD *)*this + 46);
    if ( v2 == CBaseStreamGroupProxy::ForEachStream )
      CBaseStreamGroupProxy::ForEachStream((__int64)this, v20);
    else
      v2((__int64)this, v20);
    v3 = this[11];
    v22 = 0LL;
    v4 = *(__int64 (__fastcall **)(CSaDeviceProxy *, struct IAudioDeviceGraph **))(*(_QWORD *)v3 + 56LL);
    if ( v4 == CSaDeviceProxy::GetDeviceGraph )
      DeviceGraph = CSaDeviceProxy::GetDeviceGraph(v3, &v22);
    else
      DeviceGraph = v4(v3, &v22);
    v6 = DeviceGraph;
    if ( DeviceGraph < 0 )
    {
      v17 = (unsigned int)DeviceGraph;
      v18 = 728LL;
    }
    else
    {
      if ( !v22
        || (v7 = (*(__int64 (__fastcall **)(CSaDeviceProxy *))(*(_QWORD *)this[10] + 80LL))(this[10]), v6 = v7, v7 >= 0) )
      {
        v8 = this[11];
        v9 = *(void (__fastcall **)(CSaDeviceProxy *, struct IStreamGroupProxy *))(*(_QWORD *)v8 + 168LL);
        if ( v9 == CSaDeviceProxy::OnStreamGroupDisconnected )
          CSaDeviceProxy::OnStreamGroupDisconnected(v8, (struct IStreamGroupProxy *)this);
        else
          v9(v8, (struct IStreamGroupProxy *)this);
        v10 = (__int64)this[11];
        v11 = (__int64 (__fastcall *)(CBaseStreamGroupProxy *))*((_QWORD *)*this + 17);
        if ( v11 == CBaseStreamGroupProxy::GetResourcePriority )
          ResourcePriority = CBaseStreamGroupProxy::GetResourcePriority((CBaseStreamGroupProxy *)this);
        else
          ResourcePriority = v11((CBaseStreamGroupProxy *)this);
        v13 = ResourcePriority;
        v14 = *(__int64 (__fastcall **)(__int64, unsigned int, unsigned int, unsigned int))(*(_QWORD *)v10 + 72LL);
        if ( v14 == CSaDeviceProxy::UpdateStreamGroupResourcePriority )
          CSaDeviceProxy::UpdateStreamGroupResourcePriority(v10, 2u, 0xFFFFFFFF, v13);
        else
          v14(v10, 2u, 0xFFFFFFFF, v13);
        if ( v22 )
          (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v22 + 16LL))(v22);
        goto LABEL_17;
      }
      v17 = (unsigned int)v7;
      v18 = 732LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)v17,
      v19);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
    return v6;
  }
LABEL_17:
  v15 = this[11];
  if ( v15 )
  {
    this[11] = 0LL;
    (*(void (__fastcall **)(CSaDeviceProxy *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return 0LL;
}
