/*
 * XREFs of ObLogSecurityDescriptor @ 0x14050E5E0
 * Callers:
 *     IopSetDeviceSecurityDescriptor @ 0x14044E0A0 (IopSetDeviceSecurityDescriptor.c)
 *     ObAssignObjectSecurityDescriptor @ 0x140457688 (ObAssignObjectSecurityDescriptor.c)
 *     IopGetSetSecurityObject @ 0x140482710 (IopGetSetSecurityObject.c)
 *     ExpWnfCreateNameInstance @ 0x1404EF640 (ExpWnfCreateNameInstance.c)
 *     ObSetSecurityDescriptorInfo @ 0x1404F3C20 (ObSetSecurityDescriptorInfo.c)
 *     SeDefaultObjectMethod @ 0x14050E3A0 (SeDefaultObjectMethod.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     EtwpAllocGuidEntry @ 0x1405549DC (EtwpAllocGuidEntry.c)
 *     ObpInitObjectTypeSD @ 0x14059F178 (ObpInitObjectTypeSD.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1407131E0 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x14050E880 (RtlLengthSecurityDescriptor.c)
 */

__int64 __fastcall ObLogSecurityDescriptor(char *Buf1, _QWORD *a2, unsigned int a3)
{
  ULONG v4; // ebp
  unsigned __int64 v5; // rbx
  __int64 v6; // r9
  char *v7; // r11
  __int64 v8; // r10
  unsigned __int64 v9; // r8
  char *v10; // rdx
  unsigned __int64 v11; // r9
  char *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *PoolWithTag; // r14
  volatile signed __int64 *v17; // r15
  _QWORD *v18; // rsi
  _QWORD *v19; // rdi
  unsigned __int64 v20; // rax
  _QWORD *v22; // rax
  ULONG v23; // [rsp+80h] [rbp+8h]
  size_t Size; // [rsp+98h] [rbp+20h]

  v4 = RtlLengthSecurityDescriptor(Buf1);
  v5 = 0LL;
  v6 = v4 & 0xFFFFFFF8;
  v7 = &Buf1[v4];
  v23 = v4;
  Size = v4;
  v8 = (__int64)Buf1;
  v9 = 0LL;
  v10 = &Buf1[v6];
  v11 = (unsigned __int64)(v6 + 7) >> 3;
  if ( Buf1 > v10 )
    v11 = 0LL;
  if ( v11 )
  {
    do
    {
      ++v9;
      v5 = __ROL8__(*(_QWORD *)v8 ^ v5, 3);
      v8 += 8LL;
    }
    while ( v9 < v11 );
  }
  v12 = &v7[-v8];
  if ( v8 > (unsigned __int64)v7 )
    v12 = 0LL;
  if ( v12 )
  {
    v13 = -v8;
    do
    {
      v14 = *(unsigned __int8 *)v8++;
      v5 = __ROL8__(v14 ^ v5, 3);
    }
    while ( v13 + v8 < (unsigned __int64)v12 );
  }
  CurrentThread = KeGetCurrentThread();
  PoolWithTag = 0LL;
  --CurrentThread->KernelApcDisable;
  v17 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 24 * (v5 % 0x101));
  ExAcquirePushLockSharedEx((ULONG_PTR)v17, 0LL);
  v18 = v17 + 1;
  while ( 1 )
  {
    v19 = (_QWORD *)*v18;
    if ( (_QWORD *)*v18 != v18 )
      break;
LABEL_16:
    if ( PoolWithTag )
    {
      v22 = (_QWORD *)v19[1];
      if ( (_QWORD *)*v22 != v19 )
        __fastfail(3u);
      PoolWithTag[1] = v22;
      *PoolWithTag = v19;
      *v22 = PoolWithTag;
      v19[1] = PoolWithTag;
      if ( (_InterlockedExchangeAdd64(v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObsSecurityDescriptorCache + 3 * (v5 % 0x101));
      KeAbPostRelease((ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v5 % 0x101));
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      *a2 = PoolWithTag + 4;
      return 0LL;
    }
    if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ObsSecurityDescriptorCache + 3 * (v5 % 0x101));
    KeAbPostRelease((ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v5 % 0x101));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v4 + 40 < v4 )
      return 3221225626LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4 + 32, 0x6353624Fu);
    if ( !PoolWithTag )
      return 3221225626LL;
    PoolWithTag[2] = a3;
    PoolWithTag[3] = v5;
    memmove(PoolWithTag + 4, Buf1, v4);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v5 % 0x101), 0LL);
  }
  while ( 1 )
  {
    v20 = v19[3];
    if ( v20 != v5 )
    {
      if ( v20 > v5 )
        goto LABEL_15;
      goto LABEL_14;
    }
    if ( v23 == RtlLengthSecurityDescriptor(v19 + 4) && !memcmp(Buf1, v19 + 4, Size) )
      break;
LABEL_14:
    v19 = (_QWORD *)*v19;
    if ( v19 == v18 )
    {
LABEL_15:
      v4 = v23;
      goto LABEL_16;
    }
  }
  if ( _InterlockedExchangeAdd64(v19 + 2, a3) <= 0 )
    __fastfail(0xEu);
  ExReleasePushLockEx((ULONG_PTR)&ObsSecurityDescriptorCache + 24 * (v5 % 0x101), 0LL);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  *a2 = v19 + 4;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return 0LL;
}
