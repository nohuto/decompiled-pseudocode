/*
 * XREFs of ?ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ @ 0x18000D6B8
 * Callers:
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180029CF0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@P.c)
 *     ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180092B40 (-ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS.c)
 * Callees:
 *     ?GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ @ 0x18000E000 (-GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ.c)
 *     ?OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18000E0D0 (-OnStreamGroupConnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000E1B0 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::ConnectToSaDevice_Base(CBaseStreamGroupProxy *this)
{
  CSaDeviceProxy *v2; // rcx
  void (*v3)(CSaDeviceProxy *__hidden, struct IStreamGroupProxy *); // rax
  __int64 v4; // rdi
  unsigned int (__fastcall *v5)(CBaseStreamGroupProxy *__hidden); // rax
  unsigned int ResourcePriority; // eax
  __int64 v7; // r8
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, __int64); // rax

  v2 = (CSaDeviceProxy *)*((_QWORD *)this + 11);
  v3 = *(void (**)(CSaDeviceProxy *__hidden, struct IStreamGroupProxy *))(*(_QWORD *)v2 + 160LL);
  if ( v3 == CSaDeviceProxy::OnStreamGroupConnected )
    CSaDeviceProxy::OnStreamGroupConnected(v2, this);
  else
    ((void (__fastcall *)(CSaDeviceProxy *, CBaseStreamGroupProxy *))v3)(v2, this);
  v4 = *((_QWORD *)this + 11);
  v5 = *(unsigned int (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)this + 136LL);
  if ( v5 == CBaseStreamGroupProxy::GetResourcePriority )
    ResourcePriority = CBaseStreamGroupProxy::GetResourcePriority(this);
  else
    ResourcePriority = v5(this);
  v7 = ResourcePriority;
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v4 + 72LL);
  if ( v8 == CSaDeviceProxy::UpdateStreamGroupResourcePriority )
    return CSaDeviceProxy::UpdateStreamGroupResourcePriority(v4, 0LL, v7, 0xFFFFFFFFLL);
  else
    return v8(v4, 0LL, v7, 0xFFFFFFFFLL);
}
