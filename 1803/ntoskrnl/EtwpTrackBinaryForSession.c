/*
 * XREFs of EtwpTrackBinaryForSession @ 0x1407B2344
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x14058C90C (EtwpProviderArrivalCallback.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

char __fastcall EtwpTrackBinaryForSession(__int64 a1, const void **a2, __int64 a3)
{
  volatile signed __int64 *v3; // r15
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  SIZE_T v9; // rdi
  void ***v10; // rsi
  void ***v11; // rbx
  SIZE_T v12; // r14
  char *PoolWithTag; // rax
  char *v14; // rdi
  __int64 v15; // rbx
  char *v16; // rbx
  void **v17; // rax
  __int64 v18; // rcx
  char *v19; // rax
  __int64 v20; // rcx
  void **v21; // rcx
  void **v22; // rax

  v3 = (volatile signed __int64 *)(a1 + 704);
  ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  LOWORD(v9) = *(_WORD *)a2;
  if ( *(_DWORD *)(a1 + 340) + (unsigned int)*(unsigned __int16 *)a2 > *(_DWORD *)(a1 + 4) )
    goto LABEL_23;
  v10 = (void ***)(a1 + 1024);
  v11 = *(void ****)(a1 + 1024);
  if ( v11 == (void ***)(a1 + 1024) )
  {
LABEL_7:
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(unsigned __int16)v9 + 50, 0x62777445u);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_23;
    *((_DWORD *)PoolWithTag + 5) = 1;
    *((_DWORD *)PoolWithTag + 6) = 1;
    *(_OWORD *)(PoolWithTag + 28) = *(_OWORD *)a3;
    v15 = *((unsigned int *)PoolWithTag + 5);
    *((_DWORD *)PoolWithTag + 4) = *(unsigned __int16 *)a2 + 2;
    v16 = &PoolWithTag[16 * v15];
    memmove(v16 + 28, a2[1], *(unsigned __int16 *)a2);
    *(_WORD *)&v16[2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1) + 28] = 0;
    *(_DWORD *)(a1 + 340) += *((_DWORD *)v14 + 4) + 16;
LABEL_9:
    v17 = *v10;
    if ( (*v10)[1] != v10 )
      __fastfail(3u);
    *(_QWORD *)v14 = v17;
    *((_QWORD *)v14 + 1) = v10;
    v17[1] = v14;
    *v10 = (void **)v14;
    _InterlockedOr((volatile signed __int32 *)(a1 + 836), 0xC0u);
    goto LABEL_23;
  }
  v12 = *(unsigned __int16 *)a2;
  while ( 1 )
  {
    if ( *((_DWORD *)v11 + 4) == v12 + 2 )
    {
      v9 = *(unsigned __int16 *)a2;
      v12 = v9;
      if ( RtlCompareMemory((char *)&v11[2 * *((unsigned int *)v11 + 5) + 3] + 4, a2[1], v9) == v9 )
        break;
    }
    v11 = (void ***)*v11;
    if ( v11 == v10 )
      goto LABEL_7;
  }
  v7 = *((unsigned int *)v11 + 5);
  v6 = 0LL;
  if ( !(_DWORD)v7 )
  {
LABEL_16:
    if ( (unsigned int)v7 >= 0x10 )
      goto LABEL_23;
    v19 = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(*((_DWORD *)v11 + 4) + 16 * (v7 + 3)), 0x62777445u);
    v14 = v19;
    if ( !v19 )
      goto LABEL_23;
    memmove(v19 + 28, (char *)v11 + 28, 16LL * *((unsigned int *)v11 + 5));
    *(_OWORD *)&v14[16 * *((unsigned int *)v11 + 5) + 28] = *(_OWORD *)a3;
    v20 = (unsigned int)(*((_DWORD *)v11 + 5) + 1);
    *((_DWORD *)v14 + 5) = v20;
    *((_DWORD *)v14 + 6) = *((_DWORD *)v11 + 6) + 1;
    *((_DWORD *)v14 + 4) = *((_DWORD *)v11 + 4);
    memmove(&v14[16 * v20 + 28], (char *)&v11[2 * *((unsigned int *)v11 + 5) + 3] + 4, *((unsigned int *)v11 + 4));
    v21 = *v11;
    if ( (*v11)[1] != v11 || (v22 = v11[1], *v22 != v11) )
      __fastfail(3u);
    *v22 = v21;
    v21[1] = v22;
    ExFreePoolWithTag(v11, 0);
    goto LABEL_9;
  }
  while ( 1 )
  {
    v8 = 2LL * (unsigned int)v6;
    v18 = *(_QWORD *)a3 - *(_QWORD *)((char *)&v11[v8 + 3] + 4);
    if ( *(void ***)a3 == *(void ***)((char *)&v11[v8 + 3] + 4) )
      v18 = *(_QWORD *)(a3 + 8) - *(_QWORD *)((char *)&v11[v8 + 4] + 4);
    if ( !v18 )
      break;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= (unsigned int)v7 )
      goto LABEL_16;
  }
LABEL_23:
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3, v6, v7, v8 * 8);
  return KeAbPostRelease((ULONG_PTR)v3);
}
