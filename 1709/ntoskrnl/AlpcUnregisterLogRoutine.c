/*
 * XREFs of AlpcUnregisterLogRoutine @ 0x1406DE350
 * Callers:
 *     EtwpDisableKernelTrace @ 0x1405970E0 (EtwpDisableKernelTrace.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 AlpcUnregisterLogRoutine()
{
  unsigned int v0; // ebx
  void (__fastcall **i)(__int64, int); // rcx
  void (__fastcall *v3)(__int64, int); // rax
  void (__fastcall ***v4)(__int64, int); // rdx

  v0 = -1073741275;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpLogLock, 0LL);
  for ( i = (void (__fastcall **)(__int64, int))AlpcpLogCallbackListHead;
        i != (void (__fastcall **)(__int64, int))&AlpcpLogCallbackListHead;
        i = (void (__fastcall **)(__int64, int))*i )
  {
    if ( i[2] == EtwpTraceALPC )
    {
      v3 = *i;
      if ( *((void (__fastcall ***)(__int64, int))*i + 1) != i
        || (v4 = (void (__fastcall ***)(__int64, int))i[1], *v4 != i) )
      {
        __fastfail(3u);
      }
      *v4 = (void (__fastcall **)(__int64, int))v3;
      *((_QWORD *)v3 + 1) = v4;
      ExFreePoolWithTag(i, 0);
      v0 = 0;
      break;
    }
  }
  AlpcpLogEnabled = AlpcpLogCallbackListHead != (_UNKNOWN *)&AlpcpLogCallbackListHead;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpLogLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
  return v0;
}
