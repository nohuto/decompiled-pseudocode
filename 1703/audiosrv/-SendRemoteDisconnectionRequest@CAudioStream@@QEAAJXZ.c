/*
 * XREFs of ?SendRemoteDisconnectionRequest@CAudioStream@@QEAAJXZ @ 0x180096784
 * Callers:
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18008ACE8 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?RemoteDisconnect@CAudioStream@@QEAAJXZ @ 0x18009657C (-RemoteDisconnect@CAudioStream@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 */

__int64 __fastcall CAudioStream::SendRemoteDisconnectionRequest(CAudioStream *this, __int64 a2, __int64 a3)
{
  CVolumeStrip *v4; // rcx
  __int64 v5; // rax
  int MediaEvent; // eax
  unsigned int v7; // ebx
  _DWORD v9[12]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+50h] [rbp-38h]
  __int16 v11; // [rsp+68h] [rbp-20h]

  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x31u,
      (__int64)&WPP_c45047042f6d344739c91af1a021533b_Traceguids,
      *((_QWORD *)this + 66));
    v4 = WPP_GLOBAL_Control;
  }
  v5 = *((_QWORD *)this + 66);
  v11 = 0;
  v10 = v5;
  v9[0] = 80;
  v9[6] = 2;
  v9[1] = 0x8000;
  if ( v4 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_BYTE *)v4 + 28) & 0x40) != 0 && *((_BYTE *)v4 + 25) >= 4u )
    WPP_SF_q(*((_QWORD *)v4 + 2), 0x32u, (__int64)&WPP_c45047042f6d344739c91af1a021533b_Traceguids, v9);
  MediaEvent = GenerateMediaEvent(v9, *((unsigned int *)this + 20), a3);
  v7 = MediaEvent;
  if ( MediaEvent < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioStream::SendRemoteDisconnectionRequest", 2165, MediaEvent);
  return v7;
}
