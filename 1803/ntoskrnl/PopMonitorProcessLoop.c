/*
 * XREFs of PopMonitorProcessLoop @ 0x140652608
 * Callers:
 *     PopMonitorAlpcCallback @ 0x14076C400 (PopMonitorAlpcCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x1408C70DC (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x1401A8360 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1401A8600 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopMonitorProcessBrightnessAction @ 0x14076C414 (PopMonitorProcessBrightnessAction.c)
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
