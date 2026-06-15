/*
 * XREFs of ?GetMeteringData@CSystemAudioDeviceOffload@@UEAAJPEAUAUDIO_METER_DATA@@I@Z @ 0x14003CE30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ??_U@YAPEAX_K@Z @ 0x14001CB64 (--_U@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::GetMeteringData(
        CSystemAudioDeviceOffload *this,
        struct AUDIO_METER_DATA *a2,
        unsigned int a3)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rbp
  int *v7; // rax
  int *v8; // rsi
  int v9; // ebx
  int *v10; // rax
  int v11; // ecx
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF

  v4 = a3;
  v13 = *((_OWORD *)this - 4);
  EtwEventActivityIdControl(4LL, &v13);
  v6 = (unsigned int)v4;
  v7 = (int *)operator new[](saturated_mul(v4, 4uLL));
  v8 = v7;
  if ( v7 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)this + 14) + 32LL))(
           *((_QWORD *)this + 14),
           (unsigned int)v4,
           v7);
    if ( v9 >= 0 && (_DWORD)v4 )
    {
      v10 = v8;
      do
      {
        v11 = *v10++;
        *(_DWORD *)a2 = v11;
        a2 = (struct AUDIO_METER_DATA *)((char *)a2 + 12);
        --v6;
      }
      while ( v6 );
    }
  }
  else
  {
    v9 = -2147024882;
  }
  operator delete(v8);
  if ( v9 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x14u,
        (__int64)&WPP_280372cfd5753b11ae35f7647d6422a5_Traceguids,
        v9);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffload::GetMeteringData", 0x325u, v9);
  }
  EtwEventActivityIdControl(4LL, &v13);
  return (unsigned int)v9;
}
