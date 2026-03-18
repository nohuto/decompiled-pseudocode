/*
 * XREFs of EtwpTrackBinaryForSession @ 0x1407515FC
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1404F0FC4 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

char __fastcall EtwpTrackBinaryForSession(__int64 a1, const void **a2, __int64 a3)
{
  volatile signed __int64 *v3; // r12
  void ***v6; // rsi
  void ***v7; // rbx
  SIZE_T v8; // rdi
  char *PoolWithTag; // rax
  char *v10; // rdi
  __int64 v11; // rbx
  char *v12; // rbx
  void **v13; // rax
  unsigned int v14; // r8d
  unsigned int v15; // edx
  __int64 v16; // r9
  __int64 v17; // rcx
  char *v18; // rax
  __int64 v19; // rcx
  void **v20; // rcx
  void **v21; // rax

  v3 = (volatile signed __int64 *)(a1 + 704);
  ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  if ( *(_DWORD *)(a1 + 340) + (unsigned int)*(unsigned __int16 *)a2 > *(_DWORD *)(a1 + 4) )
    goto LABEL_23;
  v6 = (void ***)(a1 + 2168);
  v7 = *(void ****)(a1 + 2168);
  if ( v7 == (void ***)(a1 + 2168) )
  {
LABEL_7:
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)*(unsigned __int16 *)a2 + 50, 0x62777445u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_23;
    *((_DWORD *)PoolWithTag + 5) = 1;
    *((_DWORD *)PoolWithTag + 6) = 1;
    *(_OWORD *)(PoolWithTag + 28) = *(_OWORD *)a3;
    v11 = *((unsigned int *)PoolWithTag + 5);
    *((_DWORD *)PoolWithTag + 4) = *(unsigned __int16 *)a2 + 2;
    v12 = &PoolWithTag[16 * v11];
    memmove(v12 + 28, a2[1], *(unsigned __int16 *)a2);
    *(_WORD *)&v12[2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1) + 28] = 0;
    *(_DWORD *)(a1 + 340) += *((_DWORD *)v10 + 4) + 16;
LABEL_9:
    v13 = *v6;
    if ( (*v6)[1] != v6 )
      __fastfail(3u);
    *(_QWORD *)v10 = v13;
    *((_QWORD *)v10 + 1) = v6;
    v13[1] = v10;
    *v6 = (void **)v10;
    _InterlockedOr((volatile signed __int32 *)(a1 + 836), 0xC0u);
    goto LABEL_23;
  }
  v8 = *(unsigned __int16 *)a2;
  while ( 1 )
  {
    if ( *((_DWORD *)v7 + 4) == v8 + 2 )
    {
      v8 = *(unsigned __int16 *)a2;
      if ( RtlCompareMemory((char *)&v7[2 * *((unsigned int *)v7 + 5) + 3] + 4, a2[1], v8) == v8 )
        break;
    }
    v7 = (void ***)*v7;
    if ( v7 == v6 )
      goto LABEL_7;
  }
  v14 = *((_DWORD *)v7 + 5);
  v15 = 0;
  if ( !v14 )
  {
LABEL_16:
    if ( v14 >= 0x10 )
      goto LABEL_23;
    v18 = (char *)ExAllocatePoolWithTag(PagedPool, *((_DWORD *)v7 + 4) + 16 * (v14 + 3), 0x62777445u);
    v10 = v18;
    if ( !v18 )
      goto LABEL_23;
    memmove(v18 + 28, (char *)v7 + 28, 16LL * *((unsigned int *)v7 + 5));
    *(_OWORD *)&v10[16 * *((unsigned int *)v7 + 5) + 28] = *(_OWORD *)a3;
    v19 = (unsigned int)(*((_DWORD *)v7 + 5) + 1);
    *((_DWORD *)v10 + 5) = v19;
    *((_DWORD *)v10 + 6) = *((_DWORD *)v7 + 6) + 1;
    *((_DWORD *)v10 + 4) = *((_DWORD *)v7 + 4);
    memmove(&v10[16 * v19 + 28], (char *)&v7[2 * *((unsigned int *)v7 + 5) + 3] + 4, *((unsigned int *)v7 + 4));
    v20 = *v7;
    if ( (*v7)[1] != v7 || (v21 = v7[1], *v21 != v7) )
      __fastfail(3u);
    *v21 = v20;
    v20[1] = v21;
    ExFreePoolWithTag(v7, 0);
    goto LABEL_9;
  }
  while ( 1 )
  {
    v16 = 2LL * v15;
    v17 = *(_QWORD *)a3 - *(_QWORD *)((char *)&v7[v16 + 3] + 4);
    if ( *(void ***)a3 == *(void ***)((char *)&v7[v16 + 3] + 4) )
      v17 = *(_QWORD *)(a3 + 8) - *(_QWORD *)((char *)&v7[v16 + 4] + 4);
    if ( !v17 )
      break;
    if ( ++v15 >= v14 )
      goto LABEL_16;
  }
LABEL_23:
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  return KeAbPostRelease((ULONG_PTR)v3);
}
