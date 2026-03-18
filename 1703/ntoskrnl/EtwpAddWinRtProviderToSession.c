/*
 * XREFs of EtwpAddWinRtProviderToSession @ 0x1407132C4
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x140448030 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAddWinRtProviderToSession(__int64 a1, const void **a2, __int64 a3)
{
  volatile signed __int64 *v3; // r12
  _DWORD *v7; // rsi
  _DWORD *v8; // rbx
  SIZE_T v9; // rdi
  char *PoolWithTag; // rax
  char *v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // r8d
  __int64 v15; // r9
  __int64 v16; // rcx
  char *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  void **v20; // rax

  v3 = (volatile signed __int64 *)(a1 + 688);
  ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
  if ( *(_DWORD *)(a1 + 324) + (unsigned int)*(unsigned __int16 *)a2 > *(_DWORD *)(a1 + 4) )
    goto LABEL_23;
  v7 = (_DWORD *)(a1 + 856);
  v8 = *(_DWORD **)(a1 + 856);
  if ( v8 == (_DWORD *)(a1 + 856) )
  {
LABEL_7:
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)a2 + 42LL, 0x62777445u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_23;
    *((_DWORD *)PoolWithTag + 5) = 1;
    *(_OWORD *)(PoolWithTag + 24) = *(_OWORD *)a3;
    *((_DWORD *)PoolWithTag + 4) = *(unsigned __int16 *)a2 + 2;
    memmove(PoolWithTag + 40, a2[1], *(unsigned __int16 *)a2);
    *(_WORD *)&v11[2 * ((unsigned __int64)*(unsigned __int16 *)a2 >> 1) + 40] = 0;
    *(_DWORD *)(a1 + 324) += *((_DWORD *)v11 + 4) + 16;
LABEL_9:
    v12 = *(_QWORD *)v7;
    if ( *(_DWORD **)(*(_QWORD *)v7 + 8LL) != v7 )
      __fastfail(3u);
    *(_QWORD *)v11 = v12;
    *((_QWORD *)v11 + 1) = v7;
    *(_QWORD *)(v12 + 8) = v11;
    *(_QWORD *)v7 = v11;
    _InterlockedOr((volatile signed __int32 *)(a1 + 820), 0x80u);
    goto LABEL_23;
  }
  v9 = *(unsigned __int16 *)a2;
  while ( 1 )
  {
    if ( v8[4] == v9 + 2 )
    {
      v9 = *(unsigned __int16 *)a2;
      if ( RtlCompareMemory(&v8[4 * v8[5] + 6], a2[1], v9) == v9 )
        break;
    }
    v8 = *(_DWORD **)v8;
    if ( v8 == v7 )
      goto LABEL_7;
  }
  v13 = v8[5];
  v14 = 0;
  if ( !v13 )
  {
LABEL_16:
    if ( v13 >= 0x10 )
      goto LABEL_23;
    v17 = (char *)ExAllocatePoolWithTag(PagedPool, v8[4] + 40 + 16 * v13, 0x62777445u);
    v11 = v17;
    if ( !v17 )
      goto LABEL_23;
    memmove(v17 + 24, v8 + 6, 16LL * (unsigned int)v8[5]);
    *(_OWORD *)&v11[16 * v8[5] + 24] = *(_OWORD *)a3;
    v18 = (unsigned int)(v8[5] + 1);
    *((_DWORD *)v11 + 5) = v18;
    *((_DWORD *)v11 + 4) = v8[4];
    memmove(&v11[16 * v18 + 24], &v8[4 * v8[5] + 6], (unsigned int)v8[4]);
    v19 = *(_QWORD **)v8;
    v20 = (void **)*((_QWORD *)v8 + 1);
    if ( *(_DWORD **)(*(_QWORD *)v8 + 8LL) != v8 || *v20 != v8 )
      __fastfail(3u);
    *v20 = v19;
    v19[1] = v20;
    ExFreePoolWithTag(v8, 0);
    goto LABEL_9;
  }
  while ( 1 )
  {
    v15 = 4LL * v14;
    v16 = *(_QWORD *)a3 - *(_QWORD *)&v8[v15 + 6];
    if ( *(_QWORD *)a3 == *(_QWORD *)&v8[v15 + 6] )
      v16 = *(_QWORD *)(a3 + 8) - *(_QWORD *)&v8[v15 + 8];
    if ( !v16 )
      break;
    if ( ++v14 >= v13 )
      goto LABEL_16;
  }
LABEL_23:
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  return KeAbPostRelease((ULONG_PTR)v3);
}
