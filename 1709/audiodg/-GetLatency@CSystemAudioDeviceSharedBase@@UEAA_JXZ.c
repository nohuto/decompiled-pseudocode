/*
 * XREFs of ?GetLatency@CSystemAudioDeviceSharedBase@@UEAA_JXZ @ 0x14000EF60
 * Callers:
 *     ?AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F780 (-AddPipeToMixSplitConnection@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x14000C9D0 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetLatency(CSystemAudioDeviceSharedBase *this)
{
  CAudioDeviceGraph *v2; // rcx
  _QWORD *v3; // rdx
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(CAudioDeviceGraph *, _QWORD *, __int64 *); // rax
  int Latency; // eax
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+28h] [rbp-30h]
  __int128 v10; // [rsp+38h] [rbp-20h] BYREF

  v9 = *(_OWORD *)((char *)this - 56);
  v10 = v9;
  EtwEventActivityIdControl(4LL, &v10);
  v2 = (CAudioDeviceGraph *)*((_QWORD *)this + 3);
  v3 = (_QWORD *)*((_QWORD *)this + 1);
  v4 = 0LL;
  v8 = 0LL;
  v5 = *(__int64 (__fastcall **)(CAudioDeviceGraph *, _QWORD *, __int64 *))(*(_QWORD *)v2 + 64LL);
  if ( v5 == CAudioDeviceGraph::GetLatency )
    Latency = CAudioDeviceGraph::GetLatency(v2, v3, &v8);
  else
    Latency = v5(v2, v3, &v8);
  if ( Latency >= 0 )
    v4 = v8;
  EtwEventActivityIdControl(4LL, &v10);
  return v4;
}
