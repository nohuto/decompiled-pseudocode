/*
 * XREFs of AlpcUnregisterLogRoutine @ 0x14074923C
 * Callers:
 *     EtwpDisableKernelTrace @ 0x14057BDC8 (EtwpDisableKernelTrace.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 AlpcUnregisterLogRoutine()
{
  unsigned int v0; // ebx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 (__fastcall **v3)(__int64, int); // rcx
  __int64 (__fastcall *v4)(__int64, int); // rax
  __int64 v5; // rdx
  PVOID *v7; // rdx

  v0 = -1073741275;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpLogLock, 0LL);
  v3 = (__int64 (__fastcall **)(__int64, int))AlpcpLogCallbackListHead;
  if ( AlpcpLogCallbackListHead != &AlpcpLogCallbackListHead )
  {
    while ( 1 )
    {
      v4 = *v3;
      if ( v3[2] == EtwpTraceALPC )
        break;
      v3 = (__int64 (__fastcall **)(__int64, int))*v3;
      if ( (char *)v4 == (char *)&AlpcpLogCallbackListHead )
        goto LABEL_4;
    }
    if ( *((__int64 (__fastcall ***)(__int64, int))v4 + 1) != v3 || (v7 = (PVOID *)v3[1], *v7 != v3) )
      __fastfail(3u);
    *v7 = v4;
    *((_QWORD *)v4 + 1) = v7;
    ExFreePoolWithTag(v3, 0);
    v0 = 0;
  }
LABEL_4:
  AlpcpLogEnabled = AlpcpLogCallbackListHead != &AlpcpLogCallbackListHead;
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpLogLock, 0xFFFFFFFFFFFFFFFFuLL);
  LOBYTE(v5) = v5 & 6;
  if ( (_BYTE)v5 == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpLogLock, v5, v1, v2);
  KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
  return v0;
}
