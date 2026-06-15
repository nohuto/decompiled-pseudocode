/*
 * XREFs of ?SendRemoteDisconnectionRequest@CAudioStream@@UEAAJXZ @ 0x18007D250
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall CAudioStream::SendRemoteDisconnectionRequest(CAudioStream *this)
{
  CAudioDGProcess *v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // eax
  __int64 v5; // r8
  int MediaEvent; // eax
  unsigned int v7; // ebx
  _DWORD v9[12]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+50h] [rbp-38h]
  __int16 v11; // [rsp+68h] [rbp-20h]

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      48LL,
      &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids,
      *((_QWORD *)this + 65));
    v2 = WPP_GLOBAL_Control;
  }
  v3 = *((_QWORD *)this + 65);
  v11 = 0;
  v10 = v3;
  v9[0] = 80;
  v9[6] = 2;
  v9[1] = 0x8000;
  if ( v2 != (CAudioDGProcess *)&WPP_GLOBAL_Control && (*((_BYTE *)v2 + 28) & 0x40) != 0 && *((_BYTE *)v2 + 25) >= 4u )
    WPP_SF_q(*((_QWORD *)v2 + 2), 49LL, &WPP_78805be245a237971eed1a1da5d2d3a4_Traceguids, v9);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 40LL))(*((_QWORD *)this + 8));
  MediaEvent = GenerateMediaEvent(v9, v4, v5);
  v7 = MediaEvent;
  if ( MediaEvent < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioStream::SendRemoteDisconnectionRequest", 2039, MediaEvent);
  return v7;
}
