/*
 * XREFs of AlpcDeleteBlobByHandle @ 0x14047A04C
 * Callers:
 *     AlpcSectionDeleteProcedure @ 0x140446050 (AlpcSectionDeleteProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x140447FF0 (AlpcSectionDestroyProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x140458F00 (AlpcReserveDestroyProcedure.c)
 *     AlpcSecurityDestroyProcedure @ 0x14047A0F0 (AlpcSecurityDestroyProcedure.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcDeleteBlobByHandle(__int64 a1, int a2, __int64 a3)
{
  char v3; // di
  volatile signed __int64 *v6; // rbx
  unsigned int v7; // esi

  v3 = 0;
  if ( !a1 )
    return 0;
  v6 = (volatile signed __int64 *)(a1 + 16);
  v7 = a2 - 16;
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  if ( v7 < *(_DWORD *)(a1 + 8) && *(_QWORD *)(*(_QWORD *)a1 + 8LL * v7) == a3 )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * v7) = 0LL;
    v3 = 1;
  }
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  return v3;
}
