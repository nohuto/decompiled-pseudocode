/*
 * XREFs of AudioSessionManagerGetExistingSession @ 0x180094980
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001F8AC (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x18001FAB4 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x1800226B8 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18009802C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall AudioSessionManagerGetExistingSession(
        CAudioSessionManager ***a1,
        const unsigned __int16 *a2,
        _QWORD *a3)
{
  CAudioSessionManager **v3; // rsi
  RPC_STATUS v6; // eax
  signed int v7; // ebx
  int AudioSession; // eax
  struct CAudioSession *v9; // rdi
  unsigned int Pid; // [rsp+30h] [rbp-49h] BYREF
  struct CAudioSession *v12; // [rsp+38h] [rbp-41h] BYREF
  __int64 v13; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v14[80]; // [rsp+50h] [rbp-29h] BYREF

  v3 = *a1;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v14);
  v12 = 0LL;
  v13 = 0LL;
  *a3 = 0LL;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x48u, (__int64)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids, *v3);
  }
  v6 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  v7 = v6;
  if ( v6 )
  {
    if ( v6 > 0 )
      v7 = (unsigned __int16)v6 | 0x80070000;
  }
  else
  {
    v7 = CAudioSessionInstanceId::Initialize((CAudioSessionInstanceId *)v14, a2);
    if ( v7 < 0 )
    {
LABEL_15:
      AudSrvTraceLoggingErrorHelper("AudioSessionManagerGetExistingSession", 2260, v7);
      goto LABEL_16;
    }
    AudioSession = CAudioSessionManager::FindAudioSession(*v3, (struct CAudioSessionInstanceId *)v14, &v12);
    v9 = v12;
    v7 = AudioSession;
    if ( AudioSession >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(CAudioSessionManager *, _QWORD, _QWORD, struct CAudioSession *, __int64 *))(*(_QWORD *)*v3 + 104LL))(
             *v3,
             Pid,
             0LL,
             v12,
             &v13);
      if ( v7 >= 0 )
        *a3 = v13;
    }
    if ( v9 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v7 < 0 )
    goto LABEL_15;
LABEL_16:
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v14);
  return (unsigned int)v7;
}
