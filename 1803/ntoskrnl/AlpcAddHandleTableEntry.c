/*
 * XREFs of AlpcAddHandleTableEntry @ 0x140556E34
 * Callers:
 *     AlpcpCreateSecurityContext @ 0x1404D2E50 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateReserve @ 0x140556174 (AlpcpCreateReserve.c)
 *     AlpcpCreateSection @ 0x140556B5C (AlpcpCreateSection.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AlpcAddHandleTableEntry(__int64 a1, _QWORD *a2)
{
  volatile signed __int64 *v2; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  _QWORD *v9; // rcx
  PVOID PoolWithTag; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // r14
  __int64 v15; // rbp
  __int64 v16; // rbp
  int v17; // eax

  v2 = (volatile signed __int64 *)(a1 + 16);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  v7 = *(unsigned int *)(a1 + 8);
  v8 = 0LL;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v9 = *(_QWORD **)a1;
    while ( *v9 )
    {
      ++v8;
      ++v9;
      if ( v8 >= v7 )
        goto LABEL_5;
    }
    *v9 = *a2;
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2, v7, v5, v6);
    KeAbPostRelease((ULONG_PTR)v2);
    return v8 + 16;
  }
  else
  {
LABEL_5:
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16 * v7, 0x61486C41u);
    v14 = PoolWithTag;
    v15 = -1LL;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 16LL * *(unsigned int *)(a1 + 8));
      memmove(v14, *(const void **)a1, 8LL * *(unsigned int *)(a1 + 8));
      v16 = *(unsigned int *)(a1 + 8);
      *((_QWORD *)v14 + v16) = *a2;
      if ( *(_DWORD *)(a1 + 8) == 16 )
        ExFreeToNPagedLookasideList(&stru_1403E2500, *(PVOID *)a1);
      else
        ExFreePoolWithTag(*(PVOID *)a1, 0x61486C41u);
      v17 = 2 * *(_DWORD *)(a1 + 8);
      *(_QWORD *)a1 = v14;
      *(_DWORD *)(a1 + 8) = v17;
      v15 = v16 + 16;
    }
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2, v11, v12, v13);
    KeAbPostRelease((ULONG_PTR)v2);
    return v15;
  }
}
