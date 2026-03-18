/*
 * XREFs of ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C0166760
 * Callers:
 *     ?CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z @ 0x1C01664E4 (-CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z.c)
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C0166BE8 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 *     ?PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z @ 0x1C0166D10 (-PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01663A8 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     ?HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2@@Z @ 0x1C0166A24 (-HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2.c)
 *     ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1C0166A94 (-HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@.c)
 */

void __fastcall CoreMessagingK::ServerPorts::DrainPort(struct CoreMessagingK::ServerPortInfo *a1)
{
  int v2; // eax
  struct CoreMessagingK::ClientPortInfo **v3; // rax
  __int64 MessageAttribute; // rax
  int v5; // eax
  __int64 v6; // [rsp+28h] [rbp-E0h]
  __int64 v7; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v9[48]; // [rsp+58h] [rbp-B0h] BYREF
  _PORT_MESSAGE v10; // [rsp+88h] [rbp-80h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = 512LL;
        v7 = 40LL;
        v5 = AlpcInitializeMessageAttribute(0x20000000LL, v9, 40LL, &v7, v6);
        if ( v5 < 0 )
          CoreMessagingK::Runtime::BugCheck(1537, v5, 0LL);
        v2 = ZwAlpcSendWaitReceivePort(*((_QWORD *)a1 + 1), 0LL, 0LL, 0LL, &v10, &v8, v9, 0LL);
        if ( v2 != -1073741789 )
          break;
LABEL_13:
        MessageAttribute = AlpcGetMessageAttribute(v9, 0x20000000LL);
        ZwAlpcCancelMessage(*((_QWORD *)a1 + 1), 0LL, MessageAttribute);
      }
      if ( v2 != -1073741769 )
      {
        if ( v2 <= -1073740033 )
          goto LABEL_17;
        if ( v2 > -1073740031 )
          break;
      }
    }
    if ( v2 )
      break;
    if ( LOBYTE(v10.u2.ZeroInit) < 5u )
    {
LABEL_12:
      if ( (v10.u2.s2.Type & 0x2000) != 0 )
        goto LABEL_13;
    }
    else if ( LOBYTE(v10.u2.ZeroInit) <= 6u )
    {
      v3 = (struct CoreMessagingK::ClientPortInfo **)AlpcGetMessageAttribute(v9, 0x20000000LL);
      CoreMessagingK::ServerPorts::HandleClientDisconnect(a1, *v3);
    }
    else
    {
      if ( LOBYTE(v10.u2.ZeroInit) != 10 )
        goto LABEL_12;
      CoreMessagingK::ServerPorts::HandleConnectionRequest(a1, &v10);
    }
  }
  if ( v2 != 258 )
LABEL_17:
    CoreMessagingK::Runtime::BugCheck(1538, v2, 0LL);
}
