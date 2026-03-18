/*
 * XREFs of EtwpRealtimeDisconnectConsumer @ 0x1405E7028
 * Callers:
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x1405E6FA4 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpCloseRealTimeConnectionObject @ 0x1405E7010 (EtwpCloseRealTimeConnectionObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     EtwpSynchronizeWithLogger @ 0x140580194 (EtwpSynchronizeWithLogger.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpRealtimeDisconnectConsumer(__int64 a1)
{
  unsigned int *v2; // rax
  __int64 v3; // rsi
  ULONG_PTR v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx

  if ( (*(_BYTE *)(a1 + 90) & 5) != 0 )
  {
    return (unsigned int)-2147483611;
  }
  else
  {
    v2 = EtwpAcquireLoggerContextByLoggerId(*(_QWORD *)(a1 + 152), *(unsigned __int16 *)(a1 + 88), 1);
    v3 = (__int64)v2;
    if ( v2 )
    {
      v4 = (ULONG_PTR)(v2 + 176);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v2 + 176), 0LL);
      *(_QWORD *)(v3 + 368) = a1;
      ExReleasePushLockEx(v4, 0LL, v5, v6);
      v7 = EtwpSynchronizeWithLogger(v3, 0x10u);
      EtwpSynchronizeWithLogger(v3, 4u);
      EtwpReleaseLoggerContext((unsigned int *)v3, 1);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v7;
}
