/*
 * XREFs of AlpcDeleteBlobByHandle @ 0x14054055C
 * Callers:
 *     AlpcSectionDeleteProcedure @ 0x140460D20 (AlpcSectionDeleteProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x140540420 (AlpcSecurityDestroyProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x140588250 (AlpcSectionDestroyProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x140596100 (AlpcReserveDestroyProcedure.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcDeleteBlobByHandle(__int64 a1, int a2, __int64 a3)
{
  char v3; // di
  volatile signed __int64 *v7; // rbx
  __int64 v8; // rax

  v3 = 0;
  if ( !a1 )
    return 0;
  v7 = (volatile signed __int64 *)(a1 + 16);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  v8 = (unsigned int)(a2 - 16);
  if ( (unsigned int)v8 < *(_DWORD *)(a1 + 8) && *(_QWORD *)(*(_QWORD *)a1 + 8 * v8) == a3 )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v8) = 0LL;
    v3 = 1;
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  return v3;
}
