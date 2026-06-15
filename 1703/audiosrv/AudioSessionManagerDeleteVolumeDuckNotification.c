/*
 * XREFs of AudioSessionManagerDeleteVolumeDuckNotification @ 0x1800947F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioSessionManagerDeleteVolumeDuckNotification(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  RPC_STATUS v4; // eax
  unsigned int Pid; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v4 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( v4 )
  {
    if ( v4 > 0 )
    {
      v3 = (unsigned __int16)v4 | 0x80070000;
      goto LABEL_7;
    }
  }
  else
  {
    if ( !g_DuckingManager )
      return v3;
    v4 = (*(__int64 (__fastcall **)(struct IAudioDuckingManager *, _QWORD, __int64))(*(_QWORD *)g_DuckingManager + 40LL))(
           g_DuckingManager,
           Pid,
           a2);
  }
  v3 = v4;
LABEL_7:
  if ( (v3 & 0x80000000) != 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerDeleteVolumeDuckNotification", 2206, v3);
  return v3;
}
