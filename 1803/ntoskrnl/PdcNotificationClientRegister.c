/*
 * XREFs of PdcNotificationClientRegister @ 0x14078B970
 * Callers:
 *     PopInitializeDirectedDrips @ 0x1408A9118 (PopInitializeDirectedDrips.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400639B0 (ExfReleasePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PdcPortOpen @ 0x140624808 (PdcPortOpen.c)
 *     PdcAcquireRwLockExclusive @ 0x14078BEFC (PdcAcquireRwLockExclusive.c)
 */

__int64 __fastcall PdcNotificationClientRegister(unsigned int a1, int *a2, __int64 a3, _QWORD *a4)
{
  int v4; // eax
  unsigned int v9; // edi
  char *PoolWithTag; // rax
  char *v12; // rsi
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  signed __int64 *v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  signed __int64 v18; // rax
  __int64 v19; // rdx
  signed __int64 v20; // rtt
  signed __int64 v21; // rax
  __int64 v22; // rdx
  signed __int64 v23; // rtt
  __int64 v24; // [rsp+20h] [rbp-38h]
  __int64 v25; // [rsp+28h] [rbp-30h]
  __int64 v26; // [rsp+30h] [rbp-28h]
  __int64 (__fastcall *v27)(); // [rsp+78h] [rbp+20h] BYREF

  v4 = *a2;
  *a4 = 0LL;
  if ( v4 == 1 )
  {
    if ( *((_QWORD *)a2 + 1) )
      goto LABEL_8;
    return (unsigned int)-1073741584;
  }
  if ( v4 != 2 || !*((_QWORD *)a2 + 2) )
    return (unsigned int)-1073741584;
LABEL_8:
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x4E636450u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x80uLL);
    v13 = *(_OWORD *)a2;
    *(_DWORD *)v12 = 1315136592;
    v14 = *((_OWORD *)a2 + 1);
    v15 = (signed __int64 *)(v12 + 8);
    *((_DWORD *)v12 + 8) = a1;
    *(_OWORD *)(v12 + 56) = v13;
    v12[88] = 1;
    *(_OWORD *)(v12 + 72) = v14;
    *((_QWORD *)v12 + 6) = a3;
    v27 = PdcpNotificationClientCallback;
    *((_QWORD *)v12 + 2) = 0LL;
    *((_QWORD *)v12 + 3) = 0LL;
    *((_QWORD *)v12 + 1) = 0LL;
    PdcAcquireRwLockExclusive(v12 + 8);
    v9 = PdcPortOpen(a1, 0, (__int64)v12, (__int64 *)&v27, v24, v25, v26, (_QWORD *)v12 + 5);
    if ( v9 )
    {
      *((_QWORD *)v12 + 2) = 0LL;
      _m_prefetchw(v15);
      v18 = *v15;
      v19 = *v15 - 16;
      if ( (*v15 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v19 = 0LL;
      if ( (v18 & 2) != 0 || (v20 = *v15, v20 != _InterlockedCompareExchange64(v15, v19, v18)) )
        ExfReleasePushLock((_QWORD *)v12 + 1, v19, v16, v17);
      KeAbPostRelease((ULONG_PTR)(v12 + 8));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    else
    {
      *a4 = v12;
      *((_QWORD *)v12 + 2) = 0LL;
      _m_prefetchw(v15);
      v21 = *v15;
      v22 = *v15 - 16;
      if ( (*v15 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v22 = 0LL;
      if ( (v21 & 2) != 0 || (v23 = *v15, v23 != _InterlockedCompareExchange64(v15, v22, v21)) )
        ExfReleasePushLock((_QWORD *)v12 + 1, v22, v16, v17);
      KeAbPostRelease((ULONG_PTR)(v12 + 8));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v12 = 0LL;
    }
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v9;
}
