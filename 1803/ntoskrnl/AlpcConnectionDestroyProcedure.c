/*
 * XREFs of AlpcConnectionDestroyProcedure @ 0x140569170
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcConnectionDestroyProcedure(__int64 a1)
{
  PVOID v1; // rsi
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  void *v11; // rcx
  ULONG_PTR v12; // rcx

  v1 = *(PVOID *)a1;
  if ( *(_QWORD *)a1 )
  {
    ExAcquirePushLockExclusiveEx(*((_QWORD *)v1 + 2) - 16LL, 0LL);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v1 + 352, 0LL);
    v5 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(v5 + 8) != a1 + 24 || (v6 = *(__int64 **)(a1 + 32), *v6 != a1 + 24) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v1 + 44, v5, v3, v4);
    KeAbPostRelease((ULONG_PTR)v1 + 352);
    v10 = *((_QWORD *)v1 + 2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v10 - 16), v7, v8, v9);
    KeAbPostRelease(v10 - 16);
    ObfDereferenceObject(*(PVOID *)a1);
  }
  v11 = *(void **)(a1 + 40);
  if ( v11 )
  {
    if ( *(_DWORD *)(a1 + 48) == 16 )
      ExFreeToNPagedLookasideList(&stru_1403E2500, *(PVOID *)(a1 + 40));
    else
      ExFreePoolWithTag(v11, 0x61486C41u);
  }
  v12 = _InterlockedExchange64((volatile __int64 *)(a1 + 64), 0LL);
  if ( v12 )
    AlpcpDereferenceBlobEx(v12, 1);
  return 0LL;
}
