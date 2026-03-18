/*
 * XREFs of AlpcRegisterLogRoutine @ 0x14074914C
 * Callers:
 *     EtwpEnableKernelTrace @ 0x14057BB2C (EtwpEnableKernelTrace.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 AlpcRegisterLogRoutine()
{
  _QWORD *PoolWithTag; // rax
  unsigned int v1; // edi
  _QWORD *v2; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 (__fastcall **i)(__int64, int); // rax
  _QWORD *v7; // rax
  __int64 v8; // rdx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x634C6C41u);
  v1 = 0;
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[2] = EtwpTraceALPC;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpLogLock, 0LL);
  for ( i = (__int64 (__fastcall **)(__int64, int))AlpcpLogCallbackListHead;
        i != (__int64 (__fastcall **)(__int64, int))&AlpcpLogCallbackListHead;
        i = (__int64 (__fastcall **)(__int64, int))*i )
  {
    if ( i[2] == EtwpTraceALPC )
    {
      ExFreePoolWithTag(v2, 0);
      v1 = -1073740008;
      goto LABEL_11;
    }
  }
  v7 = off_1403997A0[0];
  if ( *(PVOID **)off_1403997A0[0] != &AlpcpLogCallbackListHead )
    __fastfail(3u);
  *v2 = &AlpcpLogCallbackListHead;
  v2[1] = v7;
  *v7 = v2;
  off_1403997A0[0] = v2;
  AlpcpLogEnabled = 1;
LABEL_11:
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpLogLock, 0xFFFFFFFFFFFFFFFFuLL);
  LOBYTE(v8) = v8 & 6;
  if ( (_BYTE)v8 == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpLogLock, v8, v4, v5);
  KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
  return v1;
}
