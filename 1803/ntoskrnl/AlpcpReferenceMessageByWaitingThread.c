/*
 * XREFs of AlpcpReferenceMessageByWaitingThread @ 0x1407488C8
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x140748D94 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectSafe @ 0x1400A9D20 (ObReferenceObjectSafe.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x1407489D8 (AlpcpReferenceMessageByWaitingThreadPort.c)
 */

__int64 __fastcall AlpcpReferenceMessageByWaitingThread(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbp
  __int64 *v5; // rdi
  unsigned int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *i; // rsi
  __int64 result; // rax

  v4 = 0LL;
  v5 = 0LL;
  v6 = -1073741275;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpPortListLock, 0LL);
  for ( i = (__int64 *)AlpcpPortList; i != &AlpcpPortList; i = (__int64 *)*i )
  {
    if ( ObReferenceObjectSafe((__int64)i) )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock, v7, v8, v9);
      KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
      if ( v5 )
        ObfDereferenceObject(v5);
      v5 = i;
      v4 = AlpcpReferenceMessageByWaitingThreadPort(a1, i);
      if ( v4 )
      {
        v6 = 0;
        goto LABEL_14;
      }
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpPortListLock, 0LL);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock, v7, v8, v9);
  KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
LABEL_14:
  if ( v5 )
    ObfDereferenceObject(v5);
  result = v6;
  *a2 = v4;
  return result;
}
