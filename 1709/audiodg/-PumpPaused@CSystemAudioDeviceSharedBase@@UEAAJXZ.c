/*
 * XREFs of ?PumpPaused@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x14000F890
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetAPOs@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x14000F930 (-ResetAPOs@CSystemAudioDeviceSharedBase@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::PumpPaused(CSystemAudioDeviceSharedBase *this)
{
  CSystemAudioDeviceSharedBase *v2; // rcx
  __int64 (__fastcall *v3)(CSystemAudioDeviceSharedBase *__hidden); // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF

  v7 = *((_OWORD *)this - 3);
  EtwEventActivityIdControl(4LL, &v7);
  v2 = (CSystemAudioDeviceSharedBase *)((char *)this - 296);
  v3 = *(__int64 (__fastcall **)(CSystemAudioDeviceSharedBase *__hidden))(*((_QWORD *)this - 37) + 152LL);
  if ( v3 == CSystemAudioDeviceSharedBase::ResetAPOs )
    v4 = CSystemAudioDeviceSharedBase::ResetAPOs(v2);
  else
    v4 = ((__int64 (__fastcall *)(CSystemAudioDeviceSharedBase *, __int64 (__fastcall *)(CSystemAudioDeviceSharedBase *__hidden)))v3)(
           v2,
           CSystemAudioDeviceSharedBase::ResetAPOs);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        28LL,
        &WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids,
        (unsigned int)v4);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::PumpPaused", 0x2A3u, v5);
  }
  EtwEventActivityIdControl(4LL, &v7);
  return v5;
}
