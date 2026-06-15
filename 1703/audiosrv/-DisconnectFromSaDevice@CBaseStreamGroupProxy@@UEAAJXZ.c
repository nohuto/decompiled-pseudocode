/*
 * XREFs of ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180009D70
 * Callers:
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18002B990 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@P.c)
 *     ??1CSharedStreamGroupProxy@@MEAA@XZ @ 0x18002BDE0 (--1CSharedStreamGroupProxy@@MEAA@XZ.c)
 *     ??_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z @ 0x1800A5050 (--_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180009460 (-OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180009600 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z @ 0x180009730 (-GetDeviceGraph@CSaDeviceProxy@@UEAAJPEAPEAUIAudioDeviceGraph@@@Z.c)
 *     ?GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ @ 0x18000A980 (-GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::DisconnectFromSaDevice(CBaseStreamGroupProxy *this)
{
  int v2; // edi
  CSaDeviceProxy *v3; // rcx
  __int64 (__fastcall *v4)(CSaDeviceProxy *, struct IAudioDeviceGraph **); // rax
  int DeviceGraph; // eax
  CSaDeviceProxy *v6; // rcx
  void (__fastcall *v7)(CSaDeviceProxy *, struct IStreamGroupProxy *); // rax
  __int64 v8; // rsi
  unsigned int (__fastcall *v9)(CBaseStreamGroupProxy *__hidden); // rax
  unsigned int ResourcePriority; // eax
  __int64 v11; // r9
  __int64 (__fastcall *v12)(__int64, int, unsigned int, unsigned int); // rax
  struct IAudioDeviceGraph *v13; // rdx
  __int64 v14; // rcx
  struct IAudioDeviceGraph *v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (CSaDeviceProxy *)*((_QWORD *)this + 10);
  if ( !v3 )
    goto LABEL_17;
  v16 = 0LL;
  v4 = *(__int64 (__fastcall **)(CSaDeviceProxy *, struct IAudioDeviceGraph **))(*(_QWORD *)v3 + 56LL);
  if ( v4 == CSaDeviceProxy::GetDeviceGraph )
    DeviceGraph = CSaDeviceProxy::GetDeviceGraph(v3, &v16);
  else
    DeviceGraph = v4(v3, &v16);
  v2 = DeviceGraph;
  if ( DeviceGraph >= 0 )
  {
    if ( v16 )
      v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 80LL))(*((_QWORD *)this + 9));
    if ( v2 >= 0 )
    {
      v6 = (CSaDeviceProxy *)*((_QWORD *)this + 10);
      v7 = *(void (__fastcall **)(CSaDeviceProxy *, struct IStreamGroupProxy *))(*(_QWORD *)v6 + 168LL);
      if ( v7 == CSaDeviceProxy::OnStreamGroupDisconnected )
        CSaDeviceProxy::OnStreamGroupDisconnected(v6, this);
      else
        v7(v6, this);
      v8 = *((_QWORD *)this + 10);
      v9 = *(unsigned int (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)this + 136LL);
      if ( v9 == CBaseStreamGroupProxy::GetResourcePriority )
        ResourcePriority = CBaseStreamGroupProxy::GetResourcePriority(this);
      else
        ResourcePriority = v9(this);
      v11 = ResourcePriority;
      v12 = *(__int64 (__fastcall **)(__int64, int, unsigned int, unsigned int))(*(_QWORD *)v8 + 72LL);
      if ( v12 == CSaDeviceProxy::UpdateStreamGroupResourcePriority )
        CSaDeviceProxy::UpdateStreamGroupResourcePriority(v8, 2, 0xFFFFFFFF, v11);
      else
        v12(v8, 2, 0xFFFFFFFF, v11);
    }
  }
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(struct IAudioDeviceGraph *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v2 >= 0 )
  {
LABEL_17:
    v14 = *((_QWORD *)this + 10);
    if ( v14 )
    {
      *((_QWORD *)this + 10) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  return (unsigned int)v2;
}
