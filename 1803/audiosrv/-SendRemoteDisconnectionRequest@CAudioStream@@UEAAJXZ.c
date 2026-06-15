/*
 * XREFs of ?SendRemoteDisconnectionRequest@CAudioStream@@UEAAJXZ @ 0x1800B5FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

__int64 __fastcall CAudioStream::SendRemoteDisconnectionRequest(CAudioStream *this)
{
  CAudioSessionManager *v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // eax
  int MediaEvent; // eax
  unsigned int v6; // ebx
  _DWORD v8[12]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v9; // [rsp+50h] [rbp-38h]
  __int16 v10; // [rsp+68h] [rbp-20h]

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      44LL,
      &WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids,
      *((_QWORD *)this + 67));
    v2 = WPP_GLOBAL_Control;
  }
  v3 = *((_QWORD *)this + 67);
  v10 = 0;
  v9 = v3;
  v8[0] = 80;
  v8[6] = 2;
  v8[1] = 0x8000;
  if ( v2 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)v2 + 28) & 0x40) != 0
    && *((_BYTE *)v2 + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)v2 + 2), 45LL, &WPP_5e836fd19f4d307bbf2f3e70e4c30d13_Traceguids, v8);
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
  MediaEvent = GenerateMediaEvent(v8, v4);
  v6 = MediaEvent;
  if ( MediaEvent < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioStream::SendRemoteDisconnectionRequest", 2105, MediaEvent);
  return v6;
}
