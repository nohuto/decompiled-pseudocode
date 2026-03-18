/*
 * XREFs of ObLogSecurityDescriptor @ 0x1404C6E50
 * Callers:
 *     SeDefaultObjectMethod @ 0x1404C6D40 (SeDefaultObjectMethod.c)
 *     IopGetSetSecurityObject @ 0x1404D2090 (IopGetSetSecurityObject.c)
 *     ObSetSecurityDescriptorInfo @ 0x1404EB030 (ObSetSecurityDescriptorInfo.c)
 *     ExpWnfCreateNameInstance @ 0x1404F5F84 (ExpWnfCreateNameInstance.c)
 *     ObAssignObjectSecurityDescriptor @ 0x14055D2D8 (ObAssignObjectSecurityDescriptor.c)
 *     EtwpStartLogger @ 0x14058A5A4 (EtwpStartLogger.c)
 *     EtwpAllocGuidEntry @ 0x14058E5C4 (EtwpAllocGuidEntry.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140603064 (IopSetDeviceSecurityDescriptor.c)
 *     ObpInitObjectTypeSD @ 0x140621E9C (ObpInitObjectTypeSD.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1407B292C (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x1404C7070 (RtlLengthSecurityDescriptor.c)
 *     ObpCreateCacheEntry @ 0x14055F6BC (ObpCreateCacheEntry.c)
 */

__int64 __fastcall ObLogSecurityDescriptor(char *Src, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  char *v5; // r9
  char *v6; // r10
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // r14
  signed __int64 *CacheEntry; // r12
  signed __int64 *v10; // rbp
  volatile signed __int64 *v11; // rsi
  signed __int64 v12; // rdi
  unsigned __int64 v13; // rax
  ULONG v15; // [rsp+80h] [rbp+8h]

  v15 = RtlLengthSecurityDescriptor(Src);
  v4 = 0LL;
  v5 = Src;
  v6 = &Src[v15 & 0xFFFFFFF8];
  if ( Src < v6 )
  {
    do
    {
      v7 = *(_QWORD *)v5 ^ v4;
      v5 += 16;
      v4 = __ROL8__(v7, 3);
    }
    while ( v5 < v6 );
  }
  CurrentThread = KeGetCurrentThread();
  CacheEntry = 0LL;
  v10 = (signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)v4);
  --CurrentThread->KernelApcDisable;
LABEL_4:
  v11 = v10 + 1;
  ExAcquirePushLockSharedEx((ULONG_PTR)v10, 0LL);
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 )
      break;
LABEL_9:
    if ( !CacheEntry )
    {
      if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v10);
      KeAbPostRelease((ULONG_PTR)v10);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      CacheEntry = (signed __int64 *)ObpCreateCacheEntry(Src, v15);
      if ( !CacheEntry )
        return 3221225626LL;
      --CurrentThread->KernelApcDisable;
      goto LABEL_4;
    }
    *CacheEntry = v12;
    v11 = (volatile signed __int64 *)_InterlockedCompareExchange64(v11, (signed __int64)CacheEntry, v12);
    if ( (volatile signed __int64 *)v12 == v11 )
    {
      if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v10);
      KeAbPostRelease((ULONG_PTR)v10);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      *a2 = CacheEntry + 4;
      return 0LL;
    }
  }
  while ( 1 )
  {
    v13 = *(_QWORD *)(v12 + 16);
    if ( v13 == v4 )
      break;
    if ( v13 > v4 )
      goto LABEL_9;
LABEL_8:
    v11 = (volatile signed __int64 *)v12;
    v12 = *(_QWORD *)v12;
    if ( !v12 )
      goto LABEL_9;
  }
  if ( *(_DWORD *)(v12 + 24) != v15 || memcmp(Src, (const void *)(v12 + 32), v15) )
    goto LABEL_8;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 8), a3) <= 0 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  *a2 = v12 + 32;
  if ( CacheEntry )
    ExFreePoolWithTag(CacheEntry, 0x6353624Fu);
  return 0LL;
}
