/*
 * XREFs of AlpcDeleteBlobByHandle @ 0x1404D7B8C
 * Callers:
 *     AlpcSecurityDestroyProcedure @ 0x1404D7AD0 (AlpcSecurityDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1404D9F40 (AlpcSectionDeleteProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x140573170 (AlpcSectionDestroyProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x14057F8E0 (AlpcReserveDestroyProcedure.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

char __fastcall AlpcDeleteBlobByHandle(__int64 a1, int a2, __int64 a3)
{
  char v3; // di
  volatile signed __int64 *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx

  v3 = 0;
  if ( !a1 )
    return 0;
  v7 = (volatile signed __int64 *)(a1 + 16);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  v10 = (unsigned int)(a2 - 16);
  if ( (unsigned int)v10 < *(_DWORD *)(a1 + 8) && *(_QWORD *)(*(_QWORD *)a1 + 8 * v10) == a3 )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v10) = 0LL;
    v3 = 1;
  }
  v11 = _InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL);
  LOBYTE(v11) = v11 & 6;
  if ( (_BYTE)v11 == 2 )
    ExfTryToWakePushLock(v7, v11, v8, v9);
  KeAbPostRelease((ULONG_PTR)v7);
  return v3;
}
