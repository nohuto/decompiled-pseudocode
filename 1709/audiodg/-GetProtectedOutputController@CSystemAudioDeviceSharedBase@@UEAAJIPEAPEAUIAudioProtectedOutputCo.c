/*
 * XREFs of ?GetProtectedOutputController@CSystemAudioDeviceSharedBase@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x14003AD50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetProtectedOutputController(
        CSystemAudioDeviceSharedBase *this,
        unsigned int a2,
        struct IAudioProtectedOutputController **a3)
{
  int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+28h] [rbp-40h]
  __int128 v10; // [rsp+38h] [rbp-30h] BYREF

  v9 = *(_OWORD *)((char *)this + 232);
  v10 = v9;
  EtwEventActivityIdControl(4LL, &v10);
  *a3 = 0LL;
  v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 39))(
         *((_QWORD *)this + 39),
         &GUID_69a95a38_c637_46a0_9fb2_1c939aebf2e8,
         &v8);
  if ( v6 < 0
    || (v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioProtectedOutputController **))(*(_QWORD *)v8 + 24LL))(
               v8,
               a2,
               a3),
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8),
        v6 < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Au,
        (__int64)&WPP_d7c84bfd30153aba078899c41fbb18ca_Traceguids,
        v6);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::GetProtectedOutputController", 0x23Eu, v6);
  }
  EtwEventActivityIdControl(4LL, &v10);
  return (unsigned int)v6;
}
