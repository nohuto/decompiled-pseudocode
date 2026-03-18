/*
 * XREFs of AlpcpReferenceMessageByWaitingThread @ 0x140561398
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1405611F4 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectSafe @ 0x140108160 (ObReferenceObjectSafe.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x14056149C (AlpcpReferenceMessageByWaitingThreadPort.c)
 */

__int64 __fastcall AlpcpReferenceMessageByWaitingThread(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbp
  __int64 *v5; // rdi
  unsigned int v6; // r14d
  __int64 *i; // rsi
  char v8; // al
  char v9; // bl
  __int64 result; // rax

  v4 = 0LL;
  v5 = 0LL;
  v6 = -1073741275;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpPortListLock, 0LL);
  for ( i = (__int64 *)AlpcpPortList; i != &AlpcpPortList; i = (__int64 *)*i )
  {
    if ( ObReferenceObjectSafe((__int64)i) )
    {
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock);
      KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
      if ( v5 )
        ObfDereferenceObject(v5);
      v5 = i;
      v4 = AlpcpReferenceMessageByWaitingThreadPort(a1, i);
      if ( v4 )
      {
        v6 = 0;
        goto LABEL_12;
      }
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpPortListLock, 0LL);
    }
  }
  v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
LABEL_12:
  if ( v5 )
    ObfDereferenceObject(v5);
  result = v6;
  *a2 = v4;
  return result;
}
