/*
 * XREFs of PopMonitorProcessLoop @ 0x1405EEEC8
 * Callers:
 *     PopMonitorAlpcCallback @ 0x140708330 (PopMonitorAlpcCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1408551FC (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x14017E740 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14017E9E0 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopMonitorProcessBrightnessAction @ 0x140708344 (PopMonitorProcessBrightnessAction.c)
 */

__int64 PopMonitorProcessLoop()
{
  __int64 result; // rax
  _QWORD v1[9]; // [rsp+90h] [rbp-70h] BYREF
  __int16 v2; // [rsp+E4h] [rbp-1Ch]
  unsigned int v3; // [rsp+108h] [rbp+8h]
  unsigned int v4; // [rsp+10Ch] [rbp+Ch]

  while ( 1 )
  {
    result = ZwAlpcSendWaitReceivePort((__int64)PopAlpcMonitorServerPort, 0LL, 0LL);
    if ( (_DWORD)result )
      break;
    if ( (unsigned __int8)v2 == 3 )
    {
      PopMonitorProcessBrightnessAction(v3, v4);
    }
    else if ( (unsigned __int8)v2 > 4u )
    {
      if ( (unsigned __int8)v2 <= 6u )
      {
        ZwClose(PopAlpcMonitorClientPort);
        PopAlpcMonitorClientPort = 0LL;
      }
      else if ( (unsigned __int8)v2 == 10 )
      {
        if ( PopAlpcMonitorClientPort )
        {
          ZwClose(PopAlpcMonitorClientPort);
          PopAlpcMonitorClientPort = 0LL;
        }
        memset(v1, 0, sizeof(v1));
        LODWORD(v1[0]) = 0x100000;
        v1[2] = 256LL;
        if ( (int)ZwAlpcAcceptConnectPort((__int64)&PopAlpcMonitorClientPort, (__int64)PopAlpcMonitorServerPort, 0LL) < 0 )
          ZwAlpcAcceptConnectPort((__int64)&PopAlpcMonitorClientPort, (__int64)PopAlpcMonitorServerPort, 0LL);
      }
    }
  }
  return result;
}
