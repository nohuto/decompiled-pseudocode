/*
 * XREFs of ?ResetAPOs@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x140012920
 * Callers:
 *     ?PumpPaused@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x140012880 (-PumpPaused@CSystemAudioDeviceSharedBase@@UEAAJXZ.c)
 * Callees:
 *     ?ResetAPOs@CAudioDeviceGraph@@UEAAJXZ @ 0x14000DF40 (-ResetAPOs@CAudioDeviceGraph@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::ResetAPOs(CSystemAudioDeviceSharedBase *this)
{
  CAudioDeviceGraph *v2; // rcx
  __int64 (__fastcall *v3)(CAudioDeviceGraph *); // rax
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF

  v7 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v7);
  v2 = (CAudioDeviceGraph *)*((_QWORD *)this + 41);
  v3 = *(__int64 (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)v2 + 152LL);
  if ( v3 == CAudioDeviceGraph::ResetAPOs )
    v4 = CAudioDeviceGraph::ResetAPOs(v2);
  else
    v4 = ((__int64 (__fastcall *)(CAudioDeviceGraph *, __int64 (__fastcall *)(CAudioDeviceGraph *)))v3)(
           v2,
           CAudioDeviceGraph::ResetAPOs);
  v5 = v4;
  EtwEventActivityIdControl(4LL, &v7);
  return v5;
}
