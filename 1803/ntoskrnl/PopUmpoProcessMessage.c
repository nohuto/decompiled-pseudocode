/*
 * XREFs of PopUmpoProcessMessage @ 0x140518A1C
 * Callers:
 *     PopUmpoProcessMessages @ 0x140072FE0 (PopUmpoProcessMessages.c)
 *     PopUmpoSendPowerMessage @ 0x1400760DC (PopUmpoSendPowerMessage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x1401A8360 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x1401A8380 (ZwAlpcCancelMessage.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopUmpoProcessPowerMessage @ 0x140518B54 (PopUmpoProcessPowerMessage.c)
 *     PopAcquireUmpoPushLock @ 0x140524940 (PopAcquireUmpoPushLock.c)
 */

__int64 __fastcall PopUmpoProcessMessage(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v4; // eax
  int v5; // ebx
  HANDLE v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD v10[9]; // [rsp+80h] [rbp-68h] BYREF

  v3 = *(unsigned __int16 *)(a1 + 4);
  v4 = v3 & 0xFFFF00FF;
  if ( (v3 & 0xFFFF00FF) == 1 )
    goto LABEL_15;
  if ( v4 <= 1 )
    return 0;
  if ( v4 > 3 )
  {
    if ( v4 > 4 )
    {
      if ( v4 <= 6 )
      {
        LOBYTE(v3) = 1;
        PopUmpoAlpcClientConnected = 0;
        PopAcquireUmpoPushLock(v3);
        v7 = PopAlpcClientPort;
        PopAlpcClientPort = 0LL;
        ExReleasePushLockEx((ULONG_PTR)&PopUmpoPushLock, 0LL, v8, v9);
        KeLeaveCriticalRegion();
        ZwClose(v7);
        return (unsigned int)-1073740032;
      }
      if ( v4 == 10 )
      {
        memset(v10, 0, sizeof(v10));
        v10[2] = 512LL;
        v5 = ZwAlpcAcceptConnectPort((__int64)&PopAlpcClientPort, PopAlpcServerPort, 0LL);
        if ( v5 < 0 )
        {
          ZwAlpcAcceptConnectPort((__int64)&PopAlpcClientPort, PopAlpcServerPort, 0LL);
          return (unsigned int)v5;
        }
        PopUmpoAlpcClientConnected = 1;
      }
    }
    return 0;
  }
  if ( (v3 & 0x2000) != 0 )
  {
LABEL_15:
    ZwAlpcCancelMessage(PopAlpcServerPort, 0LL, a2);
    return 0;
  }
  v5 = PopUmpoProcessPowerMessage(a1 + 40);
  if ( v5 >= 0 )
    return 0;
  return (unsigned int)v5;
}
