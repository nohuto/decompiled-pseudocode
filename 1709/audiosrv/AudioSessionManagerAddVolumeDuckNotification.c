/*
 * XREFs of AudioSessionManagerAddVolumeDuckNotification @ 0x18007ABF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall AudioSessionManagerAddVolumeDuckNotification(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  RPC_STATUS v6; // eax
  unsigned int Pid; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  v6 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  if ( v6 )
  {
    if ( v6 > 0 )
    {
      v5 = (unsigned __int16)v6 | 0x80070000;
      goto LABEL_7;
    }
  }
  else
  {
    if ( !g_DuckingManager )
      return v5;
    v6 = (*(__int64 (__fastcall **)(struct IAudioDuckingManager *, __int64, _QWORD, __int64))(*(_QWORD *)g_DuckingManager
                                                                                            + 32LL))(
           g_DuckingManager,
           a3,
           Pid,
           a2);
  }
  v5 = v6;
LABEL_7:
  if ( (v5 & 0x80000000) != 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionManagerAddVolumeDuckNotification", 2172, v5);
  return v5;
}
