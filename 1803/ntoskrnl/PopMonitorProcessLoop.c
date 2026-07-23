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

NTSTATUS PopMonitorProcessLoop()
{
  NTSTATUS result; // eax
  ULONG_PTR BufferLength; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+90h] [rbp-70h] BYREF
  _PORT_MESSAGE ConnectionRequest; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v5; // [rsp+108h] [rbp+8h]
  unsigned int v6; // [rsp+10Ch] [rbp+Ch]

  while ( 1 )
  {
    BufferLength = 48LL;
    result = ZwAlpcSendWaitReceivePort(
               PopAlpcMonitorServerPort,
               0,
               0LL,
               0LL,
               &ConnectionRequest,
               &BufferLength,
               0LL,
               0LL);
    if ( result )
      break;
    if ( LOBYTE(ConnectionRequest.u2.ZeroInit) == 3 )
    {
      PopMonitorProcessBrightnessAction(v5, v6);
    }
    else if ( LOBYTE(ConnectionRequest.u2.ZeroInit) > 4u )
    {
      if ( LOBYTE(ConnectionRequest.u2.ZeroInit) <= 6u )
      {
        ZwClose(PopAlpcMonitorClientPort);
        PopAlpcMonitorClientPort = 0LL;
      }
      else if ( LOBYTE(ConnectionRequest.u2.ZeroInit) == 10 )
      {
        if ( PopAlpcMonitorClientPort )
        {
          ZwClose(PopAlpcMonitorClientPort);
          PopAlpcMonitorClientPort = 0LL;
        }
        memset(&PortAttributes, 0, sizeof(PortAttributes));
        PortAttributes.Flags = 0x100000;
        PortAttributes.MaxMessageLength = 256LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwAlpcAcceptConnectPort(
               &PopAlpcMonitorClientPort,
               PopAlpcMonitorServerPort,
               0,
               &ObjectAttributes,
               &PortAttributes,
               0LL,
               &ConnectionRequest,
               0LL,
               1u) < 0 )
          ZwAlpcAcceptConnectPort(
            &PopAlpcMonitorClientPort,
            PopAlpcMonitorServerPort,
            0,
            &ObjectAttributes,
            &PortAttributes,
            0LL,
            &ConnectionRequest,
            0LL,
            0);
      }
    }
  }
  return result;
}
