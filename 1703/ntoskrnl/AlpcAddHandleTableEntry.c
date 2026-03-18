/*
 * XREFs of AlpcAddHandleTableEntry @ 0x14047A19C
 * Callers:
 *     AlpcpCreateSection @ 0x140436860 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x14043CDF4 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x14047C5D4 (AlpcpCreateSecurityContext.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcAddHandleTableEntry(__int64 a1, _QWORD *a2)
{
  volatile signed __int64 *v2; // rdi
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rcx
  PVOID PoolWithTag; // rax
  void *v9; // r14
  __int64 v10; // rbp
  __int64 v11; // rbp
  int v12; // eax

  v2 = (volatile signed __int64 *)(a1 + 16);
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  v5 = *(unsigned int *)(a1 + 8);
  v6 = 0LL;
  if ( (_DWORD)v5 )
  {
    v7 = *(_QWORD **)a1;
    while ( *v7 )
    {
      ++v6;
      ++v7;
      if ( v6 >= v5 )
        goto LABEL_5;
    }
    *v7 = *a2;
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    return v6 + 16;
  }
  else
  {
LABEL_5:
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16 * v5, 0x61486C41u);
    v9 = PoolWithTag;
    v10 = -1LL;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 16LL * *(unsigned int *)(a1 + 8));
      memmove(v9, *(const void **)a1, 8LL * *(unsigned int *)(a1 + 8));
      v11 = *(unsigned int *)(a1 + 8);
      *((_QWORD *)v9 + v11) = *a2;
      if ( *(_DWORD *)(a1 + 8) == 16 )
        ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&stru_140380100, *(PVOID *)a1);
      else
        ExFreePoolWithTag(*(PVOID *)a1, 0x61486C41u);
      v12 = 2 * *(_DWORD *)(a1 + 8);
      *(_QWORD *)a1 = v9;
      *(_DWORD *)(a1 + 8) = v12;
      v10 = v11 + 16;
    }
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    return v10;
  }
}
