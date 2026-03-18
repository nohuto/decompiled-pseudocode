/*
 * XREFs of AlpcUnregisterLogRoutine @ 0x1406B2600
 * Callers:
 *     EtwpDisableKernelTrace @ 0x1404354A0 (EtwpDisableKernelTrace.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 AlpcUnregisterLogRoutine()
{
  unsigned int v0; // ebx
  PVOID *v1; // rax
  void *(__fastcall **v2)(__int64, int); // rcx
  bool v3; // zf
  void *(__fastcall *v5)(__int64, int); // rdx
  PVOID *v6; // rax

  v0 = -1073741275;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpLogLock, 0LL);
  v1 = (PVOID *)AlpcpLogCallbackListHead;
  v2 = (void *(__fastcall **)(__int64, int))AlpcpLogCallbackListHead;
  v3 = AlpcpLogCallbackListHead == &AlpcpLogCallbackListHead;
  if ( AlpcpLogCallbackListHead != &AlpcpLogCallbackListHead )
  {
    while ( v2[2] != EtwpTraceALPC )
    {
      v2 = (void *(__fastcall **)(__int64, int))*v2;
      if ( v2 == (void *(__fastcall **)(__int64, int))&AlpcpLogCallbackListHead )
        goto LABEL_4;
    }
    v5 = *v2;
    v6 = (PVOID *)v2[1];
    if ( *((void *(__fastcall ***)(__int64, int))*v2 + 1) != v2 || *v6 != v2 )
      __fastfail(3u);
    *v6 = v5;
    *((_QWORD *)v5 + 1) = v6;
    ExFreePoolWithTag(v2, 0);
    v1 = (PVOID *)AlpcpLogCallbackListHead;
    v0 = 0;
LABEL_4:
    v3 = v1 == &AlpcpLogCallbackListHead;
  }
  AlpcpLogEnabled = !v3;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpLogLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
  return v0;
}
