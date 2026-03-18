/*
 * XREFs of PopUmpoProcessMessage @ 0x1404C190C
 * Callers:
 *     PopUmpoProcessMessages @ 0x14006F080 (PopUmpoProcessMessages.c)
 *     PopUmpoSendPowerMessage @ 0x14007210C (PopUmpoSendPowerMessage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwAlpcAcceptConnectPort @ 0x14017EDC0 (ZwAlpcAcceptConnectPort.c)
 *     ZwAlpcCancelMessage @ 0x14017EDE0 (ZwAlpcCancelMessage.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopUmpoProcessPowerMessage @ 0x1404C1A44 (PopUmpoProcessPowerMessage.c)
 *     PopAcquireUmpoPushLock @ 0x1404C7120 (PopAcquireUmpoPushLock.c)
 */

__int64 __fastcall PopUmpoProcessMessage(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v4; // eax
  int v5; // ebx
  HANDLE v7; // rbx
  _QWORD v8[9]; // [rsp+80h] [rbp-68h] BYREF

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
        ExReleasePushLockEx((ULONG_PTR)&PopUmpoPushLock, 0LL);
        KeLeaveCriticalRegion();
        ZwClose(v7);
        return (unsigned int)-1073740032;
      }
      if ( v4 == 10 )
      {
        memset(v8, 0, sizeof(v8));
        v8[2] = 512LL;
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
