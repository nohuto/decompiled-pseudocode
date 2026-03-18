/*
 * XREFs of AlpcConnectionDestroyProcedure @ 0x140543EC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcConnectionDestroyProcedure(__int64 a1)
{
  PVOID v1; // rsi
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  __int64 v5; // rsi
  void *v6; // rcx
  ULONG_PTR v7; // rcx

  v1 = *(PVOID *)a1;
  if ( *(_QWORD *)a1 )
  {
    ExAcquirePushLockExclusiveEx(*((_QWORD *)v1 + 2) - 16LL, 0LL);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v1 + 352, 0LL);
    v3 = *(_QWORD *)(a1 + 24);
    v4 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD *)(v3 + 8) != a1 + 24 || *v4 != a1 + 24 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1 + 44);
    KeAbPostRelease((ULONG_PTR)v1 + 352);
    v5 = *((_QWORD *)v1 + 2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v5 - 16));
    KeAbPostRelease(v5 - 16);
    ObfDereferenceObject(*(PVOID *)a1);
  }
  v6 = *(void **)(a1 + 40);
  if ( v6 )
  {
    if ( *(_DWORD *)(a1 + 48) == 16 )
      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&stru_140380100, *(PVOID *)(a1 + 40));
    else
      ExFreePoolWithTag(v6, 0x61486C41u);
  }
  v7 = _InterlockedExchange64((volatile __int64 *)(a1 + 64), 0LL);
  if ( v7 )
    AlpcpDereferenceBlobEx(v7, 1);
  return 0LL;
}
